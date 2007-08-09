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

#ifndef IFC2X3_IFCPROPERTYREFERENCEVALUE_H
#define IFC2X3_IFCPROPERTYREFERENCEVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <ifc2x3/IfcSimpleProperty.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcObjectReferenceSelect;
  class IfcPropertyReferenceValue_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcPropertyReferenceValue : public Step::InstantiatableEntity, public IfcSimpleProperty {
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
     * (non-const) Returns the value of the explicit attribute 'UsageName'.
     * 
     * @return the value of the explicit attribute 'UsageName'
     */
    IfcLabel getUsageName();
    /**
     * Sets the value of the explicit attribute 'UsageName'.
     * 
     * @param value
     */
    void setUsageName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PropertyReference'.
     * 
     * @return the value of the explicit attribute 'PropertyReference'
     */
    IfcObjectReferenceSelect *getPropertyReference();
    /**
     * Sets the value of the explicit attribute 'PropertyReference'.
     * 
     * @param value
     */
    void setPropertyReference(const Step::RefPtr< IfcObjectReferenceSelect > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcPropertyReferenceValue_Factory;

  protected:
    /**
     * @param args
     */
    IfcPropertyReferenceValue(Step::SPFData *args);
    virtual ~IfcPropertyReferenceValue();

  private:
    static Step::ClassType s_type;
    std::string m_usageName;
    Step::RefPtr< IfcObjectReferenceSelect > m_propertyReference;
    /**
     * @param c
     */
    IfcPropertyReferenceValue(const IfcPropertyReferenceValue &c);

  };

  class IfcPropertyReferenceValue;

  /**
   */
  class IFC2X3_DLL_DEF IfcPropertyReferenceValue_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcPropertyReferenceValue_Factory();
    virtual ~IfcPropertyReferenceValue_Factory();
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
    IfcPropertyReferenceValue *get(Step::StepId id);
    /**
     */
    IfcPropertyReferenceValue *generate();
    /**
     * @param id
     */
    IfcPropertyReferenceValue *find(Step::StepId id);

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

#endif // IFC2X3_IFCPROPERTYREFERENCEVALUE_H
