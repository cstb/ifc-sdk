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

#ifndef IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
#define IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcSimpleProperty.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcPropertyEnumeratedValue_Factory;
  class IfcPropertyEnumeration;
  class IfcValue;

  /**
   */
  class IFC2X3_DLL_DEF IfcPropertyEnumeratedValue : public Step::InstantiatableEntity, public IfcSimpleProperty {
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
     * (non-const) Returns the value of the explicit attribute 'EnumerationValues'.
     * 
     * @return the value of the explicit attribute 'EnumerationValues'
     */
    Step::StepList< Step::RefPtr< IfcValue > > &getEnumerationValues();
    /**
     * Sets the value of the explicit attribute 'EnumerationValues'.
     * 
     * @param value
     */
    void setEnumerationValues(const Step::StepList< Step::RefPtr< IfcValue > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'EnumerationReference'.
     * 
     * @return the value of the explicit attribute 'EnumerationReference'
     */
    IfcPropertyEnumeration *getEnumerationReference();
    /**
     * Sets the value of the explicit attribute 'EnumerationReference'.
     * 
     * @param value
     */
    void setEnumerationReference(const Step::RefPtr< IfcPropertyEnumeration > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcPropertyEnumeratedValue_Factory;

  protected:
    /**
     * @param args
     */
    IfcPropertyEnumeratedValue(Step::SPFData *args);
    virtual ~IfcPropertyEnumeratedValue();

  private:
    static Step::ClassType s_type;
    Step::StepList< Step::RefPtr< IfcValue > > m_enumerationValues;
    Step::RefPtr< IfcPropertyEnumeration > m_enumerationReference;
    /**
     * @param c
     */
    IfcPropertyEnumeratedValue(const IfcPropertyEnumeratedValue &c);

  };

  class IfcPropertyEnumeratedValue;

  /**
   */
  class IFC2X3_DLL_DEF IfcPropertyEnumeratedValue_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcPropertyEnumeratedValue_Factory();
    virtual ~IfcPropertyEnumeratedValue_Factory();
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
    IfcPropertyEnumeratedValue *get(Step::StepId id);
    /**
     */
    IfcPropertyEnumeratedValue *generate();
    /**
     * @param id
     */
    IfcPropertyEnumeratedValue *find(Step::StepId id);

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

#endif // IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
