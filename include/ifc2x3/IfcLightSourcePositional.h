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

#include <ifc2x3/IfcLightSource.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcLightSourcePositional Entity.
     *
     */
    class IFC2X3_EXPORT IfcLightSourcePositional : public IfcLightSource
    {

        // Attributes
        Step::RefPtr< IfcCartesianPoint > m_Position;
        IfcPositiveLengthMeasure m_Radius;
        IfcReal m_ConstantAttenuation;
        IfcReal m_DistanceAttenuation;
        IfcReal m_QuadricAttenuation;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Position
        /// @{
        virtual IfcCartesianPoint *getPosition();
        virtual const IfcCartesianPoint *getPosition() const;
        virtual void setPosition(const Step::RefPtr< IfcCartesianPoint > &value);
        virtual void unsetPosition();
        virtual bool testPosition() const;
        /// @}

        /// Attribute Radius
        /// @{
        virtual IfcPositiveLengthMeasure getRadius();
        virtual IfcPositiveLengthMeasure getRadius() const;
        virtual void setRadius(IfcPositiveLengthMeasure value);
        virtual void unsetRadius();
        virtual bool testRadius() const;
        /// @}

        /// Attribute ConstantAttenuation
        /// @{
        virtual IfcReal getConstantAttenuation();
        virtual IfcReal getConstantAttenuation() const;
        virtual void setConstantAttenuation(IfcReal value);
        virtual void unsetConstantAttenuation();
        virtual bool testConstantAttenuation() const;
        /// @}

        /// Attribute DistanceAttenuation
        /// @{
        virtual IfcReal getDistanceAttenuation();
        virtual IfcReal getDistanceAttenuation() const;
        virtual void setDistanceAttenuation(IfcReal value);
        virtual void unsetDistanceAttenuation();
        virtual bool testDistanceAttenuation() const;
        /// @}

        /// Attribute QuadricAttenuation
        /// @{
        virtual IfcReal getQuadricAttenuation();
        virtual IfcReal getQuadricAttenuation() const;
        virtual void setQuadricAttenuation(IfcReal value);
        virtual void unsetQuadricAttenuation();
        virtual bool testQuadricAttenuation() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcLightSourcePositional(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSourcePositional();

        virtual bool init();

        virtual void copy(const IfcLightSourcePositional &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3