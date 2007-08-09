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

#ifndef IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#define IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcConstructionResource.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorSelect;
  class IfcConstructionMaterialResource_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcConstructionMaterialResource : public Step::InstantiatableEntity, public IfcConstructionResource {
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
     * (non-const) Returns the value of the explicit attribute 'Suppliers'.
     * 
     * @return the value of the explicit attribute 'Suppliers'
     */
    Step::StepSet< Step::RefPtr< IfcActorSelect > > &getSuppliers();
    /**
     * Sets the value of the explicit attribute 'Suppliers'.
     * 
     * @param value
     */
    void setSuppliers(const Step::StepSet< Step::RefPtr< IfcActorSelect > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UsageRatio'.
     * 
     * @return the value of the explicit attribute 'UsageRatio'
     */
    IfcRatioMeasure getUsageRatio();
    /**
     * Sets the value of the explicit attribute 'UsageRatio'.
     * 
     * @param value
     */
    void setUsageRatio(IfcRatioMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcConstructionMaterialResource_Factory;

  protected:
    /**
     * @param args
     */
    IfcConstructionMaterialResource(Step::SPFData *args);
    virtual ~IfcConstructionMaterialResource();

  private:
    static Step::ClassType s_type;
    Step::StepSet< Step::RefPtr< IfcActorSelect > > m_suppliers;
    Real m_usageRatio;
    /**
     * @param c
     */
    IfcConstructionMaterialResource(const IfcConstructionMaterialResource &c);

  };

  class IfcConstructionMaterialResource;

  /**
   */
  class IFC2X3_DLL_DEF IfcConstructionMaterialResource_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcConstructionMaterialResource_Factory();
    virtual ~IfcConstructionMaterialResource_Factory();
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
    IfcConstructionMaterialResource *get(Step::StepId id);
    /**
     */
    IfcConstructionMaterialResource *generate();
    /**
     * @param id
     */
    IfcConstructionMaterialResource *find(Step::StepId id);

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

#endif // IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
