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

#ifndef IFC2X3_IFCDIMENSIONALEXPONENTS_H
#define IFC2X3_IFCDIMENSIONALEXPONENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDimensionalExponents_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcDimensionalExponents : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'LengthExponent'.
     * 
     * @return the value of the explicit attribute 'LengthExponent'
     */
    Integer getLengthExponent();
    /**
     * Sets the value of the explicit attribute 'LengthExponent'.
     * 
     * @param value
     */
    void setLengthExponent(Integer value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MassExponent'.
     * 
     * @return the value of the explicit attribute 'MassExponent'
     */
    Integer getMassExponent();
    /**
     * Sets the value of the explicit attribute 'MassExponent'.
     * 
     * @param value
     */
    void setMassExponent(Integer value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TimeExponent'.
     * 
     * @return the value of the explicit attribute 'TimeExponent'
     */
    Integer getTimeExponent();
    /**
     * Sets the value of the explicit attribute 'TimeExponent'.
     * 
     * @param value
     */
    void setTimeExponent(Integer value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ElectricCurrentExponent'.
     * 
     * @return the value of the explicit attribute 'ElectricCurrentExponent'
     */
    Integer getElectricCurrentExponent();
    /**
     * Sets the value of the explicit attribute 'ElectricCurrentExponent'.
     * 
     * @param value
     */
    void setElectricCurrentExponent(Integer value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThermodynamicTemperatureExponent'.
     * 
     * @return the value of the explicit attribute 'ThermodynamicTemperatureExponent'
     */
    Integer getThermodynamicTemperatureExponent();
    /**
     * Sets the value of the explicit attribute 'ThermodynamicTemperatureExponent'.
     * 
     * @param value
     */
    void setThermodynamicTemperatureExponent(Integer value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AmountOfSubstanceExponent'.
     * 
     * @return the value of the explicit attribute 'AmountOfSubstanceExponent'
     */
    Integer getAmountOfSubstanceExponent();
    /**
     * Sets the value of the explicit attribute 'AmountOfSubstanceExponent'.
     * 
     * @param value
     */
    void setAmountOfSubstanceExponent(Integer value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LuminousIntensityExponent'.
     * 
     * @return the value of the explicit attribute 'LuminousIntensityExponent'
     */
    Integer getLuminousIntensityExponent();
    /**
     * Sets the value of the explicit attribute 'LuminousIntensityExponent'.
     * 
     * @param value
     */
    void setLuminousIntensityExponent(Integer value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcDimensionalExponents_Factory;

  protected:
    /**
     * @param args
     */
    IfcDimensionalExponents(Step::SPFData *args);
    virtual ~IfcDimensionalExponents();

  private:
    static Step::ClassType s_type;
    Integer m_lengthExponent;
    Integer m_massExponent;
    Integer m_timeExponent;
    Integer m_electricCurrentExponent;
    Integer m_thermodynamicTemperatureExponent;
    Integer m_amountOfSubstanceExponent;
    Integer m_luminousIntensityExponent;
    /**
     * @param c
     */
    IfcDimensionalExponents(const IfcDimensionalExponents &c);

  };

  class IfcDimensionalExponents;

  /**
   */
  class IFC2X3_DLL_DEF IfcDimensionalExponents_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDimensionalExponents_Factory();
    virtual ~IfcDimensionalExponents_Factory();
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
    IfcDimensionalExponents *get(Step::StepId id);
    /**
     */
    IfcDimensionalExponents *generate();
    /**
     * @param id
     */
    IfcDimensionalExponents *find(Step::StepId id);

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

#endif // IFC2X3_IFCDIMENSIONALEXPONENTS_H
