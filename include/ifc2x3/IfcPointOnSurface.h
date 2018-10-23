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

#include <ifc2x3/IfcPoint.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcPointOnSurface Entity.
     *
     */
    class IFC2X3_EXPORT IfcPointOnSurface : public IfcPoint
    {

        // Attributes
        Step::RefPtr< IfcSurface > m_BasisSurface;
        IfcParameterValue m_PointParameterU;
        IfcParameterValue m_PointParameterV;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute BasisSurface
        /// @{
        virtual IfcSurface *getBasisSurface();
        virtual const IfcSurface *getBasisSurface() const;
        virtual void setBasisSurface(const Step::RefPtr< IfcSurface > &value);
        virtual void unsetBasisSurface();
        virtual bool testBasisSurface() const;
        /// @}

        /// Attribute PointParameterU
        /// @{
        virtual IfcParameterValue getPointParameterU();
        virtual IfcParameterValue getPointParameterU() const;
        virtual void setPointParameterU(IfcParameterValue value);
        virtual void unsetPointParameterU();
        virtual bool testPointParameterU() const;
        /// @}

        /// Attribute PointParameterV
        /// @{
        virtual IfcParameterValue getPointParameterV();
        virtual IfcParameterValue getPointParameterV() const;
        virtual void setPointParameterV(IfcParameterValue value);
        virtual void unsetPointParameterV();
        virtual bool testPointParameterV() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual IfcDimensionCount getDim() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcPointOnSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcPointOnSurface();

        virtual bool init();

        virtual void copy(const IfcPointOnSurface &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3