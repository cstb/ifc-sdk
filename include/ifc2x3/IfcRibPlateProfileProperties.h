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

#include <ifc2x3/IfcProfileProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRibPlateProfileProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcRibPlateProfileProperties : public IfcProfileProperties
    {

        // Attributes
        IfcPositiveLengthMeasure m_Thickness;
        IfcPositiveLengthMeasure m_RibHeight;
        IfcPositiveLengthMeasure m_RibWidth;
        IfcPositiveLengthMeasure m_RibSpacing;
        IfcRibPlateDirectionEnum m_Direction;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Thickness
        /// @{
        virtual IfcPositiveLengthMeasure getThickness();
        virtual IfcPositiveLengthMeasure getThickness() const;
        virtual void setThickness(IfcPositiveLengthMeasure value);
        virtual void unsetThickness();
        virtual bool testThickness() const;
        /// @}

        /// Attribute RibHeight
        /// @{
        virtual IfcPositiveLengthMeasure getRibHeight();
        virtual IfcPositiveLengthMeasure getRibHeight() const;
        virtual void setRibHeight(IfcPositiveLengthMeasure value);
        virtual void unsetRibHeight();
        virtual bool testRibHeight() const;
        /// @}

        /// Attribute RibWidth
        /// @{
        virtual IfcPositiveLengthMeasure getRibWidth();
        virtual IfcPositiveLengthMeasure getRibWidth() const;
        virtual void setRibWidth(IfcPositiveLengthMeasure value);
        virtual void unsetRibWidth();
        virtual bool testRibWidth() const;
        /// @}

        /// Attribute RibSpacing
        /// @{
        virtual IfcPositiveLengthMeasure getRibSpacing();
        virtual IfcPositiveLengthMeasure getRibSpacing() const;
        virtual void setRibSpacing(IfcPositiveLengthMeasure value);
        virtual void unsetRibSpacing();
        virtual bool testRibSpacing() const;
        /// @}

        /// Attribute Direction
        /// @{
        virtual IfcRibPlateDirectionEnum getDirection();
        virtual IfcRibPlateDirectionEnum getDirection() const;
        virtual void setDirection(IfcRibPlateDirectionEnum value);
        virtual void unsetDirection();
        virtual bool testDirection() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRibPlateProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcRibPlateProfileProperties();

        virtual bool init();

        virtual void copy(const IfcRibPlateProfileProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3