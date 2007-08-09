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

#ifndef IFC2X3_IFCRELREFERENCEDINSPATIALSTRUCTURE_H
#define IFC2X3_IFCRELREFERENCEDINSPATIALSTRUCTURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <ifc2x3/IfcRelConnects.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcProduct;
  class IfcRelReferencedInSpatialStructure_Factory;
  class IfcSpatialStructureElement;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelReferencedInSpatialStructure : public Step::InstantiatableEntity, public IfcRelConnects {
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
     * (non-const) Returns the value of the explicit attribute 'RelatedElements'.
     * 
     * @return the value of the explicit attribute 'RelatedElements'
     */
    Step::StepSet< Step::RefPtr< IfcProduct > > &getRelatedElements();
    /**
     * Sets the value of the explicit attribute 'RelatedElements'.
     * 
     * @param value
     */
    void setRelatedElements(const Step::StepSet< Step::RefPtr< IfcProduct > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatingStructure'.
     * 
     * @return the value of the explicit attribute 'RelatingStructure'
     */
    IfcSpatialStructureElement *getRelatingStructure();
    /**
     * Sets the value of the explicit attribute 'RelatingStructure'.
     * 
     * @param value
     */
    void setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRelReferencedInSpatialStructure_Factory;

  protected:
    /**
     * @param args
     */
    IfcRelReferencedInSpatialStructure(Step::SPFData *args);
    virtual ~IfcRelReferencedInSpatialStructure();

  private:
    static Step::ClassType s_type;
    Step::StepSet< Step::RefPtr< IfcProduct > > m_relatedElements;
    Step::RefPtr< IfcSpatialStructureElement > m_relatingStructure;
    /**
     * @param c
     */
    IfcRelReferencedInSpatialStructure(const IfcRelReferencedInSpatialStructure &c);

  };

  class IfcRelReferencedInSpatialStructure;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelReferencedInSpatialStructure_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRelReferencedInSpatialStructure_Factory();
    virtual ~IfcRelReferencedInSpatialStructure_Factory();
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
    IfcRelReferencedInSpatialStructure *get(Step::StepId id);
    /**
     */
    IfcRelReferencedInSpatialStructure *generate();
    /**
     * @param id
     */
    IfcRelReferencedInSpatialStructure *find(Step::StepId id);

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

#endif // IFC2X3_IFCRELREFERENCEDINSPATIALSTRUCTURE_H
