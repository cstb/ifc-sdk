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


#include <ifc2x3/IfcConstructionMaterialResource.h>

#include <ifc2x3/IfcActorSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConstructionMaterialResource::IfcConstructionMaterialResource(Step::Id id, Step::SPFData *args) : 
    IfcConstructionResource(id, args)
{
    m_Suppliers.setUnset(true);
    m_UsageRatio = Step::getUnset(m_UsageRatio);
}

IfcConstructionMaterialResource::~IfcConstructionMaterialResource()
{}

bool IfcConstructionMaterialResource::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConstructionMaterialResource(this);
}


Set_IfcActorSelect_1_n &IfcConstructionMaterialResource::getSuppliers()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Suppliers;
    }
    else 
    {
        m_Suppliers.setUnset(true);
        return m_Suppliers;
    }    
}

const Set_IfcActorSelect_1_n &IfcConstructionMaterialResource::getSuppliers() const
{
    return const_cast<IfcConstructionMaterialResource *>(this)->getSuppliers();
}

void IfcConstructionMaterialResource::setSuppliers(const Set_IfcActorSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Suppliers = value;
}

void IfcConstructionMaterialResource::unsetSuppliers()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Suppliers.clear();
    m_Suppliers.setUnset(true);
}

bool IfcConstructionMaterialResource::testSuppliers() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Suppliers.isUnset() == false;
}


IfcRatioMeasure IfcConstructionMaterialResource::getUsageRatio()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UsageRatio;
    }
    else 
    {
        return Step::getUnset(m_UsageRatio);
    }    
}

IfcRatioMeasure IfcConstructionMaterialResource::getUsageRatio() const
{
    return const_cast<IfcConstructionMaterialResource *>(this)->getUsageRatio();
}

void IfcConstructionMaterialResource::setUsageRatio(IfcRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UsageRatio = value;
}

void IfcConstructionMaterialResource::unsetUsageRatio()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UsageRatio = Step::getUnset(getUsageRatio());
}

bool IfcConstructionMaterialResource::testUsageRatio() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUsageRatio()) == false;
}

bool IfcConstructionMaterialResource::init()
{
    if (IfcConstructionResource::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Suppliers.setUnset(true);
    }
    else
    {
        m_Suppliers.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcActorSelect > attr2 = new IfcActorSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_Suppliers.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UsageRatio = Step::getUnset(m_UsageRatio);
    }
    else
    {
        m_UsageRatio = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcConstructionMaterialResource::copy(const IfcConstructionMaterialResource &obj, const CopyOp &copyop)
{
    IfcConstructionResource::copy(obj, copyop);
    Set_IfcActorSelect_1_n::const_iterator it_m_Suppliers;
    for (it_m_Suppliers = obj.m_Suppliers.begin(); it_m_Suppliers != obj.m_Suppliers.end(); ++it_m_Suppliers)
    {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_Suppliers).get()), copyop);
        m_Suppliers.insert(copyTarget.get());
    }
    
    setUsageRatio(obj.m_UsageRatio);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConstructionMaterialResource, IfcConstructionResource)
