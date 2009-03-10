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
//////////////////////////////////////////////////////////////////////
// BaseObject.cpp: implementation of the BaseObject class.
//
//////////////////////////////////////////////////////////////////////
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/BaseVisitor.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

Step::BaseObject::BaseObject(Step::SPFData* data)
        : m_inited((!data) || (data && (data->argc()==0))),
        m_args(data)
{
}

void Step::BaseObject::copy(const Step::BaseObject& obj, const Step::BaseCopyOp& copyop)
{
    Step::ClientDataHandler::copy(obj,copyop);
    if (!obj.m_inited)
    {
        Step::BaseObject* bo = const_cast<Step::BaseObject*>(&obj);
        bo->inited();
    }
}

Step::BaseObject::~BaseObject()
{
    if (m_args)
        delete m_args;
}

const Step::ClassType& Step::BaseObject::getClassType() {
    return Step::BaseObject::s_type;
}

const Step::ClassType& Step::BaseObject::getType() const {
    return Step::BaseObject::s_type;
}

bool Step::BaseObject::isOfType(const Step::ClassType& t) const {
    return Step::BaseObject::s_type == t ? true : ClientDataHandler::isOfType(t);
}

const std::string &Step::BaseObject::type() const {
    return Step::BaseObject::s_type.getName();
}

bool Step::BaseObject::acceptVisitor(BaseVisitor *v)
{
    return v->visitBaseObject(this);
}



bool Step::BaseObject::inited()
{
    if (!m_inited) {
#ifdef STEP_THREAD_SAFE
        OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
#endif
        m_inited = true; // set this to break cycle when inverse attribute inits
        bool inited = init();
        if (inited) {
            delete m_args;
            m_args=0;
        }
    }

    return m_inited;
}

Step::ClassType Step::BaseObject::s_type("BaseObject");

