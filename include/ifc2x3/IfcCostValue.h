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

#ifndef IFC2X3_IFCCOSTVALUE_H
#define IFC2X3_IFCCOSTVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcAppliedValue.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcCostValue Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCostValue : public IfcAppliedValue {
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
         * Gets the value of the explicit attribute 'CostType'.
         * 
         */
        virtual IfcLabel getCostType();
        /**
         * (const) Returns the value of the explicit attribute 'CostType'.
         * 
         * @return the value of the explicit attribute 'CostType'
         */
        virtual const IfcLabel getCostType() const;
        /**
         * Sets the value of the explicit attribute 'CostType'.
         * 
         * @param value
         */
        virtual void setCostType(const IfcLabel &value);
        /**
         * unset the attribute 'CostType'.
         * 
         */
        virtual void unsetCostType();
        /**
         * Test if the attribute 'CostType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCostType() const;
        /**
         * Gets the value of the explicit attribute 'Condition'.
         * 
         */
        virtual IfcText getCondition();
        /**
         * (const) Returns the value of the explicit attribute 'Condition'.
         * 
         * @return the value of the explicit attribute 'Condition'
         */
        virtual const IfcText getCondition() const;
        /**
         * Sets the value of the explicit attribute 'Condition'.
         * 
         * @param value
         */
        virtual void setCondition(const IfcText &value);
        /**
         * unset the attribute 'Condition'.
         * 
         */
        virtual void unsetCondition();
        /**
         * Test if the attribute 'Condition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCondition() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCostValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcCostValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCostValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_costType;
        /**
         */
        Step::String m_condition;

    };

}

#endif // IFC2X3_IFCCOSTVALUE_H
