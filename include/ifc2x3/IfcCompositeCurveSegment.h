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

#ifndef IFC2X3_IFCCOMPOSITECURVESEGMENT_H
#define IFC2X3_IFCCOMPOSITECURVESEGMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCompositeCurve;
  class IfcCompositeCurveSegment_Factory;
  class IfcCurve;

  /**
   */
  class IFC2X3_DLL_DEF IfcCompositeCurveSegment : public Step::InstantiatableEntity, public IfcGeometricRepresentationItem {
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
     * (non-const) Returns the value of the explicit attribute 'Transition'.
     * 
     * @return the value of the explicit attribute 'Transition'
     */
    IfcTransitionCode getTransition();
    /**
     * Sets the value of the explicit attribute 'Transition'.
     * 
     * @param value
     */
    void setTransition(IfcTransitionCode value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SameSense'.
     * 
     * @return the value of the explicit attribute 'SameSense'
     */
    Bool getSameSense();
    /**
     * Sets the value of the explicit attribute 'SameSense'.
     * 
     * @param value
     */
    void setSameSense(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ParentCurve'.
     * 
     * @return the value of the explicit attribute 'ParentCurve'
     */
    IfcCurve *getParentCurve();
    /**
     * Sets the value of the explicit attribute 'ParentCurve'.
     * 
     * @param value
     */
    void setParentCurve(const Step::RefPtr< IfcCurve > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UsingCurves'.
     * 
     * @return the value of the explicit attribute 'UsingCurves'
     */
    Step::StepSet< Step::RefPtr< IfcCompositeCurve > > &getUsingCurves();
    /**
     * Sets the value of the explicit attribute 'UsingCurves'.
     * 
     * @param value
     */
    void setUsingCurves(const Step::StepSet< Step::RefPtr< IfcCompositeCurve > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcCompositeCurveSegment_Factory;

  protected:
    /**
     * @param args
     */
    IfcCompositeCurveSegment(Step::SPFData *args);
    virtual ~IfcCompositeCurveSegment();

  private:
    static Step::ClassType s_type;
    IfcTransitionCode m_transition;
    Bool m_sameSense;
    Step::RefPtr< IfcCurve > m_parentCurve;
    Step::StepSet< Step::RefPtr< IfcCompositeCurve > > m_usingCurves;
    /**
     * @param c
     */
    IfcCompositeCurveSegment(const IfcCompositeCurveSegment &c);

  };

  class IfcCompositeCurveSegment;

  /**
   */
  class IFC2X3_DLL_DEF IfcCompositeCurveSegment_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcCompositeCurveSegment_Factory();
    virtual ~IfcCompositeCurveSegment_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcCompositeCurveSegment *get(Step::StepId id);
    /**
     */
    IfcCompositeCurveSegment *generate();
    /**
     * @param id
     */
    IfcCompositeCurveSegment *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCCOMPOSITECURVESEGMENT_H
