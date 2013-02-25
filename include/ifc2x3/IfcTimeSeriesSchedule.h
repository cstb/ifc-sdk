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

#ifndef IFC2X3_IFCTIMESERIESSCHEDULE_H
#define IFC2X3_IFCTIMESERIESSCHEDULE_H
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
    class IfcTimeSeries;

    /**
     * Generated class for the IfcTimeSeriesSchedule Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTimeSeriesSchedule : public IfcControl {
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
         * Gets the value of the explicit attribute 'ApplicableDates'.
         * 
         */
        virtual List_IfcDateTimeSelect_1_n &getApplicableDates();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicableDates'.
         * 
         * @return the value of the explicit attribute 'ApplicableDates'
         */
        virtual const List_IfcDateTimeSelect_1_n &getApplicableDates() const;
        /**
         * Sets the value of the explicit attribute 'ApplicableDates'.
         * 
         * @param value
         */
        virtual void setApplicableDates(const List_IfcDateTimeSelect_1_n &value);
        /**
         * unset the attribute 'ApplicableDates'.
         * 
         */
        virtual void unsetApplicableDates();
        /**
         * Test if the attribute 'ApplicableDates' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApplicableDates() const;
        /**
         * Gets the value of the explicit attribute 'TimeSeriesScheduleType'.
         * 
         */
        virtual IfcTimeSeriesScheduleTypeEnum getTimeSeriesScheduleType();
        /**
         * (const) Returns the value of the explicit attribute 'TimeSeriesScheduleType'.
         * 
         * @return the value of the explicit attribute 'TimeSeriesScheduleType'
         */
        virtual const IfcTimeSeriesScheduleTypeEnum getTimeSeriesScheduleType() const;
        /**
         * Sets the value of the explicit attribute 'TimeSeriesScheduleType'.
         * 
         * @param value
         */
        virtual void setTimeSeriesScheduleType(IfcTimeSeriesScheduleTypeEnum value);
        /**
         * unset the attribute 'TimeSeriesScheduleType'.
         * 
         */
        virtual void unsetTimeSeriesScheduleType();
        /**
         * Test if the attribute 'TimeSeriesScheduleType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTimeSeriesScheduleType() const;
        /**
         * Gets the value of the explicit attribute 'TimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'TimeSeries'.
         * 
         * @return the value of the explicit attribute 'TimeSeries'
         */
        virtual const IfcTimeSeries *getTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'TimeSeries'.
         * 
         * @param value
         */
        virtual void setTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * unset the attribute 'TimeSeries'.
         * 
         */
        virtual void unsetTimeSeries();
        /**
         * Test if the attribute 'TimeSeries' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTimeSeries() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTimeSeriesSchedule(Step::Id id, Step::SPFData *args);
        virtual ~IfcTimeSeriesSchedule();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTimeSeriesSchedule &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcDateTimeSelect_1_n m_applicableDates;
        /**
         */
        IfcTimeSeriesScheduleTypeEnum m_timeSeriesScheduleType;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_timeSeries;

    };

}

#endif // IFC2X3_IFCTIMESERIESSCHEDULE_H
