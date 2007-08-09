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

#ifndef IFC2X3_IFCDOORSTYLE_H
#define IFC2X3_IFCDOORSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <ifc2x3/IfcTypeProduct.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDoorStyle_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcDoorStyle : public IfcTypeProduct {
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
     * (non-const) Returns the value of the explicit attribute 'OperationType'.
     * 
     * @return the value of the explicit attribute 'OperationType'
     */
    IfcDoorStyleOperationEnum getOperationType();
    /**
     * Sets the value of the explicit attribute 'OperationType'.
     * 
     * @param value
     */
    void setOperationType(IfcDoorStyleOperationEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ConstructionType'.
     * 
     * @return the value of the explicit attribute 'ConstructionType'
     */
    IfcDoorStyleConstructionEnum getConstructionType();
    /**
     * Sets the value of the explicit attribute 'ConstructionType'.
     * 
     * @param value
     */
    void setConstructionType(IfcDoorStyleConstructionEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ParameterTakesPrecedence'.
     * 
     * @return the value of the explicit attribute 'ParameterTakesPrecedence'
     */
    Bool getParameterTakesPrecedence();
    /**
     * Sets the value of the explicit attribute 'ParameterTakesPrecedence'.
     * 
     * @param value
     */
    void setParameterTakesPrecedence(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Sizeable'.
     * 
     * @return the value of the explicit attribute 'Sizeable'
     */
    Bool getSizeable();
    /**
     * Sets the value of the explicit attribute 'Sizeable'.
     * 
     * @param value
     */
    void setSizeable(Bool value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcDoorStyle_Factory;

  protected:
    /**
     * @param args
     */
    IfcDoorStyle(Step::SPFData *args);
    virtual ~IfcDoorStyle();

  private:
    static Step::ClassType s_type;
    IfcDoorStyleOperationEnum m_operationType;
    IfcDoorStyleConstructionEnum m_constructionType;
    Bool m_parameterTakesPrecedence;
    Bool m_sizeable;
    /**
     * @param c
     */
    IfcDoorStyle(const IfcDoorStyle &c);

  };

  class IfcDoorStyle;

  /**
   */
  class IFC2X3_DLL_DEF IfcDoorStyle_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDoorStyle_Factory();
    virtual ~IfcDoorStyle_Factory();
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
    IfcDoorStyle *get(Step::StepId id);
    /**
     */
    IfcDoorStyle *generate();
    /**
     * @param id
     */
    IfcDoorStyle *find(Step::StepId id);

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

#endif // IFC2X3_IFCDOORSTYLE_H
