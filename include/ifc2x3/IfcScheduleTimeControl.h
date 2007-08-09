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

#ifndef IFC2X3_IFCSCHEDULETIMECONTROL_H
#define IFC2X3_IFCSCHEDULETIMECONTROL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcControl.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDateTimeSelect;
  class IfcRelAssignsTasks;
  class IfcScheduleTimeControl_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcScheduleTimeControl : public Step::InstantiatableEntity, public IfcControl {
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
     * (non-const) Returns the value of the explicit attribute 'ActualStart'.
     * 
     * @return the value of the explicit attribute 'ActualStart'
     */
    IfcDateTimeSelect *getActualStart();
    /**
     * Sets the value of the explicit attribute 'ActualStart'.
     * 
     * @param value
     */
    void setActualStart(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'EarlyStart'.
     * 
     * @return the value of the explicit attribute 'EarlyStart'
     */
    IfcDateTimeSelect *getEarlyStart();
    /**
     * Sets the value of the explicit attribute 'EarlyStart'.
     * 
     * @param value
     */
    void setEarlyStart(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LateStart'.
     * 
     * @return the value of the explicit attribute 'LateStart'
     */
    IfcDateTimeSelect *getLateStart();
    /**
     * Sets the value of the explicit attribute 'LateStart'.
     * 
     * @param value
     */
    void setLateStart(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ScheduleStart'.
     * 
     * @return the value of the explicit attribute 'ScheduleStart'
     */
    IfcDateTimeSelect *getScheduleStart();
    /**
     * Sets the value of the explicit attribute 'ScheduleStart'.
     * 
     * @param value
     */
    void setScheduleStart(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ActualFinish'.
     * 
     * @return the value of the explicit attribute 'ActualFinish'
     */
    IfcDateTimeSelect *getActualFinish();
    /**
     * Sets the value of the explicit attribute 'ActualFinish'.
     * 
     * @param value
     */
    void setActualFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'EarlyFinish'.
     * 
     * @return the value of the explicit attribute 'EarlyFinish'
     */
    IfcDateTimeSelect *getEarlyFinish();
    /**
     * Sets the value of the explicit attribute 'EarlyFinish'.
     * 
     * @param value
     */
    void setEarlyFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LateFinish'.
     * 
     * @return the value of the explicit attribute 'LateFinish'
     */
    IfcDateTimeSelect *getLateFinish();
    /**
     * Sets the value of the explicit attribute 'LateFinish'.
     * 
     * @param value
     */
    void setLateFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ScheduleFinish'.
     * 
     * @return the value of the explicit attribute 'ScheduleFinish'
     */
    IfcDateTimeSelect *getScheduleFinish();
    /**
     * Sets the value of the explicit attribute 'ScheduleFinish'.
     * 
     * @param value
     */
    void setScheduleFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ScheduleDuration'.
     * 
     * @return the value of the explicit attribute 'ScheduleDuration'
     */
    IfcTimeMeasure getScheduleDuration();
    /**
     * Sets the value of the explicit attribute 'ScheduleDuration'.
     * 
     * @param value
     */
    void setScheduleDuration(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ActualDuration'.
     * 
     * @return the value of the explicit attribute 'ActualDuration'
     */
    IfcTimeMeasure getActualDuration();
    /**
     * Sets the value of the explicit attribute 'ActualDuration'.
     * 
     * @param value
     */
    void setActualDuration(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RemainingTime'.
     * 
     * @return the value of the explicit attribute 'RemainingTime'
     */
    IfcTimeMeasure getRemainingTime();
    /**
     * Sets the value of the explicit attribute 'RemainingTime'.
     * 
     * @param value
     */
    void setRemainingTime(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FreeFloat'.
     * 
     * @return the value of the explicit attribute 'FreeFloat'
     */
    IfcTimeMeasure getFreeFloat();
    /**
     * Sets the value of the explicit attribute 'FreeFloat'.
     * 
     * @param value
     */
    void setFreeFloat(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TotalFloat'.
     * 
     * @return the value of the explicit attribute 'TotalFloat'
     */
    IfcTimeMeasure getTotalFloat();
    /**
     * Sets the value of the explicit attribute 'TotalFloat'.
     * 
     * @param value
     */
    void setTotalFloat(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsCritical'.
     * 
     * @return the value of the explicit attribute 'IsCritical'
     */
    Bool getIsCritical();
    /**
     * Sets the value of the explicit attribute 'IsCritical'.
     * 
     * @param value
     */
    void setIsCritical(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'StatusTime'.
     * 
     * @return the value of the explicit attribute 'StatusTime'
     */
    IfcDateTimeSelect *getStatusTime();
    /**
     * Sets the value of the explicit attribute 'StatusTime'.
     * 
     * @param value
     */
    void setStatusTime(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'StartFloat'.
     * 
     * @return the value of the explicit attribute 'StartFloat'
     */
    IfcTimeMeasure getStartFloat();
    /**
     * Sets the value of the explicit attribute 'StartFloat'.
     * 
     * @param value
     */
    void setStartFloat(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FinishFloat'.
     * 
     * @return the value of the explicit attribute 'FinishFloat'
     */
    IfcTimeMeasure getFinishFloat();
    /**
     * Sets the value of the explicit attribute 'FinishFloat'.
     * 
     * @param value
     */
    void setFinishFloat(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Completion'.
     * 
     * @return the value of the explicit attribute 'Completion'
     */
    IfcPositiveRatioMeasure getCompletion();
    /**
     * Sets the value of the explicit attribute 'Completion'.
     * 
     * @param value
     */
    void setCompletion(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ScheduleTimeControlAssigned'.
     * 
     * @return the value of the explicit attribute 'ScheduleTimeControlAssigned'
     */
    IfcRelAssignsTasks *getScheduleTimeControlAssigned();
    /**
     * Sets the value of the explicit attribute 'ScheduleTimeControlAssigned'.
     * 
     * @param value
     */
    void setScheduleTimeControlAssigned(const Step::RefPtr< IfcRelAssignsTasks > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcScheduleTimeControl_Factory;

  protected:
    /**
     * @param args
     */
    IfcScheduleTimeControl(Step::SPFData *args);
    virtual ~IfcScheduleTimeControl();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcDateTimeSelect > m_actualStart;
    Step::RefPtr< IfcDateTimeSelect > m_earlyStart;
    Step::RefPtr< IfcDateTimeSelect > m_lateStart;
    Step::RefPtr< IfcDateTimeSelect > m_scheduleStart;
    Step::RefPtr< IfcDateTimeSelect > m_actualFinish;
    Step::RefPtr< IfcDateTimeSelect > m_earlyFinish;
    Step::RefPtr< IfcDateTimeSelect > m_lateFinish;
    Step::RefPtr< IfcDateTimeSelect > m_scheduleFinish;
    Real m_scheduleDuration;
    Real m_actualDuration;
    Real m_remainingTime;
    Real m_freeFloat;
    Real m_totalFloat;
    Bool m_isCritical;
    Step::RefPtr< IfcDateTimeSelect > m_statusTime;
    Real m_startFloat;
    Real m_finishFloat;
    Real m_completion;
    Step::RefPtr< IfcRelAssignsTasks > m_scheduleTimeControlAssigned;
    /**
     * @param c
     */
    IfcScheduleTimeControl(const IfcScheduleTimeControl &c);

  };

  class IfcScheduleTimeControl;

  /**
   */
  class IFC2X3_DLL_DEF IfcScheduleTimeControl_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcScheduleTimeControl_Factory();
    virtual ~IfcScheduleTimeControl_Factory();
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
    IfcScheduleTimeControl *get(Step::StepId id);
    /**
     */
    IfcScheduleTimeControl *generate();
    /**
     * @param id
     */
    IfcScheduleTimeControl *find(Step::StepId id);

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

#endif // IFC2X3_IFCSCHEDULETIMECONTROL_H
