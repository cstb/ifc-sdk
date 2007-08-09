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

#ifndef IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
#define IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcProduct.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcRelContainedInSpatialStructure;
  class IfcRelReferencedInSpatialStructure;
  class IfcRelServicesBuildings;

  /**
   */
  class IFC2X3_DLL_DEF IfcSpatialStructureElement : public IfcProduct {
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
     * (non-const) Returns the value of the explicit attribute 'LongName'.
     * 
     * @return the value of the explicit attribute 'LongName'
     */
    IfcLabel getLongName();
    /**
     * Sets the value of the explicit attribute 'LongName'.
     * 
     * @param value
     */
    void setLongName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CompositionType'.
     * 
     * @return the value of the explicit attribute 'CompositionType'
     */
    IfcElementCompositionEnum getCompositionType();
    /**
     * Sets the value of the explicit attribute 'CompositionType'.
     * 
     * @param value
     */
    void setCompositionType(IfcElementCompositionEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ReferencesElements'.
     * 
     * @return the value of the explicit attribute 'ReferencesElements'
     */
    Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &getReferencesElements();
    /**
     * Sets the value of the explicit attribute 'ReferencesElements'.
     * 
     * @param value
     */
    void setReferencesElements(const Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ServicedBySystems'.
     * 
     * @return the value of the explicit attribute 'ServicedBySystems'
     */
    Step::StepSet< Step::RefPtr< IfcRelServicesBuildings > > &getServicedBySystems();
    /**
     * Sets the value of the explicit attribute 'ServicedBySystems'.
     * 
     * @param value
     */
    void setServicedBySystems(const Step::StepSet< Step::RefPtr< IfcRelServicesBuildings > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ContainsElements'.
     * 
     * @return the value of the explicit attribute 'ContainsElements'
     */
    Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &getContainsElements();
    /**
     * Sets the value of the explicit attribute 'ContainsElements'.
     * 
     * @param value
     */
    void setContainsElements(const Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &value);
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
    IfcSpatialStructureElement(Step::SPFData *args);
    virtual ~IfcSpatialStructureElement();

  private:
    static Step::ClassType s_type;
    std::string m_longName;
    IfcElementCompositionEnum m_compositionType;
    Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > m_referencesElements;
    Step::StepSet< Step::RefPtr< IfcRelServicesBuildings > > m_servicedBySystems;
    Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > m_containsElements;
    /**
     * @param c
     */
    IfcSpatialStructureElement(const IfcSpatialStructureElement &c);

  };

}

#endif // IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
