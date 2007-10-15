/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcBooleanOperator getOperator();
        /**
         * Sets the value of the explicit attribute 'Operator'.
         * 
         * @param value
         */
        void setOperator(IfcBooleanOperator value);
        /**
         */
        IfcBooleanOperand *getFirstOperand();
        /**
         * Sets the value of the explicit attribute 'FirstOperand'.
         * 
         * @param value
         */
        void setFirstOperand(const Step::RefPtr< IfcBooleanOperand > &value);
        /**
         */
        IfcBooleanOperand *getSecondOperand();
        /**
         * Sets the value of the explicit attribute 'SecondOperand'.
         * 
         * @param value
         */
        void setSecondOperand(const Step::RefPtr< IfcBooleanOperand > &value);
        /**
         */
        virtual void release();
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
