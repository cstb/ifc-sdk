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

#ifndef IFC2X3_IFCTIMESERIES_H
#define IFC2X3_IFCTIMESERIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateTimeSelect;
    class IfcTimeSeriesReferenceRelationship;
    class IfcUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcTimeSeries : public Step::BaseEntity {
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
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        IfcDateTimeSelect *getStartTime();
        /**
         * Sets the value of the explicit attribute 'StartTime'.
         * 
         * @param value
         */
        void setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcDateTimeSelect *getEndTime();
        /**
         * Sets the value of the explicit attribute 'EndTime'.
         * 
         * @param value
         */
        void setEndTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcTimeSeriesDataTypeEnum getTimeSeriesDataType();
        /**
         * Sets the value of the explicit attribute 'TimeSeriesDataType'.
         * 
         * @param value
         */
        void setTimeSeriesDataType(IfcTimeSeriesDataTypeEnum value);
        /**
         */
        IfcDataOriginEnum getDataOrigin();
        /**
         * Sets the value of the explicit attribute 'DataOrigin'.
         * 
         * @param value
         */
        void setDataOrigin(IfcDataOriginEnum value);
        /**
         */
        IfcLabel getUserDefinedDataOrigin();
        /**
         * Sets the value of the explicit attribute 'UserDefinedDataOrigin'.
         * 
         * @param value
         */
        void setUserDefinedDataOrigin(const IfcLabel &value);
        /**
         */
        IfcUnit *getUnit();
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        void setUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcTimeSeriesReferenceRelationship > > &getDocumentedBy();
        /**
         */
        virtual void release();
        friend class IfcTimeSeriesReferenceRelationship;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTimeSeries(Step::Id id, Step::SPFData *args);
        virtual ~IfcTimeSeries();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTimeSeries &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_startTime;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_endTime;
        /**
         */
        IfcTimeSeriesDataTypeEnum m_timeSeriesDataType;
        /**
         */
        IfcDataOriginEnum m_dataOrigin;
        /**
         */
        std::string m_userDefinedDataOrigin;
        /**
         */
        Step::RefPtr< IfcUnit > m_unit;
        /**
         */
        Step::Set< Step::ObsPtr< IfcTimeSeriesReferenceRelationship > > m_documentedBy;

    };

}

#endif // IFC2X3_IFCTIMESERIES_H
