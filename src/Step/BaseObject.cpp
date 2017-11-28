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

/*

std::atomic<Singleton*> Singleton::m_instance;
std::mutex Singleton::m_mutex;

Singleton* Singleton::getInstance() {
    Singleton* tmp = m_instance.load(std::memory_order_relaxed);
    std::atomic_thread_fence(std::memory_order_acquire);
    if (tmp == nullptr) {
        std::lock_guard<std::mutex> lock(m_mutex);
        tmp = m_instance.load(std::memory_order_relaxed);
        if (tmp == nullptr) {
            tmp = new Singleton;
            std::atomic_thread_fence(std::memory_order_release);
            m_instance.store(tmp, std::memory_order_relaxed);
        }
    }
    return tmp;
}


*/

bool BaseObject::inited()
{
#ifdef STEP_THREAD_SAFE
    bool inited  = m_inited.load(std::memory_order_relaxed);
    std::atomic_thread_fence(std::memory_order_acquire);
    if (!inited)
    {
        _mutex.lock();
        inited  = m_inited.load(std::memory_order_relaxed);

        if (!inited)
        {
            inited = true; // set this to break cycle when inverse attribute inits
            std::atomic_thread_fence(std::memory_order_release);
            m_inited.store(inited, std::memory_order_relaxed);

            _mutex.unlock();

            bool succesful = init();

            if (succesful)
            {
                delete m_args;
                m_args = 0;
            }
        }
        else
        {
            _mutex.unlock();
        }
    }
    return m_inited;
#else
    if (!m_inited)
    {
        m_inited = true; // set this to break cycle when inverse attribute inits
        bool inited = init();
        if (inited)
        {
            delete m_args;
            m_args = 0;
        }
    }
    return m_inited;

#endif
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

