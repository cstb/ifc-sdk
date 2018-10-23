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


#include <ifc2x3/IfcConstraintClassificationRelationship.h>

#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcConstraint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConstraintClassificationRelationship::IfcConstraintClassificationRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RelatedClassifications.setUnset(true);
    m_ClassifiedConstraint = NULL;
}

IfcConstraintClassificationRelationship::~IfcConstraintClassificationRelationship()
{}

bool IfcConstraintClassificationRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConstraintClassificationRelationship(this);
}


Set_IfcClassificationNotationSelect_1_n &IfcConstraintClassificationRelationship::getRelatedClassifications()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatedClassifications;
    }
    else 
    {
        m_RelatedClassifications.setUnset(true);
        return m_RelatedClassifications;
    }    
}

const Set_IfcClassificationNotationSelect_1_n &IfcConstraintClassificationRelationship::getRelatedClassifications() const
{
    return const_cast<IfcConstraintClassificationRelationship *>(this)->getRelatedClassifications();
}

void IfcConstraintClassificationRelationship::setRelatedClassifications(const Set_IfcClassificationNotationSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedClassifications = value;
}

void IfcConstraintClassificationRelationship::unsetRelatedClassifications()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedClassifications.clear();
    m_RelatedClassifications.setUnset(true);
}

bool IfcConstraintClassificationRelationship::testRelatedClassifications() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RelatedClassifications.isUnset() == false;
}

IfcConstraint *IfcConstraintClassificationRelationship::getClassifiedConstraint()
{
    if (Step::BaseObject::inited())
    {
        return m_ClassifiedConstraint.get();
    }
    else
    {
        return NULL;
    }
}

const IfcConstraint *IfcConstraintClassificationRelationship::getClassifiedConstraint() const
{
    return const_cast< IfcConstraintClassificationRelationship * > (this)->getClassifiedConstraint();
}

void IfcConstraintClassificationRelationship::setClassifiedConstraint(const Step::RefPtr< IfcConstraint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ClassifiedConstraint.valid())
    {
        m_ClassifiedConstraint->m_ClassifiedAs.erase(this);
    }
    if (value.valid() )
    {
       value->m_ClassifiedAs.insert(this);
    }
    m_ClassifiedConstraint = value;
}

void IfcConstraintClassificationRelationship::unsetClassifiedConstraint()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ClassifiedConstraint = Step::getUnset(getClassifiedConstraint());
}

bool IfcConstraintClassificationRelationship::testClassifiedConstraint() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getClassifiedConstraint()) == false;
}

bool IfcConstraintClassificationRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedClassifications.setUnset(true);
    }
    else
    {
        m_RelatedClassifications.setUnset(false);
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
                    m_RelatedClassifications.insert(attr2);
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
        m_ClassifiedConstraint = NULL;
    }
    else
    {
        m_ClassifiedConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcConstraintClassificationRelationship::copy(const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcClassificationNotationSelect_1_n::const_iterator it_m_RelatedClassifications;
    for (it_m_RelatedClassifications = obj.m_RelatedClassifications.begin(); it_m_RelatedClassifications != obj.m_RelatedClassifications.end(); ++it_m_RelatedClassifications)
    {
        Step::RefPtr< IfcClassificationNotationSelect > copyTarget = new IfcClassificationNotationSelect;
        copyTarget->copy(*((*it_m_RelatedClassifications).get()), copyop);
        m_RelatedClassifications.insert(copyTarget.get());
    }
    
    setClassifiedConstraint((IfcConstraint*)copyop(obj.m_ClassifiedConstraint.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConstraintClassificationRelationship, Step::BaseEntity)
