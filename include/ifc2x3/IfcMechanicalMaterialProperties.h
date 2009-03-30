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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcMaterialProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcMechanicalMaterialProperties Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcMechanicalMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'DynamicViscosity'.
         * 
         */
        virtual IfcDynamicViscosityMeasure getDynamicViscosity();
        /**
         * (const) Returns the value of the explicit attribute 'DynamicViscosity'.
         * 
         * @return the value of the explicit attribute 'DynamicViscosity'
         */
        virtual const IfcDynamicViscosityMeasure getDynamicViscosity() const;
        /**
         * Sets the value of the explicit attribute 'DynamicViscosity'.
         * 
         * @param value
         */
        virtual void setDynamicViscosity(IfcDynamicViscosityMeasure value);
        /**
         * unset the attribute 'DynamicViscosity'.
         * 
         */
        virtual void unsetDynamicViscosity();
        /**
         * Test if the attribute 'DynamicViscosity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDynamicViscosity() const;
        /**
         * Gets the value of the explicit attribute 'YoungModulus'.
         * 
         */
        virtual IfcModulusOfElasticityMeasure getYoungModulus();
        /**
         * (const) Returns the value of the explicit attribute 'YoungModulus'.
         * 
         * @return the value of the explicit attribute 'YoungModulus'
         */
        virtual const IfcModulusOfElasticityMeasure getYoungModulus() const;
        /**
         * Sets the value of the explicit attribute 'YoungModulus'.
         * 
         * @param value
         */
        virtual void setYoungModulus(IfcModulusOfElasticityMeasure value);
        /**
         * unset the attribute 'YoungModulus'.
         * 
         */
        virtual void unsetYoungModulus();
        /**
         * Test if the attribute 'YoungModulus' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testYoungModulus() const;
        /**
         * Gets the value of the explicit attribute 'ShearModulus'.
         * 
         */
        virtual IfcModulusOfElasticityMeasure getShearModulus();
        /**
         * (const) Returns the value of the explicit attribute 'ShearModulus'.
         * 
         * @return the value of the explicit attribute 'ShearModulus'
         */
        virtual const IfcModulusOfElasticityMeasure getShearModulus() const;
        /**
         * Sets the value of the explicit attribute 'ShearModulus'.
         * 
         * @param value
         */
        virtual void setShearModulus(IfcModulusOfElasticityMeasure value);
        /**
         * unset the attribute 'ShearModulus'.
         * 
         */
        virtual void unsetShearModulus();
        /**
         * Test if the attribute 'ShearModulus' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShearModulus() const;
        /**
         * Gets the value of the explicit attribute 'PoissonRatio'.
         * 
         */
        virtual IfcPositiveRatioMeasure getPoissonRatio();
        /**
         * (const) Returns the value of the explicit attribute 'PoissonRatio'.
         * 
         * @return the value of the explicit attribute 'PoissonRatio'
         */
        virtual const IfcPositiveRatioMeasure getPoissonRatio() const;
        /**
         * Sets the value of the explicit attribute 'PoissonRatio'.
         * 
         * @param value
         */
        virtual void setPoissonRatio(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'PoissonRatio'.
         * 
         */
        virtual void unsetPoissonRatio();
        /**
         * Test if the attribute 'PoissonRatio' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPoissonRatio() const;
        /**
         * Gets the value of the explicit attribute 'ThermalExpansionCoefficient'.
         * 
         */
        virtual IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalExpansionCoefficient'.
         * 
         * @return the value of the explicit attribute 'ThermalExpansionCoefficient'
         */
        virtual const IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient() const;
        /**
         * Sets the value of the explicit attribute 'ThermalExpansionCoefficient'.
         * 
         * @param value
         */
        virtual void setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value);
        /**
         * unset the attribute 'ThermalExpansionCoefficient'.
         * 
         */
        virtual void unsetThermalExpansionCoefficient();
        /**
         * Test if the attribute 'ThermalExpansionCoefficient' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalExpansionCoefficient() const;
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
