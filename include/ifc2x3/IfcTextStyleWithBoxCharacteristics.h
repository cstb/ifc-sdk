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
     * Generated class for the IfcTextStyleWithBoxCharacteristics Entity.
     *
     */
    class IFC2X3_EXPORT IfcTextStyleWithBoxCharacteristics : public Step::BaseEntity
    {

        // Attributes
        IfcPositiveLengthMeasure m_BoxHeight;
        IfcPositiveLengthMeasure m_BoxWidth;
        IfcPlaneAngleMeasure m_BoxSlantAngle;
        IfcPlaneAngleMeasure m_BoxRotateAngle;
        Step::RefPtr< IfcSizeSelect > m_CharacterSpacing;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute BoxHeight
        /// @{
        virtual IfcPositiveLengthMeasure getBoxHeight();
        virtual IfcPositiveLengthMeasure getBoxHeight() const;
        virtual void setBoxHeight(IfcPositiveLengthMeasure value);
        virtual void unsetBoxHeight();
        virtual bool testBoxHeight() const;
        /// @}

        /// Attribute BoxWidth
        /// @{
        virtual IfcPositiveLengthMeasure getBoxWidth();
        virtual IfcPositiveLengthMeasure getBoxWidth() const;
        virtual void setBoxWidth(IfcPositiveLengthMeasure value);
        virtual void unsetBoxWidth();
        virtual bool testBoxWidth() const;
        /// @}

        /// Attribute BoxSlantAngle
        /// @{
        virtual IfcPlaneAngleMeasure getBoxSlantAngle();
        virtual IfcPlaneAngleMeasure getBoxSlantAngle() const;
        virtual void setBoxSlantAngle(IfcPlaneAngleMeasure value);
        virtual void unsetBoxSlantAngle();
        virtual bool testBoxSlantAngle() const;
        /// @}

        /// Attribute BoxRotateAngle
        /// @{
        virtual IfcPlaneAngleMeasure getBoxRotateAngle();
        virtual IfcPlaneAngleMeasure getBoxRotateAngle() const;
        virtual void setBoxRotateAngle(IfcPlaneAngleMeasure value);
        virtual void unsetBoxRotateAngle();
        virtual bool testBoxRotateAngle() const;
        /// @}

        /// Attribute CharacterSpacing
        /// @{
        virtual IfcSizeSelect *getCharacterSpacing();
        virtual const IfcSizeSelect *getCharacterSpacing() const;
        virtual void setCharacterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        virtual void unsetCharacterSpacing();
        virtual bool testCharacterSpacing() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTextStyleWithBoxCharacteristics(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleWithBoxCharacteristics();

        virtual bool init();

        virtual void copy(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3