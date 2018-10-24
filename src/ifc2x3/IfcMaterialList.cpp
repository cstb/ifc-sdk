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


#include <ifc2x3/IfcMaterialList.h>

#include <ifc2x3/IfcMaterial.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMaterialList::IfcMaterialList(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Materials.setUnset(true);
}

IfcMaterialList::~IfcMaterialList()
{}

bool IfcMaterialList::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterialList(this);
}


List_IfcMaterial_1_n &IfcMaterialList::getMaterials()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Materials;
    }
    else 
    {
        m_Materials.setUnset(true);
        return m_Materials;
    }    
}

const List_IfcMaterial_1_n &IfcMaterialList::getMaterials() const
{
    return const_cast<IfcMaterialList *>(this)->getMaterials();
}

void IfcMaterialList::setMaterials(const List_IfcMaterial_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Materials = value;
}

void IfcMaterialList::unsetMaterials()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Materials.clear();
    m_Materials.setUnset(true);
}

bool IfcMaterialList::testMaterials() const
{
    return m_Materials.isUnset() == false;
}

bool IfcMaterialList::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Materials.setUnset(true);
    }
    else
    {
        m_Materials.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Materials.push_back(static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcMaterialList::copy(const IfcMaterialList &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    List_IfcMaterial_1_n::const_iterator it_m_Materials;
    for (it_m_Materials = obj.m_Materials.begin(); it_m_Materials != obj.m_Materials.end(); ++it_m_Materials)
    {
        Step::RefPtr< IfcMaterial > copyTarget = (IfcMaterial *) (copyop((*it_m_Materials).get()));
        m_Materials.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterialList, Step::BaseEntity)
