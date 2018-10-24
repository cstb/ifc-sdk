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


#include <ifc2x3/IfcRelDefinesByProperties.h>

#include <ifc2x3/IfcPropertySetDefinition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelDefinesByProperties::IfcRelDefinesByProperties(Step::Id id, Step::SPFData *args) : 
    IfcRelDefines(id, args)
{
    m_RelatingPropertyDefinition = NULL;
}

IfcRelDefinesByProperties::~IfcRelDefinesByProperties()
{}

bool IfcRelDefinesByProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelDefinesByProperties(this);
}

IfcPropertySetDefinition *IfcRelDefinesByProperties::getRelatingPropertyDefinition()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingPropertyDefinition.get();
    }
    else
    {
        return NULL;
    }
}

const IfcPropertySetDefinition *IfcRelDefinesByProperties::getRelatingPropertyDefinition() const
{
    return const_cast< IfcRelDefinesByProperties * > (this)->getRelatingPropertyDefinition();
}

void IfcRelDefinesByProperties::setRelatingPropertyDefinition(const Step::RefPtr< IfcPropertySetDefinition > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingPropertyDefinition.valid())
    {
        m_RelatingPropertyDefinition->m_PropertyDefinitionOf.erase(this);
    }
    if (value.valid() )
    {
       value->m_PropertyDefinitionOf.insert(this);
    }
    m_RelatingPropertyDefinition = value;
}

void IfcRelDefinesByProperties::unsetRelatingPropertyDefinition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingPropertyDefinition = Step::getUnset(getRelatingPropertyDefinition());
}

bool IfcRelDefinesByProperties::testRelatingPropertyDefinition() const
{
    return Step::isUnset(getRelatingPropertyDefinition()) == false;
}

bool IfcRelDefinesByProperties::init()
{
    if (IfcRelDefines::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingPropertyDefinition = NULL;
    }
    else
    {
        m_RelatingPropertyDefinition = static_cast< IfcPropertySetDefinition * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelDefinesByProperties::copy(const IfcRelDefinesByProperties &obj, const CopyOp &copyop)
{
    IfcRelDefines::copy(obj, copyop);
    setRelatingPropertyDefinition((IfcPropertySetDefinition*)copyop(obj.m_RelatingPropertyDefinition.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelDefinesByProperties, IfcRelDefines)
