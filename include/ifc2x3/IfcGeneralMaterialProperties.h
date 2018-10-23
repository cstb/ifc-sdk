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
     * Generated class for the IfcGeneralMaterialProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcGeneralMaterialProperties : public IfcMaterialProperties
    {

        // Attributes
        IfcMolecularWeightMeasure m_MolecularWeight;
        IfcNormalisedRatioMeasure m_Porosity;
        IfcMassDensityMeasure m_MassDensity;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute MolecularWeight
        /// @{
        virtual IfcMolecularWeightMeasure getMolecularWeight();
        virtual IfcMolecularWeightMeasure getMolecularWeight() const;
        virtual void setMolecularWeight(IfcMolecularWeightMeasure value);
        virtual void unsetMolecularWeight();
        virtual bool testMolecularWeight() const;
        /// @}

        /// Attribute Porosity
        /// @{
        virtual IfcNormalisedRatioMeasure getPorosity();
        virtual IfcNormalisedRatioMeasure getPorosity() const;
        virtual void setPorosity(IfcNormalisedRatioMeasure value);
        virtual void unsetPorosity();
        virtual bool testPorosity() const;
        /// @}

        /// Attribute MassDensity
        /// @{
        virtual IfcMassDensityMeasure getMassDensity();
        virtual IfcMassDensityMeasure getMassDensity() const;
        virtual void setMassDensity(IfcMassDensityMeasure value);
        virtual void unsetMassDensity();
        virtual bool testMassDensity() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcGeneralMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeneralMaterialProperties();

        virtual bool init();

        virtual void copy(const IfcGeneralMaterialProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3