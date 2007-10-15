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

#ifndef IFC2X3_IFCDEFINEDSYMBOL_H
#define IFC2X3_IFCDEFINEDSYMBOL_H
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
    class IfcCartesianTransformationOperator2D;
    class IfcDefinedSymbolSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcDefinedSymbol : public IfcGeometricRepresentationItem {
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
        IfcDefinedSymbolSelect *getDefinition();
        /**
         * Sets the value of the explicit attribute 'Definition'.
         * 
         * @param value
         */
        void setDefinition(const Step::RefPtr< IfcDefinedSymbolSelect > &value);
        /**
         */
        IfcCartesianTransformationOperator2D *getTarget();
        /**
         * Sets the value of the explicit attribute 'Target'.
         * 
         * @param value
         */
        void setTarget(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDefinedSymbol(Step::Id id, Step::SPFData *args);
        virtual ~IfcDefinedSymbol();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDefinedSymbol &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDefinedSymbolSelect > m_definition;
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_target;

    };

}

#endif // IFC2X3_IFCDEFINEDSYMBOL_H
