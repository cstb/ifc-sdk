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
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcPresentationLayerAssignment_AssignedItems_type : public Set_IfcLayeredItem_1_n
    {

    public:
        /**
         */
        typedef Set_IfcLayeredItem_1_n::size_type size_type;

        /**
         */
        Inverted_IfcPresentationLayerAssignment_AssignedItems_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcLayeredItem > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcLayeredItem > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcLayeredItem > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcPresentationLayerAssignment;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcPresentationLayerAssignment *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcPresentationLayerAssignment *owner);
    };


    /**
     * Generated class for the IfcPresentationLayerAssignment Entity.
     *
     */
    class IFC2X3_EXPORT IfcPresentationLayerAssignment : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_Name;
        IfcText m_Description;
        IfcIdentifier m_Identifier;
        // InvertedAttributes
        Inverted_IfcPresentationLayerAssignment_AssignedItems_type m_AssignedItems;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Attribute Identifier
        /// @{
        virtual IfcIdentifier getIdentifier();
        virtual const IfcIdentifier getIdentifier() const;
        virtual void setIdentifier(const IfcIdentifier &value);
        virtual void unsetIdentifier();
        virtual bool testIdentifier() const;
        /// @}

        /// Attribute AssignedItems
        /// @{
        virtual Set_IfcLayeredItem_1_n &getAssignedItems();
        virtual const Set_IfcLayeredItem_1_n &getAssignedItems() const;
        virtual void unsetAssignedItems();
        virtual bool testAssignedItems() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPresentationLayerAssignment(Step::Id id, Step::SPFData *args);
        virtual ~IfcPresentationLayerAssignment();

        virtual bool init();

        virtual void copy(const IfcPresentationLayerAssignment &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3