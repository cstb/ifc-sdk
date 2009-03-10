/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
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
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateTimeSelect;
    class IfcRelAssignsTasks;

    /**
     */
    class IFC2X3_DLL_DEF IfcScheduleTimeControl : public IfcControl {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'ActualStart'.
         * 
         */
        virtual IfcDateTimeSelect *getActualStart();
        /**
         * (const) Returns the value of the explicit attribute 'ActualStart'.
         * 
         * @return the value of the explicit attribute 'ActualStart'
         */
        virtual const IfcDateTimeSelect *getActualStart() const;
        /**
         * Sets the value of the explicit attribute 'ActualStart'.
         * 
         * @param value
         */
        virtual void setActualStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'EarlyStart'.
         * 
         */
        virtual IfcDateTimeSelect *getEarlyStart();
        /**
         * (const) Returns the value of the explicit attribute 'EarlyStart'.
         * 
         * @return the value of the explicit attribute 'EarlyStart'
         */
        virtual const IfcDateTimeSelect *getEarlyStart() const;
        /**
         * Sets the value of the explicit attribute 'EarlyStart'.
         * 
         * @param value
         */
        virtual void setEarlyStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'LateStart'.
         * 
         */
        virtual IfcDateTimeSelect *getLateStart();
        /**
         * (const) Returns the value of the explicit attribute 'LateStart'.
         * 
         * @return the value of the explicit attribute 'LateStart'
         */
        virtual const IfcDateTimeSelect *getLateStart() const;
        /**
         * Sets the value of the explicit attribute 'LateStart'.
         * 
         * @param value
         */
        virtual void setLateStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ScheduleStart'.
         * 
         */
        virtual IfcDateTimeSelect *getScheduleStart();
        /**
         * (const) Returns the value of the explicit attribute 'ScheduleStart'.
         * 
         * @return the value of the explicit attribute 'ScheduleStart'
         */
        virtual const IfcDateTimeSelect *getScheduleStart() const;
        /**
         * Sets the value of the explicit attribute 'ScheduleStart'.
         * 
         * @param value
         */
        virtual void setScheduleStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ActualFinish'.
         * 
         */
        virtual IfcDateTimeSelect *getActualFinish();
        /**
         * (const) Returns the value of the explicit attribute 'ActualFinish'.
         * 
         * @return the value of the explicit attribute 'ActualFinish'
         */
        virtual const IfcDateTimeSelect *getActualFinish() const;
        /**
         * Sets the value of the explicit attribute 'ActualFinish'.
         * 
         * @param value
         */
        virtual void setActualFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'EarlyFinish'.
         * 
         */
        virtual IfcDateTimeSelect *getEarlyFinish();
        /**
         * (const) Returns the value of the explicit attribute 'EarlyFinish'.
         * 
         * @return the value of the explicit attribute 'EarlyFinish'
         */
        virtual const IfcDateTimeSelect *getEarlyFinish() const;
        /**
         * Sets the value of the explicit attribute 'EarlyFinish'.
         * 
         * @param value
         */
        virtual void setEarlyFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'LateFinish'.
         * 
         */
        virtual IfcDateTimeSelect *getLateFinish();
        /**
         * (const) Returns the value of the explicit attribute 'LateFinish'.
         * 
         * @return the value of the explicit attribute 'LateFinish'
         */
        virtual const IfcDateTimeSelect *getLateFinish() const;
        /**
         * Sets the value of the explicit attribute 'LateFinish'.
         * 
         * @param value
         */
        virtual void setLateFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ScheduleFinish'.
         * 
         */
        virtual IfcDateTimeSelect *getScheduleFinish();
        /**
         * (const) Returns the value of the explicit attribute 'ScheduleFinish'.
         * 
         * @return the value of the explicit attribute 'ScheduleFinish'
         */
        virtual const IfcDateTimeSelect *getScheduleFinish() const;
        /**
         * Sets the value of the explicit attribute 'ScheduleFinish'.
         * 
         * @param value
         */
        virtual void setScheduleFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ScheduleDuration'.
         * 
         */
        virtual IfcTimeMeasure getScheduleDuration();
        /**
         * (const) Returns the value of the explicit attribute 'ScheduleDuration'.
         * 
         * @return the value of the explicit attribute 'ScheduleDuration'
         */
        virtual const IfcTimeMeasure getScheduleDuration() const;
        /**
         * Sets the value of the explicit attribute 'ScheduleDuration'.
         * 
         * @param value
         */
        virtual void setScheduleDuration(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'ActualDuration'.
         * 
         */
        virtual IfcTimeMeasure getActualDuration();
        /**
         * (const) Returns the value of the explicit attribute 'ActualDuration'.
         * 
         * @return the value of the explicit attribute 'ActualDuration'
         */
        virtual const IfcTimeMeasure getActualDuration() const;
        /**
         * Sets the value of the explicit attribute 'ActualDuration'.
         * 
         * @param value
         */
        virtual void setActualDuration(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'RemainingTime'.
         * 
         */
        virtual IfcTimeMeasure getRemainingTime();
        /**
         * (const) Returns the value of the explicit attribute 'RemainingTime'.
         * 
         * @return the value of the explicit attribute 'RemainingTime'
         */
        virtual const IfcTimeMeasure getRemainingTime() const;
        /**
         * Sets the value of the explicit attribute 'RemainingTime'.
         * 
         * @param value
         */
        virtual void setRemainingTime(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'FreeFloat'.
         * 
         */
        virtual IfcTimeMeasure getFreeFloat();
        /**
         * (const) Returns the value of the explicit attribute 'FreeFloat'.
         * 
         * @return the value of the explicit attribute 'FreeFloat'
         */
        virtual const IfcTimeMeasure getFreeFloat() const;
        /**
         * Sets the value of the explicit attribute 'FreeFloat'.
         * 
         * @param value
         */
        virtual void setFreeFloat(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'TotalFloat'.
         * 
         */
        virtual IfcTimeMeasure getTotalFloat();
        /**
         * (const) Returns the value of the explicit attribute 'TotalFloat'.
         * 
         * @return the value of the explicit attribute 'TotalFloat'
         */
        virtual const IfcTimeMeasure getTotalFloat() const;
        /**
         * Sets the value of the explicit attribute 'TotalFloat'.
         * 
         * @param value
         */
        virtual void setTotalFloat(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'IsCritical'.
         * 
         */
        virtual Step::Boolean getIsCritical();
        /**
         * (const) Returns the value of the explicit attribute 'IsCritical'.
         * 
         * @return the value of the explicit attribute 'IsCritical'
         */
        virtual const Step::Boolean getIsCritical() const;
        /**
         * Sets the value of the explicit attribute 'IsCritical'.
         * 
         * @param value
         */
        virtual void setIsCritical(Step::Boolean value);
        /**
         * Gets the value of the explicit attribute 'StatusTime'.
         * 
         */
        virtual IfcDateTimeSelect *getStatusTime();
        /**
         * (const) Returns the value of the explicit attribute 'StatusTime'.
         * 
         * @return the value of the explicit attribute 'StatusTime'
         */
        virtual const IfcDateTimeSelect *getStatusTime() const;
        /**
         * Sets the value of the explicit attribute 'StatusTime'.
         * 
         * @param value
         */
        virtual void setStatusTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'StartFloat'.
         * 
         */
        virtual IfcTimeMeasure getStartFloat();
        /**
         * (const) Returns the value of the explicit attribute 'StartFloat'.
         * 
         * @return the value of the explicit attribute 'StartFloat'
         */
        virtual const IfcTimeMeasure getStartFloat() const;
        /**
         * Sets the value of the explicit attribute 'StartFloat'.
         * 
         * @param value
         */
        virtual void setStartFloat(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'FinishFloat'.
         * 
         */
        virtual IfcTimeMeasure getFinishFloat();
        /**
         * (const) Returns the value of the explicit attribute 'FinishFloat'.
         * 
         * @return the value of the explicit attribute 'FinishFloat'
         */
        virtual const IfcTimeMeasure getFinishFloat() const;
        /**
         * Sets the value of the explicit attribute 'FinishFloat'.
         * 
         * @param value
         */
        virtual void setFinishFloat(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'Completion'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCompletion();
        /**
         * (const) Returns the value of the explicit attribute 'Completion'.
         * 
         * @return the value of the explicit attribute 'Completion'
         */
        virtual const IfcPositiveRatioMeasure getCompletion() const;
        /**
         * Sets the value of the explicit attribute 'Completion'.
         * 
         * @param value
         */
        virtual void setCompletion(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the inverse attribute 'ScheduleTimeControlAssigned'.
         * 
         */
        IfcRelAssignsTasks *getScheduleTimeControlAssigned();
        /**
         * (const) Returns the value of the explicit attribute 'ScheduleTimeControlAssigned'.
         * 
         * @return the value of the explicit attribute 'ScheduleTimeControlAssigned'
         */
        virtual const IfcRelAssignsTasks *getScheduleTimeControlAssigned() const;
        friend class ExpressDataSet;
        friend class IfcRelAssignsTasks;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcScheduleTimeControl(Step::Id id, Step::SPFData *args);
        virtual ~IfcScheduleTimeControl();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcScheduleTimeControl &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_actualStart;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_earlyStart;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_lateStart;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_scheduleStart;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_actualFinish;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_earlyFinish;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_lateFinish;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_scheduleFinish;
        /**
         */
        Step::Real m_scheduleDuration;
        /**
         */
        Step::Real m_actualDuration;
        /**
         */
        Step::Real m_remainingTime;
        /**
         */
        Step::Real m_freeFloat;
        /**
         */
        Step::Real m_totalFloat;
        /**
         */
        Step::Boolean m_isCritical;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_statusTime;
        /**
         */
        Step::Real m_startFloat;
        /**
         */
        Step::Real m_finishFloat;
        /**
         */
        Step::Real m_completion;
        /**
         */
        Step::ObsPtr< IfcRelAssignsTasks > m_scheduleTimeControlAssigned;

    };

}

#endif // IFC2X3_IFCSCHEDULETIMECONTROL_H
