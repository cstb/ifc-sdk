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

#include <ifc2x3/IfcBuildingElement.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcCovering Entity.
     *
     */
    class IFC2X3_EXPORT IfcCovering : public IfcBuildingElement
    {

        // Attributes
        IfcCoveringTypeEnum m_PredefinedType;
        // InverseAttributes
        Inverse_Set_IfcRelCoversBldgElements_0_1 m_Covers;
        Inverse_Set_IfcRelCoversSpaces_0_1 m_CoversSpaces;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PredefinedType
        /// @{
        virtual IfcCoveringTypeEnum getPredefinedType();
        virtual IfcCoveringTypeEnum getPredefinedType() const;
        virtual void setPredefinedType(IfcCoveringTypeEnum value);
        virtual void unsetPredefinedType();
        virtual bool testPredefinedType() const;
        /// @}

        /// Inverse attribute Covers
        /// @{
        virtual Inverse_Set_IfcRelCoversBldgElements_0_1 &getCovers();
        virtual const Inverse_Set_IfcRelCoversBldgElements_0_1 &getCovers() const;
        virtual bool testCovers() const;

        friend class IfcRelCoversBldgElements;
        /// @}

        /// Inverse attribute CoversSpaces
        /// @{
        virtual Inverse_Set_IfcRelCoversSpaces_0_1 &getCoversSpaces();
        virtual const Inverse_Set_IfcRelCoversSpaces_0_1 &getCoversSpaces() const;
        virtual bool testCoversSpaces() const;

        friend class IfcRelCoversSpaces;
        /// @}



        friend class Inverted_IfcRelCoversSpaces_RelatedCoverings_type;
        friend class Inverted_IfcRelCoversBldgElements_RelatedCoverings_type;


        friend class ExpressDataSet;

    protected:

        IfcCovering(Step::Id id, Step::SPFData *args);
        virtual ~IfcCovering();

        virtual bool init();

        virtual void copy(const IfcCovering &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3