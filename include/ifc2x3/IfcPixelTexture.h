/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCPIXELTEXTURE_H
#define IFC2X3_IFCPIXELTEXTURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcSurfaceTexture.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcPixelTexture : public IfcSurfaceTexture {
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
