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

#ifndef IFC2X3_IFCRELASSIGNS_H
#define IFC2X3_IFCRELASSIGNS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelationship.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcObjectDefinition;
    class IfcRelAssigns;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcRelAssigns_RelatedObjects_type : public Set_IfcObjectDefinition_1_n {
    public:
        /**
         */
        typedef Set_IfcObjectDefinition_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelAssigns_RelatedObjects_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcObjectDefinition > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcObjectDefinition > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcRelAssigns;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcRelAssigns *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelAssigns *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcRelAssigns Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelAssigns : public IfcRelationship {
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
         * Gets the value of the explicit attribute 'RelatedObjects'.
         * 
         */
        virtual Set_IfcObjectDefinition_1_n &getRelatedObjects();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedObjects'.
         * 
         * @return the value of the explicit attribute 'RelatedObjects'
         */
        virtual const Set_IfcObjectDefinition_1_n &getRelatedObjects() const;
        /**
         * unset the attribute 'RelatedObjects'.
         * 
         */
        virtual void unsetRelatedObjects();
        /**
         * Test if the attribute 'RelatedObjects' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedObjects() const;
        /**
         * Gets the value of the explicit attribute 'RelatedObjectsType'.
         * 
         */
        virtual IfcObjectTypeEnum getRelatedObjectsType();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedObjectsType'.
         * 
         * @return the value of the explicit attribute 'RelatedObjectsType'
         */
        virtual const IfcObjectTypeEnum getRelatedObjectsType() const;
        /**
         * Sets the value of the explicit attribute 'RelatedObjectsType'.
         * 
         * @param value
         */
        virtual void setRelatedObjectsType(IfcObjectTypeEnum value);
        /**
         * unset the attribute 'RelatedObjectsType'.
         * 
         */
        virtual void unsetRelatedObjectsType();
        /**
         * Test if the attribute 'RelatedObjectsType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedObjectsType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssigns(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssigns();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssigns &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelAssigns_RelatedObjects_type m_relatedObjects;
        /**
         */
        IfcObjectTypeEnum m_relatedObjectsType;

    };

}

#endif // IFC2X3_IFCRELASSIGNS_H
