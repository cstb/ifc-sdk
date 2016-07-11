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

#include "Step/BaseObject.h"
#include "Step/SPFData.h"
#include "Step/BaseVisitor.h"

using namespace Step;

ClassType_child_implementations(STEP_EXPORT,BaseObject,ClientDataHandler);

BaseObject::BaseObject(SPFData* data) :
    m_expressDataSet(0),
    m_inited((!data) || (data && (data->argc() == 0))), m_args(data)
{
}

void BaseObject::copy(const BaseObject& obj, const BaseCopyOp& copyop)
{
    ClientDataHandler::copy(obj, copyop);

    if (!obj.m_inited)
    {
        BaseObject* bo = const_cast<BaseObject*> (&obj);
        m_inited = bo->inited();
    }
}

BaseObject::~BaseObject()
{
    delete m_args;
}


bool BaseObject::acceptVisitor(BaseVisitor *v)
{
    return v->visitBaseObject(this);
}

bool BaseObject::inited()
{
    if (!m_inited)
    {
#ifdef STEP_THREAD_SAFE
        OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
#endif
        m_inited = true; // set this to break cycle when inverse attribute inits
        bool inited = init();
        if (inited)
        {
            delete m_args;
            m_args = 0;
        }
    }

    return m_inited;
}

BaseExpressDataSet* BaseObject::getExpressDataSet() const
{
    return m_expressDataSet;
}

SPFData* BaseObject::getArgs()
{
    return m_args;
}

bool BaseObject::isInited()
{
    return m_inited;
}

BaseExpressDataSet * BaseObject::getExpressDataSet()
{
    return m_expressDataSet;
}

void BaseObject::setExpressDataSet(BaseExpressDataSet * expressDataSet)
{
    m_expressDataSet = expressDataSet;
}

void BaseObject::release()
{
}

