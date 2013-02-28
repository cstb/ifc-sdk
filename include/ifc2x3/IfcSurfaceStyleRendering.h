// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCSURFACESTYLERENDERING_H
#define IFC2X3_IFCSURFACESTYLERENDERING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourOrFactor;
    class IfcSpecularHighlightSelect;

    /**
     * Generated class for the IfcSurfaceStyleRendering Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSurfaceStyleRendering : public IfcSurfaceStyleShading {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Transparency'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getTransparency();
        /**
         * (const) Returns the value of the explicit attribute 'Transparency'.
         * 
         * @return the value of the explicit attribute 'Transparency'
         */
        virtual const IfcNormalisedRatioMeasure getTransparency() const;
        /**
         * Sets the value of the explicit attribute 'Transparency'.
         * 
         * @param value
         */
        virtual void setTransparency(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'Transparency'.
         * 
         */
        virtual void unsetTransparency();
        /**
         * Test if the attribute 'Transparency' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTransparency() const;
        /**
         * Gets the value of the explicit attribute 'DiffuseColour'.
         * 
         */
        virtual IfcColourOrFactor *getDiffuseColour();
        /**
         * (const) Returns the value of the explicit attribute 'DiffuseColour'.
         * 
         * @return the value of the explicit attribute 'DiffuseColour'
         */
        virtual const IfcColourOrFactor *getDiffuseColour() const;
        /**
         * Sets the value of the explicit attribute 'DiffuseColour'.
         * 
         * @param value
         */
        virtual void setDiffuseColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         * unset the attribute 'DiffuseColour'.
         * 
         */
        virtual void unsetDiffuseColour();
        /**
         * Test if the attribute 'DiffuseColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDiffuseColour() const;
        /**
         * Gets the value of the explicit attribute 'TransmissionColour'.
         * 
         */
        virtual IfcColourOrFactor *getTransmissionColour();
        /**
         * (const) Returns the value of the explicit attribute 'TransmissionColour'.
         * 
         * @return the value of the explicit attribute 'TransmissionColour'
         */
        virtual const IfcColourOrFactor *getTransmissionColour() const;
        /**
         * Sets the value of the explicit attribute 'TransmissionColour'.
         * 
         * @param value
         */
        virtual void setTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         * unset the attribute 'TransmissionColour'.
         * 
         */
        virtual void unsetTransmissionColour();
        /**
         * Test if the attribute 'TransmissionColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTransmissionColour() const;
        /**
         * Gets the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         */
        virtual IfcColourOrFactor *getDiffuseTransmissionColour();
        /**
         * (const) Returns the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         * @return the value of the explicit attribute 'DiffuseTransmissionColour'
         */
        virtual const IfcColourOrFactor *getDiffuseTransmissionColour() const;
        /**
         * Sets the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         * @param value
         */
        virtual void setDiffuseTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         * unset the attribute 'DiffuseTransmissionColour'.
         * 
         */
        virtual void unsetDiffuseTransmissionColour();
        /**
         * Test if the attribute 'DiffuseTransmissionColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDiffuseTransmissionColour() const;
        /**
         * Gets the value of the explicit attribute 'ReflectionColour'.
         * 
         */
        virtual IfcColourOrFactor *getReflectionColour();
        /**
         * (const) Returns the value of the explicit attribute 'ReflectionColour'.
         * 
         * @return the value of the explicit attribute 'ReflectionColour'
         */
        virtual const IfcColourOrFactor *getReflectionColour() const;
        /**
         * Sets the value of the explicit attribute 'ReflectionColour'.
         * 
         * @param value
         */
        virtual void setReflectionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         * unset the attribute 'ReflectionColour'.
         * 
         */
        virtual void unsetReflectionColour();
        /**
         * Test if the attribute 'ReflectionColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReflectionColour() const;
        /**
         * Gets the value of the explicit attribute 'SpecularColour'.
         * 
         */
        virtual IfcColourOrFactor *getSpecularColour();
        /**
         * (const) Returns the value of the explicit attribute 'SpecularColour'.
         * 
         * @return the value of the explicit attribute 'SpecularColour'
         */
        virtual const IfcColourOrFactor *getSpecularColour() const;
        /**
         * Sets the value of the explicit attribute 'SpecularColour'.
         * 
         * @param value
         */
        virtual void setSpecularColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         * unset the attribute 'SpecularColour'.
         * 
         */
        virtual void unsetSpecularColour();
        /**
         * Test if the attribute 'SpecularColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSpecularColour() const;
        /**
         * Gets the value of the explicit attribute 'SpecularHighlight'.
         * 
         */
        virtual IfcSpecularHighlightSelect *getSpecularHighlight();
        /**
         * (const) Returns the value of the explicit attribute 'SpecularHighlight'.
         * 
         * @return the value of the explicit attribute 'SpecularHighlight'
         */
        virtual const IfcSpecularHighlightSelect *getSpecularHighlight() const;
        /**
         * Sets the value of the explicit attribute 'SpecularHighlight'.
         * 
         * @param value
         */
        virtual void setSpecularHighlight(const Step::RefPtr< IfcSpecularHighlightSelect > &value);
        /**
         * unset the attribute 'SpecularHighlight'.
         * 
         */
        virtual void unsetSpecularHighlight();
        /**
         * Test if the attribute 'SpecularHighlight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSpecularHighlight() const;
        /**
         * Gets the value of the explicit attribute 'ReflectanceMethod'.
         * 
         */
        virtual IfcReflectanceMethodEnum getReflectanceMethod();
        /**
         * (const) Returns the value of the explicit attribute 'ReflectanceMethod'.
         * 
         * @return the value of the explicit attribute 'ReflectanceMethod'
         */
        virtual const IfcReflectanceMethodEnum getReflectanceMethod() const;
        /**
         * Sets the value of the explicit attribute 'ReflectanceMethod'.
         * 
         * @param value
         */
        virtual void setReflectanceMethod(IfcReflectanceMethodEnum value);
        /**
         * unset the attribute 'ReflectanceMethod'.
         * 
         */
        virtual void unsetReflectanceMethod();
        /**
         * Test if the attribute 'ReflectanceMethod' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReflectanceMethod() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceStyleRendering(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceStyleRendering();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_transparency;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_diffuseColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_transmissionColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_diffuseTransmissionColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_reflectionColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_specularColour;
        /**
         */
        Step::RefPtr< IfcSpecularHighlightSelect > m_specularHighlight;
        /**
         */
        IfcReflectanceMethodEnum m_reflectanceMethod;

    };

}

#endif // IFC2X3_IFCSURFACESTYLERENDERING_H
