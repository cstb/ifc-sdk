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

#include <ifc2x3/IfcGeometricRepresentationItem.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcLightSource Entity.
     *
     */
    class IFC2X3_EXPORT IfcLightSource : public IfcGeometricRepresentationItem
    {

        // Attributes
        IfcLabel m_Name;
        Step::RefPtr< IfcColourRgb > m_LightColour;
        IfcNormalisedRatioMeasure m_AmbientIntensity;
        IfcNormalisedRatioMeasure m_Intensity;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute LightColour
        /// @{
        virtual IfcColourRgb *getLightColour();
        virtual const IfcColourRgb *getLightColour() const;
        virtual void setLightColour(const Step::RefPtr< IfcColourRgb > &value);
        virtual void unsetLightColour();
        virtual bool testLightColour() const;
        /// @}

        /// Attribute AmbientIntensity
        /// @{
        virtual IfcNormalisedRatioMeasure getAmbientIntensity();
        virtual IfcNormalisedRatioMeasure getAmbientIntensity() const;
        virtual void setAmbientIntensity(IfcNormalisedRatioMeasure value);
        virtual void unsetAmbientIntensity();
        virtual bool testAmbientIntensity() const;
        /// @}

        /// Attribute Intensity
        /// @{
        virtual IfcNormalisedRatioMeasure getIntensity();
        virtual IfcNormalisedRatioMeasure getIntensity() const;
        virtual void setIntensity(IfcNormalisedRatioMeasure value);
        virtual void unsetIntensity();
        virtual bool testIntensity() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcLightSource(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSource();

        virtual bool init();

        virtual void copy(const IfcLightSource &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3