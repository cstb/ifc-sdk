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

#include <ifc2x3/IfcBoundaryCondition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcBoundaryNodeCondition Entity.
     *
     */
    class IFC2X3_EXPORT IfcBoundaryNodeCondition : public IfcBoundaryCondition
    {

        // Attributes
        IfcLinearStiffnessMeasure m_LinearStiffnessX;
        IfcLinearStiffnessMeasure m_LinearStiffnessY;
        IfcLinearStiffnessMeasure m_LinearStiffnessZ;
        IfcRotationalStiffnessMeasure m_RotationalStiffnessX;
        IfcRotationalStiffnessMeasure m_RotationalStiffnessY;
        IfcRotationalStiffnessMeasure m_RotationalStiffnessZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LinearStiffnessX
        /// @{
        virtual IfcLinearStiffnessMeasure getLinearStiffnessX();
        virtual IfcLinearStiffnessMeasure getLinearStiffnessX() const;
        virtual void setLinearStiffnessX(IfcLinearStiffnessMeasure value);
        virtual void unsetLinearStiffnessX();
        virtual bool testLinearStiffnessX() const;
        /// @}

        /// Attribute LinearStiffnessY
        /// @{
        virtual IfcLinearStiffnessMeasure getLinearStiffnessY();
        virtual IfcLinearStiffnessMeasure getLinearStiffnessY() const;
        virtual void setLinearStiffnessY(IfcLinearStiffnessMeasure value);
        virtual void unsetLinearStiffnessY();
        virtual bool testLinearStiffnessY() const;
        /// @}

        /// Attribute LinearStiffnessZ
        /// @{
        virtual IfcLinearStiffnessMeasure getLinearStiffnessZ();
        virtual IfcLinearStiffnessMeasure getLinearStiffnessZ() const;
        virtual void setLinearStiffnessZ(IfcLinearStiffnessMeasure value);
        virtual void unsetLinearStiffnessZ();
        virtual bool testLinearStiffnessZ() const;
        /// @}

        /// Attribute RotationalStiffnessX
        /// @{
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessX();
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessX() const;
        virtual void setRotationalStiffnessX(IfcRotationalStiffnessMeasure value);
        virtual void unsetRotationalStiffnessX();
        virtual bool testRotationalStiffnessX() const;
        /// @}

        /// Attribute RotationalStiffnessY
        /// @{
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessY();
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessY() const;
        virtual void setRotationalStiffnessY(IfcRotationalStiffnessMeasure value);
        virtual void unsetRotationalStiffnessY();
        virtual bool testRotationalStiffnessY() const;
        /// @}

        /// Attribute RotationalStiffnessZ
        /// @{
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessZ();
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessZ() const;
        virtual void setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value);
        virtual void unsetRotationalStiffnessZ();
        virtual bool testRotationalStiffnessZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcBoundaryNodeCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundaryNodeCondition();

        virtual bool init();

        virtual void copy(const IfcBoundaryNodeCondition &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3