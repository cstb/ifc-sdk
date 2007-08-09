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

#ifndef IFC2X3_IFCREINFORCINGMESH_H
#define IFC2X3_IFCREINFORCINGMESH_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcReinforcingElement.h>
#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcReinforcingMesh_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcReinforcingMesh : public Step::InstantiatableEntity, public IfcReinforcingElement {
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
     * (non-const) Returns the value of the explicit attribute 'MeshLength'.
     * 
     * @return the value of the explicit attribute 'MeshLength'
     */
    IfcPositiveLengthMeasure getMeshLength();
    /**
     * Sets the value of the explicit attribute 'MeshLength'.
     * 
     * @param value
     */
    void setMeshLength(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MeshWidth'.
     * 
     * @return the value of the explicit attribute 'MeshWidth'
     */
    IfcPositiveLengthMeasure getMeshWidth();
    /**
     * Sets the value of the explicit attribute 'MeshWidth'.
     * 
     * @param value
     */
    void setMeshWidth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LongitudinalBarNominalDiameter'.
     * 
     * @return the value of the explicit attribute 'LongitudinalBarNominalDiameter'
     */
    IfcPositiveLengthMeasure getLongitudinalBarNominalDiameter();
    /**
     * Sets the value of the explicit attribute 'LongitudinalBarNominalDiameter'.
     * 
     * @param value
     */
    void setLongitudinalBarNominalDiameter(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TransverseBarNominalDiameter'.
     * 
     * @return the value of the explicit attribute 'TransverseBarNominalDiameter'
     */
    IfcPositiveLengthMeasure getTransverseBarNominalDiameter();
    /**
     * Sets the value of the explicit attribute 'TransverseBarNominalDiameter'.
     * 
     * @param value
     */
    void setTransverseBarNominalDiameter(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LongitudinalBarCrossSectionArea'.
     * 
     * @return the value of the explicit attribute 'LongitudinalBarCrossSectionArea'
     */
    IfcAreaMeasure getLongitudinalBarCrossSectionArea();
    /**
     * Sets the value of the explicit attribute 'LongitudinalBarCrossSectionArea'.
     * 
     * @param value
     */
    void setLongitudinalBarCrossSectionArea(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TransverseBarCrossSectionArea'.
     * 
     * @return the value of the explicit attribute 'TransverseBarCrossSectionArea'
     */
    IfcAreaMeasure getTransverseBarCrossSectionArea();
    /**
     * Sets the value of the explicit attribute 'TransverseBarCrossSectionArea'.
     * 
     * @param value
     */
    void setTransverseBarCrossSectionArea(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LongitudinalBarSpacing'.
     * 
     * @return the value of the explicit attribute 'LongitudinalBarSpacing'
     */
    IfcPositiveLengthMeasure getLongitudinalBarSpacing();
    /**
     * Sets the value of the explicit attribute 'LongitudinalBarSpacing'.
     * 
     * @param value
     */
    void setLongitudinalBarSpacing(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TransverseBarSpacing'.
     * 
     * @return the value of the explicit attribute 'TransverseBarSpacing'
     */
    IfcPositiveLengthMeasure getTransverseBarSpacing();
    /**
     * Sets the value of the explicit attribute 'TransverseBarSpacing'.
     * 
     * @param value
     */
    void setTransverseBarSpacing(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcReinforcingMesh_Factory;

  protected:
    /**
     * @param args
     */
    IfcReinforcingMesh(Step::SPFData *args);
    virtual ~IfcReinforcingMesh();

  private:
    static Step::ClassType s_type;
    Real m_meshLength;
    Real m_meshWidth;
    Real m_longitudinalBarNominalDiameter;
    Real m_transverseBarNominalDiameter;
    Real m_longitudinalBarCrossSectionArea;
    Real m_transverseBarCrossSectionArea;
    Real m_longitudinalBarSpacing;
    Real m_transverseBarSpacing;
    /**
     * @param c
     */
    IfcReinforcingMesh(const IfcReinforcingMesh &c);

  };

  class IfcReinforcingMesh;

  /**
   */
  class IFC2X3_DLL_DEF IfcReinforcingMesh_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcReinforcingMesh_Factory();
    virtual ~IfcReinforcingMesh_Factory();
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
    IfcReinforcingMesh *get(Step::StepId id);
    /**
     */
    IfcReinforcingMesh *generate();
    /**
     * @param id
     */
    IfcReinforcingMesh *find(Step::StepId id);

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

#endif // IFC2X3_IFCREINFORCINGMESH_H
