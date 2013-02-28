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

#ifndef IFC2X3_IFCBOOLEANRESULT_H
#define IFC2X3_IFCBOOLEANRESULT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcBooleanOperand;

    /**
     * Generated class for the IfcBooleanResult Entity.
     * 
     */
    class IFC2X3_EXPORT IfcBooleanResult : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Operator'.
         * 
         */
        virtual IfcBooleanOperator getOperator();
        /**
         * (const) Returns the value of the explicit attribute 'Operator'.
         * 
         * @return the value of the explicit attribute 'Operator'
         */
        virtual const IfcBooleanOperator getOperator() const;
        /**
         * Sets the value of the explicit attribute 'Operator'.
         * 
         * @param value
         */
        virtual void setOperator(IfcBooleanOperator value);
        /**
         * unset the attribute 'Operator'.
         * 
         */
        virtual void unsetOperator();
        /**
         * Test if the attribute 'Operator' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOperator() const;
        /**
         * Gets the value of the explicit attribute 'FirstOperand'.
         * 
         */
        virtual IfcBooleanOperand *getFirstOperand();
        /**
         * (const) Returns the value of the explicit attribute 'FirstOperand'.
         * 
         * @return the value of the explicit attribute 'FirstOperand'
         */
        virtual const IfcBooleanOperand *getFirstOperand() const;
        /**
         * Sets the value of the explicit attribute 'FirstOperand'.
         * 
         * @param value
         */
        virtual void setFirstOperand(const Step::RefPtr< IfcBooleanOperand > &value);
        /**
         * unset the attribute 'FirstOperand'.
         * 
         */
        virtual void unsetFirstOperand();
        /**
         * Test if the attribute 'FirstOperand' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFirstOperand() const;
        /**
         * Gets the value of the explicit attribute 'SecondOperand'.
         * 
         */
        virtual IfcBooleanOperand *getSecondOperand();
        /**
         * (const) Returns the value of the explicit attribute 'SecondOperand'.
         * 
         * @return the value of the explicit attribute 'SecondOperand'
         */
        virtual const IfcBooleanOperand *getSecondOperand() const;
        /**
         * Sets the value of the explicit attribute 'SecondOperand'.
         * 
         * @param value
         */
        virtual void setSecondOperand(const Step::RefPtr< IfcBooleanOperand > &value);
        /**
         * unset the attribute 'SecondOperand'.
         * 
         */
        virtual void unsetSecondOperand();
        /**
         * Test if the attribute 'SecondOperand' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSecondOperand() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBooleanResult(Step::Id id, Step::SPFData *args);
        virtual ~IfcBooleanResult();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBooleanResult &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcBooleanOperator m_operator;
        /**
         */
        Step::RefPtr< IfcBooleanOperand > m_firstOperand;
        /**
         */
        Step::RefPtr< IfcBooleanOperand > m_secondOperand;

    };

}

#endif // IFC2X3_IFCBOOLEANRESULT_H
