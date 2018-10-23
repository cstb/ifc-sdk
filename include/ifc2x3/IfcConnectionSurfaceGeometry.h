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

#include <ifc2x3/IfcConnectionGeometry.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcConnectionSurfaceGeometry Entity.
     *
     */
    class IFC2X3_EXPORT IfcConnectionSurfaceGeometry : public IfcConnectionGeometry
    {

        // Attributes
        Step::RefPtr< IfcSurfaceOrFaceSurface > m_SurfaceOnRelatingElement;
        Step::RefPtr< IfcSurfaceOrFaceSurface > m_SurfaceOnRelatedElement;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SurfaceOnRelatingElement
        /// @{
        virtual IfcSurfaceOrFaceSurface *getSurfaceOnRelatingElement();
        virtual const IfcSurfaceOrFaceSurface *getSurfaceOnRelatingElement() const;
        virtual void setSurfaceOnRelatingElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value);
        virtual void unsetSurfaceOnRelatingElement();
        virtual bool testSurfaceOnRelatingElement() const;
        /// @}

        /// Attribute SurfaceOnRelatedElement
        /// @{
        virtual IfcSurfaceOrFaceSurface *getSurfaceOnRelatedElement();
        virtual const IfcSurfaceOrFaceSurface *getSurfaceOnRelatedElement() const;
        virtual void setSurfaceOnRelatedElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value);
        virtual void unsetSurfaceOnRelatedElement();
        virtual bool testSurfaceOnRelatedElement() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcConnectionSurfaceGeometry(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionSurfaceGeometry();

        virtual bool init();

        virtual void copy(const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3