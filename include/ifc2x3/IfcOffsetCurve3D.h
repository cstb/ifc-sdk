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

#ifndef IFC2X3_IFCOFFSETCURVE3D_H
#define IFC2X3_IFCOFFSETCURVE3D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcCurve.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDirection;
  class IfcOffsetCurve3D_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcOffsetCurve3D : public Step::InstantiatableEntity, public IfcCurve {
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
     * (non-const) Returns the value of the explicit attribute 'BasisCurve'.
     * 
     * @return the value of the explicit attribute 'BasisCurve'
     */
    IfcCurve *getBasisCurve();
    /**
     * Sets the value of the explicit attribute 'BasisCurve'.
     * 
     * @param value
     */
    void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Distance'.
     * 
     * @return the value of the explicit attribute 'Distance'
     */
    IfcLengthMeasure getDistance();
    /**
     * Sets the value of the explicit attribute 'Distance'.
     * 
     * @param value
     */
    void setDistance(IfcLengthMeasure value);
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
     * (non-const) Returns the value of the explicit attribute 'RefDirection'.
     * 
     * @return the value of the explicit attribute 'RefDirection'
     */
    IfcDirection *getRefDirection();
    /**
     * Sets the value of the explicit attribute 'RefDirection'.
     * 
     * @param value
     */
    void setRefDirection(const Step::RefPtr< IfcDirection > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcOffsetCurve3D_Factory;

  protected:
    /**
     * @param args
     */
    IfcOffsetCurve3D(Step::SPFData *args);
    virtual ~IfcOffsetCurve3D();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcCurve > m_basisCurve;
    Real m_distance;
    Logical m_selfIntersect;
    Step::RefPtr< IfcDirection > m_refDirection;
    /**
     * @param c
     */
    IfcOffsetCurve3D(const IfcOffsetCurve3D &c);

  };

  class IfcOffsetCurve3D;

  /**
   */
  class IFC2X3_DLL_DEF IfcOffsetCurve3D_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcOffsetCurve3D_Factory();
    virtual ~IfcOffsetCurve3D_Factory();
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
    IfcOffsetCurve3D *get(Step::StepId id);
    /**
     */
    IfcOffsetCurve3D *generate();
    /**
     * @param id
     */
    IfcOffsetCurve3D *find(Step::StepId id);

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

#endif // IFC2X3_IFCOFFSETCURVE3D_H
