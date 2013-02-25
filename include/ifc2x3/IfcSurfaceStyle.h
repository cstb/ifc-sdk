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

#ifndef IFC2X3_IFCSURFACESTYLE_H
#define IFC2X3_IFCSURFACESTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPresentationStyle.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcSurfaceStyle Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSurfaceStyle : public IfcPresentationStyle {
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
         * Gets the value of the explicit attribute 'Side'.
         * 
         */
        virtual IfcSurfaceSide getSide();
        /**
         * (const) Returns the value of the explicit attribute 'Side'.
         * 
         * @return the value of the explicit attribute 'Side'
         */
        virtual const IfcSurfaceSide getSide() const;
        /**
         * Sets the value of the explicit attribute 'Side'.
         * 
         * @param value
         */
        virtual void setSide(IfcSurfaceSide value);
        /**
         * unset the attribute 'Side'.
         * 
         */
        virtual void unsetSide();
        /**
         * Test if the attribute 'Side' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSide() const;
        /**
         * Gets the value of the explicit attribute 'Styles'.
         * 
         */
        virtual Set_IfcSurfaceStyleElementSelect_1_5 &getStyles();
        /**
         * (const) Returns the value of the explicit attribute 'Styles'.
         * 
         * @return the value of the explicit attribute 'Styles'
         */
        virtual const Set_IfcSurfaceStyleElementSelect_1_5 &getStyles() const;
        /**
         * Sets the value of the explicit attribute 'Styles'.
         * 
         * @param value
         */
        virtual void setStyles(const Set_IfcSurfaceStyleElementSelect_1_5 &value);
        /**
         * unset the attribute 'Styles'.
         * 
         */
        virtual void unsetStyles();
        /**
         * Test if the attribute 'Styles' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStyles() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSurfaceSide m_side;
        /**
         */
        Set_IfcSurfaceStyleElementSelect_1_5 m_styles;

    };

}

#endif // IFC2X3_IFCSURFACESTYLE_H
