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

#ifndef IFC2X3_IFCPROPERTY_H
#define IFC2X3_IFCPROPERTY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcComplexProperty;
  class IfcPropertyDependencyRelationship;

  /**
   */
  class IFC2X3_DLL_DEF IfcProperty : public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'Name'.
     * 
     * @return the value of the explicit attribute 'Name'
     */
    IfcIdentifier getName();
    /**
     * Sets the value of the explicit attribute 'Name'.
     * 
     * @param value
     */
    void setName(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Description'.
     * 
     * @return the value of the explicit attribute 'Description'
     */
    IfcText getDescription();
    /**
     * Sets the value of the explicit attribute 'Description'.
     * 
     * @param value
     */
    void setDescription(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PropertyForDependance'.
     * 
     * @return the value of the explicit attribute 'PropertyForDependance'
     */
    Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &getPropertyForDependance();
    /**
     * Sets the value of the explicit attribute 'PropertyForDependance'.
     * 
     * @param value
     */
    void setPropertyForDependance(const Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PropertyDependsOn'.
     * 
     * @return the value of the explicit attribute 'PropertyDependsOn'
     */
    Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &getPropertyDependsOn();
    /**
     * Sets the value of the explicit attribute 'PropertyDependsOn'.
     * 
     * @param value
     */
    void setPropertyDependsOn(const Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PartOfComplex'.
     * 
     * @return the value of the explicit attribute 'PartOfComplex'
     */
    Step::StepSet< Step::RefPtr< IfcComplexProperty > > &getPartOfComplex();
    /**
     * Sets the value of the explicit attribute 'PartOfComplex'.
     * 
     * @param value
     */
    void setPartOfComplex(const Step::StepSet< Step::RefPtr< IfcComplexProperty > > &value);
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
    IfcProperty(Step::SPFData *args);
    virtual ~IfcProperty();

  private:
    static Step::ClassType s_type;
    std::string m_name;
    std::string m_description;
    Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > m_propertyForDependance;
    Step::StepSet< Step::RefPtr< IfcPropertyDependencyRelationship > > m_propertyDependsOn;
    Step::StepSet< Step::RefPtr< IfcComplexProperty > > m_partOfComplex;
    /**
     * @param c
     */
    IfcProperty(const IfcProperty &c);

  };

}

#endif // IFC2X3_IFCPROPERTY_H
