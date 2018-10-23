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
    class Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type : public Set_IfcDocumentInformation_1_n
    {

    public:
        /**
         */
        typedef Set_IfcDocumentInformation_1_n::size_type size_type;

        /**
         */
        Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcDocumentInformation > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcDocumentInformation > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcDocumentInformation > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcDocumentInformationRelationship;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcDocumentInformationRelationship *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcDocumentInformationRelationship *owner);
    };


    /**
     * Generated class for the IfcDocumentInformationRelationship Entity.
     *
     */
    class IFC2X3_EXPORT IfcDocumentInformationRelationship : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_RelationshipType;
        // InvertedAttributes
        Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type m_RelatedDocuments;
        Step::RefPtr< IfcDocumentInformation > m_RelatingDocument;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RelationshipType
        /// @{
        virtual IfcLabel getRelationshipType();
        virtual const IfcLabel getRelationshipType() const;
        virtual void setRelationshipType(const IfcLabel &value);
        virtual void unsetRelationshipType();
        virtual bool testRelationshipType() const;
        /// @}

        /// Attribute RelatedDocuments
        /// @{
        virtual Set_IfcDocumentInformation_1_n &getRelatedDocuments();
        virtual const Set_IfcDocumentInformation_1_n &getRelatedDocuments() const;
        virtual void unsetRelatedDocuments();
        virtual bool testRelatedDocuments() const;
        /// @}

        /// Attribute RelatingDocument
        /// @{
        virtual IfcDocumentInformation *getRelatingDocument();
        virtual const IfcDocumentInformation *getRelatingDocument() const;
        virtual void setRelatingDocument(const Step::RefPtr< IfcDocumentInformation > &value);
        virtual void unsetRelatingDocument();
        virtual bool testRelatingDocument() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcDocumentInformationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcDocumentInformationRelationship();

        virtual bool init();

        virtual void copy(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3