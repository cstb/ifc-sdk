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
     * Generated class for the IfcBoundaryFaceCondition Entity.
     *
     */
    class IFC2X3_EXPORT IfcBoundaryFaceCondition : public IfcBoundaryCondition
    {

        // Attributes
        IfcModulusOfSubgradeReactionMeasure m_LinearStiffnessByAreaX;
        IfcModulusOfSubgradeReactionMeasure m_LinearStiffnessByAreaY;
        IfcModulusOfSubgradeReactionMeasure m_LinearStiffnessByAreaZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LinearStiffnessByAreaX
        /// @{
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaX();
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaX() const;
        virtual void setLinearStiffnessByAreaX(IfcModulusOfSubgradeReactionMeasure value);
        virtual void unsetLinearStiffnessByAreaX();
        virtual bool testLinearStiffnessByAreaX() const;
        /// @}

        /// Attribute LinearStiffnessByAreaY
        /// @{
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaY();
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaY() const;
        virtual void setLinearStiffnessByAreaY(IfcModulusOfSubgradeReactionMeasure value);
        virtual void unsetLinearStiffnessByAreaY();
        virtual bool testLinearStiffnessByAreaY() const;
        /// @}

        /// Attribute LinearStiffnessByAreaZ
        /// @{
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaZ();
        virtual IfcModulusOfSubgradeReactionMeasure getLinearStiffnessByAreaZ() const;
        virtual void setLinearStiffnessByAreaZ(IfcModulusOfSubgradeReactionMeasure value);
        virtual void unsetLinearStiffnessByAreaZ();
        virtual bool testLinearStiffnessByAreaZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcBoundaryFaceCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundaryFaceCondition();

        virtual bool init();

        virtual void copy(const IfcBoundaryFaceCondition &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3