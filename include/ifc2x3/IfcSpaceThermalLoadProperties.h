/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
#define IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTimeSeries;

    /**
     */
    class IFC2X3_DLL_DEF IfcSpaceThermalLoadProperties : public IfcPropertySetDefinition {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcPositiveRatioMeasure getApplicableValueRatio();
        /**
         * Sets the value of the explicit attribute 'ApplicableValueRatio'.
         * 
         * @param value
         */
        void setApplicableValueRatio(IfcPositiveRatioMeasure value);
        /**
         */
        IfcThermalLoadSourceEnum getThermalLoadSource();
        /**
         * Sets the value of the explicit attribute 'ThermalLoadSource'.
         * 
         * @param value
         */
        void setThermalLoadSource(IfcThermalLoadSourceEnum value);
        /**
         */
        IfcPropertySourceEnum getPropertySource();
        /**
         * Sets the value of the explicit attribute 'PropertySource'.
         * 
         * @param value
         */
        void setPropertySource(IfcPropertySourceEnum value);
        /**
         */
        IfcText getSourceDescription();
        /**
         * Sets the value of the explicit attribute 'SourceDescription'.
         * 
         * @param value
         */
        void setSourceDescription(const IfcText &value);
        /**
         */
        IfcPowerMeasure getMaximumValue();
        /**
         * Sets the value of the explicit attribute 'MaximumValue'.
         * 
         * @param value
         */
        void setMaximumValue(IfcPowerMeasure value);
        /**
         */
        IfcPowerMeasure getMinimumValue();
        /**
         * Sets the value of the explicit attribute 'MinimumValue'.
         * 
         * @param value
         */
        void setMinimumValue(IfcPowerMeasure value);
        /**
         */
        IfcTimeSeries *getThermalLoadTimeSeriesValues();
        /**
         * Sets the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
         * 
         * @param value
         */
        void setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcLabel getUserDefinedThermalLoadSource();
        /**
         * Sets the value of the explicit attribute 'UserDefinedThermalLoadSource'.
         * 
         * @param value
         */
        void setUserDefinedThermalLoadSource(const IfcLabel &value);
        /**
         */
        IfcLabel getUserDefinedPropertySource();
        /**
         * Sets the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         * @param value
         */
        void setUserDefinedPropertySource(const IfcLabel &value);
        /**
         */
        IfcThermalLoadTypeEnum getThermalLoadType();
        /**
         * Sets the value of the explicit attribute 'ThermalLoadType'.
         * 
         * @param value
         */
        void setThermalLoadType(IfcThermalLoadTypeEnum value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSpaceThermalLoadProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpaceThermalLoadProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_applicableValueRatio;
        /**
         */
        IfcThermalLoadSourceEnum m_thermalLoadSource;
        /**
         */
        IfcPropertySourceEnum m_propertySource;
        /**
         */
        std::string m_sourceDescription;
        /**
         */
        Step::Real m_maximumValue;
        /**
         */
        Step::Real m_minimumValue;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_thermalLoadTimeSeriesValues;
        /**
         */
        std::string m_userDefinedThermalLoadSource;
        /**
         */
        std::string m_userDefinedPropertySource;
        /**
         */
        IfcThermalLoadTypeEnum m_thermalLoadType;

    };

}

#endif // IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
