/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
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
#include <Step/Referenced.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

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
    virtual const char *type();
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
     * (non-const) Returns the value of the explicit attribute 'Degree'.
     * 
     * @return the value of the explicit attribute 'Degree'
     */
    Integer getDegree();
    /**
     * Sets the value of the explicit attribute 'Degree'.
     * 
     * @param value
     */
    void setDegree(Integer value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ControlPointsList'.
     * 
     * @return the value of the explicit attribute 'ControlPointsList'
     */
    Step::StepList< Step::RefPtr< IfcCartesianPoint > > &getControlPointsList();
    /**
     * Sets the value of the explicit attribute 'ControlPointsList'.
     * 
     * @param value
     */
    void setControlPointsList(const Step::StepList< Step::RefPtr< IfcCartesianPoint > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CurveForm'.
     * 
     * @return the value of the explicit attribute 'CurveForm'
     */
    IfcBSplineCurveForm getCurveForm();
    /**
     * Sets the value of the explicit attribute 'CurveForm'.
     * 
     * @param value
     */
    void setCurveForm(IfcBSplineCurveForm value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ClosedCurve'.
     * 
     * @return the value of the explicit attribute 'ClosedCurve'
     */
    Logical getClosedCurve();
    /**
     * Sets the value of the explicit attribute 'ClosedCurve'.
     * 
     * @param value
     */
    void setClosedCurve(Logical value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SelfIntersect'.
     * 
     * @return the value of the explicit attribute 'SelfIntersect'
     */
    Logical getSelfIntersect();
    /**
     * Sets the value of the explicit attribute 'SelfIntersect'.
     * 
     * @param value
     */
    void setSelfIntersect(Logical value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();

  protected:
    /**
     * @param args
     */
    IfcBSplineCurve(Step::SPFData *args);
    virtual ~IfcBSplineCurve();

  private:
    static Step::ClassType s_type;
    Integer m_degree;
    Step::StepList< Step::RefPtr< IfcCartesianPoint > > m_controlPointsList;
    IfcBSplineCurveForm m_curveForm;
    Logical m_closedCurve;
    Logical m_selfIntersect;
    /**
     * @param c
     */
    IfcBSplineCurve(const IfcBSplineCurve &c);

  };

}

#endif // IFC2X3_IFCBSPLINECURVE_H
