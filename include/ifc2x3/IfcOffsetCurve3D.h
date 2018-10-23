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

#include <ifc2x3/IfcCurve.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcOffsetCurve3D Entity.
     *
     */
    class IFC2X3_EXPORT IfcOffsetCurve3D : public IfcCurve
    {

        // Attributes
        Step::RefPtr< IfcCurve > m_BasisCurve;
        IfcLengthMeasure m_Distance;
        Step::Logical m_SelfIntersect;
        Step::RefPtr< IfcDirection > m_RefDirection;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute BasisCurve
        /// @{
        virtual IfcCurve *getBasisCurve();
        virtual const IfcCurve *getBasisCurve() const;
        virtual void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
        virtual void unsetBasisCurve();
        virtual bool testBasisCurve() const;
        /// @}

        /// Attribute Distance
        /// @{
        virtual IfcLengthMeasure getDistance();
        virtual IfcLengthMeasure getDistance() const;
        virtual void setDistance(IfcLengthMeasure value);
        virtual void unsetDistance();
        virtual bool testDistance() const;
        /// @}

        /// Attribute SelfIntersect
        /// @{
        virtual Step::Logical getSelfIntersect();
        virtual Step::Logical getSelfIntersect() const;
        virtual void setSelfIntersect(Step::Logical value);
        virtual void unsetSelfIntersect();
        virtual bool testSelfIntersect() const;
        /// @}

        /// Attribute RefDirection
        /// @{
        virtual IfcDirection *getRefDirection();
        virtual const IfcDirection *getRefDirection() const;
        virtual void setRefDirection(const Step::RefPtr< IfcDirection > &value);
        virtual void unsetRefDirection();
        virtual bool testRefDirection() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcOffsetCurve3D(Step::Id id, Step::SPFData *args);
        virtual ~IfcOffsetCurve3D();

        virtual bool init();

        virtual void copy(const IfcOffsetCurve3D &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3