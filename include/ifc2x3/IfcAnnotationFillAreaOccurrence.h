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

#ifndef IFC2X3_IFCANNOTATIONFILLAREAOCCURRENCE_H
#define IFC2X3_IFCANNOTATIONFILLAREAOCCURRENCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcAnnotationOccurrence.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPoint;

    /**
     */
    class IFC2X3_DLL_DEF IfcAnnotationFillAreaOccurrence : public IfcAnnotationOccurrence {
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
        IfcPoint *getFillStyleTarget();
        /**
         * Sets the value of the explicit attribute 'FillStyleTarget'.
         * 
         * @param value
         */
        void setFillStyleTarget(const Step::RefPtr< IfcPoint > &value);
        /**
         */
        IfcGlobalOrLocalEnum getGlobalOrLocal();
        /**
         * Sets the value of the explicit attribute 'GlobalOrLocal'.
         * 
         * @param value
         */
        void setGlobalOrLocal(IfcGlobalOrLocalEnum value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAnnotationFillAreaOccurrence(Step::Id id, Step::SPFData *args);
        virtual ~IfcAnnotationFillAreaOccurrence();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPoint > m_fillStyleTarget;
        /**
         */
        IfcGlobalOrLocalEnum m_globalOrLocal;

    };

}

#endif // IFC2X3_IFCANNOTATIONFILLAREAOCCURRENCE_H
