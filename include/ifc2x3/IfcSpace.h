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

#include <ifc2x3/IfcSpatialStructureElement.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSpace Entity.
     *
     */
    class IFC2X3_EXPORT IfcSpace : public IfcSpatialStructureElement
    {

        // Attributes
        IfcInternalOrExternalEnum m_InteriorOrExteriorSpace;
        IfcLengthMeasure m_ElevationWithFlooring;
        // InverseAttributes
        Inverse_Set_IfcRelCoversSpaces_0_n m_HasCoverings;
        Inverse_Set_IfcRelSpaceBoundary_0_n m_BoundedBy;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute InteriorOrExteriorSpace
        /// @{
        virtual IfcInternalOrExternalEnum getInteriorOrExteriorSpace();
        virtual IfcInternalOrExternalEnum getInteriorOrExteriorSpace() const;
        virtual void setInteriorOrExteriorSpace(IfcInternalOrExternalEnum value);
        virtual void unsetInteriorOrExteriorSpace();
        virtual bool testInteriorOrExteriorSpace() const;
        /// @}

        /// Attribute ElevationWithFlooring
        /// @{
        virtual IfcLengthMeasure getElevationWithFlooring();
        virtual IfcLengthMeasure getElevationWithFlooring() const;
        virtual void setElevationWithFlooring(IfcLengthMeasure value);
        virtual void unsetElevationWithFlooring();
        virtual bool testElevationWithFlooring() const;
        /// @}

        /// Inverse attribute HasCoverings
        /// @{
        virtual Inverse_Set_IfcRelCoversSpaces_0_n &getHasCoverings();
        virtual const Inverse_Set_IfcRelCoversSpaces_0_n &getHasCoverings() const;
        virtual bool testHasCoverings() const;

        friend class IfcRelCoversSpaces;
        /// @}

        /// Inverse attribute BoundedBy
        /// @{
        virtual Inverse_Set_IfcRelSpaceBoundary_0_n &getBoundedBy();
        virtual const Inverse_Set_IfcRelSpaceBoundary_0_n &getBoundedBy() const;
        virtual bool testBoundedBy() const;

        friend class IfcRelSpaceBoundary;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSpace(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpace();

        virtual bool init();

        virtual void copy(const IfcSpace &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3