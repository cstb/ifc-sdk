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

#ifndef IFC2X3_IFCSWEPTSURFACE_H
#define IFC2X3_IFCSWEPTSURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcSurface.h>

namespace ifc2x3 {

  class IfcAxis2Placement3D;
  class IfcProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcSweptSurface : public IfcSurface {
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
     * (non-const) Returns the value of the explicit attribute 'SweptCurve'.
     * 
     * @return the value of the explicit attribute 'SweptCurve'
     */
    IfcProfileDef *getSweptCurve();
    /**
     * Sets the value of the explicit attribute 'SweptCurve'.
     * 
     * @param value
     */
    void setSweptCurve(const Step::RefPtr< IfcProfileDef > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Position'.
     * 
     * @return the value of the explicit attribute 'Position'
     */
    IfcAxis2Placement3D *getPosition();
    /**
     * Sets the value of the explicit attribute 'Position'.
     * 
     * @param value
     */
    void setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value);
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
    IfcSweptSurface(Step::SPFData *args);
    virtual ~IfcSweptSurface();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcProfileDef > m_sweptCurve;
    Step::RefPtr< IfcAxis2Placement3D > m_position;
    /**
     * @param c
     */
    IfcSweptSurface(const IfcSweptSurface &c);

  };

}

#endif // IFC2X3_IFCSWEPTSURFACE_H
