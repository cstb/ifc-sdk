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

#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#define IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcGeometricRepresentationContext.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcGeometricRepresentationSubContext : public IfcGeometricRepresentationContext {
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
        IfcGeometricRepresentationContext *getParentContext();
        /**
         * Sets the value of the explicit attribute 'ParentContext'.
         * 
         * @param value
         */
        void setParentContext(const Step::RefPtr< IfcGeometricRepresentationContext > &value);
        /**
         */
        IfcPositiveRatioMeasure getTargetScale();
        /**
         * Sets the value of the explicit attribute 'TargetScale'.
         * 
         * @param value
         */
        void setTargetScale(IfcPositiveRatioMeasure value);
        /**
         */
        IfcGeometricProjectionEnum getTargetView();
        /**
         * Sets the value of the explicit attribute 'TargetView'.
         * 
         * @param value
         */
        void setTargetView(IfcGeometricProjectionEnum value);
        /**
         */
        IfcLabel getUserDefinedTargetView();
        /**
         * Sets the value of the explicit attribute 'UserDefinedTargetView'.
         * 
         * @param value
         */
        void setUserDefinedTargetView(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeometricRepresentationSubContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeometricRepresentationSubContext();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcGeometricRepresentationContext > m_parentContext;
        /**
         */
        Step::Real m_targetScale;
        /**
         */
        IfcGeometricProjectionEnum m_targetView;
        /**
         */
        std::string m_userDefinedTargetView;

    };

}

#endif // IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
