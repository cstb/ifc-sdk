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

#include "Step/Referenced.h"

#include <set>
#include <iostream>

using namespace Step;

ClassType_root_implementations(STEP_EXPORT,Referenced);

typedef std::set<Observer*> ObserverSet;

Referenced::Referenced() :
    _refCount(0), _observers(0)
{
}

Referenced::Referenced(const Referenced &) :
    _refCount(0), _observers(0)
{
}

Referenced::~Referenced()
{
    if (_refCount > 0)
    {
        std::cerr << "Warning: deleting still referenced object " << this
                << " of type '" << getType().getName() << "'" << std::endl
                << "         the final reference count was " << _refCount
                << ", memory corruption possible.";
    }
    if (_observers)
    {
        ObserverSet* os = static_cast<ObserverSet*> (_observers);
        for (ObserverSet::iterator itr = os->begin(); itr != os->end(); ++itr)
        {
            (*itr)->objectDeleted(this);
        }
        delete os;
        _observers = 0;
    }
}

void Referenced::unref_nodelete()
{
    --_refCount;
}

void Referenced::addObserver(Observer* observer)
{
#ifdef STEP_THREAD_SAFE
    std::atomic_thread_fence(std::memory_order_acquire);
    std::lock_guard<std::mutex> lock(_mutex);
#endif
    if (!_observers)
        _observers = new ObserverSet;
    if (_observers)
        static_cast<ObserverSet*> (_observers)->insert(observer);

#ifdef STEP_THREAD_SAFE
    std::atomic_thread_fence(std::memory_order_release);
#endif
}

void Referenced::removeObserver(Observer* observer)
{
#ifdef STEP_THREAD_SAFE
    std::atomic_thread_fence(std::memory_order_acquire);
    std::lock_guard<std::mutex> lock(_mutex);
#endif
    if (_observers)
        static_cast<ObserverSet*> (_observers)->erase(observer);
#ifdef STEP_THREAD_SAFE
    std::atomic_thread_fence(std::memory_order_release);
#endif
}

