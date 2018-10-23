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

#include <ifc2x3/IfcParameterizedProfileDef.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTrapeziumProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcTrapeziumProfileDef : public IfcParameterizedProfileDef
    {

        // Attributes
        IfcPositiveLengthMeasure m_BottomXDim;
        IfcPositiveLengthMeasure m_TopXDim;
        IfcPositiveLengthMeasure m_YDim;
        IfcLengthMeasure m_TopXOffset;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute BottomXDim
        /// @{
        virtual IfcPositiveLengthMeasure getBottomXDim();
        virtual IfcPositiveLengthMeasure getBottomXDim() const;
        virtual void setBottomXDim(IfcPositiveLengthMeasure value);
        virtual void unsetBottomXDim();
        virtual bool testBottomXDim() const;
        /// @}

        /// Attribute TopXDim
        /// @{
        virtual IfcPositiveLengthMeasure getTopXDim();
        virtual IfcPositiveLengthMeasure getTopXDim() const;
        virtual void setTopXDim(IfcPositiveLengthMeasure value);
        virtual void unsetTopXDim();
        virtual bool testTopXDim() const;
        /// @}

        /// Attribute YDim
        /// @{
        virtual IfcPositiveLengthMeasure getYDim();
        virtual IfcPositiveLengthMeasure getYDim() const;
        virtual void setYDim(IfcPositiveLengthMeasure value);
        virtual void unsetYDim();
        virtual bool testYDim() const;
        /// @}

        /// Attribute TopXOffset
        /// @{
        virtual IfcLengthMeasure getTopXOffset();
        virtual IfcLengthMeasure getTopXOffset() const;
        virtual void setTopXOffset(IfcLengthMeasure value);
        virtual void unsetTopXOffset();
        virtual bool testTopXOffset() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTrapeziumProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcTrapeziumProfileDef();

        virtual bool init();

        virtual void copy(const IfcTrapeziumProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3