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

#include <ifc2x3/IfcStructuralLoadStatic.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStructuralLoadSingleDisplacement Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralLoadSingleDisplacement : public IfcStructuralLoadStatic
    {

        // Attributes
        IfcLengthMeasure m_DisplacementX;
        IfcLengthMeasure m_DisplacementY;
        IfcLengthMeasure m_DisplacementZ;
        IfcPlaneAngleMeasure m_RotationalDisplacementRX;
        IfcPlaneAngleMeasure m_RotationalDisplacementRY;
        IfcPlaneAngleMeasure m_RotationalDisplacementRZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DisplacementX
        /// @{
        virtual IfcLengthMeasure getDisplacementX();
        virtual IfcLengthMeasure getDisplacementX() const;
        virtual void setDisplacementX(IfcLengthMeasure value);
        virtual void unsetDisplacementX();
        virtual bool testDisplacementX() const;
        /// @}

        /// Attribute DisplacementY
        /// @{
        virtual IfcLengthMeasure getDisplacementY();
        virtual IfcLengthMeasure getDisplacementY() const;
        virtual void setDisplacementY(IfcLengthMeasure value);
        virtual void unsetDisplacementY();
        virtual bool testDisplacementY() const;
        /// @}

        /// Attribute DisplacementZ
        /// @{
        virtual IfcLengthMeasure getDisplacementZ();
        virtual IfcLengthMeasure getDisplacementZ() const;
        virtual void setDisplacementZ(IfcLengthMeasure value);
        virtual void unsetDisplacementZ();
        virtual bool testDisplacementZ() const;
        /// @}

        /// Attribute RotationalDisplacementRX
        /// @{
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRX();
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRX() const;
        virtual void setRotationalDisplacementRX(IfcPlaneAngleMeasure value);
        virtual void unsetRotationalDisplacementRX();
        virtual bool testRotationalDisplacementRX() const;
        /// @}

        /// Attribute RotationalDisplacementRY
        /// @{
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRY();
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRY() const;
        virtual void setRotationalDisplacementRY(IfcPlaneAngleMeasure value);
        virtual void unsetRotationalDisplacementRY();
        virtual bool testRotationalDisplacementRY() const;
        /// @}

        /// Attribute RotationalDisplacementRZ
        /// @{
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRZ();
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRZ() const;
        virtual void setRotationalDisplacementRZ(IfcPlaneAngleMeasure value);
        virtual void unsetRotationalDisplacementRZ();
        virtual bool testRotationalDisplacementRZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralLoadSingleDisplacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleDisplacement();

        virtual bool init();

        virtual void copy(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3