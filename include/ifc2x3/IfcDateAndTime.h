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

#ifndef IFC2X3_IFCDATEANDTIME_H
#define IFC2X3_IFCDATEANDTIME_H
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

  class IfcCalendarDate;
  class IfcDateAndTime_Factory;
  class IfcLocalTime;

  /**
   */
  class IFC2X3_DLL_DEF IfcDateAndTime : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'DateComponent'.
     * 
     * @return the value of the explicit attribute 'DateComponent'
     */
    IfcCalendarDate *getDateComponent();
    /**
     * Sets the value of the explicit attribute 'DateComponent'.
     * 
     * @param value
     */
    void setDateComponent(const Step::RefPtr< IfcCalendarDate > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TimeComponent'.
     * 
     * @return the value of the explicit attribute 'TimeComponent'
     */
    IfcLocalTime *getTimeComponent();
    /**
     * Sets the value of the explicit attribute 'TimeComponent'.
     * 
     * @param value
     */
    void setTimeComponent(const Step::RefPtr< IfcLocalTime > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcDateAndTime_Factory;

  protected:
    /**
     * @param args
     */
    IfcDateAndTime(Step::SPFData *args);
    virtual ~IfcDateAndTime();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcCalendarDate > m_dateComponent;
    Step::RefPtr< IfcLocalTime > m_timeComponent;
    /**
     * @param c
     */
    IfcDateAndTime(const IfcDateAndTime &c);

  };

  class IfcDateAndTime;

  /**
   */
  class IFC2X3_DLL_DEF IfcDateAndTime_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDateAndTime_Factory();
    virtual ~IfcDateAndTime_Factory();
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
    IfcDateAndTime *get(Step::StepId id);
    /**
     */
    IfcDateAndTime *generate();
    /**
     * @param id
     */
    IfcDateAndTime *find(Step::StepId id);

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

#endif // IFC2X3_IFCDATEANDTIME_H
