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

#ifndef IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcMechanicalSteelMaterialProperties : public IfcMechanicalMaterialProperties {
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
         * Gets the value of the explicit attribute 'YieldStress'.
         * 
         */
        virtual IfcPressureMeasure getYieldStress();
        /**
         * (const) Returns the value of the explicit attribute 'YieldStress'.
         * 
         * @return the value of the explicit attribute 'YieldStress'
         */
        virtual const IfcPressureMeasure getYieldStress() const;
        /**
         * Sets the value of the explicit attribute 'YieldStress'.
         * 
         * @param value
         */
        virtual void setYieldStress(IfcPressureMeasure value);
        /**
         * Gets the value of the explicit attribute 'UltimateStress'.
         * 
         */
        virtual IfcPressureMeasure getUltimateStress();
        /**
         * (const) Returns the value of the explicit attribute 'UltimateStress'.
         * 
         * @return the value of the explicit attribute 'UltimateStress'
         */
        virtual const IfcPressureMeasure getUltimateStress() const;
        /**
         * Sets the value of the explicit attribute 'UltimateStress'.
         * 
         * @param value
         */
        virtual void setUltimateStress(IfcPressureMeasure value);
        /**
         * Gets the value of the explicit attribute 'UltimateStrain'.
         * 
         */
        virtual IfcPositiveRatioMeasure getUltimateStrain();
        /**
         * (const) Returns the value of the explicit attribute 'UltimateStrain'.
         * 
         * @return the value of the explicit attribute 'UltimateStrain'
         */
        virtual const IfcPositiveRatioMeasure getUltimateStrain() const;
        /**
         * Sets the value of the explicit attribute 'UltimateStrain'.
         * 
         * @param value
         */
        virtual void setUltimateStrain(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'HardeningModule'.
         * 
         */
        virtual IfcModulusOfElasticityMeasure getHardeningModule();
        /**
         * (const) Returns the value of the explicit attribute 'HardeningModule'.
         * 
         * @return the value of the explicit attribute 'HardeningModule'
         */
        virtual const IfcModulusOfElasticityMeasure getHardeningModule() const;
        /**
         * Sets the value of the explicit attribute 'HardeningModule'.
         * 
         * @param value
         */
        virtual void setHardeningModule(IfcModulusOfElasticityMeasure value);
        /**
         * Gets the value of the explicit attribute 'ProportionalStress'.
         * 
         */
        virtual IfcPressureMeasure getProportionalStress();
        /**
         * (const) Returns the value of the explicit attribute 'ProportionalStress'.
         * 
         * @return the value of the explicit attribute 'ProportionalStress'
         */
        virtual const IfcPressureMeasure getProportionalStress() const;
        /**
         * Sets the value of the explicit attribute 'ProportionalStress'.
         * 
         * @param value
         */
        virtual void setProportionalStress(IfcPressureMeasure value);
        /**
         * Gets the value of the explicit attribute 'PlasticStrain'.
         * 
         */
        virtual IfcPositiveRatioMeasure getPlasticStrain();
        /**
         * (const) Returns the value of the explicit attribute 'PlasticStrain'.
         * 
         * @return the value of the explicit attribute 'PlasticStrain'
         */
        virtual const IfcPositiveRatioMeasure getPlasticStrain() const;
        /**
         * Sets the value of the explicit attribute 'PlasticStrain'.
         * 
         * @param value
         */
        virtual void setPlasticStrain(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'Relaxations'.
         * 
         */
        virtual Set_IfcRelaxation_1_n &getRelaxations();
        /**
         * (const) Returns the value of the explicit attribute 'Relaxations'.
         * 
         * @return the value of the explicit attribute 'Relaxations'
         */
        virtual const Set_IfcRelaxation_1_n &getRelaxations() const;
        /**
         * Sets the value of the explicit attribute 'Relaxations'.
         * 
         * @param value
         */
        virtual void setRelaxations(const Set_IfcRelaxation_1_n &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMechanicalSteelMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalSteelMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_yieldStress;
        /**
         */
        Step::Real m_ultimateStress;
        /**
         */
        Step::Real m_ultimateStrain;
        /**
         */
        Step::Real m_hardeningModule;
        /**
         */
        Step::Real m_proportionalStress;
        /**
         */
        Step::Real m_plasticStrain;
        /**
         */
        Set_IfcRelaxation_1_n m_relaxations;

    };

}

#endif // IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
