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

#ifndef IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
#define IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcBoundedSurface.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcRectangularTrimmedSurface_Factory;
  class IfcSurface;

  /**
   */
  class IFC2X3_DLL_DEF IfcRectangularTrimmedSurface : public IfcBoundedSurface {
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
     * (non-const) Returns the value of the explicit attribute 'BasisSurface'.
     * 
     * @return the value of the explicit attribute 'BasisSurface'
     */
    IfcSurface *getBasisSurface();
    /**
     * Sets the value of the explicit attribute 'BasisSurface'.
     * 
     * @param value
     */
    void setBasisSurface(const Step::RefPtr< IfcSurface > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'U1'.
     * 
     * @return the value of the explicit attribute 'U1'
     */
    IfcParameterValue getU1();
    /**
     * Sets the value of the explicit attribute 'U1'.
     * 
     * @param value
     */
    void setU1(IfcParameterValue value);
    /**
     * (non-const) Returns the value of the explicit attribute 'V1'.
     * 
     * @return the value of the explicit attribute 'V1'
     */
    IfcParameterValue getV1();
    /**
     * Sets the value of the explicit attribute 'V1'.
     * 
     * @param value
     */
    void setV1(IfcParameterValue value);
    /**
     * (non-const) Returns the value of the explicit attribute 'U2'.
     * 
     * @return the value of the explicit attribute 'U2'
     */
    IfcParameterValue getU2();
    /**
     * Sets the value of the explicit attribute 'U2'.
     * 
     * @param value
     */
    void setU2(IfcParameterValue value);
    /**
     * (non-const) Returns the value of the explicit attribute 'V2'.
     * 
     * @return the value of the explicit attribute 'V2'
     */
    IfcParameterValue getV2();
    /**
     * Sets the value of the explicit attribute 'V2'.
     * 
     * @param value
     */
    void setV2(IfcParameterValue value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Usense'.
     * 
     * @return the value of the explicit attribute 'Usense'
     */
    Bool getUsense();
    /**
     * Sets the value of the explicit attribute 'Usense'.
     * 
     * @param value
     */
    void setUsense(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Vsense'.
     * 
     * @return the value of the explicit attribute 'Vsense'
     */
    Bool getVsense();
    /**
     * Sets the value of the explicit attribute 'Vsense'.
     * 
     * @param value
     */
    void setVsense(Bool value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRectangularTrimmedSurface_Factory;

  protected:
    /**
     * @param args
     */
    IfcRectangularTrimmedSurface(Step::SPFData *args);
    virtual ~IfcRectangularTrimmedSurface();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcSurface > m_basisSurface;
    Real m_u1;
    Real m_v1;
    Real m_u2;
    Real m_v2;
    Bool m_usense;
    Bool m_vsense;
    /**
     * @param c
     */
    IfcRectangularTrimmedSurface(const IfcRectangularTrimmedSurface &c);

  };

  class IfcRectangularTrimmedSurface;

  /**
   */
  class IFC2X3_DLL_DEF IfcRectangularTrimmedSurface_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRectangularTrimmedSurface_Factory();
    virtual ~IfcRectangularTrimmedSurface_Factory();
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
    IfcRectangularTrimmedSurface *get(Step::StepId id);
    /**
     */
    IfcRectangularTrimmedSurface *generate();
    /**
     * @param id
     */
    IfcRectangularTrimmedSurface *find(Step::StepId id);

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

#endif // IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
