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
     * Generated class for the IfcTimeSeriesSchedule Entity.
     *
     */
    class IFC2X3_EXPORT IfcTimeSeriesSchedule : public IfcControl
    {

        // Attributes
        List_IfcDateTimeSelect_1_n m_ApplicableDates;
        IfcTimeSeriesScheduleTypeEnum m_TimeSeriesScheduleType;
        Step::RefPtr< IfcTimeSeries > m_TimeSeries;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ApplicableDates
        /// @{
        virtual List_IfcDateTimeSelect_1_n &getApplicableDates();
        virtual const List_IfcDateTimeSelect_1_n &getApplicableDates() const;
        virtual void setApplicableDates(const List_IfcDateTimeSelect_1_n &value);
        virtual void unsetApplicableDates();
        virtual bool testApplicableDates() const;
        /// @}

        /// Attribute TimeSeriesScheduleType
        /// @{
        virtual IfcTimeSeriesScheduleTypeEnum getTimeSeriesScheduleType();
        virtual IfcTimeSeriesScheduleTypeEnum getTimeSeriesScheduleType() const;
        virtual void setTimeSeriesScheduleType(IfcTimeSeriesScheduleTypeEnum value);
        virtual void unsetTimeSeriesScheduleType();
        virtual bool testTimeSeriesScheduleType() const;
        /// @}

        /// Attribute TimeSeries
        /// @{
        virtual IfcTimeSeries *getTimeSeries();
        virtual const IfcTimeSeries *getTimeSeries() const;
        virtual void setTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetTimeSeries();
        virtual bool testTimeSeries() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTimeSeriesSchedule(Step::Id id, Step::SPFData *args);
        virtual ~IfcTimeSeriesSchedule();

        virtual bool init();

        virtual void copy(const IfcTimeSeriesSchedule &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3