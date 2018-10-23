#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcMechanicalMaterialProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcMechanicalSteelMaterialProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcMechanicalSteelMaterialProperties : public IfcMechanicalMaterialProperties
    {

        // Attributes
        IfcPressureMeasure m_YieldStress;
        IfcPressureMeasure m_UltimateStress;
        IfcPositiveRatioMeasure m_UltimateStrain;
        IfcModulusOfElasticityMeasure m_HardeningModule;
        IfcPressureMeasure m_ProportionalStress;
        IfcPositiveRatioMeasure m_PlasticStrain;
        Set_IfcRelaxation_1_n m_Relaxations;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute YieldStress
        /// @{
        virtual IfcPressureMeasure getYieldStress();
        virtual IfcPressureMeasure getYieldStress() const;
        virtual void setYieldStress(IfcPressureMeasure value);
        virtual void unsetYieldStress();
        virtual bool testYieldStress() const;
        /// @}

        /// Attribute UltimateStress
        /// @{
        virtual IfcPressureMeasure getUltimateStress();
        virtual IfcPressureMeasure getUltimateStress() const;
        virtual void setUltimateStress(IfcPressureMeasure value);
        virtual void unsetUltimateStress();
        virtual bool testUltimateStress() const;
        /// @}

        /// Attribute UltimateStrain
        /// @{
        virtual IfcPositiveRatioMeasure getUltimateStrain();
        virtual IfcPositiveRatioMeasure getUltimateStrain() const;
        virtual void setUltimateStrain(IfcPositiveRatioMeasure value);
        virtual void unsetUltimateStrain();
        virtual bool testUltimateStrain() const;
        /// @}

        /// Attribute HardeningModule
        /// @{
        virtual IfcModulusOfElasticityMeasure getHardeningModule();
        virtual IfcModulusOfElasticityMeasure getHardeningModule() const;
        virtual void setHardeningModule(IfcModulusOfElasticityMeasure value);
        virtual void unsetHardeningModule();
        virtual bool testHardeningModule() const;
        /// @}

        /// Attribute ProportionalStress
        /// @{
        virtual IfcPressureMeasure getProportionalStress();
        virtual IfcPressureMeasure getProportionalStress() const;
        virtual void setProportionalStress(IfcPressureMeasure value);
        virtual void unsetProportionalStress();
        virtual bool testProportionalStress() const;
        /// @}

        /// Attribute PlasticStrain
        /// @{
        virtual IfcPositiveRatioMeasure getPlasticStrain();
        virtual IfcPositiveRatioMeasure getPlasticStrain() const;
        virtual void setPlasticStrain(IfcPositiveRatioMeasure value);
        virtual void unsetPlasticStrain();
        virtual bool testPlasticStrain() const;
        /// @}

        /// Attribute Relaxations
        /// @{
        virtual Set_IfcRelaxation_1_n &getRelaxations();
        virtual const Set_IfcRelaxation_1_n &getRelaxations() const;
        virtual void setRelaxations(const Set_IfcRelaxation_1_n &value);
        virtual void unsetRelaxations();
        virtual bool testRelaxations() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcMechanicalSteelMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalSteelMaterialProperties();

        virtual bool init();

        virtual void copy(const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3