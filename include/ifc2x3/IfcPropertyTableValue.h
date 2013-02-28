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

#ifndef IFC2X3_IFCPROPERTYTABLEVALUE_H
#define IFC2X3_IFCPROPERTYTABLEVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSimpleProperty.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;

    /**
     * Generated class for the IfcPropertyTableValue Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPropertyTableValue : public IfcSimpleProperty {
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
         * Gets the value of the explicit attribute 'DefiningValues'.
         * 
         */
        virtual List_IfcValue_1_n &getDefiningValues();
        /**
         * (const) Returns the value of the explicit attribute 'DefiningValues'.
         * 
         * @return the value of the explicit attribute 'DefiningValues'
         */
        virtual const List_IfcValue_1_n &getDefiningValues() const;
        /**
         * Sets the value of the explicit attribute 'DefiningValues'.
         * 
         * @param value
         */
        virtual void setDefiningValues(const List_IfcValue_1_n &value);
        /**
         * unset the attribute 'DefiningValues'.
         * 
         */
        virtual void unsetDefiningValues();
        /**
         * Test if the attribute 'DefiningValues' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDefiningValues() const;
        /**
         * Gets the value of the explicit attribute 'DefinedValues'.
         * 
         */
        virtual List_IfcValue_1_n &getDefinedValues();
        /**
         * (const) Returns the value of the explicit attribute 'DefinedValues'.
         * 
         * @return the value of the explicit attribute 'DefinedValues'
         */
        virtual const List_IfcValue_1_n &getDefinedValues() const;
        /**
         * Sets the value of the explicit attribute 'DefinedValues'.
         * 
         * @param value
         */
        virtual void setDefinedValues(const List_IfcValue_1_n &value);
        /**
         * unset the attribute 'DefinedValues'.
         * 
         */
        virtual void unsetDefinedValues();
        /**
         * Test if the attribute 'DefinedValues' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDefinedValues() const;
        /**
         * Gets the value of the explicit attribute 'Expression'.
         * 
         */
        virtual IfcText getExpression();
        /**
         * (const) Returns the value of the explicit attribute 'Expression'.
         * 
         * @return the value of the explicit attribute 'Expression'
         */
        virtual const IfcText getExpression() const;
        /**
         * Sets the value of the explicit attribute 'Expression'.
         * 
         * @param value
         */
        virtual void setExpression(const IfcText &value);
        /**
         * unset the attribute 'Expression'.
         * 
         */
        virtual void unsetExpression();
        /**
         * Test if the attribute 'Expression' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExpression() const;
        /**
         * Gets the value of the explicit attribute 'DefiningUnit'.
         * 
         */
        virtual IfcUnit *getDefiningUnit();
        /**
         * (const) Returns the value of the explicit attribute 'DefiningUnit'.
         * 
         * @return the value of the explicit attribute 'DefiningUnit'
         */
        virtual const IfcUnit *getDefiningUnit() const;
        /**
         * Sets the value of the explicit attribute 'DefiningUnit'.
         * 
         * @param value
         */
        virtual void setDefiningUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         * unset the attribute 'DefiningUnit'.
         * 
         */
        virtual void unsetDefiningUnit();
        /**
         * Test if the attribute 'DefiningUnit' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDefiningUnit() const;
        /**
         * Gets the value of the explicit attribute 'DefinedUnit'.
         * 
         */
        virtual IfcUnit *getDefinedUnit();
        /**
         * (const) Returns the value of the explicit attribute 'DefinedUnit'.
         * 
         * @return the value of the explicit attribute 'DefinedUnit'
         */
        virtual const IfcUnit *getDefinedUnit() const;
        /**
         * Sets the value of the explicit attribute 'DefinedUnit'.
         * 
         * @param value
         */
        virtual void setDefinedUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         * unset the attribute 'DefinedUnit'.
         * 
         */
        virtual void unsetDefinedUnit();
        /**
         * Test if the attribute 'DefinedUnit' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDefinedUnit() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyTableValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyTableValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyTableValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcValue_1_n m_definingValues;
        /**
         */
        List_IfcValue_1_n m_definedValues;
        /**
         */
        Step::String m_expression;
        /**
         */
        Step::RefPtr< IfcUnit > m_definingUnit;
        /**
         */
        Step::RefPtr< IfcUnit > m_definedUnit;

    };

}

#endif // IFC2X3_IFCPROPERTYTABLEVALUE_H
