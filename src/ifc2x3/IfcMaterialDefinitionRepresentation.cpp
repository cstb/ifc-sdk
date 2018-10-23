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


#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>

#include <ifc2x3/IfcMaterial.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation(Step::Id id, Step::SPFData *args) : 
    IfcProductRepresentation(id, args)
{
    m_RepresentedMaterial = NULL;
}

IfcMaterialDefinitionRepresentation::~IfcMaterialDefinitionRepresentation()
{}

bool IfcMaterialDefinitionRepresentation::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterialDefinitionRepresentation(this);
}

IfcMaterial *IfcMaterialDefinitionRepresentation::getRepresentedMaterial()
{
    if (Step::BaseObject::inited())
    {
        return m_RepresentedMaterial.get();
    }
    else
    {
        return NULL;
    }
}

const IfcMaterial *IfcMaterialDefinitionRepresentation::getRepresentedMaterial() const
{
    return const_cast< IfcMaterialDefinitionRepresentation * > (this)->getRepresentedMaterial();
}

void IfcMaterialDefinitionRepresentation::setRepresentedMaterial(const Step::RefPtr< IfcMaterial > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RepresentedMaterial.valid())
    {
        m_RepresentedMaterial->m_HasRepresentation.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasRepresentation.insert(this);
    }
    m_RepresentedMaterial = value;
}

void IfcMaterialDefinitionRepresentation::unsetRepresentedMaterial()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentedMaterial = Step::getUnset(getRepresentedMaterial());
}

bool IfcMaterialDefinitionRepresentation::testRepresentedMaterial() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRepresentedMaterial()) == false;
}

bool IfcMaterialDefinitionRepresentation::init()
{
    if (IfcProductRepresentation::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepresentedMaterial = NULL;
    }
    else
    {
        m_RepresentedMaterial = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcMaterialDefinitionRepresentation::copy(const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop)
{
    IfcProductRepresentation::copy(obj, copyop);
    setRepresentedMaterial((IfcMaterial*)copyop(obj.m_RepresentedMaterial.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterialDefinitionRepresentation, IfcProductRepresentation)
