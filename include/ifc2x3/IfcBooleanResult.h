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
 *     Copyright (C) 2008 CSTB                                             *
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

#ifndef IFC2X3_IFCBOOLEANRESULT_H
#define IFC2X3_IFCBOOLEANRESULT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcBooleanOperand;

    /**
     */
    class IFC2X3_DLL_DEF IfcBooleanResult : public IfcGeometricRepresentationItem {
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
