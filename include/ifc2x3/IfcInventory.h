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

#ifndef IFC2X3_IFCINVENTORY_H
#define IFC2X3_IFCINVENTORY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcGroup.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorSelect;
  class IfcCalendarDate;
  class IfcCostValue;
  class IfcInventory_Factory;
  class IfcPerson;

  /**
   */
  class IFC2X3_DLL_DEF IfcInventory : public IfcGroup {
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
     * (non-const) Returns the value of the explicit attribute 'InventoryType'.
     * 
     * @return the value of the explicit attribute 'InventoryType'
     */
    IfcInventoryTypeEnum getInventoryType();
    /**
     * Sets the value of the explicit attribute 'InventoryType'.
     * 
     * @param value
     */
    void setInventoryType(IfcInventoryTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Jurisdiction'.
     * 
     * @return the value of the explicit attribute 'Jurisdiction'
     */
    IfcActorSelect *getJurisdiction();
    /**
     * Sets the value of the explicit attribute 'Jurisdiction'.
     * 
     * @param value
     */
    void setJurisdiction(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ResponsiblePersons'.
     * 
     * @return the value of the explicit attribute 'ResponsiblePersons'
     */
    Step::StepSet< Step::RefPtr< IfcPerson > > &getResponsiblePersons();
    /**
     * Sets the value of the explicit attribute 'ResponsiblePersons'.
     * 
     * @param value
     */
    void setResponsiblePersons(const Step::StepSet< Step::RefPtr< IfcPerson > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LastUpdateDate'.
     * 
     * @return the value of the explicit attribute 'LastUpdateDate'
     */
    IfcCalendarDate *getLastUpdateDate();
    /**
     * Sets the value of the explicit attribute 'LastUpdateDate'.
     * 
     * @param value
     */
    void setLastUpdateDate(const Step::RefPtr< IfcCalendarDate > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CurrentValue'.
     * 
     * @return the value of the explicit attribute 'CurrentValue'
     */
    IfcCostValue *getCurrentValue();
    /**
     * Sets the value of the explicit attribute 'CurrentValue'.
     * 
     * @param value
     */
    void setCurrentValue(const Step::RefPtr< IfcCostValue > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'OriginalValue'.
     * 
     * @return the value of the explicit attribute 'OriginalValue'
     */
    IfcCostValue *getOriginalValue();
    /**
     * Sets the value of the explicit attribute 'OriginalValue'.
     * 
     * @param value
     */
    void setOriginalValue(const Step::RefPtr< IfcCostValue > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcInventory_Factory;

  protected:
    /**
     * @param args
     */
    IfcInventory(Step::SPFData *args);
    virtual ~IfcInventory();

  private:
    static Step::ClassType s_type;
    IfcInventoryTypeEnum m_inventoryType;
    Step::RefPtr< IfcActorSelect > m_jurisdiction;
    Step::StepSet< Step::RefPtr< IfcPerson > > m_responsiblePersons;
    Step::RefPtr< IfcCalendarDate > m_lastUpdateDate;
    Step::RefPtr< IfcCostValue > m_currentValue;
    Step::RefPtr< IfcCostValue > m_originalValue;
    /**
     * @param c
     */
    IfcInventory(const IfcInventory &c);

  };

  class IfcInventory;

  /**
   */
  class IFC2X3_DLL_DEF IfcInventory_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcInventory_Factory();
    virtual ~IfcInventory_Factory();
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
    IfcInventory *get(Step::StepId id);
    /**
     */
    IfcInventory *generate();
    /**
     * @param id
     */
    IfcInventory *find(Step::StepId id);

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

#endif // IFC2X3_IFCINVENTORY_H
