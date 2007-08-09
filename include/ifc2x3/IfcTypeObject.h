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

#ifndef IFC2X3_IFCTYPEOBJECT_H
#define IFC2X3_IFCTYPEOBJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcPropertySetDefinition;
  class IfcRelDefinesByType;
  class IfcTypeObject_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcTypeObject : public Step::InstantiatableEntity, public IfcObjectDefinition {
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
     * (non-const) Returns the value of the explicit attribute 'ApplicableOccurrence'.
     * 
     * @return the value of the explicit attribute 'ApplicableOccurrence'
     */
    IfcLabel getApplicableOccurrence();
    /**
     * Sets the value of the explicit attribute 'ApplicableOccurrence'.
     * 
     * @param value
     */
    void setApplicableOccurrence(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasPropertySets'.
     * 
     * @return the value of the explicit attribute 'HasPropertySets'
     */
    Step::StepSet< Step::RefPtr< IfcPropertySetDefinition > > &getHasPropertySets();
    /**
     * Sets the value of the explicit attribute 'HasPropertySets'.
     * 
     * @param value
     */
    void setHasPropertySets(const Step::StepSet< Step::RefPtr< IfcPropertySetDefinition > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ObjectTypeOf'.
     * 
     * @return the value of the explicit attribute 'ObjectTypeOf'
     */
    Step::StepSet< Step::RefPtr< IfcRelDefinesByType > > &getObjectTypeOf();
    /**
     * Sets the value of the explicit attribute 'ObjectTypeOf'.
     * 
     * @param value
     */
    void setObjectTypeOf(const Step::StepSet< Step::RefPtr< IfcRelDefinesByType > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTypeObject_Factory;

  protected:
    /**
     * @param args
     */
    IfcTypeObject(Step::SPFData *args);
    virtual ~IfcTypeObject();

  private:
    static Step::ClassType s_type;
    std::string m_applicableOccurrence;
    Step::StepSet< Step::RefPtr< IfcPropertySetDefinition > > m_hasPropertySets;
    Step::StepSet< Step::RefPtr< IfcRelDefinesByType > > m_objectTypeOf;
    /**
     * @param c
     */
    IfcTypeObject(const IfcTypeObject &c);

  };

  class IfcTypeObject;

  /**
   */
  class IFC2X3_DLL_DEF IfcTypeObject_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTypeObject_Factory();
    virtual ~IfcTypeObject_Factory();
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
    IfcTypeObject *get(Step::StepId id);
    /**
     */
    IfcTypeObject *generate();
    /**
     * @param id
     */
    IfcTypeObject *find(Step::StepId id);

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

#endif // IFC2X3_IFCTYPEOBJECT_H
