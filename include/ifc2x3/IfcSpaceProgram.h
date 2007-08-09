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

#ifndef IFC2X3_IFCSPACEPROGRAM_H
#define IFC2X3_IFCSPACEPROGRAM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcControl.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcRelInteractionRequirements;
  class IfcSpaceProgram_Factory;
  class IfcSpatialStructureElement;

  /**
   */
  class IFC2X3_DLL_DEF IfcSpaceProgram : public Step::InstantiatableEntity, public IfcControl {
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
     * (non-const) Returns the value of the explicit attribute 'SpaceProgramIdentifier'.
     * 
     * @return the value of the explicit attribute 'SpaceProgramIdentifier'
     */
    IfcIdentifier getSpaceProgramIdentifier();
    /**
     * Sets the value of the explicit attribute 'SpaceProgramIdentifier'.
     * 
     * @param value
     */
    void setSpaceProgramIdentifier(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MaxRequiredArea'.
     * 
     * @return the value of the explicit attribute 'MaxRequiredArea'
     */
    IfcAreaMeasure getMaxRequiredArea();
    /**
     * Sets the value of the explicit attribute 'MaxRequiredArea'.
     * 
     * @param value
     */
    void setMaxRequiredArea(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinRequiredArea'.
     * 
     * @return the value of the explicit attribute 'MinRequiredArea'
     */
    IfcAreaMeasure getMinRequiredArea();
    /**
     * Sets the value of the explicit attribute 'MinRequiredArea'.
     * 
     * @param value
     */
    void setMinRequiredArea(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RequestedLocation'.
     * 
     * @return the value of the explicit attribute 'RequestedLocation'
     */
    IfcSpatialStructureElement *getRequestedLocation();
    /**
     * Sets the value of the explicit attribute 'RequestedLocation'.
     * 
     * @param value
     */
    void setRequestedLocation(const Step::RefPtr< IfcSpatialStructureElement > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'StandardRequiredArea'.
     * 
     * @return the value of the explicit attribute 'StandardRequiredArea'
     */
    IfcAreaMeasure getStandardRequiredArea();
    /**
     * Sets the value of the explicit attribute 'StandardRequiredArea'.
     * 
     * @param value
     */
    void setStandardRequiredArea(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasInteractionReqsFrom'.
     * 
     * @return the value of the explicit attribute 'HasInteractionReqsFrom'
     */
    Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &getHasInteractionReqsFrom();
    /**
     * Sets the value of the explicit attribute 'HasInteractionReqsFrom'.
     * 
     * @param value
     */
    void setHasInteractionReqsFrom(const Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasInteractionReqsTo'.
     * 
     * @return the value of the explicit attribute 'HasInteractionReqsTo'
     */
    Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &getHasInteractionReqsTo();
    /**
     * Sets the value of the explicit attribute 'HasInteractionReqsTo'.
     * 
     * @param value
     */
    void setHasInteractionReqsTo(const Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSpaceProgram_Factory;

  protected:
    /**
     * @param args
     */
    IfcSpaceProgram(Step::SPFData *args);
    virtual ~IfcSpaceProgram();

  private:
    static Step::ClassType s_type;
    std::string m_spaceProgramIdentifier;
    Real m_maxRequiredArea;
    Real m_minRequiredArea;
    Step::RefPtr< IfcSpatialStructureElement > m_requestedLocation;
    Real m_standardRequiredArea;
    Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > m_hasInteractionReqsFrom;
    Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > m_hasInteractionReqsTo;
    /**
     * @param c
     */
    IfcSpaceProgram(const IfcSpaceProgram &c);

  };

  class IfcSpaceProgram;

  /**
   */
  class IFC2X3_DLL_DEF IfcSpaceProgram_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSpaceProgram_Factory();
    virtual ~IfcSpaceProgram_Factory();
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
    IfcSpaceProgram *get(Step::StepId id);
    /**
     */
    IfcSpaceProgram *generate();
    /**
     * @param id
     */
    IfcSpaceProgram *find(Step::StepId id);

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

#endif // IFC2X3_IFCSPACEPROGRAM_H
