/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
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
         * Gets the value of the explicit attribute 'ApplicableValueRatio'.
         * 
         */
        virtual IfcPositiveRatioMeasure getApplicableValueRatio();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicableValueRatio'.
         * 
         * @return the value of the explicit attribute 'ApplicableValueRatio'
         */
        virtual const IfcPositiveRatioMeasure getApplicableValueRatio() const;
        /**
         * Sets the value of the explicit attribute 'ApplicableValueRatio'.
         * 
         * @param value
         */
        virtual void setApplicableValueRatio(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'ThermalLoadSource'.
         * 
         */
        virtual IfcThermalLoadSourceEnum getThermalLoadSource();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalLoadSource'.
         * 
         * @return the value of the explicit attribute 'ThermalLoadSource'
         */
        virtual const IfcThermalLoadSourceEnum getThermalLoadSource() const;
        /**
         * Sets the value of the explicit attribute 'ThermalLoadSource'.
         * 
         * @param value
         */
        virtual void setThermalLoadSource(IfcThermalLoadSourceEnum value);
        /**
         * Gets the value of the explicit attribute 'PropertySource'.
         * 
         */
        virtual IfcPropertySourceEnum getPropertySource();
        /**
         * (const) Returns the value of the explicit attribute 'PropertySource'.
         * 
         * @return the value of the explicit attribute 'PropertySource'
         */
        virtual const IfcPropertySourceEnum getPropertySource() const;
        /**
         * Sets the value of the explicit attribute 'PropertySource'.
         * 
         * @param value
         */
        virtual void setPropertySource(IfcPropertySourceEnum value);
        /**
         * Gets the value of the explicit attribute 'SourceDescription'.
         * 
         */
        virtual IfcText getSourceDescription();
        /**
         * (const) Returns the value of the explicit attribute 'SourceDescription'.
         * 
         * @return the value of the explicit attribute 'SourceDescription'
         */
        virtual const IfcText getSourceDescription() const;
        /**
         * Sets the value of the explicit attribute 'SourceDescription'.
         * 
         * @param value
         */
        virtual void setSourceDescription(const IfcText &value);
        /**
         * Gets the value of the explicit attribute 'MaximumValue'.
         * 
         */
        virtual IfcPowerMeasure getMaximumValue();
        /**
         * (const) Returns the value of the explicit attribute 'MaximumValue'.
         * 
         * @return the value of the explicit attribute 'MaximumValue'
         */
        virtual const IfcPowerMeasure getMaximumValue() const;
        /**
         * Sets the value of the explicit attribute 'MaximumValue'.
         * 
         * @param value
         */
        virtual void setMaximumValue(IfcPowerMeasure value);
        /**
         * Gets the value of the explicit attribute 'MinimumValue'.
         * 
         */
        virtual IfcPowerMeasure getMinimumValue();
        /**
         * (const) Returns the value of the explicit attribute 'MinimumValue'.
         * 
         * @return the value of the explicit attribute 'MinimumValue'
         */
        virtual const IfcPowerMeasure getMinimumValue() const;
        /**
         * Sets the value of the explicit attribute 'MinimumValue'.
         * 
         * @param value
         */
        virtual void setMinimumValue(IfcPowerMeasure value);
        /**
         * Gets the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
         * 
         */
        virtual IfcTimeSeries *getThermalLoadTimeSeriesValues();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
         * 
         * @return the value of the explicit attribute 'ThermalLoadTimeSeriesValues'
         */
        virtual const IfcTimeSeries *getThermalLoadTimeSeriesValues() const;
        /**
         * Sets the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
         * 
         * @param value
         */
        virtual void setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedThermalLoadSource'.
         * 
         */
        virtual IfcLabel getUserDefinedThermalLoadSource();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedThermalLoadSource'.
         * 
         * @return the value of the explicit attribute 'UserDefinedThermalLoadSource'
         */
        virtual const IfcLabel getUserDefinedThermalLoadSource() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedThermalLoadSource'.
         * 
         * @param value
         */
        virtual void setUserDefinedThermalLoadSource(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         */
        virtual IfcLabel getUserDefinedPropertySource();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         * @return the value of the explicit attribute 'UserDefinedPropertySource'
         */
        virtual const IfcLabel getUserDefinedPropertySource() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         * @param value
         */
        virtual void setUserDefinedPropertySource(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'ThermalLoadType'.
         * 
         */
        virtual IfcThermalLoadTypeEnum getThermalLoadType();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalLoadType'.
         * 
         * @return the value of the explicit attribute 'ThermalLoadType'
         */
        virtual const IfcThermalLoadTypeEnum getThermalLoadType() const;
        /**
         * Sets the value of the explicit attribute 'ThermalLoadType'.
         * 
         * @param value
         */
        virtual void setThermalLoadType(IfcThermalLoadTypeEnum value);
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
        Step::String m_sourceDescription;
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
        Step::String m_userDefinedThermalLoadSource;
        /**
         */
        Step::String m_userDefinedPropertySource;
        /**
         */
        IfcThermalLoadTypeEnum m_thermalLoadType;

    };

}

#endif // IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
