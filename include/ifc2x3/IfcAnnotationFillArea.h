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

#ifndef IFC2X3_IFCANNOTATIONFILLAREA_H
#define IFC2X3_IFCANNOTATIONFILLAREA_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcAnnotationFillArea : public IfcGeometricRepresentationItem {
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
        IfcCurve *getOuterBoundary();
        /**
         * Sets the value of the explicit attribute 'OuterBoundary'.
         * 
         * @param value
         */
        void setOuterBoundary(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcCurve > > &getInnerBoundaries();
        /**
         * Sets the value of the explicit attribute 'InnerBoundaries'.
         * 
         * @param value
         */
        void setInnerBoundaries(const Step::Set< Step::RefPtr< IfcCurve > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAnnotationFillArea(Step::Id id, Step::SPFData *args);
        virtual ~IfcAnnotationFillArea();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAnnotationFillArea &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_outerBoundary;
        /**
         */
        Step::Set< Step::RefPtr< IfcCurve > > m_innerBoundaries;

    };

}

#endif // IFC2X3_IFCANNOTATIONFILLAREA_H
