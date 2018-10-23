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

#include <ifc2x3/IfcPreDefinedTextFont.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTextStyleFontModel Entity.
     *
     */
    class IFC2X3_EXPORT IfcTextStyleFontModel : public IfcPreDefinedTextFont
    {

        // Attributes
        List_IfcTextFontName_1_n m_FontFamily;
        IfcFontStyle m_FontStyle;
        IfcFontVariant m_FontVariant;
        IfcFontWeight m_FontWeight;
        Step::RefPtr< IfcSizeSelect > m_FontSize;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute FontFamily
        /// @{
        virtual List_IfcTextFontName_1_n &getFontFamily();
        virtual const List_IfcTextFontName_1_n &getFontFamily() const;
        virtual void setFontFamily(const List_IfcTextFontName_1_n &value);
        virtual void unsetFontFamily();
        virtual bool testFontFamily() const;
        /// @}

        /// Attribute FontStyle
        /// @{
        virtual IfcFontStyle getFontStyle();
        virtual const IfcFontStyle getFontStyle() const;
        virtual void setFontStyle(const IfcFontStyle &value);
        virtual void unsetFontStyle();
        virtual bool testFontStyle() const;
        /// @}

        /// Attribute FontVariant
        /// @{
        virtual IfcFontVariant getFontVariant();
        virtual const IfcFontVariant getFontVariant() const;
        virtual void setFontVariant(const IfcFontVariant &value);
        virtual void unsetFontVariant();
        virtual bool testFontVariant() const;
        /// @}

        /// Attribute FontWeight
        /// @{
        virtual IfcFontWeight getFontWeight();
        virtual const IfcFontWeight getFontWeight() const;
        virtual void setFontWeight(const IfcFontWeight &value);
        virtual void unsetFontWeight();
        virtual bool testFontWeight() const;
        /// @}

        /// Attribute FontSize
        /// @{
        virtual IfcSizeSelect *getFontSize();
        virtual const IfcSizeSelect *getFontSize() const;
        virtual void setFontSize(const Step::RefPtr< IfcSizeSelect > &value);
        virtual void unsetFontSize();
        virtual bool testFontSize() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTextStyleFontModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleFontModel();

        virtual bool init();

        virtual void copy(const IfcTextStyleFontModel &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3