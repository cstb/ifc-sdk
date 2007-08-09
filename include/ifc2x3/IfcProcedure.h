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

#ifndef IFC2X3_IFCPROCEDURE_H
#define IFC2X3_IFCPROCEDURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcProcess.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcProcedure_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcProcedure : public Step::InstantiatableEntity, public IfcProcess {
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
     * (non-const) Returns the value of the explicit attribute 'ProcedureID'.
     * 
     * @return the value of the explicit attribute 'ProcedureID'
     */
    IfcIdentifier getProcedureID();
    /**
     * Sets the value of the explicit attribute 'ProcedureID'.
     * 
     * @param value
     */
    void setProcedureID(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ProcedureType'.
     * 
     * @return the value of the explicit attribute 'ProcedureType'
     */
    IfcProcedureTypeEnum getProcedureType();
    /**
     * Sets the value of the explicit attribute 'ProcedureType'.
     * 
     * @param value
     */
    void setProcedureType(IfcProcedureTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedProcedureType'.
     * 
     * @return the value of the explicit attribute 'UserDefinedProcedureType'
     */
    IfcLabel getUserDefinedProcedureType();
    /**
     * Sets the value of the explicit attribute 'UserDefinedProcedureType'.
     * 
     * @param value
     */
    void setUserDefinedProcedureType(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcProcedure_Factory;

  protected:
    /**
     * @param args
     */
    IfcProcedure(Step::SPFData *args);
    virtual ~IfcProcedure();

  private:
    static Step::ClassType s_type;
    std::string m_procedureID;
    IfcProcedureTypeEnum m_procedureType;
    std::string m_userDefinedProcedureType;
    /**
     * @param c
     */
    IfcProcedure(const IfcProcedure &c);

  };

  class IfcProcedure;

  /**
   */
  class IFC2X3_DLL_DEF IfcProcedure_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcProcedure_Factory();
    virtual ~IfcProcedure_Factory();
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
    IfcProcedure *get(Step::StepId id);
    /**
     */
    IfcProcedure *generate();
    /**
     * @param id
     */
    IfcProcedure *find(Step::StepId id);

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

#endif // IFC2X3_IFCPROCEDURE_H
