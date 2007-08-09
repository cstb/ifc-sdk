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

#ifndef IFC2X3_IFCELECTRICALBASEPROPERTIES_H
#define IFC2X3_IFCELECTRICALBASEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <ifc2x3/IfcEnergyProperties.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcElectricalBaseProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcElectricalBaseProperties : public IfcEnergyProperties {
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
     * (non-const) Returns the value of the explicit attribute 'ElectricCurrentType'.
     * 
     * @return the value of the explicit attribute 'ElectricCurrentType'
     */
    IfcElectricCurrentEnum getElectricCurrentType();
    /**
     * Sets the value of the explicit attribute 'ElectricCurrentType'.
     * 
     * @param value
     */
    void setElectricCurrentType(IfcElectricCurrentEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'InputVoltage'.
     * 
     * @return the value of the explicit attribute 'InputVoltage'
     */
    IfcElectricVoltageMeasure getInputVoltage();
    /**
     * Sets the value of the explicit attribute 'InputVoltage'.
     * 
     * @param value
     */
    void setInputVoltage(IfcElectricVoltageMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'InputFrequency'.
     * 
     * @return the value of the explicit attribute 'InputFrequency'
     */
    IfcFrequencyMeasure getInputFrequency();
    /**
     * Sets the value of the explicit attribute 'InputFrequency'.
     * 
     * @param value
     */
    void setInputFrequency(IfcFrequencyMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FullLoadCurrent'.
     * 
     * @return the value of the explicit attribute 'FullLoadCurrent'
     */
    IfcElectricCurrentMeasure getFullLoadCurrent();
    /**
     * Sets the value of the explicit attribute 'FullLoadCurrent'.
     * 
     * @param value
     */
    void setFullLoadCurrent(IfcElectricCurrentMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinimumCircuitCurrent'.
     * 
     * @return the value of the explicit attribute 'MinimumCircuitCurrent'
     */
    IfcElectricCurrentMeasure getMinimumCircuitCurrent();
    /**
     * Sets the value of the explicit attribute 'MinimumCircuitCurrent'.
     * 
     * @param value
     */
    void setMinimumCircuitCurrent(IfcElectricCurrentMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MaximumPowerInput'.
     * 
     * @return the value of the explicit attribute 'MaximumPowerInput'
     */
    IfcPowerMeasure getMaximumPowerInput();
    /**
     * Sets the value of the explicit attribute 'MaximumPowerInput'.
     * 
     * @param value
     */
    void setMaximumPowerInput(IfcPowerMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RatedPowerInput'.
     * 
     * @return the value of the explicit attribute 'RatedPowerInput'
     */
    IfcPowerMeasure getRatedPowerInput();
    /**
     * Sets the value of the explicit attribute 'RatedPowerInput'.
     * 
     * @param value
     */
    void setRatedPowerInput(IfcPowerMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'InputPhase'.
     * 
     * @return the value of the explicit attribute 'InputPhase'
     */
    Integer getInputPhase();
    /**
     * Sets the value of the explicit attribute 'InputPhase'.
     * 
     * @param value
     */
    void setInputPhase(Integer value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcElectricalBaseProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcElectricalBaseProperties(Step::SPFData *args);
    virtual ~IfcElectricalBaseProperties();

  private:
    static Step::ClassType s_type;
    IfcElectricCurrentEnum m_electricCurrentType;
    Real m_inputVoltage;
    Real m_inputFrequency;
    Real m_fullLoadCurrent;
    Real m_minimumCircuitCurrent;
    Real m_maximumPowerInput;
    Real m_ratedPowerInput;
    Integer m_inputPhase;
    /**
     * @param c
     */
    IfcElectricalBaseProperties(const IfcElectricalBaseProperties &c);

  };

  class IfcElectricalBaseProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcElectricalBaseProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcElectricalBaseProperties_Factory();
    virtual ~IfcElectricalBaseProperties_Factory();
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
    IfcElectricalBaseProperties *get(Step::StepId id);
    /**
     */
    IfcElectricalBaseProperties *generate();
    /**
     * @param id
     */
    IfcElectricalBaseProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCELECTRICALBASEPROPERTIES_H
