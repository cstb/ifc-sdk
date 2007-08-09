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

#ifndef IFC2X3_IFCBOOLEANRESULT_H
#define IFC2X3_IFCBOOLEANRESULT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcBooleanOperand;
  class IfcBooleanResult_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcBooleanResult : public Step::InstantiatableEntity, public IfcGeometricRepresentationItem {
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
     * (non-const) Returns the value of the explicit attribute 'Operator'.
     * 
     * @return the value of the explicit attribute 'Operator'
     */
    IfcBooleanOperator getOperator();
    /**
     * Sets the value of the explicit attribute 'Operator'.
     * 
     * @param value
     */
    void setOperator(IfcBooleanOperator value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FirstOperand'.
     * 
     * @return the value of the explicit attribute 'FirstOperand'
     */
    IfcBooleanOperand *getFirstOperand();
    /**
     * Sets the value of the explicit attribute 'FirstOperand'.
     * 
     * @param value
     */
    void setFirstOperand(const Step::RefPtr< IfcBooleanOperand > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SecondOperand'.
     * 
     * @return the value of the explicit attribute 'SecondOperand'
     */
    IfcBooleanOperand *getSecondOperand();
    /**
     * Sets the value of the explicit attribute 'SecondOperand'.
     * 
     * @param value
     */
    void setSecondOperand(const Step::RefPtr< IfcBooleanOperand > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcBooleanResult_Factory;

  protected:
    /**
     * @param args
     */
    IfcBooleanResult(Step::SPFData *args);
    virtual ~IfcBooleanResult();

  private:
    static Step::ClassType s_type;
    IfcBooleanOperator m_operator;
    Step::RefPtr< IfcBooleanOperand > m_firstOperand;
    Step::RefPtr< IfcBooleanOperand > m_secondOperand;
    /**
     * @param c
     */
    IfcBooleanResult(const IfcBooleanResult &c);

  };

  class IfcBooleanResult;

  /**
   */
  class IFC2X3_DLL_DEF IfcBooleanResult_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcBooleanResult_Factory();
    virtual ~IfcBooleanResult_Factory();
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
    IfcBooleanResult *get(Step::StepId id);
    /**
     */
    IfcBooleanResult *generate();
    /**
     * @param id
     */
    IfcBooleanResult *find(Step::StepId id);

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

#endif // IFC2X3_IFCBOOLEANRESULT_H
