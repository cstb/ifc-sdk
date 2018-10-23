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

#include <ifc2x3/IfcGeneralProfileProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStructuralProfileProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralProfileProperties : public IfcGeneralProfileProperties
    {

        // Attributes
        IfcMomentOfInertiaMeasure m_TorsionalConstantX;
        IfcMomentOfInertiaMeasure m_MomentOfInertiaYZ;
        IfcMomentOfInertiaMeasure m_MomentOfInertiaY;
        IfcMomentOfInertiaMeasure m_MomentOfInertiaZ;
        IfcWarpingConstantMeasure m_WarpingConstant;
        IfcLengthMeasure m_ShearCentreZ;
        IfcLengthMeasure m_ShearCentreY;
        IfcAreaMeasure m_ShearDeformationAreaZ;
        IfcAreaMeasure m_ShearDeformationAreaY;
        IfcSectionModulusMeasure m_MaximumSectionModulusY;
        IfcSectionModulusMeasure m_MinimumSectionModulusY;
        IfcSectionModulusMeasure m_MaximumSectionModulusZ;
        IfcSectionModulusMeasure m_MinimumSectionModulusZ;
        IfcSectionModulusMeasure m_TorsionalSectionModulus;
        IfcLengthMeasure m_CentreOfGravityInX;
        IfcLengthMeasure m_CentreOfGravityInY;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TorsionalConstantX
        /// @{
        virtual IfcMomentOfInertiaMeasure getTorsionalConstantX();
        virtual IfcMomentOfInertiaMeasure getTorsionalConstantX() const;
        virtual void setTorsionalConstantX(IfcMomentOfInertiaMeasure value);
        virtual void unsetTorsionalConstantX();
        virtual bool testTorsionalConstantX() const;
        /// @}

        /// Attribute MomentOfInertiaYZ
        /// @{
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaYZ();
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaYZ() const;
        virtual void setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value);
        virtual void unsetMomentOfInertiaYZ();
        virtual bool testMomentOfInertiaYZ() const;
        /// @}

        /// Attribute MomentOfInertiaY
        /// @{
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaY();
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaY() const;
        virtual void setMomentOfInertiaY(IfcMomentOfInertiaMeasure value);
        virtual void unsetMomentOfInertiaY();
        virtual bool testMomentOfInertiaY() const;
        /// @}

        /// Attribute MomentOfInertiaZ
        /// @{
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaZ();
        virtual IfcMomentOfInertiaMeasure getMomentOfInertiaZ() const;
        virtual void setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value);
        virtual void unsetMomentOfInertiaZ();
        virtual bool testMomentOfInertiaZ() const;
        /// @}

        /// Attribute WarpingConstant
        /// @{
        virtual IfcWarpingConstantMeasure getWarpingConstant();
        virtual IfcWarpingConstantMeasure getWarpingConstant() const;
        virtual void setWarpingConstant(IfcWarpingConstantMeasure value);
        virtual void unsetWarpingConstant();
        virtual bool testWarpingConstant() const;
        /// @}

        /// Attribute ShearCentreZ
        /// @{
        virtual IfcLengthMeasure getShearCentreZ();
        virtual IfcLengthMeasure getShearCentreZ() const;
        virtual void setShearCentreZ(IfcLengthMeasure value);
        virtual void unsetShearCentreZ();
        virtual bool testShearCentreZ() const;
        /// @}

        /// Attribute ShearCentreY
        /// @{
        virtual IfcLengthMeasure getShearCentreY();
        virtual IfcLengthMeasure getShearCentreY() const;
        virtual void setShearCentreY(IfcLengthMeasure value);
        virtual void unsetShearCentreY();
        virtual bool testShearCentreY() const;
        /// @}

        /// Attribute ShearDeformationAreaZ
        /// @{
        virtual IfcAreaMeasure getShearDeformationAreaZ();
        virtual IfcAreaMeasure getShearDeformationAreaZ() const;
        virtual void setShearDeformationAreaZ(IfcAreaMeasure value);
        virtual void unsetShearDeformationAreaZ();
        virtual bool testShearDeformationAreaZ() const;
        /// @}

        /// Attribute ShearDeformationAreaY
        /// @{
        virtual IfcAreaMeasure getShearDeformationAreaY();
        virtual IfcAreaMeasure getShearDeformationAreaY() const;
        virtual void setShearDeformationAreaY(IfcAreaMeasure value);
        virtual void unsetShearDeformationAreaY();
        virtual bool testShearDeformationAreaY() const;
        /// @}

        /// Attribute MaximumSectionModulusY
        /// @{
        virtual IfcSectionModulusMeasure getMaximumSectionModulusY();
        virtual IfcSectionModulusMeasure getMaximumSectionModulusY() const;
        virtual void setMaximumSectionModulusY(IfcSectionModulusMeasure value);
        virtual void unsetMaximumSectionModulusY();
        virtual bool testMaximumSectionModulusY() const;
        /// @}

        /// Attribute MinimumSectionModulusY
        /// @{
        virtual IfcSectionModulusMeasure getMinimumSectionModulusY();
        virtual IfcSectionModulusMeasure getMinimumSectionModulusY() const;
        virtual void setMinimumSectionModulusY(IfcSectionModulusMeasure value);
        virtual void unsetMinimumSectionModulusY();
        virtual bool testMinimumSectionModulusY() const;
        /// @}

        /// Attribute MaximumSectionModulusZ
        /// @{
        virtual IfcSectionModulusMeasure getMaximumSectionModulusZ();
        virtual IfcSectionModulusMeasure getMaximumSectionModulusZ() const;
        virtual void setMaximumSectionModulusZ(IfcSectionModulusMeasure value);
        virtual void unsetMaximumSectionModulusZ();
        virtual bool testMaximumSectionModulusZ() const;
        /// @}

        /// Attribute MinimumSectionModulusZ
        /// @{
        virtual IfcSectionModulusMeasure getMinimumSectionModulusZ();
        virtual IfcSectionModulusMeasure getMinimumSectionModulusZ() const;
        virtual void setMinimumSectionModulusZ(IfcSectionModulusMeasure value);
        virtual void unsetMinimumSectionModulusZ();
        virtual bool testMinimumSectionModulusZ() const;
        /// @}

        /// Attribute TorsionalSectionModulus
        /// @{
        virtual IfcSectionModulusMeasure getTorsionalSectionModulus();
        virtual IfcSectionModulusMeasure getTorsionalSectionModulus() const;
        virtual void setTorsionalSectionModulus(IfcSectionModulusMeasure value);
        virtual void unsetTorsionalSectionModulus();
        virtual bool testTorsionalSectionModulus() const;
        /// @}

        /// Attribute CentreOfGravityInX
        /// @{
        virtual IfcLengthMeasure getCentreOfGravityInX();
        virtual IfcLengthMeasure getCentreOfGravityInX() const;
        virtual void setCentreOfGravityInX(IfcLengthMeasure value);
        virtual void unsetCentreOfGravityInX();
        virtual bool testCentreOfGravityInX() const;
        /// @}

        /// Attribute CentreOfGravityInY
        /// @{
        virtual IfcLengthMeasure getCentreOfGravityInY();
        virtual IfcLengthMeasure getCentreOfGravityInY() const;
        virtual void setCentreOfGravityInY(IfcLengthMeasure value);
        virtual void unsetCentreOfGravityInY();
        virtual bool testCentreOfGravityInY() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralProfileProperties();

        virtual bool init();

        virtual void copy(const IfcStructuralProfileProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3