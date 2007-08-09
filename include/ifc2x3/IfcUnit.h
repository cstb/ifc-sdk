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

#ifndef IFC2X3_IFCUNIT_H
#define IFC2X3_IFCUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcDerivedUnit;
  class IfcMonetaryUnit;
  class IfcNamedUnit;

  /**
   */
  class IFC2X3_DLL_DEF IfcUnit : public Step::BaseObject {
  public:
    enum IfcUnit_select {
      IFCDERIVEDUNIT,
      IFCNAMEDUNIT,
      IFCMONETARYUNIT,
      UNSET,
    };

    /**
     */
    IfcUnit();
    virtual ~IfcUnit();
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
    IfcUnit_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcDerivedUnit *getIfcDerivedUnit();
    /**
     * @param value
     */
    void setIfcDerivedUnit(IfcDerivedUnit *value);
    /**
     */
    IfcNamedUnit *getIfcNamedUnit();
    /**
     * @param value
     */
    void setIfcNamedUnit(IfcNamedUnit *value);
    /**
     */
    IfcMonetaryUnit *getIfcMonetaryUnit();
    /**
     * @param value
     */
    void setIfcMonetaryUnit(IfcMonetaryUnit *value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcUnit(Step::SPFData *args);

  private:
    union IfcUnit_union {
      IfcDerivedUnit *m_IfcDerivedUnit;
      IfcNamedUnit *m_IfcNamedUnit;
      IfcMonetaryUnit *m_IfcMonetaryUnit;
    };
    static Step::ClassType s_type;
    IfcUnit_select m_type;
    IfcUnit_union m_IfcUnit_union;
    /**
     * @param c
     */
    IfcUnit(const IfcUnit &c);

  };

}

#endif // IFC2X3_IFCUNIT_H
