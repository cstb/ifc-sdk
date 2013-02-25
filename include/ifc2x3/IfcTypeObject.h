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

#ifndef IFC2X3_IFCTYPEOBJECT_H
#define IFC2X3_IFCTYPEOBJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcObjectDefinition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcPropertySetDefinition;
    class IfcTypeObject;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcTypeObject_HasPropertySets_type : public Set_IfcPropertySetDefinition_1_n {
    public:
        /**
         */
        typedef Set_IfcPropertySetDefinition_1_n::size_type size_type;

        /**
         */
        Inverted_IfcTypeObject_HasPropertySets_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcPropertySetDefinition > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcPropertySetDefinition > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcTypeObject;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcTypeObject *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcTypeObject *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcTypeObject Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTypeObject : public IfcObjectDefinition {
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
         * Gets the value of the explicit attribute 'ApplicableOccurrence'.
         * 
         */
        virtual IfcLabel getApplicableOccurrence();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicableOccurrence'.
         * 
         * @return the value of the explicit attribute 'ApplicableOccurrence'
         */
        virtual const IfcLabel getApplicableOccurrence() const;
        /**
         * Sets the value of the explicit attribute 'ApplicableOccurrence'.
         * 
         * @param value
         */
        virtual void setApplicableOccurrence(const IfcLabel &value);
        /**
         * unset the attribute 'ApplicableOccurrence'.
         * 
         */
        virtual void unsetApplicableOccurrence();
        /**
         * Test if the attribute 'ApplicableOccurrence' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApplicableOccurrence() const;
        /**
         * Gets the value of the explicit attribute 'HasPropertySets'.
         * 
         */
        virtual Set_IfcPropertySetDefinition_1_n &getHasPropertySets();
        /**
         * (const) Returns the value of the explicit attribute 'HasPropertySets'.
         * 
         * @return the value of the explicit attribute 'HasPropertySets'
         */
        virtual const Set_IfcPropertySetDefinition_1_n &getHasPropertySets() const;
        /**
         * unset the attribute 'HasPropertySets'.
         * 
         */
        virtual void unsetHasPropertySets();
        /**
         * Test if the attribute 'HasPropertySets' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasPropertySets() const;
        /**
         * Gets the value of the inverse attribute 'ObjectTypeOf'.
         * 
         */
        virtual Inverse_Set_IfcRelDefinesByType_0_1 &getObjectTypeOf();
        /**
         * (const) Returns the value of the explicit attribute 'ObjectTypeOf'.
         * 
         * @return the value of the explicit attribute 'ObjectTypeOf'
         */
        const virtual Inverse_Set_IfcRelDefinesByType_0_1 &getObjectTypeOf() const;
        /**
         * Test if the attribute 'ObjectTypeOf' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testObjectTypeOf() const;
        friend class ExpressDataSet;
        friend class IfcRelDefinesByType;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTypeObject(Step::Id id, Step::SPFData *args);
        virtual ~IfcTypeObject();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTypeObject &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_applicableOccurrence;
        /**
         */
        Inverted_IfcTypeObject_HasPropertySets_type m_hasPropertySets;
        /**
         */
        Inverse_Set_IfcRelDefinesByType_0_1 m_objectTypeOf;

    };

}

#endif // IFC2X3_IFCTYPEOBJECT_H
