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

#ifndef IFC2X3_IFCCOMPOSITEPROFILEDEF_H
#define IFC2X3_IFCCOMPOSITEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcProfileDef.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCompositeProfileDef_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcCompositeProfileDef : public Step::InstantiatableEntity, public IfcProfileDef {
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
     * (non-const) Returns the value of the explicit attribute 'Profiles'.
     * 
     * @return the value of the explicit attribute 'Profiles'
     */
    Step::StepSet< Step::RefPtr< IfcProfileDef > > &getProfiles();
    /**
     * Sets the value of the explicit attribute 'Profiles'.
     * 
     * @param value
     */
    void setProfiles(const Step::StepSet< Step::RefPtr< IfcProfileDef > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Label'.
     * 
     * @return the value of the explicit attribute 'Label'
     */
    IfcLabel getLabel();
    /**
     * Sets the value of the explicit attribute 'Label'.
     * 
     * @param value
     */
    void setLabel(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcCompositeProfileDef_Factory;

  protected:
    /**
     * @param args
     */
    IfcCompositeProfileDef(Step::SPFData *args);
    virtual ~IfcCompositeProfileDef();

  private:
    static Step::ClassType s_type;
    Step::StepSet< Step::RefPtr< IfcProfileDef > > m_profiles;
    std::string m_label;
    /**
     * @param c
     */
    IfcCompositeProfileDef(const IfcCompositeProfileDef &c);

  };

  class IfcCompositeProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcCompositeProfileDef_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcCompositeProfileDef_Factory();
    virtual ~IfcCompositeProfileDef_Factory();
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
    IfcCompositeProfileDef *get(Step::StepId id);
    /**
     */
    IfcCompositeProfileDef *generate();
    /**
     * @param id
     */
    IfcCompositeProfileDef *find(Step::StepId id);

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

#endif // IFC2X3_IFCCOMPOSITEPROFILEDEF_H
