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


#include <ifc2x3/IfcApprovalPropertyRelationship.h>

#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcApproval.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcApprovalPropertyRelationship::IfcApprovalPropertyRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ApprovedProperties.setUnset(true);
    m_Approval = NULL;
}

IfcApprovalPropertyRelationship::~IfcApprovalPropertyRelationship()
{}

bool IfcApprovalPropertyRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcApprovalPropertyRelationship(this);
}


Set_IfcProperty_1_n &IfcApprovalPropertyRelationship::getApprovedProperties()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApprovedProperties;
    }
    else 
    {
        m_ApprovedProperties.setUnset(true);
        return m_ApprovedProperties;
    }    
}

const Set_IfcProperty_1_n &IfcApprovalPropertyRelationship::getApprovedProperties() const
{
    return const_cast<IfcApprovalPropertyRelationship *>(this)->getApprovedProperties();
}

void IfcApprovalPropertyRelationship::setApprovedProperties(const Set_IfcProperty_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovedProperties = value;
}

void IfcApprovalPropertyRelationship::unsetApprovedProperties()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovedProperties.clear();
    m_ApprovedProperties.setUnset(true);
}

bool IfcApprovalPropertyRelationship::testApprovedProperties() const
{
    return m_ApprovedProperties.isUnset() == false;
}


IfcApproval *IfcApprovalPropertyRelationship::getApproval()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Approval.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcApproval *IfcApprovalPropertyRelationship::getApproval() const
{
    return const_cast<IfcApprovalPropertyRelationship *>(this)->getApproval();
}

void IfcApprovalPropertyRelationship::setApproval(const Step::RefPtr< IfcApproval > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Approval = value;
}

void IfcApprovalPropertyRelationship::unsetApproval()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Approval = Step::getUnset(getApproval());
}

bool IfcApprovalPropertyRelationship::testApproval() const
{
    return Step::isUnset(getApproval()) == false;
}

bool IfcApprovalPropertyRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApprovedProperties.setUnset(true);
    }
    else
    {
        m_ApprovedProperties.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ApprovedProperties.insert(static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
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
        m_Approval = NULL;
    }
    else
    {
        m_Approval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcApprovalPropertyRelationship::copy(const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcProperty_1_n::const_iterator it_m_ApprovedProperties;
    for (it_m_ApprovedProperties = obj.m_ApprovedProperties.begin(); it_m_ApprovedProperties != obj.m_ApprovedProperties.end(); ++it_m_ApprovedProperties)
    {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_ApprovedProperties).get()));
        m_ApprovedProperties.insert(copyTarget);
    }
    
    setApproval((IfcApproval*)copyop(obj.m_Approval.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcApprovalPropertyRelationship, Step::BaseEntity)
