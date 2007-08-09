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

#ifndef IFC2X3_IFCGRIDAXIS_H
#define IFC2X3_IFCGRIDAXIS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCurve;
  class IfcGrid;
  class IfcGridAxis_Factory;
  class IfcVirtualGridIntersection;

  /**
   */
  class IFC2X3_DLL_DEF IfcGridAxis : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'AxisTag'.
     * 
     * @return the value of the explicit attribute 'AxisTag'
     */
    IfcLabel getAxisTag();
    /**
     * Sets the value of the explicit attribute 'AxisTag'.
     * 
     * @param value
     */
    void setAxisTag(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AxisCurve'.
     * 
     * @return the value of the explicit attribute 'AxisCurve'
     */
    IfcCurve *getAxisCurve();
    /**
     * Sets the value of the explicit attribute 'AxisCurve'.
     * 
     * @param value
     */
    void setAxisCurve(const Step::RefPtr< IfcCurve > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SameSense'.
     * 
     * @return the value of the explicit attribute 'SameSense'
     */
    IfcBoolean getSameSense();
    /**
     * Sets the value of the explicit attribute 'SameSense'.
     * 
     * @param value
     */
    void setSameSense(IfcBoolean value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PartOfW'.
     * 
     * @return the value of the explicit attribute 'PartOfW'
     */
    Step::StepSet< Step::RefPtr< IfcGrid > > &getPartOfW();
    /**
     * Sets the value of the explicit attribute 'PartOfW'.
     * 
     * @param value
     */
    void setPartOfW(const Step::StepSet< Step::RefPtr< IfcGrid > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PartOfV'.
     * 
     * @return the value of the explicit attribute 'PartOfV'
     */
    Step::StepSet< Step::RefPtr< IfcGrid > > &getPartOfV();
    /**
     * Sets the value of the explicit attribute 'PartOfV'.
     * 
     * @param value
     */
    void setPartOfV(const Step::StepSet< Step::RefPtr< IfcGrid > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PartOfU'.
     * 
     * @return the value of the explicit attribute 'PartOfU'
     */
    Step::StepSet< Step::RefPtr< IfcGrid > > &getPartOfU();
    /**
     * Sets the value of the explicit attribute 'PartOfU'.
     * 
     * @param value
     */
    void setPartOfU(const Step::StepSet< Step::RefPtr< IfcGrid > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasIntersections'.
     * 
     * @return the value of the explicit attribute 'HasIntersections'
     */
    Step::StepSet< Step::RefPtr< IfcVirtualGridIntersection > > &getHasIntersections();
    /**
     * Sets the value of the explicit attribute 'HasIntersections'.
     * 
     * @param value
     */
    void setHasIntersections(const Step::StepSet< Step::RefPtr< IfcVirtualGridIntersection > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcGridAxis_Factory;

  protected:
    /**
     * @param args
     */
    IfcGridAxis(Step::SPFData *args);
    virtual ~IfcGridAxis();

  private:
    static Step::ClassType s_type;
    std::string m_axisTag;
    Step::RefPtr< IfcCurve > m_axisCurve;
    Bool m_sameSense;
    Step::StepSet< Step::RefPtr< IfcGrid > > m_partOfW;
    Step::StepSet< Step::RefPtr< IfcGrid > > m_partOfV;
    Step::StepSet< Step::RefPtr< IfcGrid > > m_partOfU;
    Step::StepSet< Step::RefPtr< IfcVirtualGridIntersection > > m_hasIntersections;
    /**
     * @param c
     */
    IfcGridAxis(const IfcGridAxis &c);

  };

  class IfcGridAxis;

  /**
   */
  class IFC2X3_DLL_DEF IfcGridAxis_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcGridAxis_Factory();
    virtual ~IfcGridAxis_Factory();
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
    IfcGridAxis *get(Step::StepId id);
    /**
     */
    IfcGridAxis *generate();
    /**
     * @param id
     */
    IfcGridAxis *find(Step::StepId id);

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

#endif // IFC2X3_IFCGRIDAXIS_H
