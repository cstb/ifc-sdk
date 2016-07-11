// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#include "Step/BaseExpressDataSet.h"
#include "Step/BaseEntity.h"
#include "Step/BaseSPFObject.h"
#include "Step/SPFHeader.h"
#include "Step/SPFData.h"
#include "Step/RefLinkedList.h"

#include <iostream>

using namespace Step;

BaseExpressDataSet::BaseExpressDataSet() :
    m_maxId(0),
    m_logger(new StepLogger)
{
}

BaseExpressDataSet::~BaseExpressDataSet()
{
    MapOfEntities::iterator objIt = m_Id2BaseEntity.begin();
    for (MapOfEntities::iterator total = m_Id2BaseEntity.end(); objIt != total; ++objIt)
    {
        objIt->second->release();
    }
}

BaseEntity* BaseExpressDataSet::find(Id id)
{
    MapOfEntities::iterator it = m_Id2BaseEntity.find(id);
    if (it != m_Id2BaseEntity.end())
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
    m_header = header;
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
    if (id > m_maxId)
    {
        m_maxId = id;
    }
}

bool BaseExpressDataSet::registerObject(Id id, BaseEntity* obj)
{
    if (exists(id))
    {
        if (!m_Id2BaseEntity[id]->isOfType(BaseSPFObject::getClassType()))
        {
            STEP_LOG_ERROR(m_logger,"Can't register the object with id " << id << ", in use");
            return false;
        }
        else
        {
            //implicit destruction of BaseSPFObject thanks to RefPtr...
            m_Id2BaseEntity[id]->m_args = 0;
            m_Id2BaseEntity[id] = obj;
            obj->setExpressDataSet(this);
            return true;
        }
    }
    m_Id2BaseEntity[id] = obj;
    obj->setExpressDataSet(this);
    return true;
}

bool BaseExpressDataSet::exists(Id id) const
{
    return (!(m_Id2BaseEntity.find(id) == m_Id2BaseEntity.end()));
}

BaseEntity *BaseExpressDataSet::get(Id id)
{
    MapOfEntities::iterator it = m_Id2BaseEntity.find(id);

    if (it == m_Id2BaseEntity.end())
    {
        STEP_LOG_WARNING(m_logger,"Entity #" << id << " was never declared");
        return 0;
    }
    else if (it->second->isOfType(BaseSPFObject::getClassType()))
    {
        // Get the appropriate allocate function
        AllocateFuncType allocFunc =
            static_cast<BaseSPFObject*> (it->second.get())->getAllocateFunction();

        if (allocFunc)
        {
            // Call it and get the result
            BaseEntity* ret = (*allocFunc)(this, id);
            return ret;
        }
        else
        {
            STEP_LOG_WARNING(m_logger,"Entity #" << id << " cannot be allocated");
            return 0;
        }
    }
    else
        return it->second.get();
}

MapOfEntities& BaseExpressDataSet::getAll()
{
    return m_Id2BaseEntity;
}


BaseSPFObject* BaseExpressDataSet::getSPFObject(Id id)
{
#if 0
    if (!exists(id))
    {
        updateMaxId(id);
        BaseSPFObject* bo = new BaseSPFObject(id, new SPFData());
        bo->setExpressDataSet(this);
        m_Id2BaseObject[id] = bo;
        return bo;
    }
    else
        return static_cast<BaseSPFObject*> (m_Id2BaseObject[id].get());
#else // Flo: faster impl
    MapOfEntities::const_iterator it = m_Id2BaseEntity.find(id);
    if (it == m_Id2BaseEntity.end())
    {
        if (id > m_maxId)
        {
            m_maxId = id;
        };
        BaseSPFObject* bo = new BaseSPFObject(id, new SPFData());
        bo->setExpressDataSet(this);
        m_Id2BaseEntity.insert(std::make_pair(id,bo));
        return bo;
    }
    else
        return static_cast<BaseSPFObject*> (it->second.get());
#endif
}

SPFData* BaseExpressDataSet::getArgs(Id id)
{
    if (!exists(id))
    {
        updateMaxId(id);
        BaseSPFObject* bo = new BaseSPFObject(id, new SPFData());
        bo->setExpressDataSet(this);
        m_Id2BaseEntity[id] = bo;
        return bo->getArgs();
    }
    else
        return m_Id2BaseEntity[id]->getArgs();
}

void BaseExpressDataSet::instantiateAll(CallBack *callback)
{
    MapOfEntities::iterator it = m_Id2BaseEntity.begin();

    if(callback)
    {
        callback->setMaximum(m_Id2BaseEntity.size());
    }
    size_t progress=0;

    for (MapOfEntities::iterator total = m_Id2BaseEntity.end(); it != total; ++it)
    {
        if (it->second->isOfType(BaseSPFObject::getClassType()))
        {
            STEP_LOG_TRACE(m_logger, "Instantiating #" << it->first)
            // Get the appropriate allocate function
            AllocateFuncType
                    allocFunc =
                            static_cast<BaseSPFObject*> (it->second.get())->getAllocateFunction();
            if (allocFunc)
            {
                // Call it and get the result
                BaseEntity* ret = (*allocFunc)(this, it->first);

                if (!ret->inited())
                {
                    STEP_LOG_WARNING(m_logger,"Entity #" << it->first << " was not instantiated");
                }
            }
            else
            {
                STEP_LOG_WARNING(m_logger,"Entity #" << it->first << " was never declared");
            }
        }
        else
        {
            if (!it->second->inited())
            {
                STEP_LOG_WARNING(m_logger,"Entity #" << it->first << " was not instantiated");
            }
        }

        if(callback)
        {
            callback->setProgress(++progress);
            if (callback->stop())
                return;
        }
    }
}

void BaseExpressDataSet::setLogger(StepLogger *logger)
{
    m_logger = logger;
}

AllocateFuncType BaseExpressDataSet::getAllocateFunction(BaseSPFObject* spfObj)
{
    return spfObj->getAllocateFunction();
}
