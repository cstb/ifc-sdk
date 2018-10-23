#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSurfaceStyleShading.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSurfaceStyleRendering Entity.
     *
     */
    class IFC2X3_EXPORT IfcSurfaceStyleRendering : public IfcSurfaceStyleShading
    {

        // Attributes
        IfcNormalisedRatioMeasure m_Transparency;
        Step::RefPtr< IfcColourOrFactor > m_DiffuseColour;
        Step::RefPtr< IfcColourOrFactor > m_TransmissionColour;
        Step::RefPtr< IfcColourOrFactor > m_DiffuseTransmissionColour;
        Step::RefPtr< IfcColourOrFactor > m_ReflectionColour;
        Step::RefPtr< IfcColourOrFactor > m_SpecularColour;
        Step::RefPtr< IfcSpecularHighlightSelect > m_SpecularHighlight;
        IfcReflectanceMethodEnum m_ReflectanceMethod;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Transparency
        /// @{
        virtual IfcNormalisedRatioMeasure getTransparency();
        virtual IfcNormalisedRatioMeasure getTransparency() const;
        virtual void setTransparency(IfcNormalisedRatioMeasure value);
        virtual void unsetTransparency();
        virtual bool testTransparency() const;
        /// @}

        /// Attribute DiffuseColour
        /// @{
        virtual IfcColourOrFactor *getDiffuseColour();
        virtual const IfcColourOrFactor *getDiffuseColour() const;
        virtual void setDiffuseColour(const Step::RefPtr< IfcColourOrFactor > &value);
        virtual void unsetDiffuseColour();
        virtual bool testDiffuseColour() const;
        /// @}

        /// Attribute TransmissionColour
        /// @{
        virtual IfcColourOrFactor *getTransmissionColour();
        virtual const IfcColourOrFactor *getTransmissionColour() const;
        virtual void setTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        virtual void unsetTransmissionColour();
        virtual bool testTransmissionColour() const;
        /// @}

        /// Attribute DiffuseTransmissionColour
        /// @{
        virtual IfcColourOrFactor *getDiffuseTransmissionColour();
        virtual const IfcColourOrFactor *getDiffuseTransmissionColour() const;
        virtual void setDiffuseTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        virtual void unsetDiffuseTransmissionColour();
        virtual bool testDiffuseTransmissionColour() const;
        /// @}

        /// Attribute ReflectionColour
        /// @{
        virtual IfcColourOrFactor *getReflectionColour();
        virtual const IfcColourOrFactor *getReflectionColour() const;
        virtual void setReflectionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        virtual void unsetReflectionColour();
        virtual bool testReflectionColour() const;
        /// @}

        /// Attribute SpecularColour
        /// @{
        virtual IfcColourOrFactor *getSpecularColour();
        virtual const IfcColourOrFactor *getSpecularColour() const;
        virtual void setSpecularColour(const Step::RefPtr< IfcColourOrFactor > &value);
        virtual void unsetSpecularColour();
        virtual bool testSpecularColour() const;
        /// @}

        /// Attribute SpecularHighlight
        /// @{
        virtual IfcSpecularHighlightSelect *getSpecularHighlight();
        virtual const IfcSpecularHighlightSelect *getSpecularHighlight() const;
        virtual void setSpecularHighlight(const Step::RefPtr< IfcSpecularHighlightSelect > &value);
        virtual void unsetSpecularHighlight();
        virtual bool testSpecularHighlight() const;
        /// @}

        /// Attribute ReflectanceMethod
        /// @{
        virtual IfcReflectanceMethodEnum getReflectanceMethod();
        virtual IfcReflectanceMethodEnum getReflectanceMethod() const;
        virtual void setReflectanceMethod(IfcReflectanceMethodEnum value);
        virtual void unsetReflectanceMethod();
        virtual bool testReflectanceMethod() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSurfaceStyleRendering(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceStyleRendering();

        virtual bool init();

        virtual void copy(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3