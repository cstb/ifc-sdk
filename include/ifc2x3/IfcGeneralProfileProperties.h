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
     * Generated class for the IfcGeneralProfileProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcGeneralProfileProperties : public IfcProfileProperties
    {

        // Attributes
        IfcMassPerLengthMeasure m_PhysicalWeight;
        IfcPositiveLengthMeasure m_Perimeter;
        IfcPositiveLengthMeasure m_MinimumPlateThickness;
        IfcPositiveLengthMeasure m_MaximumPlateThickness;
        IfcAreaMeasure m_CrossSectionArea;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PhysicalWeight
        /// @{
        virtual IfcMassPerLengthMeasure getPhysicalWeight();
        virtual IfcMassPerLengthMeasure getPhysicalWeight() const;
        virtual void setPhysicalWeight(IfcMassPerLengthMeasure value);
        virtual void unsetPhysicalWeight();
        virtual bool testPhysicalWeight() const;
        /// @}

        /// Attribute Perimeter
        /// @{
        virtual IfcPositiveLengthMeasure getPerimeter();
        virtual IfcPositiveLengthMeasure getPerimeter() const;
        virtual void setPerimeter(IfcPositiveLengthMeasure value);
        virtual void unsetPerimeter();
        virtual bool testPerimeter() const;
        /// @}

        /// Attribute MinimumPlateThickness
        /// @{
        virtual IfcPositiveLengthMeasure getMinimumPlateThickness();
        virtual IfcPositiveLengthMeasure getMinimumPlateThickness() const;
        virtual void setMinimumPlateThickness(IfcPositiveLengthMeasure value);
        virtual void unsetMinimumPlateThickness();
        virtual bool testMinimumPlateThickness() const;
        /// @}

        /// Attribute MaximumPlateThickness
        /// @{
        virtual IfcPositiveLengthMeasure getMaximumPlateThickness();
        virtual IfcPositiveLengthMeasure getMaximumPlateThickness() const;
        virtual void setMaximumPlateThickness(IfcPositiveLengthMeasure value);
        virtual void unsetMaximumPlateThickness();
        virtual bool testMaximumPlateThickness() const;
        /// @}

        /// Attribute CrossSectionArea
        /// @{
        virtual IfcAreaMeasure getCrossSectionArea();
        virtual IfcAreaMeasure getCrossSectionArea() const;
        virtual void setCrossSectionArea(IfcAreaMeasure value);
        virtual void unsetCrossSectionArea();
        virtual bool testCrossSectionArea() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcGeneralProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeneralProfileProperties();

        virtual bool init();

        virtual void copy(const IfcGeneralProfileProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3