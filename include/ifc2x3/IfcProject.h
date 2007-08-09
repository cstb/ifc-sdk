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

#ifndef IFC2X3_IFCPROJECT_H
#define IFC2X3_IFCPROJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcObject.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcProject_Factory;
  class IfcRepresentationContext;
  class IfcUnitAssignment;

  /**
   */
  class IFC2X3_DLL_DEF IfcProject : public Step::InstantiatableEntity, public IfcObject {
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
     * (non-const) Returns the value of the explicit attribute 'LongName'.
     * 
     * @return the value of the explicit attribute 'LongName'
     */
    IfcLabel getLongName();
    /**
     * Sets the value of the explicit attribute 'LongName'.
     * 
     * @param value
     */
    void setLongName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Phase'.
     * 
     * @return the value of the explicit attribute 'Phase'
     */
    IfcLabel getPhase();
    /**
     * Sets the value of the explicit attribute 'Phase'.
     * 
     * @param value
     */
    void setPhase(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RepresentationContexts'.
     * 
     * @return the value of the explicit attribute 'RepresentationContexts'
     */
    Step::StepSet< Step::RefPtr< IfcRepresentationContext > > &getRepresentationContexts();
    /**
     * Sets the value of the explicit attribute 'RepresentationContexts'.
     * 
     * @param value
     */
    void setRepresentationContexts(const Step::StepSet< Step::RefPtr< IfcRepresentationContext > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UnitsInContext'.
     * 
     * @return the value of the explicit attribute 'UnitsInContext'
     */
    IfcUnitAssignment *getUnitsInContext();
    /**
     * Sets the value of the explicit attribute 'UnitsInContext'.
     * 
     * @param value
     */
    void setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcProject_Factory;

  protected:
    /**
     * @param args
     */
    IfcProject(Step::SPFData *args);
    virtual ~IfcProject();

  private:
    static Step::ClassType s_type;
    std::string m_longName;
    std::string m_phase;
    Step::StepSet< Step::RefPtr< IfcRepresentationContext > > m_representationContexts;
    Step::RefPtr< IfcUnitAssignment > m_unitsInContext;
    /**
     * @param c
     */
    IfcProject(const IfcProject &c);

  };

  class IfcProject;

  /**
   */
  class IFC2X3_DLL_DEF IfcProject_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcProject_Factory();
    virtual ~IfcProject_Factory();
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
    IfcProject *get(Step::StepId id);
    /**
     */
    IfcProject *generate();
    /**
     * @param id
     */
    IfcProject *find(Step::StepId id);

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

#endif // IFC2X3_IFCPROJECT_H
