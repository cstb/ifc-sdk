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
     * Generated class for the IfcGridAxis Entity.
     *
     */
    class IFC2X3_EXPORT IfcGridAxis : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_AxisTag;
        Step::RefPtr< IfcCurve > m_AxisCurve;
        IfcBoolean m_SameSense;
        // InverseAttributes
        Inverse_Set_IfcGrid_0_1 m_PartOfU;
        Inverse_Set_IfcGrid_0_1 m_PartOfW;
        Inverse_Set_IfcGrid_0_1 m_PartOfV;
        Inverse_Set_IfcVirtualGridIntersection_0_n m_HasIntersections;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute AxisTag
        /// @{
        virtual IfcLabel getAxisTag();
        virtual const IfcLabel getAxisTag() const;
        virtual void setAxisTag(const IfcLabel &value);
        virtual void unsetAxisTag();
        virtual bool testAxisTag() const;
        /// @}

        /// Attribute AxisCurve
        /// @{
        virtual IfcCurve *getAxisCurve();
        virtual const IfcCurve *getAxisCurve() const;
        virtual void setAxisCurve(const Step::RefPtr< IfcCurve > &value);
        virtual void unsetAxisCurve();
        virtual bool testAxisCurve() const;
        /// @}

        /// Attribute SameSense
        /// @{
        virtual IfcBoolean getSameSense();
        virtual IfcBoolean getSameSense() const;
        virtual void setSameSense(IfcBoolean value);
        virtual void unsetSameSense();
        virtual bool testSameSense() const;
        /// @}

        /// Inverse attribute PartOfU
        /// @{
        virtual Inverse_Set_IfcGrid_0_1 &getPartOfU();
        virtual const Inverse_Set_IfcGrid_0_1 &getPartOfU() const;
        virtual bool testPartOfU() const;

        friend class IfcGrid;
        /// @}

        /// Inverse attribute PartOfW
        /// @{
        virtual Inverse_Set_IfcGrid_0_1 &getPartOfW();
        virtual const Inverse_Set_IfcGrid_0_1 &getPartOfW() const;
        virtual bool testPartOfW() const;

        friend class IfcGrid;
        /// @}

        /// Inverse attribute PartOfV
        /// @{
        virtual Inverse_Set_IfcGrid_0_1 &getPartOfV();
        virtual const Inverse_Set_IfcGrid_0_1 &getPartOfV() const;
        virtual bool testPartOfV() const;

        friend class IfcGrid;
        /// @}

        /// Inverse attribute HasIntersections
        /// @{
        virtual Inverse_Set_IfcVirtualGridIntersection_0_n &getHasIntersections();
        virtual const Inverse_Set_IfcVirtualGridIntersection_0_n &getHasIntersections() const;
        virtual bool testHasIntersections() const;

        friend class IfcVirtualGridIntersection;
        /// @}



        friend class Inverted_IfcVirtualGridIntersection_IntersectingAxes_type;
        friend class Inverted_IfcGrid_UAxes_type;
        friend class Inverted_IfcGrid_VAxes_type;
        friend class Inverted_IfcGrid_WAxes_type;


        friend class ExpressDataSet;

    protected:

        IfcGridAxis(Step::Id id, Step::SPFData *args);
        virtual ~IfcGridAxis();

        virtual bool init();

        virtual void copy(const IfcGridAxis &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3