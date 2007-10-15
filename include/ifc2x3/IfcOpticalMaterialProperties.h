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
        IfcPositiveRatioMeasure getVisibleTransmittance();
        /**
         * Sets the value of the explicit attribute 'VisibleTransmittance'.
         * 
         * @param value
         */
        void setVisibleTransmittance(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getSolarTransmittance();
        /**
         * Sets the value of the explicit attribute 'SolarTransmittance'.
         * 
         * @param value
         */
        void setSolarTransmittance(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getThermalIrTransmittance();
        /**
         * Sets the value of the explicit attribute 'ThermalIrTransmittance'.
         * 
         * @param value
         */
        void setThermalIrTransmittance(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getThermalIrEmissivityBack();
        /**
         * Sets the value of the explicit attribute 'ThermalIrEmissivityBack'.
         * 
         * @param value
         */
        void setThermalIrEmissivityBack(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getThermalIrEmissivityFront();
        /**
         * Sets the value of the explicit attribute 'ThermalIrEmissivityFront'.
         * 
         * @param value
         */
        void setThermalIrEmissivityFront(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getVisibleReflectanceBack();
        /**
         * Sets the value of the explicit attribute 'VisibleReflectanceBack'.
         * 
         * @param value
         */
        void setVisibleReflectanceBack(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getVisibleReflectanceFront();
        /**
         * Sets the value of the explicit attribute 'VisibleReflectanceFront'.
         * 
         * @param value
         */
        void setVisibleReflectanceFront(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getSolarReflectanceFront();
        /**
         * Sets the value of the explicit attribute 'SolarReflectanceFront'.
         * 
         * @param value
         */
        void setSolarReflectanceFront(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getSolarReflectanceBack();
        /**
         * Sets the value of the explicit attribute 'SolarReflectanceBack'.
         * 
         * @param value
         */
        void setSolarReflectanceBack(IfcPositiveRatioMeasure value);
        /**
         */
        virtual void release();
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
