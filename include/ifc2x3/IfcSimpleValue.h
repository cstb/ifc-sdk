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

#ifndef IFC2X3_IFCSIMPLEVALUE_H
#define IFC2X3_IFCSIMPLEVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  /**
   */
  class IFC2X3_DLL_DEF IfcSimpleValue : public Step::BaseObject {
  public:
    enum IfcSimpleValue_select {
      IFCINTEGER,
      IFCREAL,
      IFCBOOLEAN,
      IFCIDENTIFIER,
      IFCTEXT,
      IFCLABEL,
      IFCLOGICAL,
      UNSET,
    };

    /**
     */
    IfcSimpleValue();
    virtual ~IfcSimpleValue();
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
    IfcSimpleValue_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcInteger getIfcInteger();
    /**
     * @param value
     */
    void setIfcInteger(IfcInteger value);
    /**
     */
    IfcReal getIfcReal();
    /**
     * @param value
     */
    void setIfcReal(IfcReal value);
    /**
     */
    IfcBoolean getIfcBoolean();
    /**
     * @param value
     */
    void setIfcBoolean(IfcBoolean value);
    /**
     */
    IfcIdentifier getIfcIdentifier();
    /**
     * @param value
     */
    void setIfcIdentifier(const IfcIdentifier &value);
    /**
     */
    IfcText getIfcText();
    /**
     * @param value
     */
    void setIfcText(const IfcText &value);
    /**
     */
    IfcLabel getIfcLabel();
    /**
     * @param value
     */
    void setIfcLabel(const IfcLabel &value);
    /**
     */
    IfcLogical getIfcLogical();
    /**
     * @param value
     */
    void setIfcLogical(IfcLogical value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcSimpleValue(Step::SPFData *args);

  private:
    union IfcSimpleValue_union {
      IfcInteger m_IfcInteger;
      IfcReal m_IfcReal;
      IfcBoolean m_IfcBoolean;
      IfcIdentifier *m_IfcIdentifier;
      IfcText *m_IfcText;
      IfcLabel *m_IfcLabel;
      IfcLogical m_IfcLogical;
    };
    static Step::ClassType s_type;
    IfcSimpleValue_select m_type;
    IfcSimpleValue_union m_IfcSimpleValue_union;
    /**
     * @param c
     */
    IfcSimpleValue(const IfcSimpleValue &c);

  };

}

#endif // IFC2X3_IFCSIMPLEVALUE_H
