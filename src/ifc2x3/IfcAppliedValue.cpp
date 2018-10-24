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


#include <ifc2x3/IfcAppliedValue.h>

#include <ifc2x3/IfcAppliedValueSelect.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcAppliedValueRelationship.h>
#include <ifc2x3/IfcAppliedValueRelationship.h>
#include <ifc2x3/IfcReferencesValueDocument.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAppliedValue::IfcAppliedValue(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_AppliedValue = NULL;
    m_UnitBasis = NULL;
    m_ApplicableDate = NULL;
    m_FixedUntilDate = NULL;
}

IfcAppliedValue::~IfcAppliedValue()
{}

bool IfcAppliedValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAppliedValue(this);
}


IfcLabel IfcAppliedValue::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcAppliedValue::getName() const
{
    return const_cast<IfcAppliedValue *>(this)->getName();
}

void IfcAppliedValue::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcAppliedValue::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcAppliedValue::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcAppliedValue::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcAppliedValue::getDescription() const
{
    return const_cast<IfcAppliedValue *>(this)->getDescription();
}

void IfcAppliedValue::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcAppliedValue::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcAppliedValue::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}


IfcAppliedValueSelect *IfcAppliedValue::getAppliedValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AppliedValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAppliedValueSelect *IfcAppliedValue::getAppliedValue() const
{
    return const_cast<IfcAppliedValue *>(this)->getAppliedValue();
}

void IfcAppliedValue::setAppliedValue(const Step::RefPtr< IfcAppliedValueSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedValue = value;
}

void IfcAppliedValue::unsetAppliedValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedValue = Step::getUnset(getAppliedValue());
}

bool IfcAppliedValue::testAppliedValue() const
{
    return Step::isUnset(getAppliedValue()) == false;
}


IfcMeasureWithUnit *IfcAppliedValue::getUnitBasis()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UnitBasis.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMeasureWithUnit *IfcAppliedValue::getUnitBasis() const
{
    return const_cast<IfcAppliedValue *>(this)->getUnitBasis();
}

void IfcAppliedValue::setUnitBasis(const Step::RefPtr< IfcMeasureWithUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitBasis = value;
}

void IfcAppliedValue::unsetUnitBasis()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitBasis = Step::getUnset(getUnitBasis());
}

bool IfcAppliedValue::testUnitBasis() const
{
    return Step::isUnset(getUnitBasis()) == false;
}


IfcDateTimeSelect *IfcAppliedValue::getApplicableDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApplicableDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcAppliedValue::getApplicableDate() const
{
    return const_cast<IfcAppliedValue *>(this)->getApplicableDate();
}

void IfcAppliedValue::setApplicableDate(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableDate = value;
}

void IfcAppliedValue::unsetApplicableDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableDate = Step::getUnset(getApplicableDate());
}

bool IfcAppliedValue::testApplicableDate() const
{
    return Step::isUnset(getApplicableDate()) == false;
}


IfcDateTimeSelect *IfcAppliedValue::getFixedUntilDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FixedUntilDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcAppliedValue::getFixedUntilDate() const
{
    return const_cast<IfcAppliedValue *>(this)->getFixedUntilDate();
}

void IfcAppliedValue::setFixedUntilDate(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FixedUntilDate = value;
}

void IfcAppliedValue::unsetFixedUntilDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FixedUntilDate = Step::getUnset(getFixedUntilDate());
}

bool IfcAppliedValue::testFixedUntilDate() const
{
    return Step::isUnset(getFixedUntilDate()) == false;
}

Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getIsComponentIn()
{
    if (Step::BaseObject::inited())
    {
        return m_IsComponentIn;
    }
 
    m_IsComponentIn.setUnset(true);
    return m_IsComponentIn;
}

const Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getIsComponentIn() const
{
    return  const_cast< IfcAppliedValue * > (this)->getIsComponentIn();
}

bool IfcAppliedValue::testIsComponentIn() const
{
    return m_IsComponentIn.isUnset() == false;
}

Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getValueOfComponents()
{
    if (Step::BaseObject::inited())
    {
        return m_ValueOfComponents;
    }
 
    m_ValueOfComponents.setUnset(true);
    return m_ValueOfComponents;
}

const Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getValueOfComponents() const
{
    return  const_cast< IfcAppliedValue * > (this)->getValueOfComponents();
}

bool IfcAppliedValue::testValueOfComponents() const
{
    return m_ValueOfComponents.isUnset() == false;
}

Inverse_Set_IfcReferencesValueDocument_0_n &IfcAppliedValue::getValuesReferenced()
{
    if (Step::BaseObject::inited())
    {
        return m_ValuesReferenced;
    }
 
    m_ValuesReferenced.setUnset(true);
    return m_ValuesReferenced;
}

const Inverse_Set_IfcReferencesValueDocument_0_n &IfcAppliedValue::getValuesReferenced() const
{
    return  const_cast< IfcAppliedValue * > (this)->getValuesReferenced();
}

bool IfcAppliedValue::testValuesReferenced() const
{
    return m_ValuesReferenced.isUnset() == false;
}

bool IfcAppliedValue::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AppliedValue = NULL;
    }
    else
    {
        m_AppliedValue = new IfcAppliedValueSelect;
        if (arg[0] == '#') {
            m_AppliedValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_AppliedValue->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMONETARYMEASURE")
                {
                    IfcMonetaryMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_AppliedValue->setIfcMonetaryMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UnitBasis = NULL;
    }
    else
    {
        m_UnitBasis = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApplicableDate = NULL;
    }
    else
    {
        m_ApplicableDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_ApplicableDate->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FixedUntilDate = NULL;
    }
    else
    {
        m_FixedUntilDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_FixedUntilDate->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcAppliedValueRelationship::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_IsComponentIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsComponentIn.insert(static_cast< IfcAppliedValueRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcAppliedValueRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_ValueOfComponents.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ValueOfComponents.insert(static_cast< IfcAppliedValueRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcReferencesValueDocument::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_ValuesReferenced.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ValuesReferenced.insert(static_cast< IfcReferencesValueDocument * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcAppliedValue::copy(const IfcAppliedValue &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setAppliedValue((IfcAppliedValueSelect*)copyop(obj.m_AppliedValue.get()));
    setUnitBasis((IfcMeasureWithUnit*)copyop(obj.m_UnitBasis.get()));
    setApplicableDate((IfcDateTimeSelect*)copyop(obj.m_ApplicableDate.get()));
    setFixedUntilDate((IfcDateTimeSelect*)copyop(obj.m_FixedUntilDate.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAppliedValue, Step::BaseEntity)
