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

#ifndef IFC2X3_IFCMETRICVALUESELECT_H
#define IFC2X3_IFCMETRICVALUESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCalendarDate;
    class IfcCostValue;
    class IfcDateAndTime;
    class IfcLocalTime;
    class IfcMeasureWithUnit;
    class IfcTable;
    class IfcTimeSeries;

    /**
     */
    class IFC2X3_DLL_DEF IfcMetricValueSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcMetricValueSelect_select {
            IFCCALENDARDATE,
            IFCLOCALTIME,
            IFCDATEANDTIME,
            IFCMEASUREWITHUNIT,
            IFCTABLE,
            IFCTEXT,
            IFCTIMESERIES,
            IFCCOSTVALUE,
            UNSET,
        };

        union IfcMetricValueSelect_union {
            IfcCalendarDate *m_IfcCalendarDate;
            IfcLocalTime *m_IfcLocalTime;
            IfcDateAndTime *m_IfcDateAndTime;
            IfcMeasureWithUnit *m_IfcMeasureWithUnit;
            IfcTable *m_IfcTable;
            IfcText *m_IfcText;
            IfcTimeSeries *m_IfcTimeSeries;
            IfcCostValue *m_IfcCostValue;
        };
        /**
         */
        IfcMetricValueSelect();
        virtual ~IfcMetricValueSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMetricValueSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcMetricValueSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcCalendarDate *getIfcCalendarDate();
        /**
         * @param value
         */
        void setIfcCalendarDate(IfcCalendarDate *value);
        /**
         */
        IfcLocalTime *getIfcLocalTime();
        /**
         * @param value
         */
        void setIfcLocalTime(IfcLocalTime *value);
        /**
         */
        IfcDateAndTime *getIfcDateAndTime();
        /**
         * @param value
         */
        void setIfcDateAndTime(IfcDateAndTime *value);
        /**
         */
        IfcMeasureWithUnit *getIfcMeasureWithUnit();
        /**
         * @param value
         */
        void setIfcMeasureWithUnit(IfcMeasureWithUnit *value);
        /**
         */
        IfcTable *getIfcTable();
        /**
         * @param value
         */
        void setIfcTable(IfcTable *value);
        /**
         */
        IfcText getIfcText();
        /**
         * @param value
         */
        void setIfcText(const IfcText &value);
        /**
         */
        IfcTimeSeries *getIfcTimeSeries();
        /**
         * @param value
         */
        void setIfcTimeSeries(IfcTimeSeries *value);
        /**
         */
        IfcCostValue *getIfcCostValue();
        /**
         * @param value
         */
        void setIfcCostValue(IfcCostValue *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcMetricValueSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcMetricValueSelect_select m_type;
        /**
         */
        IfcMetricValueSelect_union m_IfcMetricValueSelect_union;

    };

}

#endif // IFC2X3_IFCMETRICVALUESELECT_H
