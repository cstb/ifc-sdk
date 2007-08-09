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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#define IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcAnnotationCurveOccurrence;
  class IfcAnnotationSymbolOccurrence;
  class IfcAnnotationTextOccurrence;

  /**
   */
  class IFC2X3_DLL_DEF IfcDraughtingCalloutElement : public Step::BaseObject {
  public:
    enum IfcDraughtingCalloutElement_select {
      IFCANNOTATIONCURVEOCCURRENCE,
      IFCANNOTATIONTEXTOCCURRENCE,
      IFCANNOTATIONSYMBOLOCCURRENCE,
      UNSET,
    };

    /**
     */
    IfcDraughtingCalloutElement();
    virtual ~IfcDraughtingCalloutElement();
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
    IfcDraughtingCalloutElement_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcAnnotationCurveOccurrence *getIfcAnnotationCurveOccurrence();
    /**
     * @param value
     */
    void setIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value);
    /**
     */
    IfcAnnotationTextOccurrence *getIfcAnnotationTextOccurrence();
    /**
     * @param value
     */
    void setIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value);
    /**
     */
    IfcAnnotationSymbolOccurrence *getIfcAnnotationSymbolOccurrence();
    /**
     * @param value
     */
    void setIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcDraughtingCalloutElement(Step::SPFData *args);

  private:
    union IfcDraughtingCalloutElement_union {
      IfcAnnotationCurveOccurrence *m_IfcAnnotationCurveOccurrence;
      IfcAnnotationTextOccurrence *m_IfcAnnotationTextOccurrence;
      IfcAnnotationSymbolOccurrence *m_IfcAnnotationSymbolOccurrence;
    };
    static Step::ClassType s_type;
    IfcDraughtingCalloutElement_select m_type;
    IfcDraughtingCalloutElement_union m_IfcDraughtingCalloutElement_union;
    /**
     * @param c
     */
    IfcDraughtingCalloutElement(const IfcDraughtingCalloutElement &c);

  };

}

#endif // IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
