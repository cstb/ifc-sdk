#pragma once

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


#include <ifc2x3/Export.h>

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseObject.h>

namespace ifc2x3
{
    /**
     * Generated class for the IfcMeasureValue Select type.
     *
     */
    class IFC2X3_EXPORT IfcMeasureValue : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcMeasureValue_select 
        {
            IFCVOLUMEMEASURE,
            IFCTIMEMEASURE,
            IFCTHERMODYNAMICTEMPERATUREMEASURE,
            IFCSOLIDANGLEMEASURE,
            IFCPOSITIVERATIOMEASURE,
            IFCRATIOMEASURE,
            IFCPOSITIVEPLANEANGLEMEASURE,
            IFCPLANEANGLEMEASURE,
            IFCPARAMETERVALUE,
            IFCNUMERICMEASURE,
            IFCMASSMEASURE,
            IFCPOSITIVELENGTHMEASURE,
            IFCLENGTHMEASURE,
            IFCELECTRICCURRENTMEASURE,
            IFCDESCRIPTIVEMEASURE,
            IFCCOUNTMEASURE,
            IFCCONTEXTDEPENDENTMEASURE,
            IFCAREAMEASURE,
            IFCAMOUNTOFSUBSTANCEMEASURE,
            IFCLUMINOUSINTENSITYMEASURE,
            IFCNORMALISEDRATIOMEASURE,
            IFCCOMPLEXNUMBER,
            UNSET
        };

        union IfcMeasureValue_union
        {
            IfcVolumeMeasure m_IfcVolumeMeasure;
            IfcTimeMeasure m_IfcTimeMeasure;
            IfcThermodynamicTemperatureMeasure m_IfcThermodynamicTemperatureMeasure;
            IfcSolidAngleMeasure m_IfcSolidAngleMeasure;
            IfcPositiveRatioMeasure m_IfcPositiveRatioMeasure;
            IfcRatioMeasure m_IfcRatioMeasure;
            IfcPositivePlaneAngleMeasure m_IfcPositivePlaneAngleMeasure;
            IfcPlaneAngleMeasure m_IfcPlaneAngleMeasure;
            IfcParameterValue m_IfcParameterValue;
            IfcNumericMeasure m_IfcNumericMeasure;
            IfcMassMeasure m_IfcMassMeasure;
            IfcPositiveLengthMeasure m_IfcPositiveLengthMeasure;
            IfcLengthMeasure m_IfcLengthMeasure;
            IfcElectricCurrentMeasure m_IfcElectricCurrentMeasure;
            IfcDescriptiveMeasure *m_IfcDescriptiveMeasure;
            IfcCountMeasure m_IfcCountMeasure;
            IfcContextDependentMeasure m_IfcContextDependentMeasure;
            IfcAreaMeasure m_IfcAreaMeasure;
            IfcAmountOfSubstanceMeasure m_IfcAmountOfSubstanceMeasure;
            IfcLuminousIntensityMeasure m_IfcLuminousIntensityMeasure;
            IfcNormalisedRatioMeasure m_IfcNormalisedRatioMeasure;
            IfcComplexNumber *m_IfcComplexNumber;
        };

        IfcMeasureValue();
        virtual ~IfcMeasureValue();

        virtual void copy(const IfcMeasureValue &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcMeasureValue_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcVolumeMeasure getIfcVolumeMeasure() const;
        void setIfcVolumeMeasure(IfcVolumeMeasure value);    

        IfcTimeMeasure getIfcTimeMeasure() const;
        void setIfcTimeMeasure(IfcTimeMeasure value);    

        IfcThermodynamicTemperatureMeasure getIfcThermodynamicTemperatureMeasure() const;
        void setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value);    

        IfcSolidAngleMeasure getIfcSolidAngleMeasure() const;
        void setIfcSolidAngleMeasure(IfcSolidAngleMeasure value);    

        IfcPositiveRatioMeasure getIfcPositiveRatioMeasure() const;
        void setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value);    

        IfcRatioMeasure getIfcRatioMeasure() const;
        void setIfcRatioMeasure(IfcRatioMeasure value);    

        IfcPositivePlaneAngleMeasure getIfcPositivePlaneAngleMeasure() const;
        void setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value);    

        IfcPlaneAngleMeasure getIfcPlaneAngleMeasure() const;
        void setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value);    

        IfcParameterValue getIfcParameterValue() const;
        void setIfcParameterValue(IfcParameterValue value);    

        IfcNumericMeasure getIfcNumericMeasure() const;
        void setIfcNumericMeasure(IfcNumericMeasure value);    

        IfcMassMeasure getIfcMassMeasure() const;
        void setIfcMassMeasure(IfcMassMeasure value);    

        IfcPositiveLengthMeasure getIfcPositiveLengthMeasure() const;
        void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);    

        IfcLengthMeasure getIfcLengthMeasure() const;
        void setIfcLengthMeasure(IfcLengthMeasure value);    

        IfcElectricCurrentMeasure getIfcElectricCurrentMeasure() const;
        void setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value);    

        IfcDescriptiveMeasure getIfcDescriptiveMeasure() const;
        void setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value);   

        IfcCountMeasure getIfcCountMeasure() const;
        void setIfcCountMeasure(IfcCountMeasure value);    

        IfcContextDependentMeasure getIfcContextDependentMeasure() const;
        void setIfcContextDependentMeasure(IfcContextDependentMeasure value);    

        IfcAreaMeasure getIfcAreaMeasure() const;
        void setIfcAreaMeasure(IfcAreaMeasure value);    

        IfcAmountOfSubstanceMeasure getIfcAmountOfSubstanceMeasure() const;
        void setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value);    

        IfcLuminousIntensityMeasure getIfcLuminousIntensityMeasure() const;
        void setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value);    

        IfcNormalisedRatioMeasure getIfcNormalisedRatioMeasure() const;
        void setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value);    

        IfcComplexNumber &getIfcComplexNumber() const;
        void setIfcComplexNumber(const IfcComplexNumber &value);   


    protected:
        IfcMeasureValue(Step::SPFData *args);

        virtual bool init();

    private:
        IfcMeasureValue_select m_type;
  
        IfcMeasureValue_union m_union;
    };
} // namespace ifc2x3