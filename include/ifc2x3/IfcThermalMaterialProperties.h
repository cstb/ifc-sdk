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

#ifndef IFC2X3_IFCTHERMALMATERIALPROPERTIES_H
#define IFC2X3_IFCTHERMALMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcMaterialProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcThermalMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         */
        virtual IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity();
        /**
         * (const) Returns the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @return the value of the explicit attribute 'SpecificHeatCapacity'
         */
        virtual const IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity() const;
        /**
         * Sets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @param value
         */
        virtual void setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value);
        /**
         * Gets the value of the explicit attribute 'BoilingPoint'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getBoilingPoint();
        /**
         * (const) Returns the value of the explicit attribute 'BoilingPoint'.
         * 
         * @return the value of the explicit attribute 'BoilingPoint'
         */
        virtual const IfcThermodynamicTemperatureMeasure getBoilingPoint() const;
        /**
         * Sets the value of the explicit attribute 'BoilingPoint'.
         * 
         * @param value
         */
        virtual void setBoilingPoint(IfcThermodynamicTemperatureMeasure value);
        /**
         * Gets the value of the explicit attribute 'FreezingPoint'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getFreezingPoint();
        /**
         * (const) Returns the value of the explicit attribute 'FreezingPoint'.
         * 
         * @return the value of the explicit attribute 'FreezingPoint'
         */
        virtual const IfcThermodynamicTemperatureMeasure getFreezingPoint() const;
        /**
         * Sets the value of the explicit attribute 'FreezingPoint'.
         * 
         * @param value
         */
        virtual void setFreezingPoint(IfcThermodynamicTemperatureMeasure value);
        /**
         * Gets the value of the explicit attribute 'ThermalConductivity'.
         * 
         */
        virtual IfcThermalConductivityMeasure getThermalConductivity();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalConductivity'.
         * 
         * @return the value of the explicit attribute 'ThermalConductivity'
         */
        virtual const IfcThermalConductivityMeasure getThermalConductivity() const;
        /**
         * Sets the value of the explicit attribute 'ThermalConductivity'.
         * 
         * @param value
         */
        virtual void setThermalConductivity(IfcThermalConductivityMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcThermalMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcThermalMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcThermalMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_specificHeatCapacity;
        /**
         */
        Step::Real m_boilingPoint;
        /**
         */
        Step::Real m_freezingPoint;
        /**
         */
        Step::Real m_thermalConductivity;

    };

}

#endif // IFC2X3_IFCTHERMALMATERIALPROPERTIES_H
