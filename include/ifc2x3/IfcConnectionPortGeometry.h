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

#ifndef IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
#define IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcAxis2Placement;
  class IfcConnectionPortGeometry_Factory;
  class IfcProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcConnectionPortGeometry : public Step::InstantiatableEntity, public IfcConnectionGeometry {
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
     * (non-const) Returns the value of the explicit attribute 'LocationAtRelatingElement'.
     * 
     * @return the value of the explicit attribute 'LocationAtRelatingElement'
     */
    IfcAxis2Placement *getLocationAtRelatingElement();
    /**
     * Sets the value of the explicit attribute 'LocationAtRelatingElement'.
     * 
     * @param value
     */
    void setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LocationAtRelatedElement'.
     * 
     * @return the value of the explicit attribute 'LocationAtRelatedElement'
     */
    IfcAxis2Placement *getLocationAtRelatedElement();
    /**
     * Sets the value of the explicit attribute 'LocationAtRelatedElement'.
     * 
     * @param value
     */
    void setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ProfileOfPort'.
     * 
     * @return the value of the explicit attribute 'ProfileOfPort'
     */
    IfcProfileDef *getProfileOfPort();
    /**
     * Sets the value of the explicit attribute 'ProfileOfPort'.
     * 
     * @param value
     */
    void setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcConnectionPortGeometry_Factory;

  protected:
    /**
     * @param args
     */
    IfcConnectionPortGeometry(Step::SPFData *args);
    virtual ~IfcConnectionPortGeometry();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcAxis2Placement > m_locationAtRelatingElement;
    Step::RefPtr< IfcAxis2Placement > m_locationAtRelatedElement;
    Step::RefPtr< IfcProfileDef > m_profileOfPort;
    /**
     * @param c
     */
    IfcConnectionPortGeometry(const IfcConnectionPortGeometry &c);

  };

  class IfcConnectionPortGeometry;

  /**
   */
  class IFC2X3_DLL_DEF IfcConnectionPortGeometry_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcConnectionPortGeometry_Factory();
    virtual ~IfcConnectionPortGeometry_Factory();
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
    IfcConnectionPortGeometry *get(Step::StepId id);
    /**
     */
    IfcConnectionPortGeometry *generate();
    /**
     * @param id
     */
    IfcConnectionPortGeometry *find(Step::StepId id);

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

#endif // IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
