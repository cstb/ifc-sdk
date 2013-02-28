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

#ifndef IFC2X3_IFCPROPERTYSINGLEVALUE_H
#define IFC2X3_IFCPROPERTYSINGLEVALUE_H
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
    class IfcUnit;
    class IfcValue;

    /**
     * Generated class for the IfcPropertySingleValue Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPropertySingleValue : public IfcSimpleProperty {
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
         * Gets the value of the explicit attribute 'NominalValue'.
         * 
         */
        virtual IfcValue *getNominalValue();
        /**
         * (const) Returns the value of the explicit attribute 'NominalValue'.
         * 
         * @return the value of the explicit attribute 'NominalValue'
         */
        virtual const IfcValue *getNominalValue() const;
        /**
         * Sets the value of the explicit attribute 'NominalValue'.
         * 
         * @param value
         */
        virtual void setNominalValue(const Step::RefPtr< IfcValue > &value);
        /**
         * unset the attribute 'NominalValue'.
         * 
         */
        virtual void unsetNominalValue();
        /**
         * Test if the attribute 'NominalValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNominalValue() const;
        /**
         * Gets the value of the explicit attribute 'Unit'.
         * 
         */
        virtual IfcUnit *getUnit();
        /**
         * (const) Returns the value of the explicit attribute 'Unit'.
         * 
         * @return the value of the explicit attribute 'Unit'
         */
        virtual const IfcUnit *getUnit() const;
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        virtual void setUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         * unset the attribute 'Unit'.
         * 
         */
        virtual void unsetUnit();
        /**
         * Test if the attribute 'Unit' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnit() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertySingleValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertySingleValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertySingleValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcValue > m_nominalValue;
        /**
         */
        Step::RefPtr< IfcUnit > m_unit;

    };

}

#endif // IFC2X3_IFCPROPERTYSINGLEVALUE_H
