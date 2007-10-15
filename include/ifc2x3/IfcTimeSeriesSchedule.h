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

#ifndef IFC2X3_IFCTIMESERIESSCHEDULE_H
#define IFC2X3_IFCTIMESERIESSCHEDULE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcDateTimeSelect.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTimeSeries;

    /**
     */
    class IFC2X3_DLL_DEF IfcTimeSeriesSchedule : public IfcControl {
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
        Step::List< Step::RefPtr< IfcDateTimeSelect > > &getApplicableDates();
        /**
         * Sets the value of the explicit attribute 'ApplicableDates'.
         * 
         * @param value
         */
        void setApplicableDates(const Step::List< Step::RefPtr< IfcDateTimeSelect > > &value);
        /**
         */
        IfcTimeSeriesScheduleTypeEnum getTimeSeriesScheduleType();
        /**
         * Sets the value of the explicit attribute 'TimeSeriesScheduleType'.
         * 
         * @param value
         */
        void setTimeSeriesScheduleType(IfcTimeSeriesScheduleTypeEnum value);
        /**
         */
        IfcTimeSeries *getTimeSeries();
        /**
         * Sets the value of the explicit attribute 'TimeSeries'.
         * 
         * @param value
         */
        void setTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        virtual void release();
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
        Step::List< Step::RefPtr< IfcDateTimeSelect > > m_applicableDates;
        /**
         */
        IfcTimeSeriesScheduleTypeEnum m_timeSeriesScheduleType;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_timeSeries;

    };

}

#endif // IFC2X3_IFCTIMESERIESSCHEDULE_H
