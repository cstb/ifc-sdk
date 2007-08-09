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

#ifndef IFC2X3_IFCCONSTRUCTIONRESOURCE_H
#define IFC2X3_IFCCONSTRUCTIONRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcResource.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcMeasureWithUnit;

  /**
   */
  class IFC2X3_DLL_DEF IfcConstructionResource : public IfcResource {
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
     * (non-const) Returns the value of the explicit attribute 'ResourceIdentifier'.
     * 
     * @return the value of the explicit attribute 'ResourceIdentifier'
     */
    IfcIdentifier getResourceIdentifier();
    /**
     * Sets the value of the explicit attribute 'ResourceIdentifier'.
     * 
     * @param value
     */
    void setResourceIdentifier(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ResourceGroup'.
     * 
     * @return the value of the explicit attribute 'ResourceGroup'
     */
    IfcLabel getResourceGroup();
    /**
     * Sets the value of the explicit attribute 'ResourceGroup'.
     * 
     * @param value
     */
    void setResourceGroup(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ResourceConsumption'.
     * 
     * @return the value of the explicit attribute 'ResourceConsumption'
     */
    IfcResourceConsumptionEnum getResourceConsumption();
    /**
     * Sets the value of the explicit attribute 'ResourceConsumption'.
     * 
     * @param value
     */
    void setResourceConsumption(IfcResourceConsumptionEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'BaseQuantity'.
     * 
     * @return the value of the explicit attribute 'BaseQuantity'
     */
    IfcMeasureWithUnit *getBaseQuantity();
    /**
     * Sets the value of the explicit attribute 'BaseQuantity'.
     * 
     * @param value
     */
    void setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();

  protected:
    /**
     * @param args
     */
    IfcConstructionResource(Step::SPFData *args);
    virtual ~IfcConstructionResource();

  private:
    static Step::ClassType s_type;
    std::string m_resourceIdentifier;
    std::string m_resourceGroup;
    IfcResourceConsumptionEnum m_resourceConsumption;
    Step::RefPtr< IfcMeasureWithUnit > m_baseQuantity;
    /**
     * @param c
     */
    IfcConstructionResource(const IfcConstructionResource &c);

  };

}

#endif // IFC2X3_IFCCONSTRUCTIONRESOURCE_H
