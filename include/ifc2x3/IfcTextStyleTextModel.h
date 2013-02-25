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

#ifndef IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#define IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
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
     * Generated class for the IfcTextStyleTextModel Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTextStyleTextModel : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'TextIndent'.
         * 
         */
        virtual IfcSizeSelect *getTextIndent();
        /**
         * (const) Returns the value of the explicit attribute 'TextIndent'.
         * 
         * @return the value of the explicit attribute 'TextIndent'
         */
        virtual const IfcSizeSelect *getTextIndent() const;
        /**
         * Sets the value of the explicit attribute 'TextIndent'.
         * 
         * @param value
         */
        virtual void setTextIndent(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * unset the attribute 'TextIndent'.
         * 
         */
        virtual void unsetTextIndent();
        /**
         * Test if the attribute 'TextIndent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextIndent() const;
        /**
         * Gets the value of the explicit attribute 'TextAlign'.
         * 
         */
        virtual IfcTextAlignment getTextAlign();
        /**
         * (const) Returns the value of the explicit attribute 'TextAlign'.
         * 
         * @return the value of the explicit attribute 'TextAlign'
         */
        virtual const IfcTextAlignment getTextAlign() const;
        /**
         * Sets the value of the explicit attribute 'TextAlign'.
         * 
         * @param value
         */
        virtual void setTextAlign(const IfcTextAlignment &value);
        /**
         * unset the attribute 'TextAlign'.
         * 
         */
        virtual void unsetTextAlign();
        /**
         * Test if the attribute 'TextAlign' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextAlign() const;
        /**
         * Gets the value of the explicit attribute 'TextDecoration'.
         * 
         */
        virtual IfcTextDecoration getTextDecoration();
        /**
         * (const) Returns the value of the explicit attribute 'TextDecoration'.
         * 
         * @return the value of the explicit attribute 'TextDecoration'
         */
        virtual const IfcTextDecoration getTextDecoration() const;
        /**
         * Sets the value of the explicit attribute 'TextDecoration'.
         * 
         * @param value
         */
        virtual void setTextDecoration(const IfcTextDecoration &value);
        /**
         * unset the attribute 'TextDecoration'.
         * 
         */
        virtual void unsetTextDecoration();
        /**
         * Test if the attribute 'TextDecoration' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextDecoration() const;
        /**
         * Gets the value of the explicit attribute 'LetterSpacing'.
         * 
         */
        virtual IfcSizeSelect *getLetterSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'LetterSpacing'.
         * 
         * @return the value of the explicit attribute 'LetterSpacing'
         */
        virtual const IfcSizeSelect *getLetterSpacing() const;
        /**
         * Sets the value of the explicit attribute 'LetterSpacing'.
         * 
         * @param value
         */
        virtual void setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * unset the attribute 'LetterSpacing'.
         * 
         */
        virtual void unsetLetterSpacing();
        /**
         * Test if the attribute 'LetterSpacing' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLetterSpacing() const;
        /**
         * Gets the value of the explicit attribute 'WordSpacing'.
         * 
         */
        virtual IfcSizeSelect *getWordSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'WordSpacing'.
         * 
         * @return the value of the explicit attribute 'WordSpacing'
         */
        virtual const IfcSizeSelect *getWordSpacing() const;
        /**
         * Sets the value of the explicit attribute 'WordSpacing'.
         * 
         * @param value
         */
        virtual void setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * unset the attribute 'WordSpacing'.
         * 
         */
        virtual void unsetWordSpacing();
        /**
         * Test if the attribute 'WordSpacing' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWordSpacing() const;
        /**
         * Gets the value of the explicit attribute 'TextTransform'.
         * 
         */
        virtual IfcTextTransformation getTextTransform();
        /**
         * (const) Returns the value of the explicit attribute 'TextTransform'.
         * 
         * @return the value of the explicit attribute 'TextTransform'
         */
        virtual const IfcTextTransformation getTextTransform() const;
        /**
         * Sets the value of the explicit attribute 'TextTransform'.
         * 
         * @param value
         */
        virtual void setTextTransform(const IfcTextTransformation &value);
        /**
         * unset the attribute 'TextTransform'.
         * 
         */
        virtual void unsetTextTransform();
        /**
         * Test if the attribute 'TextTransform' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextTransform() const;
        /**
         * Gets the value of the explicit attribute 'LineHeight'.
         * 
         */
        virtual IfcSizeSelect *getLineHeight();
        /**
         * (const) Returns the value of the explicit attribute 'LineHeight'.
         * 
         * @return the value of the explicit attribute 'LineHeight'
         */
        virtual const IfcSizeSelect *getLineHeight() const;
        /**
         * Sets the value of the explicit attribute 'LineHeight'.
         * 
         * @param value
         */
        virtual void setLineHeight(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * unset the attribute 'LineHeight'.
         * 
         */
        virtual void unsetLineHeight();
        /**
         * Test if the attribute 'LineHeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLineHeight() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyleTextModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleTextModel();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyleTextModel &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_textIndent;
        /**
         */
        Step::String m_textAlign;
        /**
         */
        Step::String m_textDecoration;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_letterSpacing;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_wordSpacing;
        /**
         */
        Step::String m_textTransform;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_lineHeight;

    };

}

#endif // IFC2X3_IFCTEXTSTYLETEXTMODEL_H
