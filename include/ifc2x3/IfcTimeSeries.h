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

#ifndef IFC2X3_IFCTIMESERIES_H
#define IFC2X3_IFCTIMESERIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateTimeSelect;
    class IfcUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcTimeSeries : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * Gets the value of the explicit attribute 'StartTime'.
         * 
         */
        virtual IfcDateTimeSelect *getStartTime();
        /**
         * (const) Returns the value of the explicit attribute 'StartTime'.
         * 
         * @return the value of the explicit attribute 'StartTime'
         */
        virtual const IfcDateTimeSelect *getStartTime() const;
        /**
         * Sets the value of the explicit attribute 'StartTime'.
         * 
         * @param value
         */
        virtual void setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'EndTime'.
         * 
         */
        virtual IfcDateTimeSelect *getEndTime();
        /**
         * (const) Returns the value of the explicit attribute 'EndTime'.
         * 
         * @return the value of the explicit attribute 'EndTime'
         */
        virtual const IfcDateTimeSelect *getEndTime() const;
        /**
         * Sets the value of the explicit attribute 'EndTime'.
         * 
         * @param value
         */
        virtual void setEndTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'TimeSeriesDataType'.
         * 
         */
        virtual IfcTimeSeriesDataTypeEnum getTimeSeriesDataType();
        /**
         * (const) Returns the value of the explicit attribute 'TimeSeriesDataType'.
         * 
         * @return the value of the explicit attribute 'TimeSeriesDataType'
         */
        virtual const IfcTimeSeriesDataTypeEnum getTimeSeriesDataType() const;
        /**
         * Sets the value of the explicit attribute 'TimeSeriesDataType'.
         * 
         * @param value
         */
        virtual void setTimeSeriesDataType(IfcTimeSeriesDataTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'DataOrigin'.
         * 
         */
        virtual IfcDataOriginEnum getDataOrigin();
        /**
         * (const) Returns the value of the explicit attribute 'DataOrigin'.
         * 
         * @return the value of the explicit attribute 'DataOrigin'
         */
        virtual const IfcDataOriginEnum getDataOrigin() const;
        /**
         * Sets the value of the explicit attribute 'DataOrigin'.
         * 
         * @param value
         */
        virtual void setDataOrigin(IfcDataOriginEnum value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedDataOrigin'.
         * 
         */
        virtual IfcLabel getUserDefinedDataOrigin();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedDataOrigin'.
         * 
         * @return the value of the explicit attribute 'UserDefinedDataOrigin'
         */
        virtual const IfcLabel getUserDefinedDataOrigin() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedDataOrigin'.
         * 
         * @param value
         */
        virtual void setUserDefinedDataOrigin(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Unit'.
         * 
         */
        virtual IfcUnit *getUnit();
        /**
         * (const) Returns the value of the explicit attribute 'Unit'.
         * 
         * @return the value of the explicit attribute 'Unit'
         */
        virtual const IfcUnit *getUnit() const;
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        virtual void setUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         * Gets the value of the inverse attribute 'DocumentedBy'.
         * 
         */
        Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &getDocumentedBy();
        /**
         * (const) Returns the value of the explicit attribute 'DocumentedBy'.
         * 
         * @return the value of the explicit attribute 'DocumentedBy'
         */
        virtual const Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &getDocumentedBy() const;
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
        Step::String m_name;
        /**
         */
        Step::String m_description;
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
        Step::String m_userDefinedDataOrigin;
        /**
         */
        Step::RefPtr< IfcUnit > m_unit;
        /**
         */
        Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 m_documentedBy;

    };

}

#endif // IFC2X3_IFCTIMESERIES_H
