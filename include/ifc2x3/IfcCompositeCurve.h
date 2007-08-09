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

#ifndef IFC2X3_IFCCOMPOSITECURVE_H
#define IFC2X3_IFCCOMPOSITECURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCompositeCurveSegment;
  class IfcCompositeCurve_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcCompositeCurve : public Step::InstantiatableEntity, public IfcBoundedCurve {
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
     * (non-const) Returns the value of the explicit attribute 'Segments'.
     * 
     * @return the value of the explicit attribute 'Segments'
     */
    Step::StepList< Step::RefPtr< IfcCompositeCurveSegment > > &getSegments();
    /**
     * Sets the value of the explicit attribute 'Segments'.
     * 
     * @param value
     */
    void setSegments(const Step::StepList< Step::RefPtr< IfcCompositeCurveSegment > > &value);
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
    friend class IfcCompositeCurve_Factory;

  protected:
    /**
     * @param args
     */
    IfcCompositeCurve(Step::SPFData *args);
    virtual ~IfcCompositeCurve();

  private:
    static Step::ClassType s_type;
    Step::StepList< Step::RefPtr< IfcCompositeCurveSegment > > m_segments;
    Logical m_selfIntersect;
    /**
     * @param c
     */
    IfcCompositeCurve(const IfcCompositeCurve &c);

  };

  class IfcCompositeCurve;

  /**
   */
  class IFC2X3_DLL_DEF IfcCompositeCurve_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcCompositeCurve_Factory();
    virtual ~IfcCompositeCurve_Factory();
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
    IfcCompositeCurve *get(Step::StepId id);
    /**
     */
    IfcCompositeCurve *generate();
    /**
     * @param id
     */
    IfcCompositeCurve *find(Step::StepId id);

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

#endif // IFC2X3_IFCCOMPOSITECURVE_H
