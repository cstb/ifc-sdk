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

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRepresentation Entity.
     *
     */
    class IFC2X3_EXPORT IfcRepresentation : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_RepresentationIdentifier;
        IfcLabel m_RepresentationType;
        Set_IfcRepresentationItem_1_n m_Items;
        // InvertedAttributes
        Step::RefPtr< IfcRepresentationContext > m_ContextOfItems;
        // InverseAttributes
        Inverse_Set_IfcProductRepresentation_0_1 m_OfProductRepresentation;
        Inverse_Set_IfcRepresentationMap_0_1 m_RepresentationMap;
        Inverse_Set_IfcPresentationLayerAssignment_0_n m_LayerAssignments;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RepresentationIdentifier
        /// @{
        virtual IfcLabel getRepresentationIdentifier();
        virtual const IfcLabel getRepresentationIdentifier() const;
        virtual void setRepresentationIdentifier(const IfcLabel &value);
        virtual void unsetRepresentationIdentifier();
        virtual bool testRepresentationIdentifier() const;
        /// @}

        /// Attribute RepresentationType
        /// @{
        virtual IfcLabel getRepresentationType();
        virtual const IfcLabel getRepresentationType() const;
        virtual void setRepresentationType(const IfcLabel &value);
        virtual void unsetRepresentationType();
        virtual bool testRepresentationType() const;
        /// @}

        /// Attribute Items
        /// @{
        virtual Set_IfcRepresentationItem_1_n &getItems();
        virtual const Set_IfcRepresentationItem_1_n &getItems() const;
        virtual void setItems(const Set_IfcRepresentationItem_1_n &value);
        virtual void unsetItems();
        virtual bool testItems() const;
        /// @}

        /// Attribute ContextOfItems
        /// @{
        virtual IfcRepresentationContext *getContextOfItems();
        virtual const IfcRepresentationContext *getContextOfItems() const;
        virtual void setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value);
        virtual void unsetContextOfItems();
        virtual bool testContextOfItems() const;
        /// @}

        /// Inverse attribute OfProductRepresentation
        /// @{
        virtual Inverse_Set_IfcProductRepresentation_0_1 &getOfProductRepresentation();
        virtual const Inverse_Set_IfcProductRepresentation_0_1 &getOfProductRepresentation() const;
        virtual bool testOfProductRepresentation() const;

        friend class IfcProductRepresentation;
        /// @}

        /// Inverse attribute RepresentationMap
        /// @{
        virtual Inverse_Set_IfcRepresentationMap_0_1 &getRepresentationMap();
        virtual const Inverse_Set_IfcRepresentationMap_0_1 &getRepresentationMap() const;
        virtual bool testRepresentationMap() const;

        friend class IfcRepresentationMap;
        /// @}

        /// Inverse attribute LayerAssignments
        /// @{
        virtual Inverse_Set_IfcPresentationLayerAssignment_0_n &getLayerAssignments();
        virtual const Inverse_Set_IfcPresentationLayerAssignment_0_n &getLayerAssignments() const;
        virtual bool testLayerAssignments() const;

        friend class IfcPresentationLayerAssignment;
        /// @}



        friend class Inverted_IfcProductRepresentation_Representations_type;


        friend class ExpressDataSet;

    protected:

        IfcRepresentation(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentation();

        virtual bool init();

        virtual void copy(const IfcRepresentation &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3