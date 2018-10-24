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


#include <ifc2x3/IfcServiceLifeFactor.h>

#include <ifc2x3/IfcMeasureValue.h>
#include <ifc2x3/IfcMeasureValue.h>
#include <ifc2x3/IfcMeasureValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcServiceLifeFactor::IfcServiceLifeFactor(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_PredefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
    m_UpperValue = NULL;
    m_MostUsedValue = NULL;
    m_LowerValue = NULL;
}

IfcServiceLifeFactor::~IfcServiceLifeFactor()
{}

bool IfcServiceLifeFactor::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcServiceLifeFactor(this);
}


IfcServiceLifeFactorTypeEnum IfcServiceLifeFactor::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcServiceLifeFactorTypeEnum_UNSET;
    }    
}

IfcServiceLifeFactorTypeEnum IfcServiceLifeFactor::getPredefinedType() const
{
    return const_cast<IfcServiceLifeFactor *>(this)->getPredefinedType();
}

void IfcServiceLifeFactor::setPredefinedType(IfcServiceLifeFactorTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcServiceLifeFactor::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
}

bool IfcServiceLifeFactor::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}


IfcMeasureValue *IfcServiceLifeFactor::getUpperValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UpperValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMeasureValue *IfcServiceLifeFactor::getUpperValue() const
{
    return const_cast<IfcServiceLifeFactor *>(this)->getUpperValue();
}

void IfcServiceLifeFactor::setUpperValue(const Step::RefPtr< IfcMeasureValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpperValue = value;
}

void IfcServiceLifeFactor::unsetUpperValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpperValue = Step::getUnset(getUpperValue());
}

bool IfcServiceLifeFactor::testUpperValue() const
{
    return Step::isUnset(getUpperValue()) == false;
}


IfcMeasureValue *IfcServiceLifeFactor::getMostUsedValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MostUsedValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMeasureValue *IfcServiceLifeFactor::getMostUsedValue() const
{
    return const_cast<IfcServiceLifeFactor *>(this)->getMostUsedValue();
}

void IfcServiceLifeFactor::setMostUsedValue(const Step::RefPtr< IfcMeasureValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MostUsedValue = value;
}

void IfcServiceLifeFactor::unsetMostUsedValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MostUsedValue = Step::getUnset(getMostUsedValue());
}

bool IfcServiceLifeFactor::testMostUsedValue() const
{
    return Step::isUnset(getMostUsedValue()) == false;
}


IfcMeasureValue *IfcServiceLifeFactor::getLowerValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LowerValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMeasureValue *IfcServiceLifeFactor::getLowerValue() const
{
    return const_cast<IfcServiceLifeFactor *>(this)->getLowerValue();
}

void IfcServiceLifeFactor::setLowerValue(const Step::RefPtr< IfcMeasureValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerValue = value;
}

void IfcServiceLifeFactor::unsetLowerValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerValue = Step::getUnset(getLowerValue());
}

bool IfcServiceLifeFactor::testLowerValue() const
{
    return Step::isUnset(getLowerValue()) == false;
}

bool IfcServiceLifeFactor::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".A_QUALITYOFCOMPONENTS.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_A_QUALITYOFCOMPONENTS;
        }
        else if (arg == ".B_DESIGNLEVEL.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_B_DESIGNLEVEL;
        }
        else if (arg == ".C_WORKEXECUTIONLEVEL.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_C_WORKEXECUTIONLEVEL;
        }
        else if (arg == ".D_INDOORENVIRONMENT.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_D_INDOORENVIRONMENT;
        }
        else if (arg == ".E_OUTDOORENVIRONMENT.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_E_OUTDOORENVIRONMENT;
        }
        else if (arg == ".F_INUSECONDITIONS.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_F_INUSECONDITIONS;
        }
        else if (arg == ".G_MAINTENANCELEVEL.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_G_MAINTENANCELEVEL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcServiceLifeFactorTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UpperValue = NULL;
    }
    else
    {
        m_UpperValue = new IfcMeasureValue;
        if (arg[0] == '#') {
            m_UpperValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE")
                {
                    IfcVolumeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcVolumeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTIMEMEASURE")
                {
                    IfcTimeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcTimeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                {
                    IfcThermodynamicTemperatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOLIDANGLEMEASURE")
                {
                    IfcSolidAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE")
                {
                    IfcPositivePlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPARAMETERVALUE")
                {
                    IfcParameterValue tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcParameterValue(tmp_attr1);
                }
                else if (type1 == "IFCNUMERICMEASURE")
                {
                    IfcNumericMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcNumericMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSMEASURE")
                {
                    IfcMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCURRENTMEASURE")
                {
                    IfcElectricCurrentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_UpperValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCOUNTMEASURE")
                {
                    IfcCountMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcCountMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCONTEXTDEPENDENTMEASURE")
                {
                    IfcContextDependentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAREAMEASURE")
                {
                    IfcAreaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcAreaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                {
                    IfcAmountOfSubstanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYMEASURE")
                {
                    IfcLuminousIntensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MostUsedValue = NULL;
    }
    else
    {
        m_MostUsedValue = new IfcMeasureValue;
        if (arg[0] == '#') {
            m_MostUsedValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE")
                {
                    IfcVolumeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcVolumeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTIMEMEASURE")
                {
                    IfcTimeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcTimeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                {
                    IfcThermodynamicTemperatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOLIDANGLEMEASURE")
                {
                    IfcSolidAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE")
                {
                    IfcPositivePlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPARAMETERVALUE")
                {
                    IfcParameterValue tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcParameterValue(tmp_attr1);
                }
                else if (type1 == "IFCNUMERICMEASURE")
                {
                    IfcNumericMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcNumericMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSMEASURE")
                {
                    IfcMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCURRENTMEASURE")
                {
                    IfcElectricCurrentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_MostUsedValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCOUNTMEASURE")
                {
                    IfcCountMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcCountMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCONTEXTDEPENDENTMEASURE")
                {
                    IfcContextDependentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAREAMEASURE")
                {
                    IfcAreaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcAreaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                {
                    IfcAmountOfSubstanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYMEASURE")
                {
                    IfcLuminousIntensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_MostUsedValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LowerValue = NULL;
    }
    else
    {
        m_LowerValue = new IfcMeasureValue;
        if (arg[0] == '#') {
            m_LowerValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE")
                {
                    IfcVolumeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcVolumeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTIMEMEASURE")
                {
                    IfcTimeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcTimeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                {
                    IfcThermodynamicTemperatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOLIDANGLEMEASURE")
                {
                    IfcSolidAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE")
                {
                    IfcPositivePlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPARAMETERVALUE")
                {
                    IfcParameterValue tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcParameterValue(tmp_attr1);
                }
                else if (type1 == "IFCNUMERICMEASURE")
                {
                    IfcNumericMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcNumericMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSMEASURE")
                {
                    IfcMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCURRENTMEASURE")
                {
                    IfcElectricCurrentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_LowerValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCOUNTMEASURE")
                {
                    IfcCountMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcCountMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCONTEXTDEPENDENTMEASURE")
                {
                    IfcContextDependentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAREAMEASURE")
                {
                    IfcAreaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcAreaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                {
                    IfcAmountOfSubstanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYMEASURE")
                {
                    IfcLuminousIntensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcServiceLifeFactor::copy(const IfcServiceLifeFactor &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    setUpperValue((IfcMeasureValue*)copyop(obj.m_UpperValue.get()));
    setMostUsedValue((IfcMeasureValue*)copyop(obj.m_MostUsedValue.get()));
    setLowerValue((IfcMeasureValue*)copyop(obj.m_LowerValue.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcServiceLifeFactor, IfcPropertySetDefinition)
