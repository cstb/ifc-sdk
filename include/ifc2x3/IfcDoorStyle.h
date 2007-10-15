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

#ifndef IFC2X3_IFCDOORSTYLE_H
#define IFC2X3_IFCDOORSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcTypeProduct.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDoorStyle : public IfcTypeProduct {
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
        IfcDoorStyleOperationEnum getOperationType();
        /**
         * Sets the value of the explicit attribute 'OperationType'.
         * 
         * @param value
         */
        void setOperationType(IfcDoorStyleOperationEnum value);
        /**
         */
        IfcDoorStyleConstructionEnum getConstructionType();
        /**
         * Sets the value of the explicit attribute 'ConstructionType'.
         * 
         * @param value
         */
        void setConstructionType(IfcDoorStyleConstructionEnum value);
        /**
         */
        Step::Bool getParameterTakesPrecedence();
        /**
         * Sets the value of the explicit attribute 'ParameterTakesPrecedence'.
         * 
         * @param value
         */
        void setParameterTakesPrecedence(Step::Bool value);
        /**
         */
        Step::Bool getSizeable();
        /**
         * Sets the value of the explicit attribute 'Sizeable'.
         * 
         * @param value
         */
        void setSizeable(Step::Bool value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDoorStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDoorStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDoorStyleOperationEnum m_operationType;
        /**
         */
        IfcDoorStyleConstructionEnum m_constructionType;
        /**
         */
        Step::Bool m_parameterTakesPrecedence;
        /**
         */
        Step::Bool m_sizeable;

    };

}

#endif // IFC2X3_IFCDOORSTYLE_H
