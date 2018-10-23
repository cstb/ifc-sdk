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
     * Generated class for the IfcCurveStyle Entity.
     *
     */
    class IFC2X3_EXPORT IfcCurveStyle : public IfcPresentationStyle
    {

        // Attributes
        Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > m_CurveFont;
        Step::RefPtr< IfcSizeSelect > m_CurveWidth;
        Step::RefPtr< IfcColour > m_CurveColour;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute CurveFont
        /// @{
        virtual IfcCurveFontOrScaledCurveFontSelect *getCurveFont();
        virtual const IfcCurveFontOrScaledCurveFontSelect *getCurveFont() const;
        virtual void setCurveFont(const Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > &value);
        virtual void unsetCurveFont();
        virtual bool testCurveFont() const;
        /// @}

        /// Attribute CurveWidth
        /// @{
        virtual IfcSizeSelect *getCurveWidth();
        virtual const IfcSizeSelect *getCurveWidth() const;
        virtual void setCurveWidth(const Step::RefPtr< IfcSizeSelect > &value);
        virtual void unsetCurveWidth();
        virtual bool testCurveWidth() const;
        /// @}

        /// Attribute CurveColour
        /// @{
        virtual IfcColour *getCurveColour();
        virtual const IfcColour *getCurveColour() const;
        virtual void setCurveColour(const Step::RefPtr< IfcColour > &value);
        virtual void unsetCurveColour();
        virtual bool testCurveColour() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcCurveStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveStyle();

        virtual bool init();

        virtual void copy(const IfcCurveStyle &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3