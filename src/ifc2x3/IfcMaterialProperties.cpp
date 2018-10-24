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


#include <ifc2x3/IfcMaterialProperties.h>

#include <ifc2x3/IfcMaterial.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMaterialProperties::IfcMaterialProperties(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Material = NULL;
}

IfcMaterialProperties::~IfcMaterialProperties()
{}

bool IfcMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterialProperties(this);
}


IfcMaterial *IfcMaterialProperties::getMaterial()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Material.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMaterial *IfcMaterialProperties::getMaterial() const
{
    return const_cast<IfcMaterialProperties *>(this)->getMaterial();
}

void IfcMaterialProperties::setMaterial(const Step::RefPtr< IfcMaterial > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Material = value;
}

void IfcMaterialProperties::unsetMaterial()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Material = Step::getUnset(getMaterial());
}

bool IfcMaterialProperties::testMaterial() const
{
    return Step::isUnset(getMaterial()) == false;
}

bool IfcMaterialProperties::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Material = NULL;
    }
    else
    {
        m_Material = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcMaterialProperties::copy(const IfcMaterialProperties &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setMaterial((IfcMaterial*)copyop(obj.m_Material.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterialProperties, Step::BaseEntity)
