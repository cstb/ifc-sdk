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

#ifndef IFC2X3_IFCBSPLINECURVE_H
#define IFC2X3_IFCBSPLINECURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcBoundedCurve.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;

    /**
     */
    class IFC2X3_DLL_DEF IfcBSplineCurve : public IfcBoundedCurve {
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
        Step::Integer getDegree();
        /**
         * Sets the value of the explicit attribute 'Degree'.
         * 
         * @param value
         */
        void setDegree(Step::Integer value);
        /**
         */
        Step::List< Step::RefPtr< IfcCartesianPoint > > &getControlPointsList();
        /**
         * Sets the value of the explicit attribute 'ControlPointsList'.
         * 
         * @param value
         */
        void setControlPointsList(const Step::List< Step::RefPtr< IfcCartesianPoint > > &value);
        /**
         */
        IfcBSplineCurveForm getCurveForm();
        /**
         * Sets the value of the explicit attribute 'CurveForm'.
         * 
         * @param value
         */
        void setCurveForm(IfcBSplineCurveForm value);
        /**
         */
        Step::Logical getClosedCurve();
        /**
         * Sets the value of the explicit attribute 'ClosedCurve'.
         * 
         * @param value
         */
        void setClosedCurve(Step::Logical value);
        /**
         */
        Step::Logical getSelfIntersect();
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        void setSelfIntersect(Step::Logical value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBSplineCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcBSplineCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBSplineCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_degree;
        /**
         */
        Step::List< Step::RefPtr< IfcCartesianPoint > > m_controlPointsList;
        /**
         */
        IfcBSplineCurveForm m_curveForm;
        /**
         */
        Step::Logical m_closedCurve;
        /**
         */
        Step::Logical m_selfIntersect;

    };

}

#endif // IFC2X3_IFCBSPLINECURVE_H
