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


#include <ifc2x3/IfcSectionReinforcementProperties.h>

#include <ifc2x3/IfcSectionProperties.h>
#include <ifc2x3/IfcReinforcementBarProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSectionReinforcementProperties::IfcSectionReinforcementProperties(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_LongitudinalStartPosition = Step::getUnset(m_LongitudinalStartPosition);
    m_LongitudinalEndPosition = Step::getUnset(m_LongitudinalEndPosition);
    m_TransversePosition = Step::getUnset(m_TransversePosition);
    m_ReinforcementRole = IfcReinforcingBarRoleEnum_UNSET;
    m_SectionDefinition = NULL;
    m_CrossSectionReinforcementDefinitions.setUnset(true);
}

IfcSectionReinforcementProperties::~IfcSectionReinforcementProperties()
{}

bool IfcSectionReinforcementProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSectionReinforcementProperties(this);
}


IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalStartPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LongitudinalStartPosition;
    }
    else 
    {
        return Step::getUnset(m_LongitudinalStartPosition);
    }    
}

IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalStartPosition() const
{
    return const_cast<IfcSectionReinforcementProperties *>(this)->getLongitudinalStartPosition();
}

void IfcSectionReinforcementProperties::setLongitudinalStartPosition(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalStartPosition = value;
}

void IfcSectionReinforcementProperties::unsetLongitudinalStartPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalStartPosition = Step::getUnset(getLongitudinalStartPosition());
}

bool IfcSectionReinforcementProperties::testLongitudinalStartPosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLongitudinalStartPosition()) == false;
}


IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalEndPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LongitudinalEndPosition;
    }
    else 
    {
        return Step::getUnset(m_LongitudinalEndPosition);
    }    
}

IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalEndPosition() const
{
    return const_cast<IfcSectionReinforcementProperties *>(this)->getLongitudinalEndPosition();
}

void IfcSectionReinforcementProperties::setLongitudinalEndPosition(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalEndPosition = value;
}

void IfcSectionReinforcementProperties::unsetLongitudinalEndPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongitudinalEndPosition = Step::getUnset(getLongitudinalEndPosition());
}

bool IfcSectionReinforcementProperties::testLongitudinalEndPosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLongitudinalEndPosition()) == false;
}


IfcLengthMeasure IfcSectionReinforcementProperties::getTransversePosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransversePosition;
    }
    else 
    {
        return Step::getUnset(m_TransversePosition);
    }    
}

IfcLengthMeasure IfcSectionReinforcementProperties::getTransversePosition() const
{
    return const_cast<IfcSectionReinforcementProperties *>(this)->getTransversePosition();
}

void IfcSectionReinforcementProperties::setTransversePosition(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransversePosition = value;
}

void IfcSectionReinforcementProperties::unsetTransversePosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransversePosition = Step::getUnset(getTransversePosition());
}

bool IfcSectionReinforcementProperties::testTransversePosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTransversePosition()) == false;
}


IfcReinforcingBarRoleEnum IfcSectionReinforcementProperties::getReinforcementRole()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ReinforcementRole;
    }
    else 
    {
        return IfcReinforcingBarRoleEnum_UNSET;
    }    
}

IfcReinforcingBarRoleEnum IfcSectionReinforcementProperties::getReinforcementRole() const
{
    return const_cast<IfcSectionReinforcementProperties *>(this)->getReinforcementRole();
}

void IfcSectionReinforcementProperties::setReinforcementRole(IfcReinforcingBarRoleEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReinforcementRole = value;
}

void IfcSectionReinforcementProperties::unsetReinforcementRole()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReinforcementRole = IfcReinforcingBarRoleEnum_UNSET;
}

bool IfcSectionReinforcementProperties::testReinforcementRole() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getReinforcementRole()) == false;
}


IfcSectionProperties *IfcSectionReinforcementProperties::getSectionDefinition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SectionDefinition.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSectionProperties *IfcSectionReinforcementProperties::getSectionDefinition() const
{
    return const_cast<IfcSectionReinforcementProperties *>(this)->getSectionDefinition();
}

void IfcSectionReinforcementProperties::setSectionDefinition(const Step::RefPtr< IfcSectionProperties > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SectionDefinition = value;
}

void IfcSectionReinforcementProperties::unsetSectionDefinition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SectionDefinition = Step::getUnset(getSectionDefinition());
}

bool IfcSectionReinforcementProperties::testSectionDefinition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSectionDefinition()) == false;
}


Set_IfcReinforcementBarProperties_1_n &IfcSectionReinforcementProperties::getCrossSectionReinforcementDefinitions()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CrossSectionReinforcementDefinitions;
    }
    else 
    {
        m_CrossSectionReinforcementDefinitions.setUnset(true);
        return m_CrossSectionReinforcementDefinitions;
    }    
}

const Set_IfcReinforcementBarProperties_1_n &IfcSectionReinforcementProperties::getCrossSectionReinforcementDefinitions() const
{
    return const_cast<IfcSectionReinforcementProperties *>(this)->getCrossSectionReinforcementDefinitions();
}

void IfcSectionReinforcementProperties::setCrossSectionReinforcementDefinitions(const Set_IfcReinforcementBarProperties_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionReinforcementDefinitions = value;
}

void IfcSectionReinforcementProperties::unsetCrossSectionReinforcementDefinitions()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionReinforcementDefinitions.clear();
    m_CrossSectionReinforcementDefinitions.setUnset(true);
}

bool IfcSectionReinforcementProperties::testCrossSectionReinforcementDefinitions() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_CrossSectionReinforcementDefinitions.isUnset() == false;
}

bool IfcSectionReinforcementProperties::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LongitudinalStartPosition = Step::getUnset(m_LongitudinalStartPosition);
    }
    else
    {
        m_LongitudinalStartPosition = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LongitudinalEndPosition = Step::getUnset(m_LongitudinalEndPosition);
    }
    else
    {
        m_LongitudinalEndPosition = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TransversePosition = Step::getUnset(m_TransversePosition);
    }
    else
    {
        m_TransversePosition = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ReinforcementRole = IfcReinforcingBarRoleEnum_UNSET;
    }
    else
    {
        if (arg == ".MAIN.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_MAIN;
        }
        else if (arg == ".SHEAR.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_SHEAR;
        }
        else if (arg == ".LIGATURE.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_LIGATURE;
        }
        else if (arg == ".STUD.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_STUD;
        }
        else if (arg == ".PUNCHING.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_PUNCHING;
        }
        else if (arg == ".EDGE.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_EDGE;
        }
        else if (arg == ".RING.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_RING;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ReinforcementRole = IfcReinforcingBarRoleEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SectionDefinition = NULL;
    }
    else
    {
        m_SectionDefinition = static_cast< IfcSectionProperties * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CrossSectionReinforcementDefinitions.setUnset(true);
    }
    else
    {
        m_CrossSectionReinforcementDefinitions.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_CrossSectionReinforcementDefinitions.insert(static_cast< IfcReinforcementBarProperties * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcSectionReinforcementProperties::copy(const IfcSectionReinforcementProperties &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setLongitudinalStartPosition(obj.m_LongitudinalStartPosition);
    setLongitudinalEndPosition(obj.m_LongitudinalEndPosition);
    setTransversePosition(obj.m_TransversePosition);
    setReinforcementRole(obj.m_ReinforcementRole);
    setSectionDefinition((IfcSectionProperties*)copyop(obj.m_SectionDefinition.get()));
    Set_IfcReinforcementBarProperties_1_n::const_iterator it_m_CrossSectionReinforcementDefinitions;
    for (it_m_CrossSectionReinforcementDefinitions = obj.m_CrossSectionReinforcementDefinitions.begin(); it_m_CrossSectionReinforcementDefinitions != obj.m_CrossSectionReinforcementDefinitions.end(); ++it_m_CrossSectionReinforcementDefinitions)
    {
        Step::RefPtr< IfcReinforcementBarProperties > copyTarget = (IfcReinforcementBarProperties *) (copyop((*it_m_CrossSectionReinforcementDefinitions).get()));
        m_CrossSectionReinforcementDefinitions.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSectionReinforcementProperties, Step::BaseEntity)
