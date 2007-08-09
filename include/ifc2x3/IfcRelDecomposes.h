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

#ifndef IFC2X3_IFCRELDECOMPOSES_H
#define IFC2X3_IFCRELDECOMPOSES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcRelationship.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcObjectDefinition;

  /**
   */
  class IFC2X3_DLL_DEF IfcRelDecomposes : public IfcRelationship {
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
     * (non-const) Returns the value of the explicit attribute 'RelatingObject'.
     * 
     * @return the value of the explicit attribute 'RelatingObject'
     */
    IfcObjectDefinition *getRelatingObject();
    /**
     * Sets the value of the explicit attribute 'RelatingObject'.
     * 
     * @param value
     */
    void setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatedObjects'.
     * 
     * @return the value of the explicit attribute 'RelatedObjects'
     */
    Step::StepSet< Step::RefPtr< IfcObjectDefinition > > &getRelatedObjects();
    /**
     * Sets the value of the explicit attribute 'RelatedObjects'.
     * 
     * @param value
     */
    void setRelatedObjects(const Step::StepSet< Step::RefPtr< IfcObjectDefinition > > &value);
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
    IfcRelDecomposes(Step::SPFData *args);
    virtual ~IfcRelDecomposes();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcObjectDefinition > m_relatingObject;
    Step::StepSet< Step::RefPtr< IfcObjectDefinition > > m_relatedObjects;
    /**
     * @param c
     */
    IfcRelDecomposes(const IfcRelDecomposes &c);

  };

}

#endif // IFC2X3_IFCRELDECOMPOSES_H
