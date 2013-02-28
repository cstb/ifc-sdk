// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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

#ifndef IFC2X3_IFCDOCUMENTINFORMATIONRELATIONSHIP_H
#define IFC2X3_IFCDOCUMENTINFORMATIONRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcDocumentInformation;
    class IfcDocumentInformationRelationship;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type : public Set_IfcDocumentInformation_1_n {
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
        virtual void insert(const Step::RefPtr< IfcDocumentInformation > &value) throw(std::out_of_range);
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

    class CopyOp;

    /**
     * Generated class for the IfcDocumentInformationRelationship Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDocumentInformationRelationship : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'RelatingDocument'.
         * 
         */
        virtual IfcDocumentInformation *getRelatingDocument();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingDocument'.
         * 
         * @return the value of the explicit attribute 'RelatingDocument'
         */
        virtual const IfcDocumentInformation *getRelatingDocument() const;
        /**
         * Sets the value of the explicit attribute 'RelatingDocument'.
         * 
         * @param value
         */
        virtual void setRelatingDocument(const Step::RefPtr< IfcDocumentInformation > &value);
        /**
         * unset the attribute 'RelatingDocument'.
         * 
         */
        virtual void unsetRelatingDocument();
        /**
         * Test if the attribute 'RelatingDocument' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingDocument() const;
        /**
         * Gets the value of the explicit attribute 'RelatedDocuments'.
         * 
         */
        virtual Set_IfcDocumentInformation_1_n &getRelatedDocuments();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedDocuments'.
         * 
         * @return the value of the explicit attribute 'RelatedDocuments'
         */
        virtual const Set_IfcDocumentInformation_1_n &getRelatedDocuments() const;
        /**
         * unset the attribute 'RelatedDocuments'.
         * 
         */
        virtual void unsetRelatedDocuments();
        /**
         * Test if the attribute 'RelatedDocuments' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedDocuments() const;
        /**
         * Gets the value of the explicit attribute 'RelationshipType'.
         * 
         */
        virtual IfcLabel getRelationshipType();
        /**
         * (const) Returns the value of the explicit attribute 'RelationshipType'.
         * 
         * @return the value of the explicit attribute 'RelationshipType'
         */
        virtual const IfcLabel getRelationshipType() const;
        /**
         * Sets the value of the explicit attribute 'RelationshipType'.
         * 
         * @param value
         */
        virtual void setRelationshipType(const IfcLabel &value);
        /**
         * unset the attribute 'RelationshipType'.
         * 
         */
        virtual void unsetRelationshipType();
        /**
         * Test if the attribute 'RelationshipType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelationshipType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDocumentInformationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcDocumentInformationRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDocumentInformation > m_relatingDocument;
        /**
         */
        Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type m_relatedDocuments;
        /**
         */
        Step::String m_relationshipType;

    };

}

#endif // IFC2X3_IFCDOCUMENTINFORMATIONRELATIONSHIP_H
