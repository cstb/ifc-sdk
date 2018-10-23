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
     * Generated class for the IfcTextStyleTextModel Entity.
     *
     */
    class IFC2X3_EXPORT IfcTextStyleTextModel : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcSizeSelect > m_TextIndent;
        IfcTextAlignment m_TextAlign;
        IfcTextDecoration m_TextDecoration;
        Step::RefPtr< IfcSizeSelect > m_LetterSpacing;
        Step::RefPtr< IfcSizeSelect > m_WordSpacing;
        IfcTextTransformation m_TextTransform;
        Step::RefPtr< IfcSizeSelect > m_LineHeight;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TextIndent
        /// @{
        virtual IfcSizeSelect *getTextIndent();
        virtual const IfcSizeSelect *getTextIndent() const;
        virtual void setTextIndent(const Step::RefPtr< IfcSizeSelect > &value);
        virtual void unsetTextIndent();
        virtual bool testTextIndent() const;
        /// @}

        /// Attribute TextAlign
        /// @{
        virtual IfcTextAlignment getTextAlign();
        virtual const IfcTextAlignment getTextAlign() const;
        virtual void setTextAlign(const IfcTextAlignment &value);
        virtual void unsetTextAlign();
        virtual bool testTextAlign() const;
        /// @}

        /// Attribute TextDecoration
        /// @{
        virtual IfcTextDecoration getTextDecoration();
        virtual const IfcTextDecoration getTextDecoration() const;
        virtual void setTextDecoration(const IfcTextDecoration &value);
        virtual void unsetTextDecoration();
        virtual bool testTextDecoration() const;
        /// @}

        /// Attribute LetterSpacing
        /// @{
        virtual IfcSizeSelect *getLetterSpacing();
        virtual const IfcSizeSelect *getLetterSpacing() const;
        virtual void setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        virtual void unsetLetterSpacing();
        virtual bool testLetterSpacing() const;
        /// @}

        /// Attribute WordSpacing
        /// @{
        virtual IfcSizeSelect *getWordSpacing();
        virtual const IfcSizeSelect *getWordSpacing() const;
        virtual void setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        virtual void unsetWordSpacing();
        virtual bool testWordSpacing() const;
        /// @}

        /// Attribute TextTransform
        /// @{
        virtual IfcTextTransformation getTextTransform();
        virtual const IfcTextTransformation getTextTransform() const;
        virtual void setTextTransform(const IfcTextTransformation &value);
        virtual void unsetTextTransform();
        virtual bool testTextTransform() const;
        /// @}

        /// Attribute LineHeight
        /// @{
        virtual IfcSizeSelect *getLineHeight();
        virtual const IfcSizeSelect *getLineHeight() const;
        virtual void setLineHeight(const Step::RefPtr< IfcSizeSelect > &value);
        virtual void unsetLineHeight();
        virtual bool testLineHeight() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTextStyleTextModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleTextModel();

        virtual bool init();

        virtual void copy(const IfcTextStyleTextModel &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3