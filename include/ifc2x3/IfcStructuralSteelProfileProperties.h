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

#include <ifc2x3/IfcStructuralProfileProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStructuralSteelProfileProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralSteelProfileProperties : public IfcStructuralProfileProperties
    {

        // Attributes
        IfcAreaMeasure m_ShearAreaZ;
        IfcAreaMeasure m_ShearAreaY;
        IfcPositiveRatioMeasure m_PlasticShapeFactorY;
        IfcPositiveRatioMeasure m_PlasticShapeFactorZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ShearAreaZ
        /// @{
        virtual IfcAreaMeasure getShearAreaZ();
        virtual IfcAreaMeasure getShearAreaZ() const;
        virtual void setShearAreaZ(IfcAreaMeasure value);
        virtual void unsetShearAreaZ();
        virtual bool testShearAreaZ() const;
        /// @}

        /// Attribute ShearAreaY
        /// @{
        virtual IfcAreaMeasure getShearAreaY();
        virtual IfcAreaMeasure getShearAreaY() const;
        virtual void setShearAreaY(IfcAreaMeasure value);
        virtual void unsetShearAreaY();
        virtual bool testShearAreaY() const;
        /// @}

        /// Attribute PlasticShapeFactorY
        /// @{
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorY();
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorY() const;
        virtual void setPlasticShapeFactorY(IfcPositiveRatioMeasure value);
        virtual void unsetPlasticShapeFactorY();
        virtual bool testPlasticShapeFactorY() const;
        /// @}

        /// Attribute PlasticShapeFactorZ
        /// @{
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorZ();
        virtual IfcPositiveRatioMeasure getPlasticShapeFactorZ() const;
        virtual void setPlasticShapeFactorZ(IfcPositiveRatioMeasure value);
        virtual void unsetPlasticShapeFactorZ();
        virtual bool testPlasticShapeFactorZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralSteelProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralSteelProfileProperties();

        virtual bool init();

        virtual void copy(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3