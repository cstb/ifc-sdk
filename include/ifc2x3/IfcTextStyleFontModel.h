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

#ifndef IFC2X3_IFCTEXTSTYLEFONTMODEL_H
#define IFC2X3_IFCTEXTSTYLEFONTMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPreDefinedTextFont.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSizeSelect;

    /**
     * Generated class for the IfcTextStyleFontModel Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTextStyleFontModel : public IfcPreDefinedTextFont {
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
         * Gets the value of the explicit attribute 'FontFamily'.
         * 
         */
        virtual List_IfcTextFontName_1_n &getFontFamily();
        /**
         * (const) Returns the value of the explicit attribute 'FontFamily'.
         * 
         * @return the value of the explicit attribute 'FontFamily'
         */
        virtual const List_IfcTextFontName_1_n &getFontFamily() const;
        /**
         * Sets the value of the explicit attribute 'FontFamily'.
         * 
         * @param value
         */
        virtual void setFontFamily(const List_IfcTextFontName_1_n &value);
        /**
         * unset the attribute 'FontFamily'.
         * 
         */
        virtual void unsetFontFamily();
        /**
         * Test if the attribute 'FontFamily' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFontFamily() const;
        /**
         * Gets the value of the explicit attribute 'FontStyle'.
         * 
         */
        virtual IfcFontStyle getFontStyle();
        /**
         * (const) Returns the value of the explicit attribute 'FontStyle'.
         * 
         * @return the value of the explicit attribute 'FontStyle'
         */
        virtual const IfcFontStyle getFontStyle() const;
        /**
         * Sets the value of the explicit attribute 'FontStyle'.
         * 
         * @param value
         */
        virtual void setFontStyle(const IfcFontStyle &value);
        /**
         * unset the attribute 'FontStyle'.
         * 
         */
        virtual void unsetFontStyle();
        /**
         * Test if the attribute 'FontStyle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFontStyle() const;
        /**
         * Gets the value of the explicit attribute 'FontVariant'.
         * 
         */
        virtual IfcFontVariant getFontVariant();
        /**
         * (const) Returns the value of the explicit attribute 'FontVariant'.
         * 
         * @return the value of the explicit attribute 'FontVariant'
         */
        virtual const IfcFontVariant getFontVariant() const;
        /**
         * Sets the value of the explicit attribute 'FontVariant'.
         * 
         * @param value
         */
        virtual void setFontVariant(const IfcFontVariant &value);
        /**
         * unset the attribute 'FontVariant'.
         * 
         */
        virtual void unsetFontVariant();
        /**
         * Test if the attribute 'FontVariant' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFontVariant() const;
        /**
         * Gets the value of the explicit attribute 'FontWeight'.
         * 
         */
        virtual IfcFontWeight getFontWeight();
        /**
         * (const) Returns the value of the explicit attribute 'FontWeight'.
         * 
         * @return the value of the explicit attribute 'FontWeight'
         */
        virtual const IfcFontWeight getFontWeight() const;
        /**
         * Sets the value of the explicit attribute 'FontWeight'.
         * 
         * @param value
         */
        virtual void setFontWeight(const IfcFontWeight &value);
        /**
         * unset the attribute 'FontWeight'.
         * 
         */
        virtual void unsetFontWeight();
        /**
         * Test if the attribute 'FontWeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFontWeight() const;
        /**
         * Gets the value of the explicit attribute 'FontSize'.
         * 
         */
        virtual IfcSizeSelect *getFontSize();
        /**
         * (const) Returns the value of the explicit attribute 'FontSize'.
         * 
         * @return the value of the explicit attribute 'FontSize'
         */
        virtual const IfcSizeSelect *getFontSize() const;
        /**
         * Sets the value of the explicit attribute 'FontSize'.
         * 
         * @param value
         */
        virtual void setFontSize(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * unset the attribute 'FontSize'.
         * 
         */
        virtual void unsetFontSize();
        /**
         * Test if the attribute 'FontSize' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFontSize() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyleFontModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleFontModel();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyleFontModel &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcTextFontName_1_n m_fontFamily;
        /**
         */
        Step::String m_fontStyle;
        /**
         */
        Step::String m_fontVariant;
        /**
         */
        Step::String m_fontWeight;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_fontSize;

    };

}

#endif // IFC2X3_IFCTEXTSTYLEFONTMODEL_H
