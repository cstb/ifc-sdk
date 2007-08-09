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

#ifndef IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
#define IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcLightSource.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcAxis2Placement3D;
  class IfcColourRgb;
  class IfcLightDistributionDataSourceSelect;
  class IfcLightSourceGoniometric_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcLightSourceGoniometric : public Step::InstantiatableEntity, public IfcLightSource {
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
     * (non-const) Returns the value of the explicit attribute 'ColourAppearance'.
     * 
     * @return the value of the explicit attribute 'ColourAppearance'
     */
    IfcColourRgb *getColourAppearance();
    /**
     * Sets the value of the explicit attribute 'ColourAppearance'.
     * 
     * @param value
     */
    void setColourAppearance(const Step::RefPtr< IfcColourRgb > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ColourTemperature'.
     * 
     * @return the value of the explicit attribute 'ColourTemperature'
     */
    IfcThermodynamicTemperatureMeasure getColourTemperature();
    /**
     * Sets the value of the explicit attribute 'ColourTemperature'.
     * 
     * @param value
     */
    void setColourTemperature(IfcThermodynamicTemperatureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LuminousFlux'.
     * 
     * @return the value of the explicit attribute 'LuminousFlux'
     */
    IfcLuminousFluxMeasure getLuminousFlux();
    /**
     * Sets the value of the explicit attribute 'LuminousFlux'.
     * 
     * @param value
     */
    void setLuminousFlux(IfcLuminousFluxMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LightEmissionSource'.
     * 
     * @return the value of the explicit attribute 'LightEmissionSource'
     */
    IfcLightEmissionSourceEnum getLightEmissionSource();
    /**
     * Sets the value of the explicit attribute 'LightEmissionSource'.
     * 
     * @param value
     */
    void setLightEmissionSource(IfcLightEmissionSourceEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LightDistributionDataSource'.
     * 
     * @return the value of the explicit attribute 'LightDistributionDataSource'
     */
    IfcLightDistributionDataSourceSelect *getLightDistributionDataSource();
    /**
     * Sets the value of the explicit attribute 'LightDistributionDataSource'.
     * 
     * @param value
     */
    void setLightDistributionDataSource(const Step::RefPtr< IfcLightDistributionDataSourceSelect > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcLightSourceGoniometric_Factory;

  protected:
    /**
     * @param args
     */
    IfcLightSourceGoniometric(Step::SPFData *args);
    virtual ~IfcLightSourceGoniometric();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcAxis2Placement3D > m_position;
    Step::RefPtr< IfcColourRgb > m_colourAppearance;
    Real m_colourTemperature;
    Real m_luminousFlux;
    IfcLightEmissionSourceEnum m_lightEmissionSource;
    Step::RefPtr< IfcLightDistributionDataSourceSelect > m_lightDistributionDataSource;
    /**
     * @param c
     */
    IfcLightSourceGoniometric(const IfcLightSourceGoniometric &c);

  };

  class IfcLightSourceGoniometric;

  /**
   */
  class IFC2X3_DLL_DEF IfcLightSourceGoniometric_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcLightSourceGoniometric_Factory();
    virtual ~IfcLightSourceGoniometric_Factory();
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
    IfcLightSourceGoniometric *get(Step::StepId id);
    /**
     */
    IfcLightSourceGoniometric *generate();
    /**
     * @param id
     */
    IfcLightSourceGoniometric *find(Step::StepId id);

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

#endif // IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
