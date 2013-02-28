// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCSCHEDULETIMECONTROL_H
#define IFC2X3_IFCSCHEDULETIMECONTROL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcControl.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateTimeSelect;
    class IfcRelAssignsTasks;

    /**
     * Generated class for the IfcScheduleTimeControl Entity.
     * 
     */
    class IFC2X3_EXPORT IfcScheduleTimeControl : public IfcControl {
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
         * unset the attribute 'ActualStart'.
         * 
         */
        virtual void unsetActualStart();
        /**
         * Test if the attribute 'ActualStart' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testActualStart() const;
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
         * unset the attribute 'EarlyStart'.
         * 
         */
        virtual void unsetEarlyStart();
        /**
         * Test if the attribute 'EarlyStart' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEarlyStart() const;
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
         * unset the attribute 'LateStart'.
         * 
         */
        virtual void unsetLateStart();
        /**
         * Test if the attribute 'LateStart' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLateStart() const;
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
         * unset the attribute 'ScheduleStart'.
         * 
         */
        virtual void unsetScheduleStart();
        /**
         * Test if the attribute 'ScheduleStart' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testScheduleStart() const;
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
         * unset the attribute 'ActualFinish'.
         * 
         */
        virtual void unsetActualFinish();
        /**
         * Test if the attribute 'ActualFinish' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testActualFinish() const;
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
         * unset the attribute 'EarlyFinish'.
         * 
         */
        virtual void unsetEarlyFinish();
        /**
         * Test if the attribute 'EarlyFinish' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEarlyFinish() const;
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
         * unset the attribute 'LateFinish'.
         * 
         */
        virtual void unsetLateFinish();
        /**
         * Test if the attribute 'LateFinish' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLateFinish() const;
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
         * unset the attribute 'ScheduleFinish'.
         * 
         */
        virtual void unsetScheduleFinish();
        /**
         * Test if the attribute 'ScheduleFinish' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testScheduleFinish() const;
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
         * unset the attribute 'ScheduleDuration'.
         * 
         */
        virtual void unsetScheduleDuration();
        /**
         * Test if the attribute 'ScheduleDuration' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testScheduleDuration() const;
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
         * unset the attribute 'ActualDuration'.
         * 
         */
        virtual void unsetActualDuration();
        /**
         * Test if the attribute 'ActualDuration' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testActualDuration() const;
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
         * unset the attribute 'RemainingTime'.
         * 
         */
        virtual void unsetRemainingTime();
        /**
         * Test if the attribute 'RemainingTime' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRemainingTime() const;
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
         * unset the attribute 'FreeFloat'.
         * 
         */
        virtual void unsetFreeFloat();
        /**
         * Test if the attribute 'FreeFloat' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFreeFloat() const;
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
         * unset the attribute 'TotalFloat'.
         * 
         */
        virtual void unsetTotalFloat();
        /**
         * Test if the attribute 'TotalFloat' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTotalFloat() const;
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
         * unset the attribute 'IsCritical'.
         * 
         */
        virtual void unsetIsCritical();
        /**
         * Test if the attribute 'IsCritical' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsCritical() const;
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
         * unset the attribute 'StatusTime'.
         * 
         */
        virtual void unsetStatusTime();
        /**
         * Test if the attribute 'StatusTime' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStatusTime() const;
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
         * unset the attribute 'StartFloat'.
         * 
         */
        virtual void unsetStartFloat();
        /**
         * Test if the attribute 'StartFloat' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStartFloat() const;
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
         * unset the attribute 'FinishFloat'.
         * 
         */
        virtual void unsetFinishFloat();
        /**
         * Test if the attribute 'FinishFloat' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFinishFloat() const;
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
         * unset the attribute 'Completion'.
         * 
         */
        virtual void unsetCompletion();
        /**
         * Test if the attribute 'Completion' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCompletion() const;
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
        /**
         * Test if the attribute 'ScheduleTimeControlAssigned' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testScheduleTimeControlAssigned() const;
        friend class IfcRelAssignsTasks;
        friend class ExpressDataSet;

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
