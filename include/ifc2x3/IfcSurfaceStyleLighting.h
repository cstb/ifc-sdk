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

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSurfaceStyleLighting Entity.
     *
     */
    class IFC2X3_EXPORT IfcSurfaceStyleLighting : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcColourRgb > m_DiffuseTransmissionColour;
        Step::RefPtr< IfcColourRgb > m_DiffuseReflectionColour;
        Step::RefPtr< IfcColourRgb > m_TransmissionColour;
        Step::RefPtr< IfcColourRgb > m_ReflectanceColour;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DiffuseTransmissionColour
        /// @{
        virtual IfcColourRgb *getDiffuseTransmissionColour();
        virtual const IfcColourRgb *getDiffuseTransmissionColour() const;
        virtual void setDiffuseTransmissionColour(const Step::RefPtr< IfcColourRgb > &value);
        virtual void unsetDiffuseTransmissionColour();
        virtual bool testDiffuseTransmissionColour() const;
        /// @}

        /// Attribute DiffuseReflectionColour
        /// @{
        virtual IfcColourRgb *getDiffuseReflectionColour();
        virtual const IfcColourRgb *getDiffuseReflectionColour() const;
        virtual void setDiffuseReflectionColour(const Step::RefPtr< IfcColourRgb > &value);
        virtual void unsetDiffuseReflectionColour();
        virtual bool testDiffuseReflectionColour() const;
        /// @}

        /// Attribute TransmissionColour
        /// @{
        virtual IfcColourRgb *getTransmissionColour();
        virtual const IfcColourRgb *getTransmissionColour() const;
        virtual void setTransmissionColour(const Step::RefPtr< IfcColourRgb > &value);
        virtual void unsetTransmissionColour();
        virtual bool testTransmissionColour() const;
        /// @}

        /// Attribute ReflectanceColour
        /// @{
        virtual IfcColourRgb *getReflectanceColour();
        virtual const IfcColourRgb *getReflectanceColour() const;
        virtual void setReflectanceColour(const Step::RefPtr< IfcColourRgb > &value);
        virtual void unsetReflectanceColour();
        virtual bool testReflectanceColour() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSurfaceStyleLighting(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceStyleLighting();

        virtual bool init();

        virtual void copy(const IfcSurfaceStyleLighting &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3