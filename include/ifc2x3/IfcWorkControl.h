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

#ifndef IFC2X3_IFCWORKCONTROL_H
#define IFC2X3_IFCWORKCONTROL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcControl.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcDateTimeSelect;
  class IfcPerson;

  /**
   */
  class IFC2X3_DLL_DEF IfcWorkControl : public IfcControl {
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
     * (non-const) Returns the value of the explicit attribute 'Identifier'.
     * 
     * @return the value of the explicit attribute 'Identifier'
     */
    IfcIdentifier getIdentifier();
    /**
     * Sets the value of the explicit attribute 'Identifier'.
     * 
     * @param value
     */
    void setIdentifier(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CreationDate'.
     * 
     * @return the value of the explicit attribute 'CreationDate'
     */
    IfcDateTimeSelect *getCreationDate();
    /**
     * Sets the value of the explicit attribute 'CreationDate'.
     * 
     * @param value
     */
    void setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Creators'.
     * 
     * @return the value of the explicit attribute 'Creators'
     */
    Step::StepSet< Step::RefPtr< IfcPerson > > &getCreators();
    /**
     * Sets the value of the explicit attribute 'Creators'.
     * 
     * @param value
     */
    void setCreators(const Step::StepSet< Step::RefPtr< IfcPerson > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Purpose'.
     * 
     * @return the value of the explicit attribute 'Purpose'
     */
    IfcLabel getPurpose();
    /**
     * Sets the value of the explicit attribute 'Purpose'.
     * 
     * @param value
     */
    void setPurpose(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Duration'.
     * 
     * @return the value of the explicit attribute 'Duration'
     */
    IfcTimeMeasure getDuration();
    /**
     * Sets the value of the explicit attribute 'Duration'.
     * 
     * @param value
     */
    void setDuration(IfcTimeMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TotalFloat'.
     * 
     * @return the value of the explicit attribute 'TotalFloat'
     */
    IfcTimeMeasure getTotalFloat();
    /**
     * Sets the value of the explicit attribute 'TotalFloat'.
     * 
     * @param value
     */
    void setTotalFloat(IfcTimeMeasure value);
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
     * (non-const) Returns the value of the explicit attribute 'FinishTime'.
     * 
     * @return the value of the explicit attribute 'FinishTime'
     */
    IfcDateTimeSelect *getFinishTime();
    /**
     * Sets the value of the explicit attribute 'FinishTime'.
     * 
     * @param value
     */
    void setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WorkControlType'.
     * 
     * @return the value of the explicit attribute 'WorkControlType'
     */
    IfcWorkControlTypeEnum getWorkControlType();
    /**
     * Sets the value of the explicit attribute 'WorkControlType'.
     * 
     * @param value
     */
    void setWorkControlType(IfcWorkControlTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedControlType'.
     * 
     * @return the value of the explicit attribute 'UserDefinedControlType'
     */
    IfcLabel getUserDefinedControlType();
    /**
     * Sets the value of the explicit attribute 'UserDefinedControlType'.
     * 
     * @param value
     */
    void setUserDefinedControlType(const IfcLabel &value);
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
    IfcWorkControl(Step::SPFData *args);
    virtual ~IfcWorkControl();

  private:
    static Step::ClassType s_type;
    std::string m_identifier;
    Step::RefPtr< IfcDateTimeSelect > m_creationDate;
    Step::StepSet< Step::RefPtr< IfcPerson > > m_creators;
    std::string m_purpose;
    Real m_duration;
    Real m_totalFloat;
    Step::RefPtr< IfcDateTimeSelect > m_startTime;
    Step::RefPtr< IfcDateTimeSelect > m_finishTime;
    IfcWorkControlTypeEnum m_workControlType;
    std::string m_userDefinedControlType;
    /**
     * @param c
     */
    IfcWorkControl(const IfcWorkControl &c);

  };

}

#endif // IFC2X3_IFCWORKCONTROL_H
