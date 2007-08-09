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

#ifndef IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
#define IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <ifc2x3/IfcRelConnects.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcRelInteractionRequirements_Factory;
  class IfcSpaceProgram;
  class IfcSpatialStructureElement;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelInteractionRequirements : public Step::InstantiatableEntity, public IfcRelConnects {
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
     * (non-const) Returns the value of the explicit attribute 'DailyInteraction'.
     * 
     * @return the value of the explicit attribute 'DailyInteraction'
     */
    IfcCountMeasure getDailyInteraction();
    /**
     * Sets the value of the explicit attribute 'DailyInteraction'.
     * 
     * @param value
     */
    void setDailyInteraction(IfcCountMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ImportanceRating'.
     * 
     * @return the value of the explicit attribute 'ImportanceRating'
     */
    IfcNormalisedRatioMeasure getImportanceRating();
    /**
     * Sets the value of the explicit attribute 'ImportanceRating'.
     * 
     * @param value
     */
    void setImportanceRating(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LocationOfInteraction'.
     * 
     * @return the value of the explicit attribute 'LocationOfInteraction'
     */
    IfcSpatialStructureElement *getLocationOfInteraction();
    /**
     * Sets the value of the explicit attribute 'LocationOfInteraction'.
     * 
     * @param value
     */
    void setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatedSpaceProgram'.
     * 
     * @return the value of the explicit attribute 'RelatedSpaceProgram'
     */
    IfcSpaceProgram *getRelatedSpaceProgram();
    /**
     * Sets the value of the explicit attribute 'RelatedSpaceProgram'.
     * 
     * @param value
     */
    void setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatingSpaceProgram'.
     * 
     * @return the value of the explicit attribute 'RelatingSpaceProgram'
     */
    IfcSpaceProgram *getRelatingSpaceProgram();
    /**
     * Sets the value of the explicit attribute 'RelatingSpaceProgram'.
     * 
     * @param value
     */
    void setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRelInteractionRequirements_Factory;

  protected:
    /**
     * @param args
     */
    IfcRelInteractionRequirements(Step::SPFData *args);
    virtual ~IfcRelInteractionRequirements();

  private:
    static Step::ClassType s_type;
    Integer m_dailyInteraction;
    Real m_importanceRating;
    Step::RefPtr< IfcSpatialStructureElement > m_locationOfInteraction;
    Step::RefPtr< IfcSpaceProgram > m_relatedSpaceProgram;
    Step::RefPtr< IfcSpaceProgram > m_relatingSpaceProgram;
    /**
     * @param c
     */
    IfcRelInteractionRequirements(const IfcRelInteractionRequirements &c);

  };

  class IfcRelInteractionRequirements;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelInteractionRequirements_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRelInteractionRequirements_Factory();
    virtual ~IfcRelInteractionRequirements_Factory();
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
    IfcRelInteractionRequirements *get(Step::StepId id);
    /**
     */
    IfcRelInteractionRequirements *generate();
    /**
     * @param id
     */
    IfcRelInteractionRequirements *find(Step::StepId id);

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

#endif // IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
