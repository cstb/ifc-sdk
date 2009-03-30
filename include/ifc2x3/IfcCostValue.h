/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCCOSTVALUE_H
#define IFC2X3_IFCCOSTVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcAppliedValue.h"
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
    class IFC2X3_DLL_DEF IfcCostValue : public IfcAppliedValue {
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
