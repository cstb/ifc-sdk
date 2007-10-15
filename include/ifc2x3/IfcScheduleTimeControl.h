/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
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
         */
        IfcDateTimeSelect *getActualStart();
        /**
         * Sets the value of the explicit attribute 'ActualStart'.
         * 
         * @param value
         */
        void setActualStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getEarlyStart();
        /**
         * Sets the value of the explicit attribute 'EarlyStart'.
         * 
         * @param value
         */
        void setEarlyStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getLateStart();
        /**
         * Sets the value of the explicit attribute 'LateStart'.
         * 
         * @param value
         */
        void setLateStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getScheduleStart();
        /**
         * Sets the value of the explicit attribute 'ScheduleStart'.
         * 
         * @param value
         */
        void setScheduleStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getActualFinish();
        /**
         * Sets the value of the explicit attribute 'ActualFinish'.
         * 
         * @param value
         */
        void setActualFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getEarlyFinish();
        /**
         * Sets the value of the explicit attribute 'EarlyFinish'.
         * 
         * @param value
         */
        void setEarlyFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getLateFinish();
        /**
         * Sets the value of the explicit attribute 'LateFinish'.
         * 
         * @param value
         */
        void setLateFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getScheduleFinish();
        /**
         * Sets the value of the explicit attribute 'ScheduleFinish'.
         * 
         * @param value
         */
        void setScheduleFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcTimeMeasure getScheduleDuration();
        /**
         * Sets the value of the explicit attribute 'ScheduleDuration'.
         * 
         * @param value
         */
        void setScheduleDuration(IfcTimeMeasure value);
        /**
         */
        IfcTimeMeasure getActualDuration();
        /**
         * Sets the value of the explicit attribute 'ActualDuration'.
         * 
         * @param value
         */
        void setActualDuration(IfcTimeMeasure value);
        /**
         */
        IfcTimeMeasure getRemainingTime();
        /**
         * Sets the value of the explicit attribute 'RemainingTime'.
         * 
         * @param value
         */
        void setRemainingTime(IfcTimeMeasure value);
        /**
         */
        IfcTimeMeasure getFreeFloat();
        /**
         * Sets the value of the explicit attribute 'FreeFloat'.
         * 
         * @param value
         */
        void setFreeFloat(IfcTimeMeasure value);
        /**
         */
        IfcTimeMeasure getTotalFloat();
        /**
         * Sets the value of the explicit attribute 'TotalFloat'.
         * 
         * @param value
         */
        void setTotalFloat(IfcTimeMeasure value);
        /**
         */
        Step::Bool getIsCritical();
        /**
         * Sets the value of the explicit attribute 'IsCritical'.
         * 
         * @param value
         */
        void setIsCritical(Step::Bool value);
        /**
         */
        IfcDateTimeSelect *getStatusTime();
        /**
         * Sets the value of the explicit attribute 'StatusTime'.
         * 
         * @param value
         */
        void setStatusTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcTimeMeasure getStartFloat();
        /**
         * Sets the value of the explicit attribute 'StartFloat'.
         * 
         * @param value
         */
        void setStartFloat(IfcTimeMeasure value);
        /**
         */
        IfcTimeMeasure getFinishFloat();
        /**
         * Sets the value of the explicit attribute 'FinishFloat'.
         * 
         * @param value
         */
        void setFinishFloat(IfcTimeMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getCompletion();
        /**
         * Sets the value of the explicit attribute 'Completion'.
         * 
         * @param value
         */
        void setCompletion(IfcPositiveRatioMeasure value);
        /**
         */
        IfcRelAssignsTasks *getScheduleTimeControlAssigned();
        /**
         */
        virtual void release();
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
        Step::Bool m_isCritical;
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
