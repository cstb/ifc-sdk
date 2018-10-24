// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/IfcPropertyReferenceValue.h>

#include <ifc2x3/IfcObjectReferenceSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertyReferenceValue::IfcPropertyReferenceValue(Step::Id id, Step::SPFData *args) : 
    IfcSimpleProperty(id, args)
{
    m_UsageName = Step::getUnset(m_UsageName);
    m_PropertyReference = NULL;
}

IfcPropertyReferenceValue::~IfcPropertyReferenceValue()
{}

bool IfcPropertyReferenceValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertyReferenceValue(this);
}


IfcLabel IfcPropertyReferenceValue::getUsageName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UsageName;
    }
    else 
    {
        return Step::getUnset(m_UsageName);
    }    
}

const IfcLabel IfcPropertyReferenceValue::getUsageName() const
{
    return const_cast<IfcPropertyReferenceValue *>(this)->getUsageName();
}

void IfcPropertyReferenceValue::setUsageName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UsageName = value;
}

void IfcPropertyReferenceValue::unsetUsageName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UsageName = Step::getUnset(getUsageName());
}

bool IfcPropertyReferenceValue::testUsageName() const
{
    return Step::isUnset(getUsageName()) == false;
}


IfcObjectReferenceSelect *IfcPropertyReferenceValue::getPropertyReference()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PropertyReference.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcObjectReferenceSelect *IfcPropertyReferenceValue::getPropertyReference() const
{
    return const_cast<IfcPropertyReferenceValue *>(this)->getPropertyReference();
}

void IfcPropertyReferenceValue::setPropertyReference(const Step::RefPtr< IfcObjectReferenceSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PropertyReference = value;
}

void IfcPropertyReferenceValue::unsetPropertyReference()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PropertyReference = Step::getUnset(getPropertyReference());
}

bool IfcPropertyReferenceValue::testPropertyReference() const
{
    return Step::isUnset(getPropertyReference()) == false;
}

bool IfcPropertyReferenceValue::init()
{
    if (IfcSimpleProperty::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UsageName = Step::getUnset(m_UsageName);
    }
    else
    {
        m_UsageName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PropertyReference = NULL;
    }
    else
    {
        m_PropertyReference = new IfcObjectReferenceSelect;
        if (arg[0] == '#') {
            m_PropertyReference->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcPropertyReferenceValue::copy(const IfcPropertyReferenceValue &obj, const CopyOp &copyop)
{
    IfcSimpleProperty::copy(obj, copyop);
    setUsageName(obj.m_UsageName);
    setPropertyReference((IfcObjectReferenceSelect*)copyop(obj.m_PropertyReference.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertyReferenceValue, IfcSimpleProperty)
