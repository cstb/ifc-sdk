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

#ifndef IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR_H
#define IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcCartesianPoint;
  class IfcDirection;

  /**
   */
  class IFC2X3_DLL_DEF IfcCartesianTransformationOperator : public IfcGeometricRepresentationItem {
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
     * (non-const) Returns the value of the explicit attribute 'Axis1'.
     * 
     * @return the value of the explicit attribute 'Axis1'
     */
    IfcDirection *getAxis1();
    /**
     * Sets the value of the explicit attribute 'Axis1'.
     * 
     * @param value
     */
    void setAxis1(const Step::RefPtr< IfcDirection > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Axis2'.
     * 
     * @return the value of the explicit attribute 'Axis2'
     */
    IfcDirection *getAxis2();
    /**
     * Sets the value of the explicit attribute 'Axis2'.
     * 
     * @param value
     */
    void setAxis2(const Step::RefPtr< IfcDirection > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LocalOrigin'.
     * 
     * @return the value of the explicit attribute 'LocalOrigin'
     */
    IfcCartesianPoint *getLocalOrigin();
    /**
     * Sets the value of the explicit attribute 'LocalOrigin'.
     * 
     * @param value
     */
    void setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Scale'.
     * 
     * @return the value of the explicit attribute 'Scale'
     */
    Real getScale();
    /**
     * Sets the value of the explicit attribute 'Scale'.
     * 
     * @param value
     */
    void setScale(Real value);
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
    IfcCartesianTransformationOperator(Step::SPFData *args);
    virtual ~IfcCartesianTransformationOperator();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcDirection > m_axis1;
    Step::RefPtr< IfcDirection > m_axis2;
    Step::RefPtr< IfcCartesianPoint > m_localOrigin;
    Real m_scale;
    /**
     * @param c
     */
    IfcCartesianTransformationOperator(const IfcCartesianTransformationOperator &c);

  };

}

#endif // IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR_H
