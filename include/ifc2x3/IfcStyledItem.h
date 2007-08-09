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

#ifndef IFC2X3_IFCSTYLEDITEM_H
#define IFC2X3_IFCSTYLEDITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcPresentationStyleAssignment;
  class IfcStyledItem_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcStyledItem : public Step::InstantiatableEntity, public IfcRepresentationItem {
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
     * (non-const) Returns the value of the explicit attribute 'Item'.
     * 
     * @return the value of the explicit attribute 'Item'
     */
    IfcRepresentationItem *getItem();
    /**
     * Sets the value of the explicit attribute 'Item'.
     * 
     * @param value
     */
    void setItem(const Step::RefPtr< IfcRepresentationItem > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Styles'.
     * 
     * @return the value of the explicit attribute 'Styles'
     */
    Step::StepSet< Step::RefPtr< IfcPresentationStyleAssignment > > &getStyles();
    /**
     * Sets the value of the explicit attribute 'Styles'.
     * 
     * @param value
     */
    void setStyles(const Step::StepSet< Step::RefPtr< IfcPresentationStyleAssignment > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Name'.
     * 
     * @return the value of the explicit attribute 'Name'
     */
    IfcLabel getName();
    /**
     * Sets the value of the explicit attribute 'Name'.
     * 
     * @param value
     */
    void setName(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcStyledItem_Factory;

  protected:
    /**
     * @param args
     */
    IfcStyledItem(Step::SPFData *args);
    virtual ~IfcStyledItem();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcRepresentationItem > m_item;
    Step::StepSet< Step::RefPtr< IfcPresentationStyleAssignment > > m_styles;
    std::string m_name;
    /**
     * @param c
     */
    IfcStyledItem(const IfcStyledItem &c);

  };

  class IfcStyledItem;

  /**
   */
  class IFC2X3_DLL_DEF IfcStyledItem_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcStyledItem_Factory();
    virtual ~IfcStyledItem_Factory();
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
    IfcStyledItem *get(Step::StepId id);
    /**
     */
    IfcStyledItem *generate();
    /**
     * @param id
     */
    IfcStyledItem *find(Step::StepId id);

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

#endif // IFC2X3_IFCSTYLEDITEM_H
