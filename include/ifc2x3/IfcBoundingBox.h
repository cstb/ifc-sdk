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

#ifndef IFC2X3_IFCBOUNDINGBOX_H
#define IFC2X3_IFCBOUNDINGBOX_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcBoundingBox_Factory;
  class IfcCartesianPoint;

  /**
   */
  class IFC2X3_DLL_DEF IfcBoundingBox : public Step::InstantiatableEntity, public IfcGeometricRepresentationItem {
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
     * (non-const) Returns the value of the explicit attribute 'Corner'.
     * 
     * @return the value of the explicit attribute 'Corner'
     */
    IfcCartesianPoint *getCorner();
    /**
     * Sets the value of the explicit attribute 'Corner'.
     * 
     * @param value
     */
    void setCorner(const Step::RefPtr< IfcCartesianPoint > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'XDim'.
     * 
     * @return the value of the explicit attribute 'XDim'
     */
    IfcPositiveLengthMeasure getXDim();
    /**
     * Sets the value of the explicit attribute 'XDim'.
     * 
     * @param value
     */
    void setXDim(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'YDim'.
     * 
     * @return the value of the explicit attribute 'YDim'
     */
    IfcPositiveLengthMeasure getYDim();
    /**
     * Sets the value of the explicit attribute 'YDim'.
     * 
     * @param value
     */
    void setYDim(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ZDim'.
     * 
     * @return the value of the explicit attribute 'ZDim'
     */
    IfcPositiveLengthMeasure getZDim();
    /**
     * Sets the value of the explicit attribute 'ZDim'.
     * 
     * @param value
     */
    void setZDim(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcBoundingBox_Factory;

  protected:
    /**
     * @param args
     */
    IfcBoundingBox(Step::SPFData *args);
    virtual ~IfcBoundingBox();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcCartesianPoint > m_corner;
    Real m_xDim;
    Real m_yDim;
    Real m_zDim;
    /**
     * @param c
     */
    IfcBoundingBox(const IfcBoundingBox &c);

  };

  class IfcBoundingBox;

  /**
   */
  class IFC2X3_DLL_DEF IfcBoundingBox_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcBoundingBox_Factory();
    virtual ~IfcBoundingBox_Factory();
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
    IfcBoundingBox *get(Step::StepId id);
    /**
     */
    IfcBoundingBox *generate();
    /**
     * @param id
     */
    IfcBoundingBox *find(Step::StepId id);

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

#endif // IFC2X3_IFCBOUNDINGBOX_H
