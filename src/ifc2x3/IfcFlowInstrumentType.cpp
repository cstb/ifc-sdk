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


#include <ifc2x3/IfcFlowInstrumentType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFlowInstrumentType::IfcFlowInstrumentType(Step::Id id, Step::SPFData *args) : 
    IfcDistributionControlElementType(id, args)
{
    m_PredefinedType = IfcFlowInstrumentTypeEnum_UNSET;
}

IfcFlowInstrumentType::~IfcFlowInstrumentType()
{}

bool IfcFlowInstrumentType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFlowInstrumentType(this);
}


IfcFlowInstrumentTypeEnum IfcFlowInstrumentType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcFlowInstrumentTypeEnum_UNSET;
    }    
}

IfcFlowInstrumentTypeEnum IfcFlowInstrumentType::getPredefinedType() const
{
    return const_cast<IfcFlowInstrumentType *>(this)->getPredefinedType();
}

void IfcFlowInstrumentType::setPredefinedType(IfcFlowInstrumentTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcFlowInstrumentType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcFlowInstrumentTypeEnum_UNSET;
}

bool IfcFlowInstrumentType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcFlowInstrumentType::init()
{
    if (IfcDistributionControlElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcFlowInstrumentTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".PRESSUREGAUGE.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_PRESSUREGAUGE;
        }
        else if (arg == ".THERMOMETER.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_THERMOMETER;
        }
        else if (arg == ".AMMETER.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_AMMETER;
        }
        else if (arg == ".FREQUENCYMETER.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_FREQUENCYMETER;
        }
        else if (arg == ".POWERFACTORMETER.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_POWERFACTORMETER;
        }
        else if (arg == ".PHASEANGLEMETER.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_PHASEANGLEMETER;
        }
        else if (arg == ".VOLTMETER_PEAK.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_VOLTMETER_PEAK;
        }
        else if (arg == ".VOLTMETER_RMS.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_VOLTMETER_RMS;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcFlowInstrumentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFlowInstrumentType::copy(const IfcFlowInstrumentType &obj, const CopyOp &copyop)
{
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFlowInstrumentType, IfcDistributionControlElementType)
