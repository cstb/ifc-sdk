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
    class Inverted_IfcReferencesValueDocument_ReferencingValues_type : public Set_IfcAppliedValue_1_n
    {

    public:
        /**
         */
        typedef Set_IfcAppliedValue_1_n::size_type size_type;

        /**
         */
        Inverted_IfcReferencesValueDocument_ReferencingValues_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcAppliedValue > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcAppliedValue > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcAppliedValue > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcReferencesValueDocument;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcReferencesValueDocument *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcReferencesValueDocument *owner);
    };


    /**
     * Generated class for the IfcReferencesValueDocument Entity.
     *
     */
    class IFC2X3_EXPORT IfcReferencesValueDocument : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcDocumentSelect > m_ReferencedDocument;
        IfcLabel m_Name;
        IfcText m_Description;
        // InvertedAttributes
        Inverted_IfcReferencesValueDocument_ReferencingValues_type m_ReferencingValues;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ReferencedDocument
        /// @{
        virtual IfcDocumentSelect *getReferencedDocument();
        virtual const IfcDocumentSelect *getReferencedDocument() const;
        virtual void setReferencedDocument(const Step::RefPtr< IfcDocumentSelect > &value);
        virtual void unsetReferencedDocument();
        virtual bool testReferencedDocument() const;
        /// @}

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

        /// Attribute ReferencingValues
        /// @{
        virtual Set_IfcAppliedValue_1_n &getReferencingValues();
        virtual const Set_IfcAppliedValue_1_n &getReferencingValues() const;
        virtual void unsetReferencingValues();
        virtual bool testReferencingValues() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcReferencesValueDocument(Step::Id id, Step::SPFData *args);
        virtual ~IfcReferencesValueDocument();

        virtual bool init();

        virtual void copy(const IfcReferencesValueDocument &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3