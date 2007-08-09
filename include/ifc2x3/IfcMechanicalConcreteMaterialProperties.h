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

#ifndef IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <ifc2x3/IfcMechanicalMaterialProperties.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcMechanicalConcreteMaterialProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcMechanicalConcreteMaterialProperties : public IfcMechanicalMaterialProperties {
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
     * (non-const) Returns the value of the explicit attribute 'CompressiveStrength'.
     * 
     * @return the value of the explicit attribute 'CompressiveStrength'
     */
    IfcPressureMeasure getCompressiveStrength();
    /**
     * Sets the value of the explicit attribute 'CompressiveStrength'.
     * 
     * @param value
     */
    void setCompressiveStrength(IfcPressureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MaxAggregateSize'.
     * 
     * @return the value of the explicit attribute 'MaxAggregateSize'
     */
    IfcPositiveLengthMeasure getMaxAggregateSize();
    /**
     * Sets the value of the explicit attribute 'MaxAggregateSize'.
     * 
     * @param value
     */
    void setMaxAggregateSize(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AdmixturesDescription'.
     * 
     * @return the value of the explicit attribute 'AdmixturesDescription'
     */
    IfcText getAdmixturesDescription();
    /**
     * Sets the value of the explicit attribute 'AdmixturesDescription'.
     * 
     * @param value
     */
    void setAdmixturesDescription(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Workability'.
     * 
     * @return the value of the explicit attribute 'Workability'
     */
    IfcText getWorkability();
    /**
     * Sets the value of the explicit attribute 'Workability'.
     * 
     * @param value
     */
    void setWorkability(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ProtectivePoreRatio'.
     * 
     * @return the value of the explicit attribute 'ProtectivePoreRatio'
     */
    IfcNormalisedRatioMeasure getProtectivePoreRatio();
    /**
     * Sets the value of the explicit attribute 'ProtectivePoreRatio'.
     * 
     * @param value
     */
    void setProtectivePoreRatio(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WaterImpermeability'.
     * 
     * @return the value of the explicit attribute 'WaterImpermeability'
     */
    IfcText getWaterImpermeability();
    /**
     * Sets the value of the explicit attribute 'WaterImpermeability'.
     * 
     * @param value
     */
    void setWaterImpermeability(const IfcText &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcMechanicalConcreteMaterialProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcMechanicalConcreteMaterialProperties(Step::SPFData *args);
    virtual ~IfcMechanicalConcreteMaterialProperties();

  private:
    static Step::ClassType s_type;
    Real m_compressiveStrength;
    Real m_maxAggregateSize;
    std::string m_admixturesDescription;
    std::string m_workability;
    Real m_protectivePoreRatio;
    std::string m_waterImpermeability;
    /**
     * @param c
     */
    IfcMechanicalConcreteMaterialProperties(const IfcMechanicalConcreteMaterialProperties &c);

  };

  class IfcMechanicalConcreteMaterialProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcMechanicalConcreteMaterialProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcMechanicalConcreteMaterialProperties_Factory();
    virtual ~IfcMechanicalConcreteMaterialProperties_Factory();
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
    IfcMechanicalConcreteMaterialProperties *get(Step::StepId id);
    /**
     */
    IfcMechanicalConcreteMaterialProperties *generate();
    /**
     * @param id
     */
    IfcMechanicalConcreteMaterialProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
