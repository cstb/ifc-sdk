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

#ifndef IFC2X3_IFCMETRIC_H
#define IFC2X3_IFCMETRIC_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcConstraint.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcMetricValueSelect;
  class IfcMetric_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcMetric : public Step::InstantiatableEntity, public IfcConstraint {
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
     * (non-const) Returns the value of the explicit attribute 'Benchmark'.
     * 
     * @return the value of the explicit attribute 'Benchmark'
     */
    IfcBenchmarkEnum getBenchmark();
    /**
     * Sets the value of the explicit attribute 'Benchmark'.
     * 
     * @param value
     */
    void setBenchmark(IfcBenchmarkEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ValueSource'.
     * 
     * @return the value of the explicit attribute 'ValueSource'
     */
    IfcLabel getValueSource();
    /**
     * Sets the value of the explicit attribute 'ValueSource'.
     * 
     * @param value
     */
    void setValueSource(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DataValue'.
     * 
     * @return the value of the explicit attribute 'DataValue'
     */
    IfcMetricValueSelect *getDataValue();
    /**
     * Sets the value of the explicit attribute 'DataValue'.
     * 
     * @param value
     */
    void setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcMetric_Factory;

  protected:
    /**
     * @param args
     */
    IfcMetric(Step::SPFData *args);
    virtual ~IfcMetric();

  private:
    static Step::ClassType s_type;
    IfcBenchmarkEnum m_benchmark;
    std::string m_valueSource;
    Step::RefPtr< IfcMetricValueSelect > m_dataValue;
    /**
     * @param c
     */
    IfcMetric(const IfcMetric &c);

  };

  class IfcMetric;

  /**
   */
  class IFC2X3_DLL_DEF IfcMetric_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcMetric_Factory();
    virtual ~IfcMetric_Factory();
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
    IfcMetric *get(Step::StepId id);
    /**
     */
    IfcMetric *generate();
    /**
     * @param id
     */
    IfcMetric *find(Step::StepId id);

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

#endif // IFC2X3_IFCMETRIC_H
