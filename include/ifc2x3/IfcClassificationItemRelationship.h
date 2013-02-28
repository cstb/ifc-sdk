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

#ifndef IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
#define IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcClassificationItem;
    class IfcClassificationItemRelationship;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcClassificationItemRelationship_RelatedItems_type : public Set_IfcClassificationItem_1_n {
    public:
        /**
         */
        typedef Set_IfcClassificationItem_1_n::size_type size_type;

        /**
         */
        Inverted_IfcClassificationItemRelationship_RelatedItems_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcClassificationItem > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcClassificationItem > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcClassificationItemRelationship;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcClassificationItemRelationship *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcClassificationItemRelationship *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcClassificationItemRelationship Entity.
     * 
     */
    class IFC2X3_EXPORT IfcClassificationItemRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'RelatingItem'.
         * 
         */
        virtual IfcClassificationItem *getRelatingItem();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingItem'.
         * 
         * @return the value of the explicit attribute 'RelatingItem'
         */
        virtual const IfcClassificationItem *getRelatingItem() const;
        /**
         * Sets the value of the explicit attribute 'RelatingItem'.
         * 
         * @param value
         */
        virtual void setRelatingItem(const Step::RefPtr< IfcClassificationItem > &value);
        /**
         * unset the attribute 'RelatingItem'.
         * 
         */
        virtual void unsetRelatingItem();
        /**
         * Test if the attribute 'RelatingItem' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingItem() const;
        /**
         * Gets the value of the explicit attribute 'RelatedItems'.
         * 
         */
        virtual Set_IfcClassificationItem_1_n &getRelatedItems();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedItems'.
         * 
         * @return the value of the explicit attribute 'RelatedItems'
         */
        virtual const Set_IfcClassificationItem_1_n &getRelatedItems() const;
        /**
         * unset the attribute 'RelatedItems'.
         * 
         */
        virtual void unsetRelatedItems();
        /**
         * Test if the attribute 'RelatedItems' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedItems() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcClassificationItemRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassificationItemRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcClassificationItemRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcClassificationItem > m_relatingItem;
        /**
         */
        Inverted_IfcClassificationItemRelationship_RelatedItems_type m_relatedItems;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
