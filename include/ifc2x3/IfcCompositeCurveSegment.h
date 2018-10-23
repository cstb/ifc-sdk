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

#include <ifc2x3/IfcGeometricRepresentationItem.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcCompositeCurveSegment Entity.
     *
     */
    class IFC2X3_EXPORT IfcCompositeCurveSegment : public IfcGeometricRepresentationItem
    {

        // Attributes
        IfcTransitionCode m_Transition;
        Step::Boolean m_SameSense;
        Step::RefPtr< IfcCurve > m_ParentCurve;
        // InverseAttributes
        Inverse_Set_IfcCompositeCurve_1_n m_UsingCurves;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Transition
        /// @{
        virtual IfcTransitionCode getTransition();
        virtual IfcTransitionCode getTransition() const;
        virtual void setTransition(IfcTransitionCode value);
        virtual void unsetTransition();
        virtual bool testTransition() const;
        /// @}

        /// Attribute SameSense
        /// @{
        virtual Step::Boolean getSameSense();
        virtual Step::Boolean getSameSense() const;
        virtual void setSameSense(Step::Boolean value);
        virtual void unsetSameSense();
        virtual bool testSameSense() const;
        /// @}

        /// Attribute ParentCurve
        /// @{
        virtual IfcCurve *getParentCurve();
        virtual const IfcCurve *getParentCurve() const;
        virtual void setParentCurve(const Step::RefPtr< IfcCurve > &value);
        virtual void unsetParentCurve();
        virtual bool testParentCurve() const;
        /// @}

        /// Inverse attribute UsingCurves
        /// @{
        virtual Inverse_Set_IfcCompositeCurve_1_n &getUsingCurves();
        virtual const Inverse_Set_IfcCompositeCurve_1_n &getUsingCurves() const;
        virtual bool testUsingCurves() const;

        friend class IfcCompositeCurve;
        /// @}

        /// Derived attributes
        /// @{
        virtual IfcDimensionCount getDim() const;
        /// @}


        friend class Inverted_IfcCompositeCurve_Segments_type;


        friend class ExpressDataSet;

    protected:

        IfcCompositeCurveSegment(Step::Id id, Step::SPFData *args);
        virtual ~IfcCompositeCurveSegment();

        virtual bool init();

        virtual void copy(const IfcCompositeCurveSegment &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3