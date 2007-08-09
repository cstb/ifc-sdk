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

#ifndef IFC2X3_IFCLOCALTIME_H
#define IFC2X3_IFCLOCALTIME_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCoordinatedUniversalTimeOffset;
  class IfcLocalTime_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcLocalTime : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'HourComponent'.
     * 
     * @return the value of the explicit attribute 'HourComponent'
     */
    IfcHourInDay getHourComponent();
    /**
     * Sets the value of the explicit attribute 'HourComponent'.
     * 
     * @param value
     */
    void setHourComponent(IfcHourInDay value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinuteComponent'.
     * 
     * @return the value of the explicit attribute 'MinuteComponent'
     */
    IfcMinuteInHour getMinuteComponent();
    /**
     * Sets the value of the explicit attribute 'MinuteComponent'.
     * 
     * @param value
     */
    void setMinuteComponent(IfcMinuteInHour value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SecondComponent'.
     * 
     * @return the value of the explicit attribute 'SecondComponent'
     */
    IfcSecondInMinute getSecondComponent();
    /**
     * Sets the value of the explicit attribute 'SecondComponent'.
     * 
     * @param value
     */
    void setSecondComponent(IfcSecondInMinute value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Zone'.
     * 
     * @return the value of the explicit attribute 'Zone'
     */
    IfcCoordinatedUniversalTimeOffset *getZone();
    /**
     * Sets the value of the explicit attribute 'Zone'.
     * 
     * @param value
     */
    void setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DaylightSavingOffset'.
     * 
     * @return the value of the explicit attribute 'DaylightSavingOffset'
     */
    IfcDaylightSavingHour getDaylightSavingOffset();
    /**
     * Sets the value of the explicit attribute 'DaylightSavingOffset'.
     * 
     * @param value
     */
    void setDaylightSavingOffset(IfcDaylightSavingHour value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcLocalTime_Factory;

  protected:
    /**
     * @param args
     */
    IfcLocalTime(Step::SPFData *args);
    virtual ~IfcLocalTime();

  private:
    static Step::ClassType s_type;
    Integer m_hourComponent;
    Integer m_minuteComponent;
    Real m_secondComponent;
    Step::RefPtr< IfcCoordinatedUniversalTimeOffset > m_zone;
    Integer m_daylightSavingOffset;
    /**
     * @param c
     */
    IfcLocalTime(const IfcLocalTime &c);

  };

  class IfcLocalTime;

  /**
   */
  class IFC2X3_DLL_DEF IfcLocalTime_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcLocalTime_Factory();
    virtual ~IfcLocalTime_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcLocalTime *get(Step::StepId id);
    /**
     */
    IfcLocalTime *generate();
    /**
     * @param id
     */
    IfcLocalTime *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCLOCALTIME_H
