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
         * Gets the value of the explicit attribute 'UpperVaporResistanceFactor'.
         * 
         */
        virtual IfcPositiveRatioMeasure getUpperVaporResistanceFactor();
        /**
         * (const) Returns the value of the explicit attribute 'UpperVaporResistanceFactor'.
         * 
         * @return the value of the explicit attribute 'UpperVaporResistanceFactor'
         */
        virtual const IfcPositiveRatioMeasure getUpperVaporResistanceFactor() const;
        /**
         * Sets the value of the explicit attribute 'UpperVaporResistanceFactor'.
         * 
         * @param value
         */
        virtual void setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'LowerVaporResistanceFactor'.
         * 
         */
        virtual IfcPositiveRatioMeasure getLowerVaporResistanceFactor();
        /**
         * (const) Returns the value of the explicit attribute 'LowerVaporResistanceFactor'.
         * 
         * @return the value of the explicit attribute 'LowerVaporResistanceFactor'
         */
        virtual const IfcPositiveRatioMeasure getLowerVaporResistanceFactor() const;
        /**
         * Sets the value of the explicit attribute 'LowerVaporResistanceFactor'.
         * 
         * @param value
         */
        virtual void setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'IsothermalMoistureCapacity'.
         * 
         */
        virtual IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity();
        /**
         * (const) Returns the value of the explicit attribute 'IsothermalMoistureCapacity'.
         * 
         * @return the value of the explicit attribute 'IsothermalMoistureCapacity'
         */
        virtual const IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity() const;
        /**
         * Sets the value of the explicit attribute 'IsothermalMoistureCapacity'.
         * 
         * @param value
         */
        virtual void setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value);
        /**
         * Gets the value of the explicit attribute 'VaporPermeability'.
         * 
         */
        virtual IfcVaporPermeabilityMeasure getVaporPermeability();
        /**
         * (const) Returns the value of the explicit attribute 'VaporPermeability'.
         * 
         * @return the value of the explicit attribute 'VaporPermeability'
         */
        virtual const IfcVaporPermeabilityMeasure getVaporPermeability() const;
        /**
         * Sets the value of the explicit attribute 'VaporPermeability'.
         * 
         * @param value
         */
        virtual void setVaporPermeability(IfcVaporPermeabilityMeasure value);
        /**
         * Gets the value of the explicit attribute 'MoistureDiffusivity'.
         * 
         */
        virtual IfcMoistureDiffusivityMeasure getMoistureDiffusivity();
        /**
         * (const) Returns the value of the explicit attribute 'MoistureDiffusivity'.
         * 
         * @return the value of the explicit attribute 'MoistureDiffusivity'
         */
        virtual const IfcMoistureDiffusivityMeasure getMoistureDiffusivity() const;
        /**
         * Sets the value of the explicit attribute 'MoistureDiffusivity'.
         * 
         * @param value
         */
        virtual void setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value);
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
