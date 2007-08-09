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

#ifndef IFC2X3_IFCSURFACEOFREVOLUTION_H
#define IFC2X3_IFCSURFACEOFREVOLUTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcSweptSurface.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcAxis1Placement;
  class IfcSurfaceOfRevolution_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceOfRevolution : public Step::InstantiatableEntity, public IfcSweptSurface {
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
     * (non-const) Returns the value of the explicit attribute 'AxisPosition'.
     * 
     * @return the value of the explicit attribute 'AxisPosition'
     */
    IfcAxis1Placement *getAxisPosition();
    /**
     * Sets the value of the explicit attribute 'AxisPosition'.
     * 
     * @param value
     */
    void setAxisPosition(const Step::RefPtr< IfcAxis1Placement > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSurfaceOfRevolution_Factory;

  protected:
    /**
     * @param args
     */
    IfcSurfaceOfRevolution(Step::SPFData *args);
    virtual ~IfcSurfaceOfRevolution();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcAxis1Placement > m_axisPosition;
    /**
     * @param c
     */
    IfcSurfaceOfRevolution(const IfcSurfaceOfRevolution &c);

  };

  class IfcSurfaceOfRevolution;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceOfRevolution_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSurfaceOfRevolution_Factory();
    virtual ~IfcSurfaceOfRevolution_Factory();
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
    IfcSurfaceOfRevolution *get(Step::StepId id);
    /**
     */
    IfcSurfaceOfRevolution *generate();
    /**
     * @param id
     */
    IfcSurfaceOfRevolution *find(Step::StepId id);

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

#endif // IFC2X3_IFCSURFACEOFREVOLUTION_H
