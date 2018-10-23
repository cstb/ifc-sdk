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
     * Generated class for the IfcReinforcingMesh Entity.
     *
     */
    class IFC2X3_EXPORT IfcReinforcingMesh : public IfcReinforcingElement
    {

        // Attributes
        IfcPositiveLengthMeasure m_MeshLength;
        IfcPositiveLengthMeasure m_MeshWidth;
        IfcPositiveLengthMeasure m_LongitudinalBarNominalDiameter;
        IfcPositiveLengthMeasure m_TransverseBarNominalDiameter;
        IfcAreaMeasure m_LongitudinalBarCrossSectionArea;
        IfcAreaMeasure m_TransverseBarCrossSectionArea;
        IfcPositiveLengthMeasure m_LongitudinalBarSpacing;
        IfcPositiveLengthMeasure m_TransverseBarSpacing;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute MeshLength
        /// @{
        virtual IfcPositiveLengthMeasure getMeshLength();
        virtual IfcPositiveLengthMeasure getMeshLength() const;
        virtual void setMeshLength(IfcPositiveLengthMeasure value);
        virtual void unsetMeshLength();
        virtual bool testMeshLength() const;
        /// @}

        /// Attribute MeshWidth
        /// @{
        virtual IfcPositiveLengthMeasure getMeshWidth();
        virtual IfcPositiveLengthMeasure getMeshWidth() const;
        virtual void setMeshWidth(IfcPositiveLengthMeasure value);
        virtual void unsetMeshWidth();
        virtual bool testMeshWidth() const;
        /// @}

        /// Attribute LongitudinalBarNominalDiameter
        /// @{
        virtual IfcPositiveLengthMeasure getLongitudinalBarNominalDiameter();
        virtual IfcPositiveLengthMeasure getLongitudinalBarNominalDiameter() const;
        virtual void setLongitudinalBarNominalDiameter(IfcPositiveLengthMeasure value);
        virtual void unsetLongitudinalBarNominalDiameter();
        virtual bool testLongitudinalBarNominalDiameter() const;
        /// @}

        /// Attribute TransverseBarNominalDiameter
        /// @{
        virtual IfcPositiveLengthMeasure getTransverseBarNominalDiameter();
        virtual IfcPositiveLengthMeasure getTransverseBarNominalDiameter() const;
        virtual void setTransverseBarNominalDiameter(IfcPositiveLengthMeasure value);
        virtual void unsetTransverseBarNominalDiameter();
        virtual bool testTransverseBarNominalDiameter() const;
        /// @}

        /// Attribute LongitudinalBarCrossSectionArea
        /// @{
        virtual IfcAreaMeasure getLongitudinalBarCrossSectionArea();
        virtual IfcAreaMeasure getLongitudinalBarCrossSectionArea() const;
        virtual void setLongitudinalBarCrossSectionArea(IfcAreaMeasure value);
        virtual void unsetLongitudinalBarCrossSectionArea();
        virtual bool testLongitudinalBarCrossSectionArea() const;
        /// @}

        /// Attribute TransverseBarCrossSectionArea
        /// @{
        virtual IfcAreaMeasure getTransverseBarCrossSectionArea();
        virtual IfcAreaMeasure getTransverseBarCrossSectionArea() const;
        virtual void setTransverseBarCrossSectionArea(IfcAreaMeasure value);
        virtual void unsetTransverseBarCrossSectionArea();
        virtual bool testTransverseBarCrossSectionArea() const;
        /// @}

        /// Attribute LongitudinalBarSpacing
        /// @{
        virtual IfcPositiveLengthMeasure getLongitudinalBarSpacing();
        virtual IfcPositiveLengthMeasure getLongitudinalBarSpacing() const;
        virtual void setLongitudinalBarSpacing(IfcPositiveLengthMeasure value);
        virtual void unsetLongitudinalBarSpacing();
        virtual bool testLongitudinalBarSpacing() const;
        /// @}

        /// Attribute TransverseBarSpacing
        /// @{
        virtual IfcPositiveLengthMeasure getTransverseBarSpacing();
        virtual IfcPositiveLengthMeasure getTransverseBarSpacing() const;
        virtual void setTransverseBarSpacing(IfcPositiveLengthMeasure value);
        virtual void unsetTransverseBarSpacing();
        virtual bool testTransverseBarSpacing() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcReinforcingMesh(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcingMesh();

        virtual bool init();

        virtual void copy(const IfcReinforcingMesh &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3