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

#ifndef IFC2X3_IFCPROPERTYSETDEFINITION_H
#define IFC2X3_IFCPROPERTYSETDEFINITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcPropertyDefinition.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcRelDefinesByProperties;
  class IfcTypeObject;

  /**
   */
  class IFC2X3_DLL_DEF IfcPropertySetDefinition : public IfcPropertyDefinition {
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
     * (non-const) Returns the value of the explicit attribute 'PropertyDefinitionOf'.
     * 
     * @return the value of the explicit attribute 'PropertyDefinitionOf'
     */
    Step::StepSet< Step::RefPtr< IfcRelDefinesByProperties > > &getPropertyDefinitionOf();
    /**
     * Sets the value of the explicit attribute 'PropertyDefinitionOf'.
     * 
     * @param value
     */
    void setPropertyDefinitionOf(const Step::StepSet< Step::RefPtr< IfcRelDefinesByProperties > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DefinesType'.
     * 
     * @return the value of the explicit attribute 'DefinesType'
     */
    Step::StepSet< Step::RefPtr< IfcTypeObject > > &getDefinesType();
    /**
     * Sets the value of the explicit attribute 'DefinesType'.
     * 
     * @param value
     */
    void setDefinesType(const Step::StepSet< Step::RefPtr< IfcTypeObject > > &value);
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
    IfcPropertySetDefinition(Step::SPFData *args);
    virtual ~IfcPropertySetDefinition();

  private:
    static Step::ClassType s_type;
    Step::StepSet< Step::RefPtr< IfcRelDefinesByProperties > > m_propertyDefinitionOf;
    Step::StepSet< Step::RefPtr< IfcTypeObject > > m_definesType;
    /**
     * @param c
     */
    IfcPropertySetDefinition(const IfcPropertySetDefinition &c);

  };

}

#endif // IFC2X3_IFCPROPERTYSETDEFINITION_H
