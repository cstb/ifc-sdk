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

#ifndef IFC2X3_IFCSITE_H
#define IFC2X3_IFCSITE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcPostalAddress;
  class IfcSite_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcSite : public Step::InstantiatableEntity, public IfcSpatialStructureElement {
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
     * (non-const) Returns the value of the explicit attribute 'RefLatitude'.
     * 
     * @return the value of the explicit attribute 'RefLatitude'
     */
    IfcCompoundPlaneAngleMeasure &getRefLatitude();
    /**
     * Sets the value of the explicit attribute 'RefLatitude'.
     * 
     * @param value
     */
    void setRefLatitude(const IfcCompoundPlaneAngleMeasure &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RefLongitude'.
     * 
     * @return the value of the explicit attribute 'RefLongitude'
     */
    IfcCompoundPlaneAngleMeasure &getRefLongitude();
    /**
     * Sets the value of the explicit attribute 'RefLongitude'.
     * 
     * @param value
     */
    void setRefLongitude(const IfcCompoundPlaneAngleMeasure &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RefElevation'.
     * 
     * @return the value of the explicit attribute 'RefElevation'
     */
    IfcLengthMeasure getRefElevation();
    /**
     * Sets the value of the explicit attribute 'RefElevation'.
     * 
     * @param value
     */
    void setRefElevation(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LandTitleNumber'.
     * 
     * @return the value of the explicit attribute 'LandTitleNumber'
     */
    IfcLabel getLandTitleNumber();
    /**
     * Sets the value of the explicit attribute 'LandTitleNumber'.
     * 
     * @param value
     */
    void setLandTitleNumber(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SiteAddress'.
     * 
     * @return the value of the explicit attribute 'SiteAddress'
     */
    IfcPostalAddress *getSiteAddress();
    /**
     * Sets the value of the explicit attribute 'SiteAddress'.
     * 
     * @param value
     */
    void setSiteAddress(const Step::RefPtr< IfcPostalAddress > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSite_Factory;

  protected:
    /**
     * @param args
     */
    IfcSite(Step::SPFData *args);
    virtual ~IfcSite();

  private:
    static Step::ClassType s_type;
    Step::StepList< Integer > m_refLatitude;
    Step::StepList< Integer > m_refLongitude;
    Real m_refElevation;
    std::string m_landTitleNumber;
    Step::RefPtr< IfcPostalAddress > m_siteAddress;
    /**
     * @param c
     */
    IfcSite(const IfcSite &c);

  };

  class IfcSite;

  /**
   */
  class IFC2X3_DLL_DEF IfcSite_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSite_Factory();
    virtual ~IfcSite_Factory();
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
    IfcSite *get(Step::StepId id);
    /**
     */
    IfcSite *generate();
    /**
     * @param id
     */
    IfcSite *find(Step::StepId id);

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

#endif // IFC2X3_IFCSITE_H
