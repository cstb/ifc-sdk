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

#include <ifc2x3/IfcRoot.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcObjectDefinition Entity.
     *
     */
    class IFC2X3_EXPORT IfcObjectDefinition : public IfcRoot
    {

        // InverseAttributes
        Inverse_Set_IfcRelAssigns_0_n m_HasAssignments;
        Inverse_Set_IfcRelDecomposes_0_1 m_Decomposes;
        Inverse_Set_IfcRelAssociates_0_n m_HasAssociations;
        Inverse_Set_IfcRelDecomposes_0_n m_IsDecomposedBy;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Inverse attribute HasAssignments
        /// @{
        virtual Inverse_Set_IfcRelAssigns_0_n &getHasAssignments();
        virtual const Inverse_Set_IfcRelAssigns_0_n &getHasAssignments() const;
        virtual bool testHasAssignments() const;

        friend class IfcRelAssigns;
        /// @}

        /// Inverse attribute Decomposes
        /// @{
        virtual Inverse_Set_IfcRelDecomposes_0_1 &getDecomposes();
        virtual const Inverse_Set_IfcRelDecomposes_0_1 &getDecomposes() const;
        virtual bool testDecomposes() const;

        friend class IfcRelDecomposes;
        /// @}

        /// Inverse attribute HasAssociations
        /// @{
        virtual Inverse_Set_IfcRelAssociates_0_n &getHasAssociations();
        virtual const Inverse_Set_IfcRelAssociates_0_n &getHasAssociations() const;
        virtual bool testHasAssociations() const;

        friend class IfcRelAssociates;
        /// @}

        /// Inverse attribute IsDecomposedBy
        /// @{
        virtual Inverse_Set_IfcRelDecomposes_0_n &getIsDecomposedBy();
        virtual const Inverse_Set_IfcRelDecomposes_0_n &getIsDecomposedBy() const;
        virtual bool testIsDecomposedBy() const;

        friend class IfcRelDecomposes;
        /// @}



        friend class Inverted_IfcRelAssigns_RelatedObjects_type;
        friend class Inverted_IfcRelDecomposes_RelatedObjects_type;
        friend class Inverted_IfcRelAssociates_RelatedObjects_type;


        friend class ExpressDataSet;

    protected:

        IfcObjectDefinition(Step::Id id, Step::SPFData *args);
        virtual ~IfcObjectDefinition();

        virtual bool init();

        virtual void copy(const IfcObjectDefinition &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3