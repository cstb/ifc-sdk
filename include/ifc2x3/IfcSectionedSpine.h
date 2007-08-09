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

#ifndef IFC2X3_IFCSECTIONEDSPINE_H
#define IFC2X3_IFCSECTIONEDSPINE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcAxis2Placement3D;
  class IfcCompositeCurve;
  class IfcProfileDef;
  class IfcSectionedSpine_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcSectionedSpine : public Step::InstantiatableEntity, public IfcGeometricRepresentationItem {
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
     * (non-const) Returns the value of the explicit attribute 'SpineCurve'.
     * 
     * @return the value of the explicit attribute 'SpineCurve'
     */
    IfcCompositeCurve *getSpineCurve();
    /**
     * Sets the value of the explicit attribute 'SpineCurve'.
     * 
     * @param value
     */
    void setSpineCurve(const Step::RefPtr< IfcCompositeCurve > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CrossSections'.
     * 
     * @return the value of the explicit attribute 'CrossSections'
     */
    Step::StepList< Step::RefPtr< IfcProfileDef > > &getCrossSections();
    /**
     * Sets the value of the explicit attribute 'CrossSections'.
     * 
     * @param value
     */
    void setCrossSections(const Step::StepList< Step::RefPtr< IfcProfileDef > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CrossSectionPositions'.
     * 
     * @return the value of the explicit attribute 'CrossSectionPositions'
     */
    Step::StepList< Step::RefPtr< IfcAxis2Placement3D > > &getCrossSectionPositions();
    /**
     * Sets the value of the explicit attribute 'CrossSectionPositions'.
     * 
     * @param value
     */
    void setCrossSectionPositions(const Step::StepList< Step::RefPtr< IfcAxis2Placement3D > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSectionedSpine_Factory;

  protected:
    /**
     * @param args
     */
    IfcSectionedSpine(Step::SPFData *args);
    virtual ~IfcSectionedSpine();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcCompositeCurve > m_spineCurve;
    Step::StepList< Step::RefPtr< IfcProfileDef > > m_crossSections;
    Step::StepList< Step::RefPtr< IfcAxis2Placement3D > > m_crossSectionPositions;
    /**
     * @param c
     */
    IfcSectionedSpine(const IfcSectionedSpine &c);

  };

  class IfcSectionedSpine;

  /**
   */
  class IFC2X3_DLL_DEF IfcSectionedSpine_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSectionedSpine_Factory();
    virtual ~IfcSectionedSpine_Factory();
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
    IfcSectionedSpine *get(Step::StepId id);
    /**
     */
    IfcSectionedSpine *generate();
    /**
     * @param id
     */
    IfcSectionedSpine *find(Step::StepId id);

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

#endif // IFC2X3_IFCSECTIONEDSPINE_H
