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

#ifndef IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
#define IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcSweptAreaSolid.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCurve;
  class IfcSurface;
  class IfcSurfaceCurveSweptAreaSolid_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceCurveSweptAreaSolid : public Step::InstantiatableEntity, public IfcSweptAreaSolid {
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
     * (non-const) Returns the value of the explicit attribute 'Directrix'.
     * 
     * @return the value of the explicit attribute 'Directrix'
     */
    IfcCurve *getDirectrix();
    /**
     * Sets the value of the explicit attribute 'Directrix'.
     * 
     * @param value
     */
    void setDirectrix(const Step::RefPtr< IfcCurve > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'StartParam'.
     * 
     * @return the value of the explicit attribute 'StartParam'
     */
    IfcParameterValue getStartParam();
    /**
     * Sets the value of the explicit attribute 'StartParam'.
     * 
     * @param value
     */
    void setStartParam(IfcParameterValue value);
    /**
     * (non-const) Returns the value of the explicit attribute 'EndParam'.
     * 
     * @return the value of the explicit attribute 'EndParam'
     */
    IfcParameterValue getEndParam();
    /**
     * Sets the value of the explicit attribute 'EndParam'.
     * 
     * @param value
     */
    void setEndParam(IfcParameterValue value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ReferenceSurface'.
     * 
     * @return the value of the explicit attribute 'ReferenceSurface'
     */
    IfcSurface *getReferenceSurface();
    /**
     * Sets the value of the explicit attribute 'ReferenceSurface'.
     * 
     * @param value
     */
    void setReferenceSurface(const Step::RefPtr< IfcSurface > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSurfaceCurveSweptAreaSolid_Factory;

  protected:
    /**
     * @param args
     */
    IfcSurfaceCurveSweptAreaSolid(Step::SPFData *args);
    virtual ~IfcSurfaceCurveSweptAreaSolid();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcCurve > m_directrix;
    Real m_startParam;
    Real m_endParam;
    Step::RefPtr< IfcSurface > m_referenceSurface;
    /**
     * @param c
     */
    IfcSurfaceCurveSweptAreaSolid(const IfcSurfaceCurveSweptAreaSolid &c);

  };

  class IfcSurfaceCurveSweptAreaSolid;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceCurveSweptAreaSolid_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSurfaceCurveSweptAreaSolid_Factory();
    virtual ~IfcSurfaceCurveSweptAreaSolid_Factory();
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
    IfcSurfaceCurveSweptAreaSolid *get(Step::StepId id);
    /**
     */
    IfcSurfaceCurveSweptAreaSolid *generate();
    /**
     * @param id
     */
    IfcSurfaceCurveSweptAreaSolid *find(Step::StepId id);

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

#endif // IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
