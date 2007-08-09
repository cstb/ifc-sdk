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

#ifndef IFC2X3_IFCTRANSPORTELEMENT_H
#define IFC2X3_IFCTRANSPORTELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcElement.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcTransportElement_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcTransportElement : public Step::InstantiatableEntity, public IfcElement {
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
    IfcTransportElementTypeEnum getOperationType();
    /**
     * Sets the value of the explicit attribute 'OperationType'.
     * 
     * @param value
     */
    void setOperationType(IfcTransportElementTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CapacityByWeight'.
     * 
     * @return the value of the explicit attribute 'CapacityByWeight'
     */
    IfcMassMeasure getCapacityByWeight();
    /**
     * Sets the value of the explicit attribute 'CapacityByWeight'.
     * 
     * @param value
     */
    void setCapacityByWeight(IfcMassMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CapacityByNumber'.
     * 
     * @return the value of the explicit attribute 'CapacityByNumber'
     */
    IfcCountMeasure getCapacityByNumber();
    /**
     * Sets the value of the explicit attribute 'CapacityByNumber'.
     * 
     * @param value
     */
    void setCapacityByNumber(IfcCountMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTransportElement_Factory;

  protected:
    /**
     * @param args
     */
    IfcTransportElement(Step::SPFData *args);
    virtual ~IfcTransportElement();

  private:
    static Step::ClassType s_type;
    IfcTransportElementTypeEnum m_operationType;
    Real m_capacityByWeight;
    Integer m_capacityByNumber;
    /**
     * @param c
     */
    IfcTransportElement(const IfcTransportElement &c);

  };

  class IfcTransportElement;

  /**
   */
  class IFC2X3_DLL_DEF IfcTransportElement_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTransportElement_Factory();
    virtual ~IfcTransportElement_Factory();
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
    IfcTransportElement *get(Step::StepId id);
    /**
     */
    IfcTransportElement *generate();
    /**
     * @param id
     */
    IfcTransportElement *find(Step::StepId id);

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

#endif // IFC2X3_IFCTRANSPORTELEMENT_H
