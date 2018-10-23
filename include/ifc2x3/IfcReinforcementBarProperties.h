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
     * Generated class for the IfcReinforcementBarProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcReinforcementBarProperties : public Step::BaseEntity
    {

        // Attributes
        IfcAreaMeasure m_TotalCrossSectionArea;
        IfcLabel m_SteelGrade;
        IfcReinforcingBarSurfaceEnum m_BarSurface;
        IfcLengthMeasure m_EffectiveDepth;
        IfcPositiveLengthMeasure m_NominalBarDiameter;
        IfcCountMeasure m_BarCount;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TotalCrossSectionArea
        /// @{
        virtual IfcAreaMeasure getTotalCrossSectionArea();
        virtual IfcAreaMeasure getTotalCrossSectionArea() const;
        virtual void setTotalCrossSectionArea(IfcAreaMeasure value);
        virtual void unsetTotalCrossSectionArea();
        virtual bool testTotalCrossSectionArea() const;
        /// @}

        /// Attribute SteelGrade
        /// @{
        virtual IfcLabel getSteelGrade();
        virtual const IfcLabel getSteelGrade() const;
        virtual void setSteelGrade(const IfcLabel &value);
        virtual void unsetSteelGrade();
        virtual bool testSteelGrade() const;
        /// @}

        /// Attribute BarSurface
        /// @{
        virtual IfcReinforcingBarSurfaceEnum getBarSurface();
        virtual IfcReinforcingBarSurfaceEnum getBarSurface() const;
        virtual void setBarSurface(IfcReinforcingBarSurfaceEnum value);
        virtual void unsetBarSurface();
        virtual bool testBarSurface() const;
        /// @}

        /// Attribute EffectiveDepth
        /// @{
        virtual IfcLengthMeasure getEffectiveDepth();
        virtual IfcLengthMeasure getEffectiveDepth() const;
        virtual void setEffectiveDepth(IfcLengthMeasure value);
        virtual void unsetEffectiveDepth();
        virtual bool testEffectiveDepth() const;
        /// @}

        /// Attribute NominalBarDiameter
        /// @{
        virtual IfcPositiveLengthMeasure getNominalBarDiameter();
        virtual IfcPositiveLengthMeasure getNominalBarDiameter() const;
        virtual void setNominalBarDiameter(IfcPositiveLengthMeasure value);
        virtual void unsetNominalBarDiameter();
        virtual bool testNominalBarDiameter() const;
        /// @}

        /// Attribute BarCount
        /// @{
        virtual IfcCountMeasure getBarCount();
        virtual IfcCountMeasure getBarCount() const;
        virtual void setBarCount(IfcCountMeasure value);
        virtual void unsetBarCount();
        virtual bool testBarCount() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcReinforcementBarProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcementBarProperties();

        virtual bool init();

        virtual void copy(const IfcReinforcementBarProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3