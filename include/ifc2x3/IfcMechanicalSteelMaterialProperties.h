// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcMechanicalMaterialProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcMechanicalSteelMaterialProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMechanicalSteelMaterialProperties : public IfcMechanicalMaterialProperties {
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
         * unset the attribute 'YieldStress'.
         * 
         */
        virtual void unsetYieldStress();
        /**
         * Test if the attribute 'YieldStress' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testYieldStress() const;
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
         * unset the attribute 'UltimateStress'.
         * 
         */
        virtual void unsetUltimateStress();
        /**
         * Test if the attribute 'UltimateStress' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUltimateStress() const;
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
         * unset the attribute 'UltimateStrain'.
         * 
         */
        virtual void unsetUltimateStrain();
        /**
         * Test if the attribute 'UltimateStrain' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUltimateStrain() const;
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
         * unset the attribute 'HardeningModule'.
         * 
         */
        virtual void unsetHardeningModule();
        /**
         * Test if the attribute 'HardeningModule' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHardeningModule() const;
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
         * unset the attribute 'ProportionalStress'.
         * 
         */
        virtual void unsetProportionalStress();
        /**
         * Test if the attribute 'ProportionalStress' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProportionalStress() const;
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
         * unset the attribute 'PlasticStrain'.
         * 
         */
        virtual void unsetPlasticStrain();
        /**
         * Test if the attribute 'PlasticStrain' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlasticStrain() const;
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
        /**
         * unset the attribute 'Relaxations'.
         * 
         */
        virtual void unsetRelaxations();
        /**
         * Test if the attribute 'Relaxations' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelaxations() const;
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
