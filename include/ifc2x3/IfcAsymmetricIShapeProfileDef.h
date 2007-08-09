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

#ifndef IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
#define IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <ifc2x3/IfcIShapeProfileDef.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcAsymmetricIShapeProfileDef_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcAsymmetricIShapeProfileDef : public IfcIShapeProfileDef {
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
     * (non-const) Returns the value of the explicit attribute 'TopFlangeWidth'.
     * 
     * @return the value of the explicit attribute 'TopFlangeWidth'
     */
    IfcPositiveLengthMeasure getTopFlangeWidth();
    /**
     * Sets the value of the explicit attribute 'TopFlangeWidth'.
     * 
     * @param value
     */
    void setTopFlangeWidth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TopFlangeThickness'.
     * 
     * @return the value of the explicit attribute 'TopFlangeThickness'
     */
    IfcPositiveLengthMeasure getTopFlangeThickness();
    /**
     * Sets the value of the explicit attribute 'TopFlangeThickness'.
     * 
     * @param value
     */
    void setTopFlangeThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TopFlangeFilletRadius'.
     * 
     * @return the value of the explicit attribute 'TopFlangeFilletRadius'
     */
    IfcPositiveLengthMeasure getTopFlangeFilletRadius();
    /**
     * Sets the value of the explicit attribute 'TopFlangeFilletRadius'.
     * 
     * @param value
     */
    void setTopFlangeFilletRadius(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
     * 
     * @return the value of the explicit attribute 'CentreOfGravityInY'
     */
    IfcPositiveLengthMeasure getCentreOfGravityInY();
    /**
     * Sets the value of the explicit attribute 'CentreOfGravityInY'.
     * 
     * @param value
     */
    void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcAsymmetricIShapeProfileDef_Factory;

  protected:
    /**
     * @param args
     */
    IfcAsymmetricIShapeProfileDef(Step::SPFData *args);
    virtual ~IfcAsymmetricIShapeProfileDef();

  private:
    static Step::ClassType s_type;
    Real m_topFlangeWidth;
    Real m_topFlangeThickness;
    Real m_topFlangeFilletRadius;
    Real m_centreOfGravityInY;
    /**
     * @param c
     */
    IfcAsymmetricIShapeProfileDef(const IfcAsymmetricIShapeProfileDef &c);

  };

  class IfcAsymmetricIShapeProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcAsymmetricIShapeProfileDef_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcAsymmetricIShapeProfileDef_Factory();
    virtual ~IfcAsymmetricIShapeProfileDef_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcAsymmetricIShapeProfileDef *get(Step::StepId id);
    /**
     */
    IfcAsymmetricIShapeProfileDef *generate();
    /**
     * @param id
     */
    IfcAsymmetricIShapeProfileDef *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
