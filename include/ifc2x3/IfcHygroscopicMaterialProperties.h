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

#ifndef IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
#define IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
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
    class IFC2X3_DLL_DEF IfcHygroscopicMaterialProperties : public IfcMaterialProperties {
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
        IfcPositiveRatioMeasure getUpperVaporResistanceFactor();
        /**
         * Sets the value of the explicit attribute 'UpperVaporResistanceFactor'.
         * 
         * @param value
         */
        void setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getLowerVaporResistanceFactor();
        /**
         * Sets the value of the explicit attribute 'LowerVaporResistanceFactor'.
         * 
         * @param value
         */
        void setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value);
        /**
         */
        IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity();
        /**
         * Sets the value of the explicit attribute 'IsothermalMoistureCapacity'.
         * 
         * @param value
         */
        void setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value);
        /**
         */
        IfcVaporPermeabilityMeasure getVaporPermeability();
        /**
         * Sets the value of the explicit attribute 'VaporPermeability'.
         * 
         * @param value
         */
        void setVaporPermeability(IfcVaporPermeabilityMeasure value);
        /**
         */
        IfcMoistureDiffusivityMeasure getMoistureDiffusivity();
        /**
         * Sets the value of the explicit attribute 'MoistureDiffusivity'.
         * 
         * @param value
         */
        void setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcHygroscopicMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcHygroscopicMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_upperVaporResistanceFactor;
        /**
         */
        Step::Real m_lowerVaporResistanceFactor;
        /**
         */
        Step::Real m_isothermalMoistureCapacity;
        /**
         */
        Step::Real m_vaporPermeability;
        /**
         */
        Step::Real m_moistureDiffusivity;

    };

}

#endif // IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
