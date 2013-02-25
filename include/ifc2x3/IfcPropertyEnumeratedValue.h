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

#ifndef IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
#define IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSimpleProperty.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcPropertyEnumeration;

    /**
     * Generated class for the IfcPropertyEnumeratedValue Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPropertyEnumeratedValue : public IfcSimpleProperty {
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
         * Gets the value of the explicit attribute 'EnumerationValues'.
         * 
         */
        virtual List_IfcValue_1_n &getEnumerationValues();
        /**
         * (const) Returns the value of the explicit attribute 'EnumerationValues'.
         * 
         * @return the value of the explicit attribute 'EnumerationValues'
         */
        virtual const List_IfcValue_1_n &getEnumerationValues() const;
        /**
         * Sets the value of the explicit attribute 'EnumerationValues'.
         * 
         * @param value
         */
        virtual void setEnumerationValues(const List_IfcValue_1_n &value);
        /**
         * unset the attribute 'EnumerationValues'.
         * 
         */
        virtual void unsetEnumerationValues();
        /**
         * Test if the attribute 'EnumerationValues' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEnumerationValues() const;
        /**
         * Gets the value of the explicit attribute 'EnumerationReference'.
         * 
         */
        virtual IfcPropertyEnumeration *getEnumerationReference();
        /**
         * (const) Returns the value of the explicit attribute 'EnumerationReference'.
         * 
         * @return the value of the explicit attribute 'EnumerationReference'
         */
        virtual const IfcPropertyEnumeration *getEnumerationReference() const;
        /**
         * Sets the value of the explicit attribute 'EnumerationReference'.
         * 
         * @param value
         */
        virtual void setEnumerationReference(const Step::RefPtr< IfcPropertyEnumeration > &value);
        /**
         * unset the attribute 'EnumerationReference'.
         * 
         */
        virtual void unsetEnumerationReference();
        /**
         * Test if the attribute 'EnumerationReference' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEnumerationReference() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyEnumeratedValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyEnumeratedValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcValue_1_n m_enumerationValues;
        /**
         */
        Step::RefPtr< IfcPropertyEnumeration > m_enumerationReference;

    };

}

#endif // IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
