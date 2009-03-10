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

#ifndef IFC2X3_IFCBSPLINECURVE_H
#define IFC2X3_IFCBSPLINECURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBoundedCurve.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcBSplineCurve : public IfcBoundedCurve {
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
         * Gets the value of the explicit attribute 'Degree'.
         * 
         */
        virtual Step::Integer getDegree();
        /**
         * (const) Returns the value of the explicit attribute 'Degree'.
         * 
         * @return the value of the explicit attribute 'Degree'
         */
        virtual const Step::Integer getDegree() const;
        /**
         * Sets the value of the explicit attribute 'Degree'.
         * 
         * @param value
         */
        virtual void setDegree(Step::Integer value);
        /**
         * Gets the value of the explicit attribute 'ControlPointsList'.
         * 
         */
        virtual List_IfcCartesianPoint_2_n &getControlPointsList();
        /**
         * (const) Returns the value of the explicit attribute 'ControlPointsList'.
         * 
         * @return the value of the explicit attribute 'ControlPointsList'
         */
        virtual const List_IfcCartesianPoint_2_n &getControlPointsList() const;
        /**
         * Sets the value of the explicit attribute 'ControlPointsList'.
         * 
         * @param value
         */
        virtual void setControlPointsList(const List_IfcCartesianPoint_2_n &value);
        /**
         * Gets the value of the explicit attribute 'CurveForm'.
         * 
         */
        virtual IfcBSplineCurveForm getCurveForm();
        /**
         * (const) Returns the value of the explicit attribute 'CurveForm'.
         * 
         * @return the value of the explicit attribute 'CurveForm'
         */
        virtual const IfcBSplineCurveForm getCurveForm() const;
        /**
         * Sets the value of the explicit attribute 'CurveForm'.
         * 
         * @param value
         */
        virtual void setCurveForm(IfcBSplineCurveForm value);
        /**
         * Gets the value of the explicit attribute 'ClosedCurve'.
         * 
         */
        virtual Step::Logical getClosedCurve();
        /**
         * (const) Returns the value of the explicit attribute 'ClosedCurve'.
         * 
         * @return the value of the explicit attribute 'ClosedCurve'
         */
        virtual const Step::Logical getClosedCurve() const;
        /**
         * Sets the value of the explicit attribute 'ClosedCurve'.
         * 
         * @param value
         */
        virtual void setClosedCurve(Step::Logical value);
        /**
         * Gets the value of the explicit attribute 'SelfIntersect'.
         * 
         */
        virtual Step::Logical getSelfIntersect();
        /**
         * (const) Returns the value of the explicit attribute 'SelfIntersect'.
         * 
         * @return the value of the explicit attribute 'SelfIntersect'
         */
        virtual const Step::Logical getSelfIntersect() const;
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        virtual void setSelfIntersect(Step::Logical value);
        /**
         * Gets the value of the derived attribute 'ControlPoints'.
         * 
         */
        virtual Array_IfcCartesianPoint_0_255 getControlPoints() const;
        /**
         * Gets the value of the derived attribute 'UpperIndexOnControlPoints'.
         * 
         */
        virtual Step::Integer getUpperIndexOnControlPoints() const;
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
        List_IfcCartesianPoint_2_n m_controlPointsList;
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
