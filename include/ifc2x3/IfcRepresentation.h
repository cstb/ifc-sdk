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

#ifndef IFC2X3_IFCREPRESENTATION_H
#define IFC2X3_IFCREPRESENTATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcPresentationLayerAssignment;
  class IfcProductRepresentation;
  class IfcRepresentationContext;
  class IfcRepresentationItem;
  class IfcRepresentationMap;
  class IfcRepresentation_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcRepresentation : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'ContextOfItems'.
     * 
     * @return the value of the explicit attribute 'ContextOfItems'
     */
    IfcRepresentationContext *getContextOfItems();
    /**
     * Sets the value of the explicit attribute 'ContextOfItems'.
     * 
     * @param value
     */
    void setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RepresentationIdentifier'.
     * 
     * @return the value of the explicit attribute 'RepresentationIdentifier'
     */
    IfcLabel getRepresentationIdentifier();
    /**
     * Sets the value of the explicit attribute 'RepresentationIdentifier'.
     * 
     * @param value
     */
    void setRepresentationIdentifier(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RepresentationType'.
     * 
     * @return the value of the explicit attribute 'RepresentationType'
     */
    IfcLabel getRepresentationType();
    /**
     * Sets the value of the explicit attribute 'RepresentationType'.
     * 
     * @param value
     */
    void setRepresentationType(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Items'.
     * 
     * @return the value of the explicit attribute 'Items'
     */
    Step::StepSet< Step::RefPtr< IfcRepresentationItem > > &getItems();
    /**
     * Sets the value of the explicit attribute 'Items'.
     * 
     * @param value
     */
    void setItems(const Step::StepSet< Step::RefPtr< IfcRepresentationItem > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RepresentationMap'.
     * 
     * @return the value of the explicit attribute 'RepresentationMap'
     */
    Step::StepSet< Step::RefPtr< IfcRepresentationMap > > &getRepresentationMap();
    /**
     * Sets the value of the explicit attribute 'RepresentationMap'.
     * 
     * @param value
     */
    void setRepresentationMap(const Step::StepSet< Step::RefPtr< IfcRepresentationMap > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LayerAssignments'.
     * 
     * @return the value of the explicit attribute 'LayerAssignments'
     */
    Step::StepSet< Step::RefPtr< IfcPresentationLayerAssignment > > &getLayerAssignments();
    /**
     * Sets the value of the explicit attribute 'LayerAssignments'.
     * 
     * @param value
     */
    void setLayerAssignments(const Step::StepSet< Step::RefPtr< IfcPresentationLayerAssignment > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'OfProductRepresentation'.
     * 
     * @return the value of the explicit attribute 'OfProductRepresentation'
     */
    Step::StepSet< Step::RefPtr< IfcProductRepresentation > > &getOfProductRepresentation();
    /**
     * Sets the value of the explicit attribute 'OfProductRepresentation'.
     * 
     * @param value
     */
    void setOfProductRepresentation(const Step::StepSet< Step::RefPtr< IfcProductRepresentation > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRepresentation_Factory;

  protected:
    /**
     * @param args
     */
    IfcRepresentation(Step::SPFData *args);
    virtual ~IfcRepresentation();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcRepresentationContext > m_contextOfItems;
    std::string m_representationIdentifier;
    std::string m_representationType;
    Step::StepSet< Step::RefPtr< IfcRepresentationItem > > m_items;
    Step::StepSet< Step::RefPtr< IfcRepresentationMap > > m_representationMap;
    Step::StepSet< Step::RefPtr< IfcPresentationLayerAssignment > > m_layerAssignments;
    Step::StepSet< Step::RefPtr< IfcProductRepresentation > > m_ofProductRepresentation;
    /**
     * @param c
     */
    IfcRepresentation(const IfcRepresentation &c);

  };

  class IfcRepresentation;

  /**
   */
  class IFC2X3_DLL_DEF IfcRepresentation_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRepresentation_Factory();
    virtual ~IfcRepresentation_Factory();
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
    IfcRepresentation *get(Step::StepId id);
    /**
     */
    IfcRepresentation *generate();
    /**
     * @param id
     */
    IfcRepresentation *find(Step::StepId id);

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

#endif // IFC2X3_IFCREPRESENTATION_H
