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

#ifndef IFC2X3_IFCISHAPEPROFILEDEF_H
#define IFC2X3_IFCISHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcIShapeProfileDef_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcIShapeProfileDef : public Step::InstantiatableEntity, public IfcParameterizedProfileDef {
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
     * (non-const) Returns the value of the explicit attribute 'OverallWidth'.
     * 
     * @return the value of the explicit attribute 'OverallWidth'
     */
    IfcPositiveLengthMeasure getOverallWidth();
    /**
     * Sets the value of the explicit attribute 'OverallWidth'.
     * 
     * @param value
     */
    void setOverallWidth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'OverallDepth'.
     * 
     * @return the value of the explicit attribute 'OverallDepth'
     */
    IfcPositiveLengthMeasure getOverallDepth();
    /**
     * Sets the value of the explicit attribute 'OverallDepth'.
     * 
     * @param value
     */
    void setOverallDepth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WebThickness'.
     * 
     * @return the value of the explicit attribute 'WebThickness'
     */
    IfcPositiveLengthMeasure getWebThickness();
    /**
     * Sets the value of the explicit attribute 'WebThickness'.
     * 
     * @param value
     */
    void setWebThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlangeThickness'.
     * 
     * @return the value of the explicit attribute 'FlangeThickness'
     */
    IfcPositiveLengthMeasure getFlangeThickness();
    /**
     * Sets the value of the explicit attribute 'FlangeThickness'.
     * 
     * @param value
     */
    void setFlangeThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FilletRadius'.
     * 
     * @return the value of the explicit attribute 'FilletRadius'
     */
    IfcPositiveLengthMeasure getFilletRadius();
    /**
     * Sets the value of the explicit attribute 'FilletRadius'.
     * 
     * @param value
     */
    void setFilletRadius(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcIShapeProfileDef_Factory;

  protected:
    /**
     * @param args
     */
    IfcIShapeProfileDef(Step::SPFData *args);
    virtual ~IfcIShapeProfileDef();

  private:
    static Step::ClassType s_type;
    Real m_overallWidth;
    Real m_overallDepth;
    Real m_webThickness;
    Real m_flangeThickness;
    Real m_filletRadius;
    /**
     * @param c
     */
    IfcIShapeProfileDef(const IfcIShapeProfileDef &c);

  };

  class IfcIShapeProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcIShapeProfileDef_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcIShapeProfileDef_Factory();
    virtual ~IfcIShapeProfileDef_Factory();
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
    IfcIShapeProfileDef *get(Step::StepId id);
    /**
     */
    IfcIShapeProfileDef *generate();
    /**
     * @param id
     */
    IfcIShapeProfileDef *find(Step::StepId id);

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

#endif // IFC2X3_IFCISHAPEPROFILEDEF_H
