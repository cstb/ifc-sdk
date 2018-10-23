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
     * Generated class for the IfcMechanicalConcreteMaterialProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcMechanicalConcreteMaterialProperties : public IfcMechanicalMaterialProperties
    {

        // Attributes
        IfcPressureMeasure m_CompressiveStrength;
        IfcPositiveLengthMeasure m_MaxAggregateSize;
        IfcText m_AdmixturesDescription;
        IfcText m_Workability;
        IfcNormalisedRatioMeasure m_ProtectivePoreRatio;
        IfcText m_WaterImpermeability;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute CompressiveStrength
        /// @{
        virtual IfcPressureMeasure getCompressiveStrength();
        virtual IfcPressureMeasure getCompressiveStrength() const;
        virtual void setCompressiveStrength(IfcPressureMeasure value);
        virtual void unsetCompressiveStrength();
        virtual bool testCompressiveStrength() const;
        /// @}

        /// Attribute MaxAggregateSize
        /// @{
        virtual IfcPositiveLengthMeasure getMaxAggregateSize();
        virtual IfcPositiveLengthMeasure getMaxAggregateSize() const;
        virtual void setMaxAggregateSize(IfcPositiveLengthMeasure value);
        virtual void unsetMaxAggregateSize();
        virtual bool testMaxAggregateSize() const;
        /// @}

        /// Attribute AdmixturesDescription
        /// @{
        virtual IfcText getAdmixturesDescription();
        virtual const IfcText getAdmixturesDescription() const;
        virtual void setAdmixturesDescription(const IfcText &value);
        virtual void unsetAdmixturesDescription();
        virtual bool testAdmixturesDescription() const;
        /// @}

        /// Attribute Workability
        /// @{
        virtual IfcText getWorkability();
        virtual const IfcText getWorkability() const;
        virtual void setWorkability(const IfcText &value);
        virtual void unsetWorkability();
        virtual bool testWorkability() const;
        /// @}

        /// Attribute ProtectivePoreRatio
        /// @{
        virtual IfcNormalisedRatioMeasure getProtectivePoreRatio();
        virtual IfcNormalisedRatioMeasure getProtectivePoreRatio() const;
        virtual void setProtectivePoreRatio(IfcNormalisedRatioMeasure value);
        virtual void unsetProtectivePoreRatio();
        virtual bool testProtectivePoreRatio() const;
        /// @}

        /// Attribute WaterImpermeability
        /// @{
        virtual IfcText getWaterImpermeability();
        virtual const IfcText getWaterImpermeability() const;
        virtual void setWaterImpermeability(const IfcText &value);
        virtual void unsetWaterImpermeability();
        virtual bool testWaterImpermeability() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcMechanicalConcreteMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalConcreteMaterialProperties();

        virtual bool init();

        virtual void copy(const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3