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

#ifndef IFC2X3_IFCPRESENTATIONSTYLESELECT_H
#define IFC2X3_IFCPRESENTATIONSTYLESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcCurveStyle;
  class IfcFillAreaStyle;
  class IfcSurfaceStyle;
  class IfcSymbolStyle;
  class IfcTextStyle;

  /**
   */
  class IFC2X3_DLL_DEF IfcPresentationStyleSelect : public Step::BaseObject {
  public:
    enum IfcPresentationStyleSelect_select {
      IFCNULLSTYLE,
      IFCCURVESTYLE,
      IFCSYMBOLSTYLE,
      IFCFILLAREASTYLE,
      IFCTEXTSTYLE,
      IFCSURFACESTYLE,
      UNSET,
    };

    /**
     */
    IfcPresentationStyleSelect();
    virtual ~IfcPresentationStyleSelect();
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
    IfcPresentationStyleSelect_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcNullStyle getIfcNullStyle();
    /**
     * @param value
     */
    void setIfcNullStyle(IfcNullStyle value);
    /**
     */
    IfcCurveStyle *getIfcCurveStyle();
    /**
     * @param value
     */
    void setIfcCurveStyle(IfcCurveStyle *value);
    /**
     */
    IfcSymbolStyle *getIfcSymbolStyle();
    /**
     * @param value
     */
    void setIfcSymbolStyle(IfcSymbolStyle *value);
    /**
     */
    IfcFillAreaStyle *getIfcFillAreaStyle();
    /**
     * @param value
     */
    void setIfcFillAreaStyle(IfcFillAreaStyle *value);
    /**
     */
    IfcTextStyle *getIfcTextStyle();
    /**
     * @param value
     */
    void setIfcTextStyle(IfcTextStyle *value);
    /**
     */
    IfcSurfaceStyle *getIfcSurfaceStyle();
    /**
     * @param value
     */
    void setIfcSurfaceStyle(IfcSurfaceStyle *value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcPresentationStyleSelect(Step::SPFData *args);

  private:
    union IfcPresentationStyleSelect_union {
      IfcNullStyle m_IfcNullStyle;
      IfcCurveStyle *m_IfcCurveStyle;
      IfcSymbolStyle *m_IfcSymbolStyle;
      IfcFillAreaStyle *m_IfcFillAreaStyle;
      IfcTextStyle *m_IfcTextStyle;
      IfcSurfaceStyle *m_IfcSurfaceStyle;
    };
    static Step::ClassType s_type;
    IfcPresentationStyleSelect_select m_type;
    IfcPresentationStyleSelect_union m_IfcPresentationStyleSelect_union;
    /**
     * @param c
     */
    IfcPresentationStyleSelect(const IfcPresentationStyleSelect &c);

  };

}

#endif // IFC2X3_IFCPRESENTATIONSTYLESELECT_H
