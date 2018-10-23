#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcControl.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcScheduleTimeControl Entity.
     *
     */
    class IFC2X3_EXPORT IfcScheduleTimeControl : public IfcControl
    {

        // Attributes
        Step::RefPtr< IfcDateTimeSelect > m_ActualStart;
        Step::RefPtr< IfcDateTimeSelect > m_EarlyStart;
        Step::RefPtr< IfcDateTimeSelect > m_LateStart;
        Step::RefPtr< IfcDateTimeSelect > m_ScheduleStart;
        Step::RefPtr< IfcDateTimeSelect > m_ActualFinish;
        Step::RefPtr< IfcDateTimeSelect > m_EarlyFinish;
        Step::RefPtr< IfcDateTimeSelect > m_LateFinish;
        Step::RefPtr< IfcDateTimeSelect > m_ScheduleFinish;
        IfcTimeMeasure m_ScheduleDuration;
        IfcTimeMeasure m_ActualDuration;
        IfcTimeMeasure m_RemainingTime;
        IfcTimeMeasure m_FreeFloat;
        IfcTimeMeasure m_TotalFloat;
        Step::Boolean m_IsCritical;
        Step::RefPtr< IfcDateTimeSelect > m_StatusTime;
        IfcTimeMeasure m_StartFloat;
        IfcTimeMeasure m_FinishFloat;
        IfcPositiveRatioMeasure m_Completion;
        // InverseAttributes
        Step::ObsPtr< IfcRelAssignsTasks > m_ScheduleTimeControlAssigned;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ActualStart
        /// @{
        virtual IfcDateTimeSelect *getActualStart();
        virtual const IfcDateTimeSelect *getActualStart() const;
        virtual void setActualStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetActualStart();
        virtual bool testActualStart() const;
        /// @}

        /// Attribute EarlyStart
        /// @{
        virtual IfcDateTimeSelect *getEarlyStart();
        virtual const IfcDateTimeSelect *getEarlyStart() const;
        virtual void setEarlyStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetEarlyStart();
        virtual bool testEarlyStart() const;
        /// @}

        /// Attribute LateStart
        /// @{
        virtual IfcDateTimeSelect *getLateStart();
        virtual const IfcDateTimeSelect *getLateStart() const;
        virtual void setLateStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetLateStart();
        virtual bool testLateStart() const;
        /// @}

        /// Attribute ScheduleStart
        /// @{
        virtual IfcDateTimeSelect *getScheduleStart();
        virtual const IfcDateTimeSelect *getScheduleStart() const;
        virtual void setScheduleStart(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetScheduleStart();
        virtual bool testScheduleStart() const;
        /// @}

        /// Attribute ActualFinish
        /// @{
        virtual IfcDateTimeSelect *getActualFinish();
        virtual const IfcDateTimeSelect *getActualFinish() const;
        virtual void setActualFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetActualFinish();
        virtual bool testActualFinish() const;
        /// @}

        /// Attribute EarlyFinish
        /// @{
        virtual IfcDateTimeSelect *getEarlyFinish();
        virtual const IfcDateTimeSelect *getEarlyFinish() const;
        virtual void setEarlyFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetEarlyFinish();
        virtual bool testEarlyFinish() const;
        /// @}

        /// Attribute LateFinish
        /// @{
        virtual IfcDateTimeSelect *getLateFinish();
        virtual const IfcDateTimeSelect *getLateFinish() const;
        virtual void setLateFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetLateFinish();
        virtual bool testLateFinish() const;
        /// @}

        /// Attribute ScheduleFinish
        /// @{
        virtual IfcDateTimeSelect *getScheduleFinish();
        virtual const IfcDateTimeSelect *getScheduleFinish() const;
        virtual void setScheduleFinish(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetScheduleFinish();
        virtual bool testScheduleFinish() const;
        /// @}

        /// Attribute ScheduleDuration
        /// @{
        virtual IfcTimeMeasure getScheduleDuration();
        virtual IfcTimeMeasure getScheduleDuration() const;
        virtual void setScheduleDuration(IfcTimeMeasure value);
        virtual void unsetScheduleDuration();
        virtual bool testScheduleDuration() const;
        /// @}

        /// Attribute ActualDuration
        /// @{
        virtual IfcTimeMeasure getActualDuration();
        virtual IfcTimeMeasure getActualDuration() const;
        virtual void setActualDuration(IfcTimeMeasure value);
        virtual void unsetActualDuration();
        virtual bool testActualDuration() const;
        /// @}

        /// Attribute RemainingTime
        /// @{
        virtual IfcTimeMeasure getRemainingTime();
        virtual IfcTimeMeasure getRemainingTime() const;
        virtual void setRemainingTime(IfcTimeMeasure value);
        virtual void unsetRemainingTime();
        virtual bool testRemainingTime() const;
        /// @}

        /// Attribute FreeFloat
        /// @{
        virtual IfcTimeMeasure getFreeFloat();
        virtual IfcTimeMeasure getFreeFloat() const;
        virtual void setFreeFloat(IfcTimeMeasure value);
        virtual void unsetFreeFloat();
        virtual bool testFreeFloat() const;
        /// @}

        /// Attribute TotalFloat
        /// @{
        virtual IfcTimeMeasure getTotalFloat();
        virtual IfcTimeMeasure getTotalFloat() const;
        virtual void setTotalFloat(IfcTimeMeasure value);
        virtual void unsetTotalFloat();
        virtual bool testTotalFloat() const;
        /// @}

        /// Attribute IsCritical
        /// @{
        virtual Step::Boolean getIsCritical();
        virtual Step::Boolean getIsCritical() const;
        virtual void setIsCritical(Step::Boolean value);
        virtual void unsetIsCritical();
        virtual bool testIsCritical() const;
        /// @}

        /// Attribute StatusTime
        /// @{
        virtual IfcDateTimeSelect *getStatusTime();
        virtual const IfcDateTimeSelect *getStatusTime() const;
        virtual void setStatusTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetStatusTime();
        virtual bool testStatusTime() const;
        /// @}

        /// Attribute StartFloat
        /// @{
        virtual IfcTimeMeasure getStartFloat();
        virtual IfcTimeMeasure getStartFloat() const;
        virtual void setStartFloat(IfcTimeMeasure value);
        virtual void unsetStartFloat();
        virtual bool testStartFloat() const;
        /// @}

        /// Attribute FinishFloat
        /// @{
        virtual IfcTimeMeasure getFinishFloat();
        virtual IfcTimeMeasure getFinishFloat() const;
        virtual void setFinishFloat(IfcTimeMeasure value);
        virtual void unsetFinishFloat();
        virtual bool testFinishFloat() const;
        /// @}

        /// Attribute Completion
        /// @{
        virtual IfcPositiveRatioMeasure getCompletion();
        virtual IfcPositiveRatioMeasure getCompletion() const;
        virtual void setCompletion(IfcPositiveRatioMeasure value);
        virtual void unsetCompletion();
        virtual bool testCompletion() const;
        /// @}

        /// Inverse attribute ScheduleTimeControlAssigned
        /// @{
        virtual IfcRelAssignsTasks *getScheduleTimeControlAssigned();
        virtual const IfcRelAssignsTasks *getScheduleTimeControlAssigned() const;
        virtual bool testScheduleTimeControlAssigned() const;

        friend class IfcRelAssignsTasks;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcScheduleTimeControl(Step::Id id, Step::SPFData *args);
        virtual ~IfcScheduleTimeControl();

        virtual bool init();

        virtual void copy(const IfcScheduleTimeControl &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3