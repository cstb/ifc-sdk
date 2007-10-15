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

#ifndef IFC2X3_IFCFUELPROPERTIES_H
#define IFC2X3_IFCFUELPROPERTIES_H
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
    class IFC2X3_DLL_DEF IfcFuelProperties : public IfcMaterialProperties {
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
        IfcThermodynamicTemperatureMeasure getCombustionTemperature();
        /**
         * Sets the value of the explicit attribute 'CombustionTemperature'.
         * 
         * @param value
         */
        void setCombustionTemperature(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getCarbonContent();
        /**
         * Sets the value of the explicit attribute 'CarbonContent'.
         * 
         * @param value
         */
        void setCarbonContent(IfcPositiveRatioMeasure value);
        /**
         */
        IfcHeatingValueMeasure getLowerHeatingValue();
        /**
         * Sets the value of the explicit attribute 'LowerHeatingValue'.
         * 
         * @param value
         */
        void setLowerHeatingValue(IfcHeatingValueMeasure value);
        /**
         */
        IfcHeatingValueMeasure getHigherHeatingValue();
        /**
         * Sets the value of the explicit attribute 'HigherHeatingValue'.
         * 
         * @param value
         */
        void setHigherHeatingValue(IfcHeatingValueMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFuelProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcFuelProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFuelProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_combustionTemperature;
        /**
         */
        Step::Real m_carbonContent;
        /**
         */
        Step::Real m_lowerHeatingValue;
        /**
         */
        Step::Real m_higherHeatingValue;

    };

}

#endif // IFC2X3_IFCFUELPROPERTIES_H
