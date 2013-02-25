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

#ifndef IFC2X3_IFCWINDOWSTYLE_H
#define IFC2X3_IFCWINDOWSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcTypeProduct.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcWindowStyle Entity.
     * 
     */
    class IFC2X3_EXPORT IfcWindowStyle : public IfcTypeProduct {
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
         * Gets the value of the explicit attribute 'ConstructionType'.
         * 
         */
        virtual IfcWindowStyleConstructionEnum getConstructionType();
        /**
         * (const) Returns the value of the explicit attribute 'ConstructionType'.
         * 
         * @return the value of the explicit attribute 'ConstructionType'
         */
        virtual const IfcWindowStyleConstructionEnum getConstructionType() const;
        /**
         * Sets the value of the explicit attribute 'ConstructionType'.
         * 
         * @param value
         */
        virtual void setConstructionType(IfcWindowStyleConstructionEnum value);
        /**
         * unset the attribute 'ConstructionType'.
         * 
         */
        virtual void unsetConstructionType();
        /**
         * Test if the attribute 'ConstructionType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConstructionType() const;
        /**
         * Gets the value of the explicit attribute 'OperationType'.
         * 
         */
        virtual IfcWindowStyleOperationEnum getOperationType();
        /**
         * (const) Returns the value of the explicit attribute 'OperationType'.
         * 
         * @return the value of the explicit attribute 'OperationType'
         */
        virtual const IfcWindowStyleOperationEnum getOperationType() const;
        /**
         * Sets the value of the explicit attribute 'OperationType'.
         * 
         * @param value
         */
        virtual void setOperationType(IfcWindowStyleOperationEnum value);
        /**
         * unset the attribute 'OperationType'.
         * 
         */
        virtual void unsetOperationType();
        /**
         * Test if the attribute 'OperationType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOperationType() const;
        /**
         * Gets the value of the explicit attribute 'ParameterTakesPrecedence'.
         * 
         */
        virtual Step::Boolean getParameterTakesPrecedence();
        /**
         * (const) Returns the value of the explicit attribute 'ParameterTakesPrecedence'.
         * 
         * @return the value of the explicit attribute 'ParameterTakesPrecedence'
         */
        virtual const Step::Boolean getParameterTakesPrecedence() const;
        /**
         * Sets the value of the explicit attribute 'ParameterTakesPrecedence'.
         * 
         * @param value
         */
        virtual void setParameterTakesPrecedence(Step::Boolean value);
        /**
         * unset the attribute 'ParameterTakesPrecedence'.
         * 
         */
        virtual void unsetParameterTakesPrecedence();
        /**
         * Test if the attribute 'ParameterTakesPrecedence' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testParameterTakesPrecedence() const;
        /**
         * Gets the value of the explicit attribute 'Sizeable'.
         * 
         */
        virtual Step::Boolean getSizeable();
        /**
         * (const) Returns the value of the explicit attribute 'Sizeable'.
         * 
         * @return the value of the explicit attribute 'Sizeable'
         */
        virtual const Step::Boolean getSizeable() const;
        /**
         * Sets the value of the explicit attribute 'Sizeable'.
         * 
         * @param value
         */
        virtual void setSizeable(Step::Boolean value);
        /**
         * unset the attribute 'Sizeable'.
         * 
         */
        virtual void unsetSizeable();
        /**
         * Test if the attribute 'Sizeable' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSizeable() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcWindowStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcWindowStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcWindowStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcWindowStyleConstructionEnum m_constructionType;
        /**
         */
        IfcWindowStyleOperationEnum m_operationType;
        /**
         */
        Step::Boolean m_parameterTakesPrecedence;
        /**
         */
        Step::Boolean m_sizeable;

    };

}

#endif // IFC2X3_IFCWINDOWSTYLE_H
