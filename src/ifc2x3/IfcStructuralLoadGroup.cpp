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


#include <ifc2x3/IfcStructuralLoadGroup.h>

#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadGroup::IfcStructuralLoadGroup(Step::Id id, Step::SPFData *args) : 
    IfcGroup(id, args)
{
    m_PredefinedType = IfcLoadGroupTypeEnum_UNSET;
    m_ActionType = IfcActionTypeEnum_UNSET;
    m_ActionSource = IfcActionSourceTypeEnum_UNSET;
    m_Coefficient = Step::getUnset(m_Coefficient);
    m_Purpose = Step::getUnset(m_Purpose);
}

IfcStructuralLoadGroup::~IfcStructuralLoadGroup()
{}

bool IfcStructuralLoadGroup::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadGroup(this);
}


IfcLoadGroupTypeEnum IfcStructuralLoadGroup::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcLoadGroupTypeEnum_UNSET;
    }    
}

IfcLoadGroupTypeEnum IfcStructuralLoadGroup::getPredefinedType() const
{
    return const_cast<IfcStructuralLoadGroup *>(this)->getPredefinedType();
}

void IfcStructuralLoadGroup::setPredefinedType(IfcLoadGroupTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcStructuralLoadGroup::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcLoadGroupTypeEnum_UNSET;
}

bool IfcStructuralLoadGroup::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}


IfcActionTypeEnum IfcStructuralLoadGroup::getActionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ActionType;
    }
    else 
    {
        return IfcActionTypeEnum_UNSET;
    }    
}

IfcActionTypeEnum IfcStructuralLoadGroup::getActionType() const
{
    return const_cast<IfcStructuralLoadGroup *>(this)->getActionType();
}

void IfcStructuralLoadGroup::setActionType(IfcActionTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActionType = value;
}

void IfcStructuralLoadGroup::unsetActionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActionType = IfcActionTypeEnum_UNSET;
}

bool IfcStructuralLoadGroup::testActionType() const
{
    return Step::isUnset(getActionType()) == false;
}


IfcActionSourceTypeEnum IfcStructuralLoadGroup::getActionSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ActionSource;
    }
    else 
    {
        return IfcActionSourceTypeEnum_UNSET;
    }    
}

IfcActionSourceTypeEnum IfcStructuralLoadGroup::getActionSource() const
{
    return const_cast<IfcStructuralLoadGroup *>(this)->getActionSource();
}

void IfcStructuralLoadGroup::setActionSource(IfcActionSourceTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActionSource = value;
}

void IfcStructuralLoadGroup::unsetActionSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActionSource = IfcActionSourceTypeEnum_UNSET;
}

bool IfcStructuralLoadGroup::testActionSource() const
{
    return Step::isUnset(getActionSource()) == false;
}


IfcRatioMeasure IfcStructuralLoadGroup::getCoefficient()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Coefficient;
    }
    else 
    {
        return Step::getUnset(m_Coefficient);
    }    
}

IfcRatioMeasure IfcStructuralLoadGroup::getCoefficient() const
{
    return const_cast<IfcStructuralLoadGroup *>(this)->getCoefficient();
}

void IfcStructuralLoadGroup::setCoefficient(IfcRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Coefficient = value;
}

void IfcStructuralLoadGroup::unsetCoefficient()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Coefficient = Step::getUnset(getCoefficient());
}

bool IfcStructuralLoadGroup::testCoefficient() const
{
    return Step::isUnset(getCoefficient()) == false;
}


IfcLabel IfcStructuralLoadGroup::getPurpose()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Purpose;
    }
    else 
    {
        return Step::getUnset(m_Purpose);
    }    
}

const IfcLabel IfcStructuralLoadGroup::getPurpose() const
{
    return const_cast<IfcStructuralLoadGroup *>(this)->getPurpose();
}

void IfcStructuralLoadGroup::setPurpose(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = value;
}

void IfcStructuralLoadGroup::unsetPurpose()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = Step::getUnset(getPurpose());
}

bool IfcStructuralLoadGroup::testPurpose() const
{
    return Step::isUnset(getPurpose()) == false;
}

Inverse_Set_IfcStructuralResultGroup_0_1 &IfcStructuralLoadGroup::getSourceOfResultGroup()
{
    if (Step::BaseObject::inited())
    {
        return m_SourceOfResultGroup;
    }
 
    m_SourceOfResultGroup.setUnset(true);
    return m_SourceOfResultGroup;
}

const Inverse_Set_IfcStructuralResultGroup_0_1 &IfcStructuralLoadGroup::getSourceOfResultGroup() const
{
    return  const_cast< IfcStructuralLoadGroup * > (this)->getSourceOfResultGroup();
}

bool IfcStructuralLoadGroup::testSourceOfResultGroup() const
{
    return m_SourceOfResultGroup.isUnset() == false;
}

Inverse_Set_IfcStructuralAnalysisModel_0_n &IfcStructuralLoadGroup::getLoadGroupFor()
{
    if (Step::BaseObject::inited())
    {
        return m_LoadGroupFor;
    }
 
    m_LoadGroupFor.setUnset(true);
    return m_LoadGroupFor;
}

const Inverse_Set_IfcStructuralAnalysisModel_0_n &IfcStructuralLoadGroup::getLoadGroupFor() const
{
    return  const_cast< IfcStructuralLoadGroup * > (this)->getLoadGroupFor();
}

bool IfcStructuralLoadGroup::testLoadGroupFor() const
{
    return m_LoadGroupFor.isUnset() == false;
}

bool IfcStructuralLoadGroup::init()
{
    if (IfcGroup::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcLoadGroupTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".LOAD_GROUP.")
        {
            m_PredefinedType = IfcLoadGroupTypeEnum_LOAD_GROUP;
        }
        else if (arg == ".LOAD_CASE.")
        {
            m_PredefinedType = IfcLoadGroupTypeEnum_LOAD_CASE;
        }
        else if (arg == ".LOAD_COMBINATION_GROUP.")
        {
            m_PredefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION_GROUP;
        }
        else if (arg == ".LOAD_COMBINATION.")
        {
            m_PredefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcLoadGroupTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcLoadGroupTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ActionType = IfcActionTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".PERMANENT_G.")
        {
            m_ActionType = IfcActionTypeEnum_PERMANENT_G;
        }
        else if (arg == ".VARIABLE_Q.")
        {
            m_ActionType = IfcActionTypeEnum_VARIABLE_Q;
        }
        else if (arg == ".EXTRAORDINARY_A.")
        {
            m_ActionType = IfcActionTypeEnum_EXTRAORDINARY_A;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ActionType = IfcActionTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ActionType = IfcActionTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ActionSource = IfcActionSourceTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".DEAD_LOAD_G.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_DEAD_LOAD_G;
        }
        else if (arg == ".COMPLETION_G1.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_COMPLETION_G1;
        }
        else if (arg == ".LIVE_LOAD_Q.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_LIVE_LOAD_Q;
        }
        else if (arg == ".SNOW_S.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_SNOW_S;
        }
        else if (arg == ".WIND_W.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_WIND_W;
        }
        else if (arg == ".PRESTRESSING_P.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_PRESTRESSING_P;
        }
        else if (arg == ".SETTLEMENT_U.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_SETTLEMENT_U;
        }
        else if (arg == ".TEMPERATURE_T.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_TEMPERATURE_T;
        }
        else if (arg == ".EARTHQUAKE_E.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_EARTHQUAKE_E;
        }
        else if (arg == ".FIRE.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_FIRE;
        }
        else if (arg == ".IMPULSE.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_IMPULSE;
        }
        else if (arg == ".IMPACT.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_IMPACT;
        }
        else if (arg == ".TRANSPORT.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_TRANSPORT;
        }
        else if (arg == ".ERECTION.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_ERECTION;
        }
        else if (arg == ".PROPPING.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_PROPPING;
        }
        else if (arg == ".SYSTEM_IMPERFECTION.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_SYSTEM_IMPERFECTION;
        }
        else if (arg == ".SHRINKAGE.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_SHRINKAGE;
        }
        else if (arg == ".CREEP.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_CREEP;
        }
        else if (arg == ".LACK_OF_FIT.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_LACK_OF_FIT;
        }
        else if (arg == ".BUOYANCY.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_BUOYANCY;
        }
        else if (arg == ".ICE.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_ICE;
        }
        else if (arg == ".CURRENT.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_CURRENT;
        }
        else if (arg == ".WAVE.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_WAVE;
        }
        else if (arg == ".RAIN.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_RAIN;
        }
        else if (arg == ".BRAKES.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_BRAKES;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ActionSource = IfcActionSourceTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Coefficient = Step::getUnset(m_Coefficient);
    }
    else
    {
        m_Coefficient = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Purpose = Step::getUnset(m_Purpose);
    }
    else
    {
        m_Purpose = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcStructuralResultGroup::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_SourceOfResultGroup.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_SourceOfResultGroup.insert(static_cast< IfcStructuralResultGroup * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 7);
    if (inverses)
    {
        unsigned int i;
        m_LoadGroupFor.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_LoadGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralLoadGroup::copy(const IfcStructuralLoadGroup &obj, const CopyOp &copyop)
{
    IfcGroup::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    setActionType(obj.m_ActionType);
    setActionSource(obj.m_ActionSource);
    setCoefficient(obj.m_Coefficient);
    setPurpose(obj.m_Purpose);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadGroup, IfcGroup)
