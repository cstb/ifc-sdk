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

#ifndef IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
#define IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
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

  class IfcAxis2Placement3D;
  class IfcBoundaryCondition;
  class IfcRelConnectsStructuralMember_Factory;
  class IfcStructuralConnection;
  class IfcStructuralConnectionCondition;
  class IfcStructuralMember;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelConnectsStructuralMember : public Step::InstantiatableEntity, public IfcRelConnects {
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
     * (non-const) Returns the value of the explicit attribute 'RelatingStructuralMember'.
     * 
     * @return the value of the explicit attribute 'RelatingStructuralMember'
     */
    IfcStructuralMember *getRelatingStructuralMember();
    /**
     * Sets the value of the explicit attribute 'RelatingStructuralMember'.
     * 
     * @param value
     */
    void setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatedStructuralConnection'.
     * 
     * @return the value of the explicit attribute 'RelatedStructuralConnection'
     */
    IfcStructuralConnection *getRelatedStructuralConnection();
    /**
     * Sets the value of the explicit attribute 'RelatedStructuralConnection'.
     * 
     * @param value
     */
    void setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AppliedCondition'.
     * 
     * @return the value of the explicit attribute 'AppliedCondition'
     */
    IfcBoundaryCondition *getAppliedCondition();
    /**
     * Sets the value of the explicit attribute 'AppliedCondition'.
     * 
     * @param value
     */
    void setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AdditionalConditions'.
     * 
     * @return the value of the explicit attribute 'AdditionalConditions'
     */
    IfcStructuralConnectionCondition *getAdditionalConditions();
    /**
     * Sets the value of the explicit attribute 'AdditionalConditions'.
     * 
     * @param value
     */
    void setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SupportedLength'.
     * 
     * @return the value of the explicit attribute 'SupportedLength'
     */
    IfcLengthMeasure getSupportedLength();
    /**
     * Sets the value of the explicit attribute 'SupportedLength'.
     * 
     * @param value
     */
    void setSupportedLength(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ConditionCoordinateSystem'.
     * 
     * @return the value of the explicit attribute 'ConditionCoordinateSystem'
     */
    IfcAxis2Placement3D *getConditionCoordinateSystem();
    /**
     * Sets the value of the explicit attribute 'ConditionCoordinateSystem'.
     * 
     * @param value
     */
    void setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRelConnectsStructuralMember_Factory;

  protected:
    /**
     * @param args
     */
    IfcRelConnectsStructuralMember(Step::SPFData *args);
    virtual ~IfcRelConnectsStructuralMember();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcStructuralMember > m_relatingStructuralMember;
    Step::RefPtr< IfcStructuralConnection > m_relatedStructuralConnection;
    Step::RefPtr< IfcBoundaryCondition > m_appliedCondition;
    Step::RefPtr< IfcStructuralConnectionCondition > m_additionalConditions;
    Real m_supportedLength;
    Step::RefPtr< IfcAxis2Placement3D > m_conditionCoordinateSystem;
    /**
     * @param c
     */
    IfcRelConnectsStructuralMember(const IfcRelConnectsStructuralMember &c);

  };

  class IfcRelConnectsStructuralMember;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelConnectsStructuralMember_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRelConnectsStructuralMember_Factory();
    virtual ~IfcRelConnectsStructuralMember_Factory();
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
    IfcRelConnectsStructuralMember *get(Step::StepId id);
    /**
     */
    IfcRelConnectsStructuralMember *generate();
    /**
     * @param id
     */
    IfcRelConnectsStructuralMember *find(Step::StepId id);

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

#endif // IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
