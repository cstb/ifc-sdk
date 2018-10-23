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


#include <ifc2x3/IfcRelAssociatesMaterial.h>

#include <ifc2x3/IfcMaterialSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssociatesMaterial::IfcRelAssociatesMaterial(Step::Id id, Step::SPFData *args) : 
    IfcRelAssociates(id, args)
{
    m_RelatingMaterial = NULL;
}

IfcRelAssociatesMaterial::~IfcRelAssociatesMaterial()
{}

bool IfcRelAssociatesMaterial::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssociatesMaterial(this);
}


IfcMaterialSelect *IfcRelAssociatesMaterial::getRelatingMaterial()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingMaterial.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMaterialSelect *IfcRelAssociatesMaterial::getRelatingMaterial() const
{
    return const_cast<IfcRelAssociatesMaterial *>(this)->getRelatingMaterial();
}

void IfcRelAssociatesMaterial::setRelatingMaterial(const Step::RefPtr< IfcMaterialSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingMaterial = value;
}

void IfcRelAssociatesMaterial::unsetRelatingMaterial()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingMaterial = Step::getUnset(getRelatingMaterial());
}

bool IfcRelAssociatesMaterial::testRelatingMaterial() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingMaterial()) == false;
}

bool IfcRelAssociatesMaterial::init()
{
    if (IfcRelAssociates::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingMaterial = NULL;
    }
    else
    {
        m_RelatingMaterial = new IfcMaterialSelect;
        if (arg[0] == '#') {
            m_RelatingMaterial->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcRelAssociatesMaterial::copy(const IfcRelAssociatesMaterial &obj, const CopyOp &copyop)
{
    IfcRelAssociates::copy(obj, copyop);
    setRelatingMaterial((IfcMaterialSelect*)copyop(obj.m_RelatingMaterial.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssociatesMaterial, IfcRelAssociates)
