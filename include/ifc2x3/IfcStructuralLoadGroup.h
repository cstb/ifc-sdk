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

#ifndef IFC2X3_IFCSTRUCTURALLOADGROUP_H
#define IFC2X3_IFCSTRUCTURALLOADGROUP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcGroup.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcStructuralAnalysisModel;
  class IfcStructuralLoadGroup_Factory;
  class IfcStructuralResultGroup;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralLoadGroup : public IfcGroup {
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
     * (non-const) Returns the value of the explicit attribute 'PredefinedType'.
     * 
     * @return the value of the explicit attribute 'PredefinedType'
     */
    IfcLoadGroupTypeEnum getPredefinedType();
    /**
     * Sets the value of the explicit attribute 'PredefinedType'.
     * 
     * @param value
     */
    void setPredefinedType(IfcLoadGroupTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ActionType'.
     * 
     * @return the value of the explicit attribute 'ActionType'
     */
    IfcActionTypeEnum getActionType();
    /**
     * Sets the value of the explicit attribute 'ActionType'.
     * 
     * @param value
     */
    void setActionType(IfcActionTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ActionSource'.
     * 
     * @return the value of the explicit attribute 'ActionSource'
     */
    IfcActionSourceTypeEnum getActionSource();
    /**
     * Sets the value of the explicit attribute 'ActionSource'.
     * 
     * @param value
     */
    void setActionSource(IfcActionSourceTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Coefficient'.
     * 
     * @return the value of the explicit attribute 'Coefficient'
     */
    IfcPositiveRatioMeasure getCoefficient();
    /**
     * Sets the value of the explicit attribute 'Coefficient'.
     * 
     * @param value
     */
    void setCoefficient(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Purpose'.
     * 
     * @return the value of the explicit attribute 'Purpose'
     */
    IfcLabel getPurpose();
    /**
     * Sets the value of the explicit attribute 'Purpose'.
     * 
     * @param value
     */
    void setPurpose(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SourceOfResultGroup'.
     * 
     * @return the value of the explicit attribute 'SourceOfResultGroup'
     */
    Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &getSourceOfResultGroup();
    /**
     * Sets the value of the explicit attribute 'SourceOfResultGroup'.
     * 
     * @param value
     */
    void setSourceOfResultGroup(const Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LoadGroupFor'.
     * 
     * @return the value of the explicit attribute 'LoadGroupFor'
     */
    Step::StepSet< Step::RefPtr< IfcStructuralAnalysisModel > > &getLoadGroupFor();
    /**
     * Sets the value of the explicit attribute 'LoadGroupFor'.
     * 
     * @param value
     */
    void setLoadGroupFor(const Step::StepSet< Step::RefPtr< IfcStructuralAnalysisModel > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcStructuralLoadGroup_Factory;

  protected:
    /**
     * @param args
     */
    IfcStructuralLoadGroup(Step::SPFData *args);
    virtual ~IfcStructuralLoadGroup();

  private:
    static Step::ClassType s_type;
    IfcLoadGroupTypeEnum m_predefinedType;
    IfcActionTypeEnum m_actionType;
    IfcActionSourceTypeEnum m_actionSource;
    Real m_coefficient;
    std::string m_purpose;
    Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > m_sourceOfResultGroup;
    Step::StepSet< Step::RefPtr< IfcStructuralAnalysisModel > > m_loadGroupFor;
    /**
     * @param c
     */
    IfcStructuralLoadGroup(const IfcStructuralLoadGroup &c);

  };

  class IfcStructuralLoadGroup;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralLoadGroup_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcStructuralLoadGroup_Factory();
    virtual ~IfcStructuralLoadGroup_Factory();
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
    IfcStructuralLoadGroup *get(Step::StepId id);
    /**
     */
    IfcStructuralLoadGroup *generate();
    /**
     * @param id
     */
    IfcStructuralLoadGroup *find(Step::StepId id);

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

#endif // IFC2X3_IFCSTRUCTURALLOADGROUP_H
