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

#ifndef IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
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
    class IFC2X3_DLL_DEF IfcMechanicalMaterialProperties : public IfcMaterialProperties {
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
        IfcDynamicViscosityMeasure getDynamicViscosity();
        /**
         * Sets the value of the explicit attribute 'DynamicViscosity'.
         * 
         * @param value
         */
        void setDynamicViscosity(IfcDynamicViscosityMeasure value);
        /**
         */
        IfcModulusOfElasticityMeasure getYoungModulus();
        /**
         * Sets the value of the explicit attribute 'YoungModulus'.
         * 
         * @param value
         */
        void setYoungModulus(IfcModulusOfElasticityMeasure value);
        /**
         */
        IfcModulusOfElasticityMeasure getShearModulus();
        /**
         * Sets the value of the explicit attribute 'ShearModulus'.
         * 
         * @param value
         */
        void setShearModulus(IfcModulusOfElasticityMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getPoissonRatio();
        /**
         * Sets the value of the explicit attribute 'PoissonRatio'.
         * 
         * @param value
         */
        void setPoissonRatio(IfcPositiveRatioMeasure value);
        /**
         */
        IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient();
        /**
         * Sets the value of the explicit attribute 'ThermalExpansionCoefficient'.
         * 
         * @param value
         */
        void setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMechanicalMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_dynamicViscosity;
        /**
         */
        Step::Real m_youngModulus;
        /**
         */
        Step::Real m_shearModulus;
        /**
         */
        Step::Real m_poissonRatio;
        /**
         */
        Step::Real m_thermalExpansionCoefficient;

    };

}

#endif // IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
