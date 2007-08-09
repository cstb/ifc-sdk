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

#ifndef IFC2X3_IFCSTRUCTURALACTIVITY_H
#define IFC2X3_IFCSTRUCTURALACTIVITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcProduct.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcRelConnectsStructuralActivity;
  class IfcStructuralLoad;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralActivity : public IfcProduct {
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
     * (non-const) Returns the value of the explicit attribute 'AppliedLoad'.
     * 
     * @return the value of the explicit attribute 'AppliedLoad'
     */
    IfcStructuralLoad *getAppliedLoad();
    /**
     * Sets the value of the explicit attribute 'AppliedLoad'.
     * 
     * @param value
     */
    void setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'GlobalOrLocal'.
     * 
     * @return the value of the explicit attribute 'GlobalOrLocal'
     */
    IfcGlobalOrLocalEnum getGlobalOrLocal();
    /**
     * Sets the value of the explicit attribute 'GlobalOrLocal'.
     * 
     * @param value
     */
    void setGlobalOrLocal(IfcGlobalOrLocalEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AssignedToStructuralItem'.
     * 
     * @return the value of the explicit attribute 'AssignedToStructuralItem'
     */
    IfcRelConnectsStructuralActivity *getAssignedToStructuralItem();
    /**
     * Sets the value of the explicit attribute 'AssignedToStructuralItem'.
     * 
     * @param value
     */
    void setAssignedToStructuralItem(const Step::RefPtr< IfcRelConnectsStructuralActivity > &value);
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
    IfcStructuralActivity(Step::SPFData *args);
    virtual ~IfcStructuralActivity();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcStructuralLoad > m_appliedLoad;
    IfcGlobalOrLocalEnum m_globalOrLocal;
    Step::RefPtr< IfcRelConnectsStructuralActivity > m_assignedToStructuralItem;
    /**
     * @param c
     */
    IfcStructuralActivity(const IfcStructuralActivity &c);

  };

}

#endif // IFC2X3_IFCSTRUCTURALACTIVITY_H
