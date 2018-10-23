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

#include <ifc2x3/IfcBoundedSurface.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcCurveBoundedPlane Entity.
     *
     */
    class IFC2X3_EXPORT IfcCurveBoundedPlane : public IfcBoundedSurface
    {

        // Attributes
        Step::RefPtr< IfcPlane > m_BasisSurface;
        Step::RefPtr< IfcCurve > m_OuterBoundary;
        Set_IfcCurve_0_n m_InnerBoundaries;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute BasisSurface
        /// @{
        virtual IfcPlane *getBasisSurface();
        virtual const IfcPlane *getBasisSurface() const;
        virtual void setBasisSurface(const Step::RefPtr< IfcPlane > &value);
        virtual void unsetBasisSurface();
        virtual bool testBasisSurface() const;
        /// @}

        /// Attribute OuterBoundary
        /// @{
        virtual IfcCurve *getOuterBoundary();
        virtual const IfcCurve *getOuterBoundary() const;
        virtual void setOuterBoundary(const Step::RefPtr< IfcCurve > &value);
        virtual void unsetOuterBoundary();
        virtual bool testOuterBoundary() const;
        /// @}

        /// Attribute InnerBoundaries
        /// @{
        virtual Set_IfcCurve_0_n &getInnerBoundaries();
        virtual const Set_IfcCurve_0_n &getInnerBoundaries() const;
        virtual void setInnerBoundaries(const Set_IfcCurve_0_n &value);
        virtual void unsetInnerBoundaries();
        virtual bool testInnerBoundaries() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual IfcDimensionCount getDim() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcCurveBoundedPlane(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveBoundedPlane();

        virtual bool init();

        virtual void copy(const IfcCurveBoundedPlane &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3