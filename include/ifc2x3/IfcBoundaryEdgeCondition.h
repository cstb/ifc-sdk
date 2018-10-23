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
     * Generated class for the IfcBoundaryEdgeCondition Entity.
     *
     */
    class IFC2X3_EXPORT IfcBoundaryEdgeCondition : public IfcBoundaryCondition
    {

        // Attributes
        IfcModulusOfLinearSubgradeReactionMeasure m_LinearStiffnessByLengthX;
        IfcModulusOfLinearSubgradeReactionMeasure m_LinearStiffnessByLengthY;
        IfcModulusOfLinearSubgradeReactionMeasure m_LinearStiffnessByLengthZ;
        IfcModulusOfRotationalSubgradeReactionMeasure m_RotationalStiffnessByLengthX;
        IfcModulusOfRotationalSubgradeReactionMeasure m_RotationalStiffnessByLengthY;
        IfcModulusOfRotationalSubgradeReactionMeasure m_RotationalStiffnessByLengthZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LinearStiffnessByLengthX
        /// @{
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthX();
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthX() const;
        virtual void setLinearStiffnessByLengthX(IfcModulusOfLinearSubgradeReactionMeasure value);
        virtual void unsetLinearStiffnessByLengthX();
        virtual bool testLinearStiffnessByLengthX() const;
        /// @}

        /// Attribute LinearStiffnessByLengthY
        /// @{
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthY();
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthY() const;
        virtual void setLinearStiffnessByLengthY(IfcModulusOfLinearSubgradeReactionMeasure value);
        virtual void unsetLinearStiffnessByLengthY();
        virtual bool testLinearStiffnessByLengthY() const;
        /// @}

        /// Attribute LinearStiffnessByLengthZ
        /// @{
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthZ();
        virtual IfcModulusOfLinearSubgradeReactionMeasure getLinearStiffnessByLengthZ() const;
        virtual void setLinearStiffnessByLengthZ(IfcModulusOfLinearSubgradeReactionMeasure value);
        virtual void unsetLinearStiffnessByLengthZ();
        virtual bool testLinearStiffnessByLengthZ() const;
        /// @}

        /// Attribute RotationalStiffnessByLengthX
        /// @{
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthX();
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthX() const;
        virtual void setRotationalStiffnessByLengthX(IfcModulusOfRotationalSubgradeReactionMeasure value);
        virtual void unsetRotationalStiffnessByLengthX();
        virtual bool testRotationalStiffnessByLengthX() const;
        /// @}

        /// Attribute RotationalStiffnessByLengthY
        /// @{
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthY();
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthY() const;
        virtual void setRotationalStiffnessByLengthY(IfcModulusOfRotationalSubgradeReactionMeasure value);
        virtual void unsetRotationalStiffnessByLengthY();
        virtual bool testRotationalStiffnessByLengthY() const;
        /// @}

        /// Attribute RotationalStiffnessByLengthZ
        /// @{
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthZ();
        virtual IfcModulusOfRotationalSubgradeReactionMeasure getRotationalStiffnessByLengthZ() const;
        virtual void setRotationalStiffnessByLengthZ(IfcModulusOfRotationalSubgradeReactionMeasure value);
        virtual void unsetRotationalStiffnessByLengthZ();
        virtual bool testRotationalStiffnessByLengthZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcBoundaryEdgeCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundaryEdgeCondition();

        virtual bool init();

        virtual void copy(const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3