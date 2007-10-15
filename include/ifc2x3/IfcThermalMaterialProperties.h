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
        IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity();
        /**
         * Sets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @param value
         */
        void setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getBoilingPoint();
        /**
         * Sets the value of the explicit attribute 'BoilingPoint'.
         * 
         * @param value
         */
        void setBoilingPoint(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getFreezingPoint();
        /**
         * Sets the value of the explicit attribute 'FreezingPoint'.
         * 
         * @param value
         */
        void setFreezingPoint(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcThermalConductivityMeasure getThermalConductivity();
        /**
         * Sets the value of the explicit attribute 'ThermalConductivity'.
         * 
         * @param value
         */
        void setThermalConductivity(IfcThermalConductivityMeasure value);
        /**
         */
        virtual void release();
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
