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

#ifndef IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#define IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcEnvironmentalImpactValue_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcEnvironmentalImpactValue : public Step::InstantiatableEntity, public IfcAppliedValue {
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
     * (non-const) Returns the value of the explicit attribute 'ImpactType'.
     * 
     * @return the value of the explicit attribute 'ImpactType'
     */
    IfcLabel getImpactType();
    /**
     * Sets the value of the explicit attribute 'ImpactType'.
     * 
     * @param value
     */
    void setImpactType(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Category'.
     * 
     * @return the value of the explicit attribute 'Category'
     */
    IfcEnvironmentalImpactCategoryEnum getCategory();
    /**
     * Sets the value of the explicit attribute 'Category'.
     * 
     * @param value
     */
    void setCategory(IfcEnvironmentalImpactCategoryEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedCategory'.
     * 
     * @return the value of the explicit attribute 'UserDefinedCategory'
     */
    IfcLabel getUserDefinedCategory();
    /**
     * Sets the value of the explicit attribute 'UserDefinedCategory'.
     * 
     * @param value
     */
    void setUserDefinedCategory(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcEnvironmentalImpactValue_Factory;

  protected:
    /**
     * @param args
     */
    IfcEnvironmentalImpactValue(Step::SPFData *args);
    virtual ~IfcEnvironmentalImpactValue();

  private:
    static Step::ClassType s_type;
    std::string m_impactType;
    IfcEnvironmentalImpactCategoryEnum m_category;
    std::string m_userDefinedCategory;
    /**
     * @param c
     */
    IfcEnvironmentalImpactValue(const IfcEnvironmentalImpactValue &c);

  };

  class IfcEnvironmentalImpactValue;

  /**
   */
  class IFC2X3_DLL_DEF IfcEnvironmentalImpactValue_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcEnvironmentalImpactValue_Factory();
    virtual ~IfcEnvironmentalImpactValue_Factory();
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
    IfcEnvironmentalImpactValue *get(Step::StepId id);
    /**
     */
    IfcEnvironmentalImpactValue *generate();
    /**
     * @param id
     */
    IfcEnvironmentalImpactValue *find(Step::StepId id);

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

#endif // IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
