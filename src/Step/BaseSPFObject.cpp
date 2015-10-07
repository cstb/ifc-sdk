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

#include "Step/BaseSPFObject.h"
#include "Step/SPFData.h"
#include "Step/BaseVisitor.h"



using namespace Step;

ClassType_child_implementations(STEP_EXPORT,BaseSPFObject,BaseEntity);

BaseSPFObject::BaseSPFObject(Id id, SPFData* data) :
    BaseEntity(id, data), m_allocFuncType(0)
{
}

bool BaseSPFObject::init()
{
    return false;
}

BaseSPFObject::~BaseSPFObject()
{
}

AllocateFuncType BaseSPFObject::getAllocateFunction()
{
    return m_allocFuncType;
}

void BaseSPFObject::setAllocateFunction(AllocateFuncType type)
{
    m_allocFuncType = type;
}
