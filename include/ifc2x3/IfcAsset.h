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

#ifndef IFC2X3_IFCASSET_H
#define IFC2X3_IFCASSET_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcGroup.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorSelect;
  class IfcAsset_Factory;
  class IfcCalendarDate;
  class IfcCostValue;
  class IfcPerson;

  /**
   */
  class IFC2X3_DLL_DEF IfcAsset : public IfcGroup {
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
     * (non-const) Returns the value of the explicit attribute 'AssetID'.
     * 
     * @return the value of the explicit attribute 'AssetID'
     */
    IfcIdentifier getAssetID();
    /**
     * Sets the value of the explicit attribute 'AssetID'.
     * 
     * @param value
     */
    void setAssetID(const IfcIdentifier &value);
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
     * (non-const) Returns the value of the explicit attribute 'TotalReplacementCost'.
     * 
     * @return the value of the explicit attribute 'TotalReplacementCost'
     */
    IfcCostValue *getTotalReplacementCost();
    /**
     * Sets the value of the explicit attribute 'TotalReplacementCost'.
     * 
     * @param value
     */
    void setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Owner'.
     * 
     * @return the value of the explicit attribute 'Owner'
     */
    IfcActorSelect *getOwner();
    /**
     * Sets the value of the explicit attribute 'Owner'.
     * 
     * @param value
     */
    void setOwner(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'User'.
     * 
     * @return the value of the explicit attribute 'User'
     */
    IfcActorSelect *getUser();
    /**
     * Sets the value of the explicit attribute 'User'.
     * 
     * @param value
     */
    void setUser(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ResponsiblePerson'.
     * 
     * @return the value of the explicit attribute 'ResponsiblePerson'
     */
    IfcPerson *getResponsiblePerson();
    /**
     * Sets the value of the explicit attribute 'ResponsiblePerson'.
     * 
     * @param value
     */
    void setResponsiblePerson(const Step::RefPtr< IfcPerson > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IncorporationDate'.
     * 
     * @return the value of the explicit attribute 'IncorporationDate'
     */
    IfcCalendarDate *getIncorporationDate();
    /**
     * Sets the value of the explicit attribute 'IncorporationDate'.
     * 
     * @param value
     */
    void setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DepreciatedValue'.
     * 
     * @return the value of the explicit attribute 'DepreciatedValue'
     */
    IfcCostValue *getDepreciatedValue();
    /**
     * Sets the value of the explicit attribute 'DepreciatedValue'.
     * 
     * @param value
     */
    void setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcAsset_Factory;

  protected:
    /**
     * @param args
     */
    IfcAsset(Step::SPFData *args);
    virtual ~IfcAsset();

  private:
    static Step::ClassType s_type;
    std::string m_assetID;
    Step::RefPtr< IfcCostValue > m_originalValue;
    Step::RefPtr< IfcCostValue > m_currentValue;
    Step::RefPtr< IfcCostValue > m_totalReplacementCost;
    Step::RefPtr< IfcActorSelect > m_owner;
    Step::RefPtr< IfcActorSelect > m_user;
    Step::RefPtr< IfcPerson > m_responsiblePerson;
    Step::RefPtr< IfcCalendarDate > m_incorporationDate;
    Step::RefPtr< IfcCostValue > m_depreciatedValue;
    /**
     * @param c
     */
    IfcAsset(const IfcAsset &c);

  };

  class IfcAsset;

  /**
   */
  class IFC2X3_DLL_DEF IfcAsset_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcAsset_Factory();
    virtual ~IfcAsset_Factory();
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
    IfcAsset *get(Step::StepId id);
    /**
     */
    IfcAsset *generate();
    /**
     * @param id
     */
    IfcAsset *find(Step::StepId id);

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

#endif // IFC2X3_IFCASSET_H
