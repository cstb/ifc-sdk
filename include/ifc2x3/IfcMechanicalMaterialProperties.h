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

#include <ifc2x3/IfcMaterialProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcMechanicalMaterialProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcMechanicalMaterialProperties : public IfcMaterialProperties
    {

        // Attributes
        IfcDynamicViscosityMeasure m_DynamicViscosity;
        IfcModulusOfElasticityMeasure m_YoungModulus;
        IfcModulusOfElasticityMeasure m_ShearModulus;
        IfcPositiveRatioMeasure m_PoissonRatio;
        IfcThermalExpansionCoefficientMeasure m_ThermalExpansionCoefficient;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DynamicViscosity
        /// @{
        virtual IfcDynamicViscosityMeasure getDynamicViscosity();
        virtual IfcDynamicViscosityMeasure getDynamicViscosity() const;
        virtual void setDynamicViscosity(IfcDynamicViscosityMeasure value);
        virtual void unsetDynamicViscosity();
        virtual bool testDynamicViscosity() const;
        /// @}

        /// Attribute YoungModulus
        /// @{
        virtual IfcModulusOfElasticityMeasure getYoungModulus();
        virtual IfcModulusOfElasticityMeasure getYoungModulus() const;
        virtual void setYoungModulus(IfcModulusOfElasticityMeasure value);
        virtual void unsetYoungModulus();
        virtual bool testYoungModulus() const;
        /// @}

        /// Attribute ShearModulus
        /// @{
        virtual IfcModulusOfElasticityMeasure getShearModulus();
        virtual IfcModulusOfElasticityMeasure getShearModulus() const;
        virtual void setShearModulus(IfcModulusOfElasticityMeasure value);
        virtual void unsetShearModulus();
        virtual bool testShearModulus() const;
        /// @}

        /// Attribute PoissonRatio
        /// @{
        virtual IfcPositiveRatioMeasure getPoissonRatio();
        virtual IfcPositiveRatioMeasure getPoissonRatio() const;
        virtual void setPoissonRatio(IfcPositiveRatioMeasure value);
        virtual void unsetPoissonRatio();
        virtual bool testPoissonRatio() const;
        /// @}

        /// Attribute ThermalExpansionCoefficient
        /// @{
        virtual IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient();
        virtual IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient() const;
        virtual void setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value);
        virtual void unsetThermalExpansionCoefficient();
        virtual bool testThermalExpansionCoefficient() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcMechanicalMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalMaterialProperties();

        virtual bool init();

        virtual void copy(const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3