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

#ifndef IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
#define IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <string>
#include <ifc2x3/IfcRelAssociates.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcConstraint;
  class IfcRelAssociatesConstraint_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelAssociatesConstraint : public IfcRelAssociates {
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
     * (non-const) Returns the value of the explicit attribute 'Intent'.
     * 
     * @return the value of the explicit attribute 'Intent'
     */
    IfcLabel getIntent();
    /**
     * Sets the value of the explicit attribute 'Intent'.
     * 
     * @param value
     */
    void setIntent(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatingConstraint'.
     * 
     * @return the value of the explicit attribute 'RelatingConstraint'
     */
    IfcConstraint *getRelatingConstraint();
    /**
     * Sets the value of the explicit attribute 'RelatingConstraint'.
     * 
     * @param value
     */
    void setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRelAssociatesConstraint_Factory;

  protected:
    /**
     * @param args
     */
    IfcRelAssociatesConstraint(Step::SPFData *args);
    virtual ~IfcRelAssociatesConstraint();

  private:
    static Step::ClassType s_type;
    std::string m_intent;
    Step::RefPtr< IfcConstraint > m_relatingConstraint;
    /**
     * @param c
     */
    IfcRelAssociatesConstraint(const IfcRelAssociatesConstraint &c);

  };

  class IfcRelAssociatesConstraint;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelAssociatesConstraint_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRelAssociatesConstraint_Factory();
    virtual ~IfcRelAssociatesConstraint_Factory();
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
    IfcRelAssociatesConstraint *get(Step::StepId id);
    /**
     */
    IfcRelAssociatesConstraint *generate();
    /**
     * @param id
     */
    IfcRelAssociatesConstraint *find(Step::StepId id);

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

#endif // IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
