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

#ifndef IFC2X3_IFCLIGHTSOURCE_H
#define IFC2X3_IFCLIGHTSOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcColourRgb;

  /**
   */
  class IFC2X3_DLL_DEF IfcLightSource : public IfcGeometricRepresentationItem {
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
     * (non-const) Returns the value of the explicit attribute 'Name'.
     * 
     * @return the value of the explicit attribute 'Name'
     */
    IfcLabel getName();
    /**
     * Sets the value of the explicit attribute 'Name'.
     * 
     * @param value
     */
    void setName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LightColour'.
     * 
     * @return the value of the explicit attribute 'LightColour'
     */
    IfcColourRgb *getLightColour();
    /**
     * Sets the value of the explicit attribute 'LightColour'.
     * 
     * @param value
     */
    void setLightColour(const Step::RefPtr< IfcColourRgb > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AmbientIntensity'.
     * 
     * @return the value of the explicit attribute 'AmbientIntensity'
     */
    IfcNormalisedRatioMeasure getAmbientIntensity();
    /**
     * Sets the value of the explicit attribute 'AmbientIntensity'.
     * 
     * @param value
     */
    void setAmbientIntensity(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Intensity'.
     * 
     * @return the value of the explicit attribute 'Intensity'
     */
    IfcNormalisedRatioMeasure getIntensity();
    /**
     * Sets the value of the explicit attribute 'Intensity'.
     * 
     * @param value
     */
    void setIntensity(IfcNormalisedRatioMeasure value);
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
    IfcLightSource(Step::SPFData *args);
    virtual ~IfcLightSource();

  private:
    static Step::ClassType s_type;
    std::string m_name;
    Step::RefPtr< IfcColourRgb > m_lightColour;
    Real m_ambientIntensity;
    Real m_intensity;
    /**
     * @param c
     */
    IfcLightSource(const IfcLightSource &c);

  };

}

#endif // IFC2X3_IFCLIGHTSOURCE_H
