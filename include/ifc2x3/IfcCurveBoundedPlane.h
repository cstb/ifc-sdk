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

#ifndef IFC2X3_IFCCURVEBOUNDEDPLANE_H
#define IFC2X3_IFCCURVEBOUNDEDPLANE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcBoundedSurface.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcPlane;

    /**
     */
    class IFC2X3_DLL_DEF IfcCurveBoundedPlane : public IfcBoundedSurface {
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
        IfcPlane *getBasisSurface();
        /**
         * Sets the value of the explicit attribute 'BasisSurface'.
         * 
         * @param value
         */
        void setBasisSurface(const Step::RefPtr< IfcPlane > &value);
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
        IfcCurveBoundedPlane(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveBoundedPlane();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurveBoundedPlane &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPlane > m_basisSurface;
        /**
         */
        Step::RefPtr< IfcCurve > m_outerBoundary;
        /**
         */
        Step::Set< Step::RefPtr< IfcCurve > > m_innerBoundaries;

    };

}

#endif // IFC2X3_IFCCURVEBOUNDEDPLANE_H
