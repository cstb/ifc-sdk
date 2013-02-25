// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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

#ifndef IFC2X3_IFCMEASUREVALUE_H
#define IFC2X3_IFCMEASUREVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcMeasureValue : public Step::BaseObject {
    public:
        /**
 */
enum IfcMeasureValue_select {
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
            UNSET,
        };

        union IfcMeasureValue_union {
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
        /**
         */
        IfcMeasureValue();
        virtual ~IfcMeasureValue();
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMeasureValue &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcMeasureValue_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcVolumeMeasure getIfcVolumeMeasure() const;
        /**
         * @param value
         */
        void setIfcVolumeMeasure(IfcVolumeMeasure value);
        /**
         */
        IfcTimeMeasure getIfcTimeMeasure() const;
        /**
         * @param value
         */
        void setIfcTimeMeasure(IfcTimeMeasure value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getIfcThermodynamicTemperatureMeasure() const;
        /**
         * @param value
         */
        void setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcSolidAngleMeasure getIfcSolidAngleMeasure() const;
        /**
         * @param value
         */
        void setIfcSolidAngleMeasure(IfcSolidAngleMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getIfcPositiveRatioMeasure() const;
        /**
         * @param value
         */
        void setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value);
        /**
         */
        IfcRatioMeasure getIfcRatioMeasure() const;
        /**
         * @param value
         */
        void setIfcRatioMeasure(IfcRatioMeasure value);
        /**
         */
        IfcPositivePlaneAngleMeasure getIfcPositivePlaneAngleMeasure() const;
        /**
         * @param value
         */
        void setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getIfcPlaneAngleMeasure() const;
        /**
         * @param value
         */
        void setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value);
        /**
         */
        IfcParameterValue getIfcParameterValue() const;
        /**
         * @param value
         */
        void setIfcParameterValue(IfcParameterValue value);
        /**
         */
        IfcNumericMeasure getIfcNumericMeasure() const;
        /**
         * @param value
         */
        void setIfcNumericMeasure(IfcNumericMeasure value);
        /**
         */
        IfcMassMeasure getIfcMassMeasure() const;
        /**
         * @param value
         */
        void setIfcMassMeasure(IfcMassMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getIfcPositiveLengthMeasure() const;
        /**
         * @param value
         */
        void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);
        /**
         */
        IfcLengthMeasure getIfcLengthMeasure() const;
        /**
         * @param value
         */
        void setIfcLengthMeasure(IfcLengthMeasure value);
        /**
         */
        IfcElectricCurrentMeasure getIfcElectricCurrentMeasure() const;
        /**
         * @param value
         */
        void setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value);
        /**
         */
        IfcDescriptiveMeasure getIfcDescriptiveMeasure() const;
        /**
         * @param value
         */
        void setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value);
        /**
         */
        IfcCountMeasure getIfcCountMeasure() const;
        /**
         * @param value
         */
        void setIfcCountMeasure(IfcCountMeasure value);
        /**
         */
        IfcContextDependentMeasure getIfcContextDependentMeasure() const;
        /**
         * @param value
         */
        void setIfcContextDependentMeasure(IfcContextDependentMeasure value);
        /**
         */
        IfcAreaMeasure getIfcAreaMeasure() const;
        /**
         * @param value
         */
        void setIfcAreaMeasure(IfcAreaMeasure value);
        /**
         */
        IfcAmountOfSubstanceMeasure getIfcAmountOfSubstanceMeasure() const;
        /**
         * @param value
         */
        void setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value);
        /**
         */
        IfcLuminousIntensityMeasure getIfcLuminousIntensityMeasure() const;
        /**
         * @param value
         */
        void setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getIfcNormalisedRatioMeasure() const;
        /**
         * @param value
         */
        void setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcComplexNumber getIfcComplexNumber() const;
        /**
         * @param value
         */
        void setIfcComplexNumber(const IfcComplexNumber &value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcMeasureValue(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcMeasureValue_select m_type;
        /**
         */
        IfcMeasureValue_union m_IfcMeasureValue_union;

    };

}

#endif // IFC2X3_IFCMEASUREVALUE_H
