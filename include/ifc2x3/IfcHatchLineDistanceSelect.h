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

#ifndef IFC2X3_IFCHATCHLINEDISTANCESELECT_H
#define IFC2X3_IFCHATCHLINEDISTANCESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcOneDirectionRepeatFactor;

  /**
   */
  class IFC2X3_DLL_DEF IfcHatchLineDistanceSelect : public Step::BaseObject {
  public:
    enum IfcHatchLineDistanceSelect_select {
      IFCONEDIRECTIONREPEATFACTOR,
      IFCPOSITIVELENGTHMEASURE,
      UNSET,
    };

    /**
     */
    IfcHatchLineDistanceSelect();
    virtual ~IfcHatchLineDistanceSelect();
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
    IfcHatchLineDistanceSelect_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcOneDirectionRepeatFactor *getIfcOneDirectionRepeatFactor();
    /**
     * @param value
     */
    void setIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value);
    /**
     */
    IfcPositiveLengthMeasure getIfcPositiveLengthMeasure();
    /**
     * @param value
     */
    void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);
    /**
     * @param v
     */
    void set(Step::BaseObject *v);

  protected:
    /**
     * @param args
     */
    IfcHatchLineDistanceSelect(Step::SPFData *args);

  private:
    union IfcHatchLineDistanceSelect_union {
      IfcOneDirectionRepeatFactor *m_IfcOneDirectionRepeatFactor;
      IfcPositiveLengthMeasure m_IfcPositiveLengthMeasure;
    };
    static Step::ClassType s_type;
    IfcHatchLineDistanceSelect_select m_type;
    IfcHatchLineDistanceSelect_union m_IfcHatchLineDistanceSelect_union;
    /**
     * @param c
     */
    IfcHatchLineDistanceSelect(const IfcHatchLineDistanceSelect &c);

  };

}

#endif // IFC2X3_IFCHATCHLINEDISTANCESELECT_H
