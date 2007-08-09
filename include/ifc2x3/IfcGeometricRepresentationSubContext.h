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

#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#define IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeometricRepresentationContext.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcGeometricRepresentationSubContext_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcGeometricRepresentationSubContext : public IfcGeometricRepresentationContext {
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
     * (non-const) Returns the value of the explicit attribute 'ParentContext'.
     * 
     * @return the value of the explicit attribute 'ParentContext'
     */
    IfcGeometricRepresentationContext *getParentContext();
    /**
     * Sets the value of the explicit attribute 'ParentContext'.
     * 
     * @param value
     */
    void setParentContext(const Step::RefPtr< IfcGeometricRepresentationContext > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TargetScale'.
     * 
     * @return the value of the explicit attribute 'TargetScale'
     */
    IfcPositiveRatioMeasure getTargetScale();
    /**
     * Sets the value of the explicit attribute 'TargetScale'.
     * 
     * @param value
     */
    void setTargetScale(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TargetView'.
     * 
     * @return the value of the explicit attribute 'TargetView'
     */
    IfcGeometricProjectionEnum getTargetView();
    /**
     * Sets the value of the explicit attribute 'TargetView'.
     * 
     * @param value
     */
    void setTargetView(IfcGeometricProjectionEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedTargetView'.
     * 
     * @return the value of the explicit attribute 'UserDefinedTargetView'
     */
    IfcLabel getUserDefinedTargetView();
    /**
     * Sets the value of the explicit attribute 'UserDefinedTargetView'.
     * 
     * @param value
     */
    void setUserDefinedTargetView(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcGeometricRepresentationSubContext_Factory;

  protected:
    /**
     * @param args
     */
    IfcGeometricRepresentationSubContext(Step::SPFData *args);
    virtual ~IfcGeometricRepresentationSubContext();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcGeometricRepresentationContext > m_parentContext;
    Real m_targetScale;
    IfcGeometricProjectionEnum m_targetView;
    std::string m_userDefinedTargetView;
    /**
     * @param c
     */
    IfcGeometricRepresentationSubContext(const IfcGeometricRepresentationSubContext &c);

  };

  class IfcGeometricRepresentationSubContext;

  /**
   */
  class IFC2X3_DLL_DEF IfcGeometricRepresentationSubContext_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcGeometricRepresentationSubContext_Factory();
    virtual ~IfcGeometricRepresentationSubContext_Factory();
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
    IfcGeometricRepresentationSubContext *get(Step::StepId id);
    /**
     */
    IfcGeometricRepresentationSubContext *generate();
    /**
     * @param id
     */
    IfcGeometricRepresentationSubContext *find(Step::StepId id);

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

#endif // IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
