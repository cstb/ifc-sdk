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

#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
#define IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcAxis2Placement;
  class IfcDirection;
  class IfcGeometricRepresentationContext_Factory;
  class IfcGeometricRepresentationSubContext;

  /**
   */
  class IFC2X3_DLL_DEF IfcGeometricRepresentationContext : public IfcRepresentationContext {
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
     * (non-const) Returns the value of the explicit attribute 'CoordinateSpaceDimension'.
     * 
     * @return the value of the explicit attribute 'CoordinateSpaceDimension'
     */
    IfcDimensionCount getCoordinateSpaceDimension();
    /**
     * Sets the value of the explicit attribute 'CoordinateSpaceDimension'.
     * 
     * @param value
     */
    void setCoordinateSpaceDimension(IfcDimensionCount value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Precision'.
     * 
     * @return the value of the explicit attribute 'Precision'
     */
    Real getPrecision();
    /**
     * Sets the value of the explicit attribute 'Precision'.
     * 
     * @param value
     */
    void setPrecision(Real value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WorldCoordinateSystem'.
     * 
     * @return the value of the explicit attribute 'WorldCoordinateSystem'
     */
    IfcAxis2Placement *getWorldCoordinateSystem();
    /**
     * Sets the value of the explicit attribute 'WorldCoordinateSystem'.
     * 
     * @param value
     */
    void setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TrueNorth'.
     * 
     * @return the value of the explicit attribute 'TrueNorth'
     */
    IfcDirection *getTrueNorth();
    /**
     * Sets the value of the explicit attribute 'TrueNorth'.
     * 
     * @param value
     */
    void setTrueNorth(const Step::RefPtr< IfcDirection > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasSubContexts'.
     * 
     * @return the value of the explicit attribute 'HasSubContexts'
     */
    Step::StepSet< Step::RefPtr< IfcGeometricRepresentationSubContext > > &getHasSubContexts();
    /**
     * Sets the value of the explicit attribute 'HasSubContexts'.
     * 
     * @param value
     */
    void setHasSubContexts(const Step::StepSet< Step::RefPtr< IfcGeometricRepresentationSubContext > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcGeometricRepresentationContext_Factory;

  protected:
    /**
     * @param args
     */
    IfcGeometricRepresentationContext(Step::SPFData *args);
    virtual ~IfcGeometricRepresentationContext();

  private:
    static Step::ClassType s_type;
    Integer m_coordinateSpaceDimension;
    Real m_precision;
    Step::RefPtr< IfcAxis2Placement > m_worldCoordinateSystem;
    Step::RefPtr< IfcDirection > m_trueNorth;
    Step::StepSet< Step::RefPtr< IfcGeometricRepresentationSubContext > > m_hasSubContexts;
    /**
     * @param c
     */
    IfcGeometricRepresentationContext(const IfcGeometricRepresentationContext &c);

  };

  class IfcGeometricRepresentationContext;

  /**
   */
  class IFC2X3_DLL_DEF IfcGeometricRepresentationContext_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcGeometricRepresentationContext_Factory();
    virtual ~IfcGeometricRepresentationContext_Factory();
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
    IfcGeometricRepresentationContext *get(Step::StepId id);
    /**
     */
    IfcGeometricRepresentationContext *generate();
    /**
     * @param id
     */
    IfcGeometricRepresentationContext *find(Step::StepId id);

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

#endif // IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
