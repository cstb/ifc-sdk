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

#include <ifc2x3/IfcSurfaceTexture.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcPixelTexture Entity.
     *
     */
    class IFC2X3_EXPORT IfcPixelTexture : public IfcSurfaceTexture
    {

        // Attributes
        IfcInteger m_Width;
        IfcInteger m_Height;
        IfcInteger m_ColourComponents;
        List_Binary_32__1_n m_Pixel;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Width
        /// @{
        virtual IfcInteger getWidth();
        virtual IfcInteger getWidth() const;
        virtual void setWidth(IfcInteger value);
        virtual void unsetWidth();
        virtual bool testWidth() const;
        /// @}

        /// Attribute Height
        /// @{
        virtual IfcInteger getHeight();
        virtual IfcInteger getHeight() const;
        virtual void setHeight(IfcInteger value);
        virtual void unsetHeight();
        virtual bool testHeight() const;
        /// @}

        /// Attribute ColourComponents
        /// @{
        virtual IfcInteger getColourComponents();
        virtual IfcInteger getColourComponents() const;
        virtual void setColourComponents(IfcInteger value);
        virtual void unsetColourComponents();
        virtual bool testColourComponents() const;
        /// @}

        /// Attribute Pixel
        /// @{
        virtual List_Binary_32__1_n &getPixel();
        virtual const List_Binary_32__1_n &getPixel() const;
        virtual void setPixel(const List_Binary_32__1_n &value);
        virtual void unsetPixel();
        virtual bool testPixel() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPixelTexture(Step::Id id, Step::SPFData *args);
        virtual ~IfcPixelTexture();

        virtual bool init();

        virtual void copy(const IfcPixelTexture &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3