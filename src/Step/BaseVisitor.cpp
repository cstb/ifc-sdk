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

#include "Step/BaseVisitor.h"
#include "Step/BaseObject.h"
#include "Step/BaseEntity.h"
#include "Step/BaseExpressDataSet.h"



#include <iostream>

using namespace Step;

BaseVisitor::BaseVisitor()
{
    m_logger = new StepLogger;
}

BaseVisitor::~BaseVisitor()
{
}

bool BaseVisitor::visitBaseObject(BaseObject* obj)
{
    STEP_LOG_ERROR(m_logger, "Failed to visit BaseObject(" << obj->type() << ")");
    return false;
}

bool BaseVisitor::visitBaseEntity(BaseEntity* obj)
{
    STEP_LOG_ERROR(m_logger, "Failed to visit BaseEntity(" << obj->type() << ")");
    return false;
}

void BaseVisitor::setLogger(StepLogger *logger)
{
    m_logger = logger;
}
