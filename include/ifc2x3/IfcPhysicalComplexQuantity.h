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

#ifndef IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
#define IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcPhysicalQuantity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcPhysicalComplexQuantity_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcPhysicalComplexQuantity : public Step::InstantiatableEntity, public IfcPhysicalQuantity {
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
     * (non-const) Returns the value of the explicit attribute 'HasQuantities'.
     * 
     * @return the value of the explicit attribute 'HasQuantities'
     */
    Step::StepSet< Step::RefPtr< IfcPhysicalQuantity > > &getHasQuantities();
    /**
     * Sets the value of the explicit attribute 'HasQuantities'.
     * 
     * @param value
     */
    void setHasQuantities(const Step::StepSet< Step::RefPtr< IfcPhysicalQuantity > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Discrimination'.
     * 
     * @return the value of the explicit attribute 'Discrimination'
     */
    IfcLabel getDiscrimination();
    /**
     * Sets the value of the explicit attribute 'Discrimination'.
     * 
     * @param value
     */
    void setDiscrimination(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Quality'.
     * 
     * @return the value of the explicit attribute 'Quality'
     */
    IfcLabel getQuality();
    /**
     * Sets the value of the explicit attribute 'Quality'.
     * 
     * @param value
     */
    void setQuality(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Usage'.
     * 
     * @return the value of the explicit attribute 'Usage'
     */
    IfcLabel getUsage();
    /**
     * Sets the value of the explicit attribute 'Usage'.
     * 
     * @param value
     */
    void setUsage(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcPhysicalComplexQuantity_Factory;

  protected:
    /**
     * @param args
     */
    IfcPhysicalComplexQuantity(Step::SPFData *args);
    virtual ~IfcPhysicalComplexQuantity();

  private:
    static Step::ClassType s_type;
    Step::StepSet< Step::RefPtr< IfcPhysicalQuantity > > m_hasQuantities;
    std::string m_discrimination;
    std::string m_quality;
    std::string m_usage;
    /**
     * @param c
     */
    IfcPhysicalComplexQuantity(const IfcPhysicalComplexQuantity &c);

  };

  class IfcPhysicalComplexQuantity;

  /**
   */
  class IFC2X3_DLL_DEF IfcPhysicalComplexQuantity_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcPhysicalComplexQuantity_Factory();
    virtual ~IfcPhysicalComplexQuantity_Factory();
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
    IfcPhysicalComplexQuantity *get(Step::StepId id);
    /**
     */
    IfcPhysicalComplexQuantity *generate();
    /**
     * @param id
     */
    IfcPhysicalComplexQuantity *find(Step::StepId id);

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

#endif // IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
