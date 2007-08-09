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

#ifndef IFC2X3_IFCSYMBOLSTYLESELECT_H
#define IFC2X3_IFCSYMBOLSTYLESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcColourSpecification;
  class IfcPreDefinedColour;

  /**
   */
  class IFC2X3_DLL_DEF IfcSymbolStyleSelect : public Step::BaseObject {
  public:
    enum IfcSymbolStyleSelect_select {
      IFCCOLOURSPECIFICATION,
      IFCPREDEFINEDCOLOUR,
      UNSET,
    };

    /**
     */
    IfcSymbolStyleSelect();
    virtual ~IfcSymbolStyleSelect();
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
    /**
     */
    virtual bool init();
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
     */
    char *currentTypeName();
    /**
     */
    IfcSymbolStyleSelect_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcColourSpecification *getIfcColourSpecification();
    /**
     * @param value
     */
    void setIfcColourSpecification(IfcColourSpecification *value);
    /**
     */
    IfcPreDefinedColour *getIfcPreDefinedColour();
    /**
     * @param value
     */
    void setIfcPreDefinedColour(IfcPreDefinedColour *value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcSymbolStyleSelect(Step::SPFData *args);

  private:
    union IfcSymbolStyleSelect_union {
      IfcColourSpecification *m_IfcColourSpecification;
      IfcPreDefinedColour *m_IfcPreDefinedColour;
    };
    static Step::ClassType s_type;
    IfcSymbolStyleSelect_select m_type;
    IfcSymbolStyleSelect_union m_IfcSymbolStyleSelect_union;
    /**
     * @param c
     */
    IfcSymbolStyleSelect(const IfcSymbolStyleSelect &c);

  };

}

#endif // IFC2X3_IFCSYMBOLSTYLESELECT_H
