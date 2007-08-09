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

#ifndef IFC2X3_IFCSURFACESTYLERENDERING_H
#define IFC2X3_IFCSURFACESTYLERENDERING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcColourOrFactor;
  class IfcSpecularHighlightSelect;
  class IfcSurfaceStyleRendering_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceStyleRendering : public IfcSurfaceStyleShading {
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
     * (non-const) Returns the value of the explicit attribute 'Transparency'.
     * 
     * @return the value of the explicit attribute 'Transparency'
     */
    IfcNormalisedRatioMeasure getTransparency();
    /**
     * Sets the value of the explicit attribute 'Transparency'.
     * 
     * @param value
     */
    void setTransparency(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DiffuseColour'.
     * 
     * @return the value of the explicit attribute 'DiffuseColour'
     */
    IfcColourOrFactor *getDiffuseColour();
    /**
     * Sets the value of the explicit attribute 'DiffuseColour'.
     * 
     * @param value
     */
    void setDiffuseColour(const Step::RefPtr< IfcColourOrFactor > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TransmissionColour'.
     * 
     * @return the value of the explicit attribute 'TransmissionColour'
     */
    IfcColourOrFactor *getTransmissionColour();
    /**
     * Sets the value of the explicit attribute 'TransmissionColour'.
     * 
     * @param value
     */
    void setTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DiffuseTransmissionColour'.
     * 
     * @return the value of the explicit attribute 'DiffuseTransmissionColour'
     */
    IfcColourOrFactor *getDiffuseTransmissionColour();
    /**
     * Sets the value of the explicit attribute 'DiffuseTransmissionColour'.
     * 
     * @param value
     */
    void setDiffuseTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ReflectionColour'.
     * 
     * @return the value of the explicit attribute 'ReflectionColour'
     */
    IfcColourOrFactor *getReflectionColour();
    /**
     * Sets the value of the explicit attribute 'ReflectionColour'.
     * 
     * @param value
     */
    void setReflectionColour(const Step::RefPtr< IfcColourOrFactor > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SpecularColour'.
     * 
     * @return the value of the explicit attribute 'SpecularColour'
     */
    IfcColourOrFactor *getSpecularColour();
    /**
     * Sets the value of the explicit attribute 'SpecularColour'.
     * 
     * @param value
     */
    void setSpecularColour(const Step::RefPtr< IfcColourOrFactor > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SpecularHighlight'.
     * 
     * @return the value of the explicit attribute 'SpecularHighlight'
     */
    IfcSpecularHighlightSelect *getSpecularHighlight();
    /**
     * Sets the value of the explicit attribute 'SpecularHighlight'.
     * 
     * @param value
     */
    void setSpecularHighlight(const Step::RefPtr< IfcSpecularHighlightSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ReflectanceMethod'.
     * 
     * @return the value of the explicit attribute 'ReflectanceMethod'
     */
    IfcReflectanceMethodEnum getReflectanceMethod();
    /**
     * Sets the value of the explicit attribute 'ReflectanceMethod'.
     * 
     * @param value
     */
    void setReflectanceMethod(IfcReflectanceMethodEnum value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSurfaceStyleRendering_Factory;

  protected:
    /**
     * @param args
     */
    IfcSurfaceStyleRendering(Step::SPFData *args);
    virtual ~IfcSurfaceStyleRendering();

  private:
    static Step::ClassType s_type;
    Real m_transparency;
    Step::RefPtr< IfcColourOrFactor > m_diffuseColour;
    Step::RefPtr< IfcColourOrFactor > m_transmissionColour;
    Step::RefPtr< IfcColourOrFactor > m_diffuseTransmissionColour;
    Step::RefPtr< IfcColourOrFactor > m_reflectionColour;
    Step::RefPtr< IfcColourOrFactor > m_specularColour;
    Step::RefPtr< IfcSpecularHighlightSelect > m_specularHighlight;
    IfcReflectanceMethodEnum m_reflectanceMethod;
    /**
     * @param c
     */
    IfcSurfaceStyleRendering(const IfcSurfaceStyleRendering &c);

  };

  class IfcSurfaceStyleRendering;

  /**
   */
  class IFC2X3_DLL_DEF IfcSurfaceStyleRendering_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSurfaceStyleRendering_Factory();
    virtual ~IfcSurfaceStyleRendering_Factory();
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
    IfcSurfaceStyleRendering *get(Step::StepId id);
    /**
     */
    IfcSurfaceStyleRendering *generate();
    /**
     * @param id
     */
    IfcSurfaceStyleRendering *find(Step::StepId id);

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

#endif // IFC2X3_IFCSURFACESTYLERENDERING_H
