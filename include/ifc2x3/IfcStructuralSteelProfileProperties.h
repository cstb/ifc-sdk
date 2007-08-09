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

#ifndef IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#define IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <ifc2x3/IfcStructuralProfileProperties.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcStructuralSteelProfileProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralSteelProfileProperties : public IfcStructuralProfileProperties {
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
     * (non-const) Returns the value of the explicit attribute 'ShearAreaZ'.
     * 
     * @return the value of the explicit attribute 'ShearAreaZ'
     */
    IfcAreaMeasure getShearAreaZ();
    /**
     * Sets the value of the explicit attribute 'ShearAreaZ'.
     * 
     * @param value
     */
    void setShearAreaZ(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ShearAreaY'.
     * 
     * @return the value of the explicit attribute 'ShearAreaY'
     */
    IfcAreaMeasure getShearAreaY();
    /**
     * Sets the value of the explicit attribute 'ShearAreaY'.
     * 
     * @param value
     */
    void setShearAreaY(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PlasticShapeFactorY'.
     * 
     * @return the value of the explicit attribute 'PlasticShapeFactorY'
     */
    IfcPositiveRatioMeasure getPlasticShapeFactorY();
    /**
     * Sets the value of the explicit attribute 'PlasticShapeFactorY'.
     * 
     * @param value
     */
    void setPlasticShapeFactorY(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PlasticShapeFactorZ'.
     * 
     * @return the value of the explicit attribute 'PlasticShapeFactorZ'
     */
    IfcPositiveRatioMeasure getPlasticShapeFactorZ();
    /**
     * Sets the value of the explicit attribute 'PlasticShapeFactorZ'.
     * 
     * @param value
     */
    void setPlasticShapeFactorZ(IfcPositiveRatioMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcStructuralSteelProfileProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcStructuralSteelProfileProperties(Step::SPFData *args);
    virtual ~IfcStructuralSteelProfileProperties();

  private:
    static Step::ClassType s_type;
    Real m_shearAreaZ;
    Real m_shearAreaY;
    Real m_plasticShapeFactorY;
    Real m_plasticShapeFactorZ;
    /**
     * @param c
     */
    IfcStructuralSteelProfileProperties(const IfcStructuralSteelProfileProperties &c);

  };

  class IfcStructuralSteelProfileProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralSteelProfileProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcStructuralSteelProfileProperties_Factory();
    virtual ~IfcStructuralSteelProfileProperties_Factory();
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
    IfcStructuralSteelProfileProperties *get(Step::StepId id);
    /**
     */
    IfcStructuralSteelProfileProperties *generate();
    /**
     * @param id
     */
    IfcStructuralSteelProfileProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
