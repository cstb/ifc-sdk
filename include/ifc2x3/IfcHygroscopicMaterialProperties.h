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
     * Generated class for the IfcHygroscopicMaterialProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcHygroscopicMaterialProperties : public IfcMaterialProperties
    {

        // Attributes
        IfcPositiveRatioMeasure m_UpperVaporResistanceFactor;
        IfcPositiveRatioMeasure m_LowerVaporResistanceFactor;
        IfcIsothermalMoistureCapacityMeasure m_IsothermalMoistureCapacity;
        IfcVaporPermeabilityMeasure m_VaporPermeability;
        IfcMoistureDiffusivityMeasure m_MoistureDiffusivity;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute UpperVaporResistanceFactor
        /// @{
        virtual IfcPositiveRatioMeasure getUpperVaporResistanceFactor();
        virtual IfcPositiveRatioMeasure getUpperVaporResistanceFactor() const;
        virtual void setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value);
        virtual void unsetUpperVaporResistanceFactor();
        virtual bool testUpperVaporResistanceFactor() const;
        /// @}

        /// Attribute LowerVaporResistanceFactor
        /// @{
        virtual IfcPositiveRatioMeasure getLowerVaporResistanceFactor();
        virtual IfcPositiveRatioMeasure getLowerVaporResistanceFactor() const;
        virtual void setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value);
        virtual void unsetLowerVaporResistanceFactor();
        virtual bool testLowerVaporResistanceFactor() const;
        /// @}

        /// Attribute IsothermalMoistureCapacity
        /// @{
        virtual IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity();
        virtual IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity() const;
        virtual void setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value);
        virtual void unsetIsothermalMoistureCapacity();
        virtual bool testIsothermalMoistureCapacity() const;
        /// @}

        /// Attribute VaporPermeability
        /// @{
        virtual IfcVaporPermeabilityMeasure getVaporPermeability();
        virtual IfcVaporPermeabilityMeasure getVaporPermeability() const;
        virtual void setVaporPermeability(IfcVaporPermeabilityMeasure value);
        virtual void unsetVaporPermeability();
        virtual bool testVaporPermeability() const;
        /// @}

        /// Attribute MoistureDiffusivity
        /// @{
        virtual IfcMoistureDiffusivityMeasure getMoistureDiffusivity();
        virtual IfcMoistureDiffusivityMeasure getMoistureDiffusivity() const;
        virtual void setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value);
        virtual void unsetMoistureDiffusivity();
        virtual bool testMoistureDiffusivity() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcHygroscopicMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcHygroscopicMaterialProperties();

        virtual bool init();

        virtual void copy(const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3