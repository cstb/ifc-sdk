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

#ifndef IFC2X3_IFCTEXTSTYLE_H
#define IFC2X3_IFCTEXTSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPresentationStyle.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCharacterStyleSelect;
    class IfcTextFontSelect;
    class IfcTextStyleSelect;

    /**
     * Generated class for the IfcTextStyle Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTextStyle : public IfcPresentationStyle {
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
         * Gets the value of the explicit attribute 'TextCharacterAppearance'.
         * 
         */
        virtual IfcCharacterStyleSelect *getTextCharacterAppearance();
        /**
         * (const) Returns the value of the explicit attribute 'TextCharacterAppearance'.
         * 
         * @return the value of the explicit attribute 'TextCharacterAppearance'
         */
        virtual const IfcCharacterStyleSelect *getTextCharacterAppearance() const;
        /**
         * Sets the value of the explicit attribute 'TextCharacterAppearance'.
         * 
         * @param value
         */
        virtual void setTextCharacterAppearance(const Step::RefPtr< IfcCharacterStyleSelect > &value);
        /**
         * unset the attribute 'TextCharacterAppearance'.
         * 
         */
        virtual void unsetTextCharacterAppearance();
        /**
         * Test if the attribute 'TextCharacterAppearance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextCharacterAppearance() const;
        /**
         * Gets the value of the explicit attribute 'TextStyle'.
         * 
         */
        virtual IfcTextStyleSelect *getTextStyle();
        /**
         * (const) Returns the value of the explicit attribute 'TextStyle'.
         * 
         * @return the value of the explicit attribute 'TextStyle'
         */
        virtual const IfcTextStyleSelect *getTextStyle() const;
        /**
         * Sets the value of the explicit attribute 'TextStyle'.
         * 
         * @param value
         */
        virtual void setTextStyle(const Step::RefPtr< IfcTextStyleSelect > &value);
        /**
         * unset the attribute 'TextStyle'.
         * 
         */
        virtual void unsetTextStyle();
        /**
         * Test if the attribute 'TextStyle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextStyle() const;
        /**
         * Gets the value of the explicit attribute 'TextFontStyle'.
         * 
         */
        virtual IfcTextFontSelect *getTextFontStyle();
        /**
         * (const) Returns the value of the explicit attribute 'TextFontStyle'.
         * 
         * @return the value of the explicit attribute 'TextFontStyle'
         */
        virtual const IfcTextFontSelect *getTextFontStyle() const;
        /**
         * Sets the value of the explicit attribute 'TextFontStyle'.
         * 
         * @param value
         */
        virtual void setTextFontStyle(const Step::RefPtr< IfcTextFontSelect > &value);
        /**
         * unset the attribute 'TextFontStyle'.
         * 
         */
        virtual void unsetTextFontStyle();
        /**
         * Test if the attribute 'TextFontStyle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextFontStyle() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCharacterStyleSelect > m_textCharacterAppearance;
        /**
         */
        Step::RefPtr< IfcTextStyleSelect > m_textStyle;
        /**
         */
        Step::RefPtr< IfcTextFontSelect > m_textFontStyle;

    };

}

#endif // IFC2X3_IFCTEXTSTYLE_H
