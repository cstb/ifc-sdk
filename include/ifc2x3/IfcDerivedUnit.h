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

#ifndef IFC2X3_IFCDERIVEDUNIT_H
#define IFC2X3_IFCDERIVEDUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcDerivedUnit Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDerivedUnit : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Elements'.
         * 
         */
        virtual Set_IfcDerivedUnitElement_1_n &getElements();
        /**
         * (const) Returns the value of the explicit attribute 'Elements'.
         * 
         * @return the value of the explicit attribute 'Elements'
         */
        virtual const Set_IfcDerivedUnitElement_1_n &getElements() const;
        /**
         * Sets the value of the explicit attribute 'Elements'.
         * 
         * @param value
         */
        virtual void setElements(const Set_IfcDerivedUnitElement_1_n &value);
        /**
         * unset the attribute 'Elements'.
         * 
         */
        virtual void unsetElements();
        /**
         * Test if the attribute 'Elements' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElements() const;
        /**
         * Gets the value of the explicit attribute 'UnitType'.
         * 
         */
        virtual IfcDerivedUnitEnum getUnitType();
        /**
         * (const) Returns the value of the explicit attribute 'UnitType'.
         * 
         * @return the value of the explicit attribute 'UnitType'
         */
        virtual const IfcDerivedUnitEnum getUnitType() const;
        /**
         * Sets the value of the explicit attribute 'UnitType'.
         * 
         * @param value
         */
        virtual void setUnitType(IfcDerivedUnitEnum value);
        /**
         * unset the attribute 'UnitType'.
         * 
         */
        virtual void unsetUnitType();
        /**
         * Test if the attribute 'UnitType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnitType() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedType'.
         * 
         */
        virtual IfcLabel getUserDefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedType'.
         * 
         * @return the value of the explicit attribute 'UserDefinedType'
         */
        virtual const IfcLabel getUserDefinedType() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedType'.
         * 
         * @param value
         */
        virtual void setUserDefinedType(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedType'.
         * 
         */
        virtual void unsetUserDefinedType();
        /**
         * Test if the attribute 'UserDefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedType() const;
        /**
         * Gets the value of the derived attribute 'Dimensions'.
         * 
         */
        virtual IfcDimensionalExponents *getDimensions() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDerivedUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcDerivedUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDerivedUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcDerivedUnitElement_1_n m_elements;
        /**
         */
        IfcDerivedUnitEnum m_unitType;
        /**
         */
        Step::String m_userDefinedType;

    };

}

#endif // IFC2X3_IFCDERIVEDUNIT_H
