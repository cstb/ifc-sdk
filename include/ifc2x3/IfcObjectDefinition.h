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

#ifndef IFC2X3_IFCOBJECTDEFINITION_H
#define IFC2X3_IFCOBJECTDEFINITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcRoot.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcRelAssigns;
  class IfcRelAssociates;
  class IfcRelDecomposes;

  /**
   */
  class IFC2X3_DLL_DEF IfcObjectDefinition : public IfcRoot {
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
     * (non-const) Returns the value of the explicit attribute 'HasAssignments'.
     * 
     * @return the value of the explicit attribute 'HasAssignments'
     */
    Step::StepSet< Step::RefPtr< IfcRelAssigns > > &getHasAssignments();
    /**
     * Sets the value of the explicit attribute 'HasAssignments'.
     * 
     * @param value
     */
    void setHasAssignments(const Step::StepSet< Step::RefPtr< IfcRelAssigns > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsDecomposedBy'.
     * 
     * @return the value of the explicit attribute 'IsDecomposedBy'
     */
    Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &getIsDecomposedBy();
    /**
     * Sets the value of the explicit attribute 'IsDecomposedBy'.
     * 
     * @param value
     */
    void setIsDecomposedBy(const Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Decomposes'.
     * 
     * @return the value of the explicit attribute 'Decomposes'
     */
    Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &getDecomposes();
    /**
     * Sets the value of the explicit attribute 'Decomposes'.
     * 
     * @param value
     */
    void setDecomposes(const Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasAssociations'.
     * 
     * @return the value of the explicit attribute 'HasAssociations'
     */
    Step::StepSet< Step::RefPtr< IfcRelAssociates > > &getHasAssociations();
    /**
     * Sets the value of the explicit attribute 'HasAssociations'.
     * 
     * @param value
     */
    void setHasAssociations(const Step::StepSet< Step::RefPtr< IfcRelAssociates > > &value);
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
    IfcObjectDefinition(Step::SPFData *args);
    virtual ~IfcObjectDefinition();

  private:
    static Step::ClassType s_type;
    Step::StepSet< Step::RefPtr< IfcRelAssigns > > m_hasAssignments;
    Step::StepSet< Step::RefPtr< IfcRelDecomposes > > m_isDecomposedBy;
    Step::StepSet< Step::RefPtr< IfcRelDecomposes > > m_decomposes;
    Step::StepSet< Step::RefPtr< IfcRelAssociates > > m_hasAssociations;
    /**
     * @param c
     */
    IfcObjectDefinition(const IfcObjectDefinition &c);

  };

}

#endif // IFC2X3_IFCOBJECTDEFINITION_H
