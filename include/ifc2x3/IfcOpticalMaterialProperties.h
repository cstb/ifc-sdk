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

#ifndef IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
#define IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
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
    class IFC2X3_DLL_DEF IfcOpticalMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'VisibleTransmittance'.
         * 
         */
        virtual IfcPositiveRatioMeasure getVisibleTransmittance();
        /**
         * (const) Returns the value of the explicit attribute 'VisibleTransmittance'.
         * 
         * @return the value of the explicit attribute 'VisibleTransmittance'
         */
        virtual const IfcPositiveRatioMeasure getVisibleTransmittance() const;
        /**
         * Sets the value of the explicit attribute 'VisibleTransmittance'.
         * 
         * @param value
         */
        virtual void setVisibleTransmittance(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'SolarTransmittance'.
         * 
         */
        virtual IfcPositiveRatioMeasure getSolarTransmittance();
        /**
         * (const) Returns the value of the explicit attribute 'SolarTransmittance'.
         * 
         * @return the value of the explicit attribute 'SolarTransmittance'
         */
        virtual const IfcPositiveRatioMeasure getSolarTransmittance() const;
        /**
         * Sets the value of the explicit attribute 'SolarTransmittance'.
         * 
         * @param value
         */
        virtual void setSolarTransmittance(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'ThermalIrTransmittance'.
         * 
         */
        virtual IfcPositiveRatioMeasure getThermalIrTransmittance();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalIrTransmittance'.
         * 
         * @return the value of the explicit attribute 'ThermalIrTransmittance'
         */
        virtual const IfcPositiveRatioMeasure getThermalIrTransmittance() const;
        /**
         * Sets the value of the explicit attribute 'ThermalIrTransmittance'.
         * 
         * @param value
         */
        virtual void setThermalIrTransmittance(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'ThermalIrEmissivityBack'.
         * 
         */
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityBack();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalIrEmissivityBack'.
         * 
         * @return the value of the explicit attribute 'ThermalIrEmissivityBack'
         */
        virtual const IfcPositiveRatioMeasure getThermalIrEmissivityBack() const;
        /**
         * Sets the value of the explicit attribute 'ThermalIrEmissivityBack'.
         * 
         * @param value
         */
        virtual void setThermalIrEmissivityBack(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'ThermalIrEmissivityFront'.
         * 
         */
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityFront();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalIrEmissivityFront'.
         * 
         * @return the value of the explicit attribute 'ThermalIrEmissivityFront'
         */
        virtual const IfcPositiveRatioMeasure getThermalIrEmissivityFront() const;
        /**
         * Sets the value of the explicit attribute 'ThermalIrEmissivityFront'.
         * 
         * @param value
         */
        virtual void setThermalIrEmissivityFront(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'VisibleReflectanceBack'.
         * 
         */
        virtual IfcPositiveRatioMeasure getVisibleReflectanceBack();
        /**
         * (const) Returns the value of the explicit attribute 'VisibleReflectanceBack'.
         * 
         * @return the value of the explicit attribute 'VisibleReflectanceBack'
         */
        virtual const IfcPositiveRatioMeasure getVisibleReflectanceBack() const;
        /**
         * Sets the value of the explicit attribute 'VisibleReflectanceBack'.
         * 
         * @param value
         */
        virtual void setVisibleReflectanceBack(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'VisibleReflectanceFront'.
         * 
         */
        virtual IfcPositiveRatioMeasure getVisibleReflectanceFront();
        /**
         * (const) Returns the value of the explicit attribute 'VisibleReflectanceFront'.
         * 
         * @return the value of the explicit attribute 'VisibleReflectanceFront'
         */
        virtual const IfcPositiveRatioMeasure getVisibleReflectanceFront() const;
        /**
         * Sets the value of the explicit attribute 'VisibleReflectanceFront'.
         * 
         * @param value
         */
        virtual void setVisibleReflectanceFront(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'SolarReflectanceFront'.
         * 
         */
        virtual IfcPositiveRatioMeasure getSolarReflectanceFront();
        /**
         * (const) Returns the value of the explicit attribute 'SolarReflectanceFront'.
         * 
         * @return the value of the explicit attribute 'SolarReflectanceFront'
         */
        virtual const IfcPositiveRatioMeasure getSolarReflectanceFront() const;
        /**
         * Sets the value of the explicit attribute 'SolarReflectanceFront'.
         * 
         * @param value
         */
        virtual void setSolarReflectanceFront(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'SolarReflectanceBack'.
         * 
         */
        virtual IfcPositiveRatioMeasure getSolarReflectanceBack();
        /**
         * (const) Returns the value of the explicit attribute 'SolarReflectanceBack'.
         * 
         * @return the value of the explicit attribute 'SolarReflectanceBack'
         */
        virtual const IfcPositiveRatioMeasure getSolarReflectanceBack() const;
        /**
         * Sets the value of the explicit attribute 'SolarReflectanceBack'.
         * 
         * @param value
         */
        virtual void setSolarReflectanceBack(IfcPositiveRatioMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOpticalMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcOpticalMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_visibleTransmittance;
        /**
         */
        Step::Real m_solarTransmittance;
        /**
         */
        Step::Real m_thermalIrTransmittance;
        /**
         */
        Step::Real m_thermalIrEmissivityBack;
        /**
         */
        Step::Real m_thermalIrEmissivityFront;
        /**
         */
        Step::Real m_visibleReflectanceBack;
        /**
         */
        Step::Real m_visibleReflectanceFront;
        /**
         */
        Step::Real m_solarReflectanceFront;
        /**
         */
        Step::Real m_solarReflectanceBack;

    };

}

#endif // IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
