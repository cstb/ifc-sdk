/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseEntity.h>
#include <Step/BaseSPFObject.h>
#include <Step/SPFHeader.h>
#include <Step/SPFData.h>
#include <Step/RefLinkedList.h>

#include <iostream>

#include <Step/logger.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

using namespace Step;

BaseExpressDataSet::BaseExpressDataSet() :
        m_maxId(0)
{
}

BaseExpressDataSet::~BaseExpressDataSet()
{
    MapOfEntities::iterator objIt = m_Id2BaseObject.begin();
    for (; objIt != m_Id2BaseObject.end(); objIt++)
    {
        objIt->second->release();
    }
}

BaseEntity* BaseExpressDataSet::find(Id id)
{
    MapOfEntities::iterator it = m_Id2BaseObject.find(id);
    if (it != m_Id2BaseObject.end())
        return it->second.get();
    else
        return NULL;
}

SPFHeader& BaseExpressDataSet::getHeader()
{
    return m_header;
}

void BaseExpressDataSet::setHeader(SPFHeader& header)
{
    m_header=header;
}

Id BaseExpressDataSet::getNewId()
{
    return ++m_maxId;
}

Id BaseExpressDataSet::maxId()
{
    return m_maxId;
}

void BaseExpressDataSet::updateMaxId(Id id)
{
    if (id>m_maxId)
    {
        m_maxId=id;
    }
}

bool BaseExpressDataSet::registerObject(Id id, BaseEntity* obj)
{
    if (exists(id))
    {
        if (!m_Id2BaseObject[id]->isOfType(BaseSPFObject::getClassType()))
        {
            LOG_ERROR("Can't register the object with id " << id << ", in use");
            return false;
        }
        else
        {
            //implicit destruction of BaseSPFObject thanks to RefPtr...
            m_Id2BaseObject[id]->m_args=0;
            m_Id2BaseObject[id] = obj;
            obj->setExpressDataSet(this);
            return true;
        }
    }
    m_Id2BaseObject[id] = obj;
    obj->setExpressDataSet(this);
    return true;
}

bool BaseExpressDataSet::exists(Id id) const
{
    return (!(m_Id2BaseObject.find(id) == m_Id2BaseObject.end()));
}

BaseEntity *BaseExpressDataSet::get(Id id)
{
    MapOfEntities::iterator it = m_Id2BaseObject.find(id);

    if (it == m_Id2BaseObject.end())
    {
        return 0;
    }
    else if (it->second->isOfType(BaseSPFObject::getClassType()))
    {
        // Get the appropriate allocate function
        AllocateFuncType allocFunc =static_cast<BaseSPFObject*>(it->second.get())->getAllocateFunction();
        // Call it and get the result
        BaseEntity* ret = (*allocFunc)(this, id);
        return ret;
    }
    else
        return it->second.get();
}

const MapOfEntities& BaseExpressDataSet::getAll()
{
    instantiateAll();
    return m_Id2BaseObject;
}

BaseSPFObject* BaseExpressDataSet::getSPFObject(Id id)
{
    if (!exists(id))
    {
        updateMaxId(id);
        BaseSPFObject* bo = new BaseSPFObject(id, new SPFData());
        bo->setExpressDataSet(this);
        m_Id2BaseObject[id] = bo;
        return bo;
    }
    else
        return static_cast<BaseSPFObject*>(m_Id2BaseObject[id].get());
}

SPFData* BaseExpressDataSet::getArgs(Id id)
{
    if (!exists(id))
    {
        updateMaxId(id);
        BaseSPFObject* bo = new BaseSPFObject(id, new SPFData());
        bo->setExpressDataSet(this);
        m_Id2BaseObject[id] = bo;
        return bo->getArgs();
    }
    else
        return m_Id2BaseObject[id]->getArgs();
}

void BaseExpressDataSet::instantiateAll()
{
    MapOfEntities::iterator it = m_Id2BaseObject.begin();

    for (; it != m_Id2BaseObject.end(); it++)
    {
        if (it->second->isOfType(BaseSPFObject::getClassType()))
        {
            // Get the appropriate allocate function
            AllocateFuncType allocFunc =static_cast<BaseSPFObject*>(it->second.get())->getAllocateFunction();
            // Call it and get the result
            BaseEntity* ret = (*allocFunc)(this, it->first);

            ret->inited();
        }
        else
            it->second->inited();
    }
}

AllocateFuncType BaseExpressDataSet::getAllocateFunction(BaseSPFObject* spfObj)
{
    return spfObj->getAllocateFunction();
}
