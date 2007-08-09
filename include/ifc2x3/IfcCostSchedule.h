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

#ifndef IFC2X3_IFCCOSTSCHEDULE_H
#define IFC2X3_IFCCOSTSCHEDULE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcControl.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorSelect;
  class IfcCostSchedule_Factory;
  class IfcDateTimeSelect;

  /**
   */
  class IFC2X3_DLL_DEF IfcCostSchedule : public Step::InstantiatableEntity, public IfcControl {
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
     * (non-const) Returns the value of the explicit attribute 'SubmittedBy'.
     * 
     * @return the value of the explicit attribute 'SubmittedBy'
     */
    IfcActorSelect *getSubmittedBy();
    /**
     * Sets the value of the explicit attribute 'SubmittedBy'.
     * 
     * @param value
     */
    void setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PreparedBy'.
     * 
     * @return the value of the explicit attribute 'PreparedBy'
     */
    IfcActorSelect *getPreparedBy();
    /**
     * Sets the value of the explicit attribute 'PreparedBy'.
     * 
     * @param value
     */
    void setPreparedBy(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SubmittedOn'.
     * 
     * @return the value of the explicit attribute 'SubmittedOn'
     */
    IfcDateTimeSelect *getSubmittedOn();
    /**
     * Sets the value of the explicit attribute 'SubmittedOn'.
     * 
     * @param value
     */
    void setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Status'.
     * 
     * @return the value of the explicit attribute 'Status'
     */
    IfcLabel getStatus();
    /**
     * Sets the value of the explicit attribute 'Status'.
     * 
     * @param value
     */
    void setStatus(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TargetUsers'.
     * 
     * @return the value of the explicit attribute 'TargetUsers'
     */
    Step::StepSet< Step::RefPtr< IfcActorSelect > > &getTargetUsers();
    /**
     * Sets the value of the explicit attribute 'TargetUsers'.
     * 
     * @param value
     */
    void setTargetUsers(const Step::StepSet< Step::RefPtr< IfcActorSelect > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UpdateDate'.
     * 
     * @return the value of the explicit attribute 'UpdateDate'
     */
    IfcDateTimeSelect *getUpdateDate();
    /**
     * Sets the value of the explicit attribute 'UpdateDate'.
     * 
     * @param value
     */
    void setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ID'.
     * 
     * @return the value of the explicit attribute 'ID'
     */
    IfcIdentifier getID();
    /**
     * Sets the value of the explicit attribute 'ID'.
     * 
     * @param value
     */
    void setID(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PredefinedType'.
     * 
     * @return the value of the explicit attribute 'PredefinedType'
     */
    IfcCostScheduleTypeEnum getPredefinedType();
    /**
     * Sets the value of the explicit attribute 'PredefinedType'.
     * 
     * @param value
     */
    void setPredefinedType(IfcCostScheduleTypeEnum value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcCostSchedule_Factory;

  protected:
    /**
     * @param args
     */
    IfcCostSchedule(Step::SPFData *args);
    virtual ~IfcCostSchedule();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcActorSelect > m_submittedBy;
    Step::RefPtr< IfcActorSelect > m_preparedBy;
    Step::RefPtr< IfcDateTimeSelect > m_submittedOn;
    std::string m_status;
    Step::StepSet< Step::RefPtr< IfcActorSelect > > m_targetUsers;
    Step::RefPtr< IfcDateTimeSelect > m_updateDate;
    std::string m_iD;
    IfcCostScheduleTypeEnum m_predefinedType;
    /**
     * @param c
     */
    IfcCostSchedule(const IfcCostSchedule &c);

  };

  class IfcCostSchedule;

  /**
   */
  class IFC2X3_DLL_DEF IfcCostSchedule_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcCostSchedule_Factory();
    virtual ~IfcCostSchedule_Factory();
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
    IfcCostSchedule *get(Step::StepId id);
    /**
     */
    IfcCostSchedule *generate();
    /**
     * @param id
     */
    IfcCostSchedule *find(Step::StepId id);

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

#endif // IFC2X3_IFCCOSTSCHEDULE_H
