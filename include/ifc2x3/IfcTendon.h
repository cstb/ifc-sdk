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
     * Generated class for the IfcTendon Entity.
     *
     */
    class IFC2X3_EXPORT IfcTendon : public IfcReinforcingElement
    {

        // Attributes
        IfcTendonTypeEnum m_PredefinedType;
        IfcPositiveLengthMeasure m_NominalDiameter;
        IfcAreaMeasure m_CrossSectionArea;
        IfcForceMeasure m_TensionForce;
        IfcPressureMeasure m_PreStress;
        IfcNormalisedRatioMeasure m_FrictionCoefficient;
        IfcPositiveLengthMeasure m_AnchorageSlip;
        IfcPositiveLengthMeasure m_MinCurvatureRadius;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PredefinedType
        /// @{
        virtual IfcTendonTypeEnum getPredefinedType();
        virtual IfcTendonTypeEnum getPredefinedType() const;
        virtual void setPredefinedType(IfcTendonTypeEnum value);
        virtual void unsetPredefinedType();
        virtual bool testPredefinedType() const;
        /// @}

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

        /// Attribute TensionForce
        /// @{
        virtual IfcForceMeasure getTensionForce();
        virtual IfcForceMeasure getTensionForce() const;
        virtual void setTensionForce(IfcForceMeasure value);
        virtual void unsetTensionForce();
        virtual bool testTensionForce() const;
        /// @}

        /// Attribute PreStress
        /// @{
        virtual IfcPressureMeasure getPreStress();
        virtual IfcPressureMeasure getPreStress() const;
        virtual void setPreStress(IfcPressureMeasure value);
        virtual void unsetPreStress();
        virtual bool testPreStress() const;
        /// @}

        /// Attribute FrictionCoefficient
        /// @{
        virtual IfcNormalisedRatioMeasure getFrictionCoefficient();
        virtual IfcNormalisedRatioMeasure getFrictionCoefficient() const;
        virtual void setFrictionCoefficient(IfcNormalisedRatioMeasure value);
        virtual void unsetFrictionCoefficient();
        virtual bool testFrictionCoefficient() const;
        /// @}

        /// Attribute AnchorageSlip
        /// @{
        virtual IfcPositiveLengthMeasure getAnchorageSlip();
        virtual IfcPositiveLengthMeasure getAnchorageSlip() const;
        virtual void setAnchorageSlip(IfcPositiveLengthMeasure value);
        virtual void unsetAnchorageSlip();
        virtual bool testAnchorageSlip() const;
        /// @}

        /// Attribute MinCurvatureRadius
        /// @{
        virtual IfcPositiveLengthMeasure getMinCurvatureRadius();
        virtual IfcPositiveLengthMeasure getMinCurvatureRadius() const;
        virtual void setMinCurvatureRadius(IfcPositiveLengthMeasure value);
        virtual void unsetMinCurvatureRadius();
        virtual bool testMinCurvatureRadius() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTendon(Step::Id id, Step::SPFData *args);
        virtual ~IfcTendon();

        virtual bool init();

        virtual void copy(const IfcTendon &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3