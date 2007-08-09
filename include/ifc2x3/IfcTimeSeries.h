/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
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
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcDateTimeSelect;
  class IfcTimeSeriesReferenceRelationship;
  class IfcUnit;

  /**
   */
  class IFC2X3_DLL_DEF IfcTimeSeries : public Step::BaseObject {
  public:
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
    /**
     */
    virtual const char *type();
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
     * (non-const) Returns the value of the explicit attribute 'Name'.
     * 
     * @return the value of the explicit attribute 'Name'
     */
    IfcLabel getName();
    /**
     * Sets the value of the explicit attribute 'Name'.
     * 
     * @param value
     */
    void setName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Description'.
     * 
     * @return the value of the explicit attribute 'Description'
     */
    IfcText getDescription();
    /**
     * Sets the value of the explicit attribute 'Description'.
     * 
     * @param value
     */
    void setDescription(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'StartTime'.
     * 
     * @return the value of the explicit attribute 'StartTime'
     */
    IfcDateTimeSelect *getStartTime();
    /**
     * Sets the value of the explicit attribute 'StartTime'.
     * 
     * @param value
     */
    void setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'EndTime'.
     * 
     * @return the value of the explicit attribute 'EndTime'
     */
    IfcDateTimeSelect *getEndTime();
    /**
     * Sets the value of the explicit attribute 'EndTime'.
     * 
     * @param value
     */
    void setEndTime(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TimeSeriesDataType'.
     * 
     * @return the value of the explicit attribute 'TimeSeriesDataType'
     */
    IfcTimeSeriesDataTypeEnum getTimeSeriesDataType();
    /**
     * Sets the value of the explicit attribute 'TimeSeriesDataType'.
     * 
     * @param value
     */
    void setTimeSeriesDataType(IfcTimeSeriesDataTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DataOrigin'.
     * 
     * @return the value of the explicit attribute 'DataOrigin'
     */
    IfcDataOriginEnum getDataOrigin();
    /**
     * Sets the value of the explicit attribute 'DataOrigin'.
     * 
     * @param value
     */
    void setDataOrigin(IfcDataOriginEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedDataOrigin'.
     * 
     * @return the value of the explicit attribute 'UserDefinedDataOrigin'
     */
    IfcLabel getUserDefinedDataOrigin();
    /**
     * Sets the value of the explicit attribute 'UserDefinedDataOrigin'.
     * 
     * @param value
     */
    void setUserDefinedDataOrigin(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Unit'.
     * 
     * @return the value of the explicit attribute 'Unit'
     */
    IfcUnit *getUnit();
    /**
     * Sets the value of the explicit attribute 'Unit'.
     * 
     * @param value
     */
    void setUnit(const Step::RefPtr< IfcUnit > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DocumentedBy'.
     * 
     * @return the value of the explicit attribute 'DocumentedBy'
     */
    Step::StepSet< Step::RefPtr< IfcTimeSeriesReferenceRelationship > > &getDocumentedBy();
    /**
     * Sets the value of the explicit attribute 'DocumentedBy'.
     * 
     * @param value
     */
    void setDocumentedBy(const Step::StepSet< Step::RefPtr< IfcTimeSeriesReferenceRelationship > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();

  protected:
    /**
     * @param args
     */
    IfcTimeSeries(Step::SPFData *args);
    virtual ~IfcTimeSeries();

  private:
    static Step::ClassType s_type;
    std::string m_name;
    std::string m_description;
    Step::RefPtr< IfcDateTimeSelect > m_startTime;
    Step::RefPtr< IfcDateTimeSelect > m_endTime;
    IfcTimeSeriesDataTypeEnum m_timeSeriesDataType;
    IfcDataOriginEnum m_dataOrigin;
    std::string m_userDefinedDataOrigin;
    Step::RefPtr< IfcUnit > m_unit;
    Step::StepSet< Step::RefPtr< IfcTimeSeriesReferenceRelationship > > m_documentedBy;
    /**
     * @param c
     */
    IfcTimeSeries(const IfcTimeSeries &c);

  };

}

#endif // IFC2X3_IFCTIMESERIES_H
