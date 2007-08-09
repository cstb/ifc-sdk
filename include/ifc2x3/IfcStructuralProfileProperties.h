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

#ifndef IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
#define IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeneralProfileProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcStructuralProfileProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralProfileProperties : public IfcGeneralProfileProperties {
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
     * (non-const) Returns the value of the explicit attribute 'TorsionalConstantX'.
     * 
     * @return the value of the explicit attribute 'TorsionalConstantX'
     */
    IfcMomentOfInertiaMeasure getTorsionalConstantX();
    /**
     * Sets the value of the explicit attribute 'TorsionalConstantX'.
     * 
     * @param value
     */
    void setTorsionalConstantX(IfcMomentOfInertiaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MomentOfInertiaYZ'.
     * 
     * @return the value of the explicit attribute 'MomentOfInertiaYZ'
     */
    IfcMomentOfInertiaMeasure getMomentOfInertiaYZ();
    /**
     * Sets the value of the explicit attribute 'MomentOfInertiaYZ'.
     * 
     * @param value
     */
    void setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MomentOfInertiaY'.
     * 
     * @return the value of the explicit attribute 'MomentOfInertiaY'
     */
    IfcMomentOfInertiaMeasure getMomentOfInertiaY();
    /**
     * Sets the value of the explicit attribute 'MomentOfInertiaY'.
     * 
     * @param value
     */
    void setMomentOfInertiaY(IfcMomentOfInertiaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MomentOfInertiaZ'.
     * 
     * @return the value of the explicit attribute 'MomentOfInertiaZ'
     */
    IfcMomentOfInertiaMeasure getMomentOfInertiaZ();
    /**
     * Sets the value of the explicit attribute 'MomentOfInertiaZ'.
     * 
     * @param value
     */
    void setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WarpingConstant'.
     * 
     * @return the value of the explicit attribute 'WarpingConstant'
     */
    IfcWarpingConstantMeasure getWarpingConstant();
    /**
     * Sets the value of the explicit attribute 'WarpingConstant'.
     * 
     * @param value
     */
    void setWarpingConstant(IfcWarpingConstantMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ShearCentreZ'.
     * 
     * @return the value of the explicit attribute 'ShearCentreZ'
     */
    IfcLengthMeasure getShearCentreZ();
    /**
     * Sets the value of the explicit attribute 'ShearCentreZ'.
     * 
     * @param value
     */
    void setShearCentreZ(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ShearCentreY'.
     * 
     * @return the value of the explicit attribute 'ShearCentreY'
     */
    IfcLengthMeasure getShearCentreY();
    /**
     * Sets the value of the explicit attribute 'ShearCentreY'.
     * 
     * @param value
     */
    void setShearCentreY(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ShearDeformationAreaZ'.
     * 
     * @return the value of the explicit attribute 'ShearDeformationAreaZ'
     */
    IfcAreaMeasure getShearDeformationAreaZ();
    /**
     * Sets the value of the explicit attribute 'ShearDeformationAreaZ'.
     * 
     * @param value
     */
    void setShearDeformationAreaZ(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ShearDeformationAreaY'.
     * 
     * @return the value of the explicit attribute 'ShearDeformationAreaY'
     */
    IfcAreaMeasure getShearDeformationAreaY();
    /**
     * Sets the value of the explicit attribute 'ShearDeformationAreaY'.
     * 
     * @param value
     */
    void setShearDeformationAreaY(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MaximumSectionModulusY'.
     * 
     * @return the value of the explicit attribute 'MaximumSectionModulusY'
     */
    IfcSectionModulusMeasure getMaximumSectionModulusY();
    /**
     * Sets the value of the explicit attribute 'MaximumSectionModulusY'.
     * 
     * @param value
     */
    void setMaximumSectionModulusY(IfcSectionModulusMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinimumSectionModulusY'.
     * 
     * @return the value of the explicit attribute 'MinimumSectionModulusY'
     */
    IfcSectionModulusMeasure getMinimumSectionModulusY();
    /**
     * Sets the value of the explicit attribute 'MinimumSectionModulusY'.
     * 
     * @param value
     */
    void setMinimumSectionModulusY(IfcSectionModulusMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MaximumSectionModulusZ'.
     * 
     * @return the value of the explicit attribute 'MaximumSectionModulusZ'
     */
    IfcSectionModulusMeasure getMaximumSectionModulusZ();
    /**
     * Sets the value of the explicit attribute 'MaximumSectionModulusZ'.
     * 
     * @param value
     */
    void setMaximumSectionModulusZ(IfcSectionModulusMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinimumSectionModulusZ'.
     * 
     * @return the value of the explicit attribute 'MinimumSectionModulusZ'
     */
    IfcSectionModulusMeasure getMinimumSectionModulusZ();
    /**
     * Sets the value of the explicit attribute 'MinimumSectionModulusZ'.
     * 
     * @param value
     */
    void setMinimumSectionModulusZ(IfcSectionModulusMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TorsionalSectionModulus'.
     * 
     * @return the value of the explicit attribute 'TorsionalSectionModulus'
     */
    IfcSectionModulusMeasure getTorsionalSectionModulus();
    /**
     * Sets the value of the explicit attribute 'TorsionalSectionModulus'.
     * 
     * @param value
     */
    void setTorsionalSectionModulus(IfcSectionModulusMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CentreOfGravityInX'.
     * 
     * @return the value of the explicit attribute 'CentreOfGravityInX'
     */
    IfcLengthMeasure getCentreOfGravityInX();
    /**
     * Sets the value of the explicit attribute 'CentreOfGravityInX'.
     * 
     * @param value
     */
    void setCentreOfGravityInX(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
     * 
     * @return the value of the explicit attribute 'CentreOfGravityInY'
     */
    IfcLengthMeasure getCentreOfGravityInY();
    /**
     * Sets the value of the explicit attribute 'CentreOfGravityInY'.
     * 
     * @param value
     */
    void setCentreOfGravityInY(IfcLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcStructuralProfileProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcStructuralProfileProperties(Step::SPFData *args);
    virtual ~IfcStructuralProfileProperties();

  private:
    static Step::ClassType s_type;
    Real m_torsionalConstantX;
    Real m_momentOfInertiaYZ;
    Real m_momentOfInertiaY;
    Real m_momentOfInertiaZ;
    Real m_warpingConstant;
    Real m_shearCentreZ;
    Real m_shearCentreY;
    Real m_shearDeformationAreaZ;
    Real m_shearDeformationAreaY;
    Real m_maximumSectionModulusY;
    Real m_minimumSectionModulusY;
    Real m_maximumSectionModulusZ;
    Real m_minimumSectionModulusZ;
    Real m_torsionalSectionModulus;
    Real m_centreOfGravityInX;
    Real m_centreOfGravityInY;
    /**
     * @param c
     */
    IfcStructuralProfileProperties(const IfcStructuralProfileProperties &c);

  };

  class IfcStructuralProfileProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralProfileProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcStructuralProfileProperties_Factory();
    virtual ~IfcStructuralProfileProperties_Factory();
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
    IfcStructuralProfileProperties *get(Step::StepId id);
    /**
     */
    IfcStructuralProfileProperties *generate();
    /**
     * @param id
     */
    IfcStructuralProfileProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
