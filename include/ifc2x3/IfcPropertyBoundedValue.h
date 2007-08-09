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

#ifndef IFC2X3_IFCPROPERTYBOUNDEDVALUE_H
#define IFC2X3_IFCPROPERTYBOUNDEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcSimpleProperty.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcPropertyBoundedValue_Factory;
  class IfcUnit;
  class IfcValue;

  /**
   */
  class IFC2X3_DLL_DEF IfcPropertyBoundedValue : public Step::InstantiatableEntity, public IfcSimpleProperty {
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
     * (non-const) Returns the value of the explicit attribute 'UpperBoundValue'.
     * 
     * @return the value of the explicit attribute 'UpperBoundValue'
     */
    IfcValue *getUpperBoundValue();
    /**
     * Sets the value of the explicit attribute 'UpperBoundValue'.
     * 
     * @param value
     */
    void setUpperBoundValue(const Step::RefPtr< IfcValue > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LowerBoundValue'.
     * 
     * @return the value of the explicit attribute 'LowerBoundValue'
     */
    IfcValue *getLowerBoundValue();
    /**
     * Sets the value of the explicit attribute 'LowerBoundValue'.
     * 
     * @param value
     */
    void setLowerBoundValue(const Step::RefPtr< IfcValue > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Unit'.
     * 
     * @return the value of the explicit attribute 'Unit'
     */
    IfcUnit *getUnit();
    /**
     * Sets the value of the explicit attribute 'Unit'.
     * 
     * @param value
     */
    void setUnit(const Step::RefPtr< IfcUnit > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcPropertyBoundedValue_Factory;

  protected:
    /**
     * @param args
     */
    IfcPropertyBoundedValue(Step::SPFData *args);
    virtual ~IfcPropertyBoundedValue();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcValue > m_upperBoundValue;
    Step::RefPtr< IfcValue > m_lowerBoundValue;
    Step::RefPtr< IfcUnit > m_unit;
    /**
     * @param c
     */
    IfcPropertyBoundedValue(const IfcPropertyBoundedValue &c);

  };

  class IfcPropertyBoundedValue;

  /**
   */
  class IFC2X3_DLL_DEF IfcPropertyBoundedValue_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcPropertyBoundedValue_Factory();
    virtual ~IfcPropertyBoundedValue_Factory();
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
    IfcPropertyBoundedValue *get(Step::StepId id);
    /**
     */
    IfcPropertyBoundedValue *generate();
    /**
     * @param id
     */
    IfcPropertyBoundedValue *find(Step::StepId id);

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

#endif // IFC2X3_IFCPROPERTYBOUNDEDVALUE_H
