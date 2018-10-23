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
     * Generated class for the IfcRectangularTrimmedSurface Entity.
     *
     */
    class IFC2X3_EXPORT IfcRectangularTrimmedSurface : public IfcBoundedSurface
    {

        // Attributes
        Step::RefPtr< IfcSurface > m_BasisSurface;
        IfcParameterValue m_U1;
        IfcParameterValue m_V1;
        IfcParameterValue m_U2;
        IfcParameterValue m_V2;
        Step::Boolean m_Usense;
        Step::Boolean m_Vsense;

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

        /// Attribute U1
        /// @{
        virtual IfcParameterValue getU1();
        virtual IfcParameterValue getU1() const;
        virtual void setU1(IfcParameterValue value);
        virtual void unsetU1();
        virtual bool testU1() const;
        /// @}

        /// Attribute V1
        /// @{
        virtual IfcParameterValue getV1();
        virtual IfcParameterValue getV1() const;
        virtual void setV1(IfcParameterValue value);
        virtual void unsetV1();
        virtual bool testV1() const;
        /// @}

        /// Attribute U2
        /// @{
        virtual IfcParameterValue getU2();
        virtual IfcParameterValue getU2() const;
        virtual void setU2(IfcParameterValue value);
        virtual void unsetU2();
        virtual bool testU2() const;
        /// @}

        /// Attribute V2
        /// @{
        virtual IfcParameterValue getV2();
        virtual IfcParameterValue getV2() const;
        virtual void setV2(IfcParameterValue value);
        virtual void unsetV2();
        virtual bool testV2() const;
        /// @}

        /// Attribute Usense
        /// @{
        virtual Step::Boolean getUsense();
        virtual Step::Boolean getUsense() const;
        virtual void setUsense(Step::Boolean value);
        virtual void unsetUsense();
        virtual bool testUsense() const;
        /// @}

        /// Attribute Vsense
        /// @{
        virtual Step::Boolean getVsense();
        virtual Step::Boolean getVsense() const;
        virtual void setVsense(Step::Boolean value);
        virtual void unsetVsense();
        virtual bool testVsense() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual IfcDimensionCount getDim() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcRectangularTrimmedSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcRectangularTrimmedSurface();

        virtual bool init();

        virtual void copy(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3