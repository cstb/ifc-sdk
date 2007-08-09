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

#ifndef IFC2X3_IFCCLASSIFICATIONITEM_H
#define IFC2X3_IFCCLASSIFICATIONITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcClassification;
  class IfcClassificationItemRelationship;
  class IfcClassificationItem_Factory;
  class IfcClassificationNotationFacet;

  /**
   */
  class IFC2X3_DLL_DEF IfcClassificationItem : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'Notation'.
     * 
     * @return the value of the explicit attribute 'Notation'
     */
    IfcClassificationNotationFacet *getNotation();
    /**
     * Sets the value of the explicit attribute 'Notation'.
     * 
     * @param value
     */
    void setNotation(const Step::RefPtr< IfcClassificationNotationFacet > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ItemOf'.
     * 
     * @return the value of the explicit attribute 'ItemOf'
     */
    IfcClassification *getItemOf();
    /**
     * Sets the value of the explicit attribute 'ItemOf'.
     * 
     * @param value
     */
    void setItemOf(const Step::RefPtr< IfcClassification > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Title'.
     * 
     * @return the value of the explicit attribute 'Title'
     */
    IfcLabel getTitle();
    /**
     * Sets the value of the explicit attribute 'Title'.
     * 
     * @param value
     */
    void setTitle(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsClassifiedItemIn'.
     * 
     * @return the value of the explicit attribute 'IsClassifiedItemIn'
     */
    Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &getIsClassifiedItemIn();
    /**
     * Sets the value of the explicit attribute 'IsClassifiedItemIn'.
     * 
     * @param value
     */
    void setIsClassifiedItemIn(const Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsClassifyingItemIn'.
     * 
     * @return the value of the explicit attribute 'IsClassifyingItemIn'
     */
    Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &getIsClassifyingItemIn();
    /**
     * Sets the value of the explicit attribute 'IsClassifyingItemIn'.
     * 
     * @param value
     */
    void setIsClassifyingItemIn(const Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcClassificationItem_Factory;

  protected:
    /**
     * @param args
     */
    IfcClassificationItem(Step::SPFData *args);
    virtual ~IfcClassificationItem();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcClassificationNotationFacet > m_notation;
    Step::RefPtr< IfcClassification > m_itemOf;
    std::string m_title;
    Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > m_isClassifiedItemIn;
    Step::StepSet< Step::RefPtr< IfcClassificationItemRelationship > > m_isClassifyingItemIn;
    /**
     * @param c
     */
    IfcClassificationItem(const IfcClassificationItem &c);

  };

  class IfcClassificationItem;

  /**
   */
  class IFC2X3_DLL_DEF IfcClassificationItem_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcClassificationItem_Factory();
    virtual ~IfcClassificationItem_Factory();
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
    IfcClassificationItem *get(Step::StepId id);
    /**
     */
    IfcClassificationItem *generate();
    /**
     * @param id
     */
    IfcClassificationItem *find(Step::StepId id);

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

#endif // IFC2X3_IFCCLASSIFICATIONITEM_H
