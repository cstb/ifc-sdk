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
 *     Copyright (C) 2009 CSTB                                             *
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

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

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
     * .
     * 
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMetricValueSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcMetricValueSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcCalendarDate *getIfcCalendarDate() const;
        /**
         * @param value
         */
        void setIfcCalendarDate(IfcCalendarDate *value);
        /**
         */
        IfcLocalTime *getIfcLocalTime() const;
        /**
         * @param value
         */
        void setIfcLocalTime(IfcLocalTime *value);
        /**
         */
        IfcDateAndTime *getIfcDateAndTime() const;
        /**
         * @param value
         */
        void setIfcDateAndTime(IfcDateAndTime *value);
        /**
         */
        IfcMeasureWithUnit *getIfcMeasureWithUnit() const;
        /**
         * @param value
         */
        void setIfcMeasureWithUnit(IfcMeasureWithUnit *value);
        /**
         */
        IfcTable *getIfcTable() const;
        /**
         * @param value
         */
        void setIfcTable(IfcTable *value);
        /**
         */
        IfcText getIfcText() const;
        /**
         * @param value
         */
        void setIfcText(const IfcText &value);
        /**
         */
        IfcTimeSeries *getIfcTimeSeries() const;
        /**
         * @param value
         */
        void setIfcTimeSeries(IfcTimeSeries *value);
        /**
         */
        IfcCostValue *getIfcCostValue() const;
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
