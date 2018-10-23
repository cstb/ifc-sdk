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


#include <ifc2x3/IfcMaterialClassificationRelationship.h>

#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcMaterial.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMaterialClassificationRelationship::IfcMaterialClassificationRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_MaterialClassifications.setUnset(true);
    m_ClassifiedMaterial = NULL;
}

IfcMaterialClassificationRelationship::~IfcMaterialClassificationRelationship()
{}

bool IfcMaterialClassificationRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterialClassificationRelationship(this);
}


Set_IfcClassificationNotationSelect_1_n &IfcMaterialClassificationRelationship::getMaterialClassifications()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaterialClassifications;
    }
    else 
    {
        m_MaterialClassifications.setUnset(true);
        return m_MaterialClassifications;
    }    
}

const Set_IfcClassificationNotationSelect_1_n &IfcMaterialClassificationRelationship::getMaterialClassifications() const
{
    return const_cast<IfcMaterialClassificationRelationship *>(this)->getMaterialClassifications();
}

void IfcMaterialClassificationRelationship::setMaterialClassifications(const Set_IfcClassificationNotationSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaterialClassifications = value;
}

void IfcMaterialClassificationRelationship::unsetMaterialClassifications()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaterialClassifications.clear();
    m_MaterialClassifications.setUnset(true);
}

bool IfcMaterialClassificationRelationship::testMaterialClassifications() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_MaterialClassifications.isUnset() == false;
}

IfcMaterial *IfcMaterialClassificationRelationship::getClassifiedMaterial()
{
    if (Step::BaseObject::inited())
    {
        return m_ClassifiedMaterial.get();
    }
    else
    {
        return NULL;
    }
}

const IfcMaterial *IfcMaterialClassificationRelationship::getClassifiedMaterial() const
{
    return const_cast< IfcMaterialClassificationRelationship * > (this)->getClassifiedMaterial();
}

void IfcMaterialClassificationRelationship::setClassifiedMaterial(const Step::RefPtr< IfcMaterial > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ClassifiedMaterial.valid())
    {
        m_ClassifiedMaterial->m_ClassifiedAs.erase(this);
    }
    if (value.valid() )
    {
       value->m_ClassifiedAs.insert(this);
    }
    m_ClassifiedMaterial = value;
}

void IfcMaterialClassificationRelationship::unsetClassifiedMaterial()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ClassifiedMaterial = Step::getUnset(getClassifiedMaterial());
}

bool IfcMaterialClassificationRelationship::testClassifiedMaterial() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getClassifiedMaterial()) == false;
}

bool IfcMaterialClassificationRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaterialClassifications.setUnset(true);
    }
    else
    {
        m_MaterialClassifications.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcClassificationNotationSelect > attr2 = new IfcClassificationNotationSelect();
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
                    m_MaterialClassifications.insert(attr2);
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
        m_ClassifiedMaterial = NULL;
    }
    else
    {
        m_ClassifiedMaterial = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcMaterialClassificationRelationship::copy(const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcClassificationNotationSelect_1_n::const_iterator it_m_MaterialClassifications;
    for (it_m_MaterialClassifications = obj.m_MaterialClassifications.begin(); it_m_MaterialClassifications != obj.m_MaterialClassifications.end(); ++it_m_MaterialClassifications)
    {
        Step::RefPtr< IfcClassificationNotationSelect > copyTarget = new IfcClassificationNotationSelect;
        copyTarget->copy(*((*it_m_MaterialClassifications).get()), copyop);
        m_MaterialClassifications.insert(copyTarget.get());
    }
    
    setClassifiedMaterial((IfcMaterial*)copyop(obj.m_ClassifiedMaterial.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterialClassificationRelationship, Step::BaseEntity)
