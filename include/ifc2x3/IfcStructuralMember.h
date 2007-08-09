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

#ifndef IFC2X3_IFCSTRUCTURALMEMBER_H
#define IFC2X3_IFCSTRUCTURALMEMBER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcStructuralItem.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcRelConnectsStructuralElement;
  class IfcRelConnectsStructuralMember;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralMember : public IfcStructuralItem {
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
     * (non-const) Returns the value of the explicit attribute 'ReferencesElement'.
     * 
     * @return the value of the explicit attribute 'ReferencesElement'
     */
    Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &getReferencesElement();
    /**
     * Sets the value of the explicit attribute 'ReferencesElement'.
     * 
     * @param value
     */
    void setReferencesElement(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ConnectedBy'.
     * 
     * @return the value of the explicit attribute 'ConnectedBy'
     */
    Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralMember > > &getConnectedBy();
    /**
     * Sets the value of the explicit attribute 'ConnectedBy'.
     * 
     * @param value
     */
    void setConnectedBy(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralMember > > &value);
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
    IfcStructuralMember(Step::SPFData *args);
    virtual ~IfcStructuralMember();

  private:
    static Step::ClassType s_type;
    Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > m_referencesElement;
    Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralMember > > m_connectedBy;
    /**
     * @param c
     */
    IfcStructuralMember(const IfcStructuralMember &c);

  };

}

#endif // IFC2X3_IFCSTRUCTURALMEMBER_H
