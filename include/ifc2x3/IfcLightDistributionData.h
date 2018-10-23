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
     * Generated class for the IfcLightDistributionData Entity.
     *
     */
    class IFC2X3_EXPORT IfcLightDistributionData : public Step::BaseEntity
    {

        // Attributes
        IfcPlaneAngleMeasure m_MainPlaneAngle;
        List_IfcPlaneAngleMeasure_1_n m_SecondaryPlaneAngle;
        List_IfcLuminousIntensityDistributionMeasure_1_n m_LuminousIntensity;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute MainPlaneAngle
        /// @{
        virtual IfcPlaneAngleMeasure getMainPlaneAngle();
        virtual IfcPlaneAngleMeasure getMainPlaneAngle() const;
        virtual void setMainPlaneAngle(IfcPlaneAngleMeasure value);
        virtual void unsetMainPlaneAngle();
        virtual bool testMainPlaneAngle() const;
        /// @}

        /// Attribute SecondaryPlaneAngle
        /// @{
        virtual List_IfcPlaneAngleMeasure_1_n &getSecondaryPlaneAngle();
        virtual const List_IfcPlaneAngleMeasure_1_n &getSecondaryPlaneAngle() const;
        virtual void setSecondaryPlaneAngle(const List_IfcPlaneAngleMeasure_1_n &value);
        virtual void unsetSecondaryPlaneAngle();
        virtual bool testSecondaryPlaneAngle() const;
        /// @}

        /// Attribute LuminousIntensity
        /// @{
        virtual List_IfcLuminousIntensityDistributionMeasure_1_n &getLuminousIntensity();
        virtual const List_IfcLuminousIntensityDistributionMeasure_1_n &getLuminousIntensity() const;
        virtual void setLuminousIntensity(const List_IfcLuminousIntensityDistributionMeasure_1_n &value);
        virtual void unsetLuminousIntensity();
        virtual bool testLuminousIntensity() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcLightDistributionData(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightDistributionData();

        virtual bool init();

        virtual void copy(const IfcLightDistributionData &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3