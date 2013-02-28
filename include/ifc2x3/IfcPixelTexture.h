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

#ifndef IFC2X3_IFCPIXELTEXTURE_H
#define IFC2X3_IFCPIXELTEXTURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSurfaceTexture.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcPixelTexture Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPixelTexture : public IfcSurfaceTexture {
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
         * Gets the value of the explicit attribute 'Width'.
         * 
         */
        virtual IfcInteger getWidth();
        /**
         * (const) Returns the value of the explicit attribute 'Width'.
         * 
         * @return the value of the explicit attribute 'Width'
         */
        virtual const IfcInteger getWidth() const;
        /**
         * Sets the value of the explicit attribute 'Width'.
         * 
         * @param value
         */
        virtual void setWidth(IfcInteger value);
        /**
         * unset the attribute 'Width'.
         * 
         */
        virtual void unsetWidth();
        /**
         * Test if the attribute 'Width' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWidth() const;
        /**
         * Gets the value of the explicit attribute 'Height'.
         * 
         */
        virtual IfcInteger getHeight();
        /**
         * (const) Returns the value of the explicit attribute 'Height'.
         * 
         * @return the value of the explicit attribute 'Height'
         */
        virtual const IfcInteger getHeight() const;
        /**
         * Sets the value of the explicit attribute 'Height'.
         * 
         * @param value
         */
        virtual void setHeight(IfcInteger value);
        /**
         * unset the attribute 'Height'.
         * 
         */
        virtual void unsetHeight();
        /**
         * Test if the attribute 'Height' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHeight() const;
        /**
         * Gets the value of the explicit attribute 'ColourComponents'.
         * 
         */
        virtual IfcInteger getColourComponents();
        /**
         * (const) Returns the value of the explicit attribute 'ColourComponents'.
         * 
         * @return the value of the explicit attribute 'ColourComponents'
         */
        virtual const IfcInteger getColourComponents() const;
        /**
         * Sets the value of the explicit attribute 'ColourComponents'.
         * 
         * @param value
         */
        virtual void setColourComponents(IfcInteger value);
        /**
         * unset the attribute 'ColourComponents'.
         * 
         */
        virtual void unsetColourComponents();
        /**
         * Test if the attribute 'ColourComponents' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testColourComponents() const;
        /**
         * Gets the value of the explicit attribute 'Pixel'.
         * 
         */
        virtual List_32_1_n &getPixel();
        /**
         * (const) Returns the value of the explicit attribute 'Pixel'.
         * 
         * @return the value of the explicit attribute 'Pixel'
         */
        virtual const List_32_1_n &getPixel() const;
        /**
         * Sets the value of the explicit attribute 'Pixel'.
         * 
         * @param value
         */
        virtual void setPixel(const List_32_1_n &value);
        /**
         * unset the attribute 'Pixel'.
         * 
         */
        virtual void unsetPixel();
        /**
         * Test if the attribute 'Pixel' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPixel() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPixelTexture(Step::Id id, Step::SPFData *args);
        virtual ~IfcPixelTexture();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPixelTexture &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_width;
        /**
         */
        Step::Integer m_height;
        /**
         */
        Step::Integer m_colourComponents;
        /**
         */
        List_32_1_n m_pixel;

    };

}

#endif // IFC2X3_IFCPIXELTEXTURE_H
