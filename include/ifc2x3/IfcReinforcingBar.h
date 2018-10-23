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

#include <ifc2x3/IfcReinforcingElement.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcReinforcingBar Entity.
     *
     */
    class IFC2X3_EXPORT IfcReinforcingBar : public IfcReinforcingElement
    {

        // Attributes
        IfcPositiveLengthMeasure m_NominalDiameter;
        IfcAreaMeasure m_CrossSectionArea;
        IfcPositiveLengthMeasure m_BarLength;
        IfcReinforcingBarRoleEnum m_BarRole;
        IfcReinforcingBarSurfaceEnum m_BarSurface;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute NominalDiameter
        /// @{
        virtual IfcPositiveLengthMeasure getNominalDiameter();
        virtual IfcPositiveLengthMeasure getNominalDiameter() const;
        virtual void setNominalDiameter(IfcPositiveLengthMeasure value);
        virtual void unsetNominalDiameter();
        virtual bool testNominalDiameter() const;
        /// @}

        /// Attribute CrossSectionArea
        /// @{
        virtual IfcAreaMeasure getCrossSectionArea();
        virtual IfcAreaMeasure getCrossSectionArea() const;
        virtual void setCrossSectionArea(IfcAreaMeasure value);
        virtual void unsetCrossSectionArea();
        virtual bool testCrossSectionArea() const;
        /// @}

        /// Attribute BarLength
        /// @{
        virtual IfcPositiveLengthMeasure getBarLength();
        virtual IfcPositiveLengthMeasure getBarLength() const;
        virtual void setBarLength(IfcPositiveLengthMeasure value);
        virtual void unsetBarLength();
        virtual bool testBarLength() const;
        /// @}

        /// Attribute BarRole
        /// @{
        virtual IfcReinforcingBarRoleEnum getBarRole();
        virtual IfcReinforcingBarRoleEnum getBarRole() const;
        virtual void setBarRole(IfcReinforcingBarRoleEnum value);
        virtual void unsetBarRole();
        virtual bool testBarRole() const;
        /// @}

        /// Attribute BarSurface
        /// @{
        virtual IfcReinforcingBarSurfaceEnum getBarSurface();
        virtual IfcReinforcingBarSurfaceEnum getBarSurface() const;
        virtual void setBarSurface(IfcReinforcingBarSurfaceEnum value);
        virtual void unsetBarSurface();
        virtual bool testBarSurface() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcReinforcingBar(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcingBar();

        virtual bool init();

        virtual void copy(const IfcReinforcingBar &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3