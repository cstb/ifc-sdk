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

#include <ifc2x3/IfcPresentationStyle.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTextStyle Entity.
     *
     */
    class IFC2X3_EXPORT IfcTextStyle : public IfcPresentationStyle
    {

        // Attributes
        Step::RefPtr< IfcCharacterStyleSelect > m_TextCharacterAppearance;
        Step::RefPtr< IfcTextStyleSelect > m_TextStyle;
        Step::RefPtr< IfcTextFontSelect > m_TextFontStyle;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TextCharacterAppearance
        /// @{
        virtual IfcCharacterStyleSelect *getTextCharacterAppearance();
        virtual const IfcCharacterStyleSelect *getTextCharacterAppearance() const;
        virtual void setTextCharacterAppearance(const Step::RefPtr< IfcCharacterStyleSelect > &value);
        virtual void unsetTextCharacterAppearance();
        virtual bool testTextCharacterAppearance() const;
        /// @}

        /// Attribute TextStyle
        /// @{
        virtual IfcTextStyleSelect *getTextStyle();
        virtual const IfcTextStyleSelect *getTextStyle() const;
        virtual void setTextStyle(const Step::RefPtr< IfcTextStyleSelect > &value);
        virtual void unsetTextStyle();
        virtual bool testTextStyle() const;
        /// @}

        /// Attribute TextFontStyle
        /// @{
        virtual IfcTextFontSelect *getTextFontStyle();
        virtual const IfcTextFontSelect *getTextFontStyle() const;
        virtual void setTextFontStyle(const Step::RefPtr< IfcTextFontSelect > &value);
        virtual void unsetTextFontStyle();
        virtual bool testTextFontStyle() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTextStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyle();

        virtual bool init();

        virtual void copy(const IfcTextStyle &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3