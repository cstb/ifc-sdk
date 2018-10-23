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

#include <ifc2x3/IfcBoundedCurve.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcBSplineCurve Entity.
     *
     */
    class IFC2X3_EXPORT IfcBSplineCurve : public IfcBoundedCurve
    {

        // Attributes
        Step::Integer m_Degree;
        List_IfcCartesianPoint_2_n m_ControlPointsList;
        IfcBSplineCurveForm m_CurveForm;
        Step::Logical m_ClosedCurve;
        Step::Logical m_SelfIntersect;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Degree
        /// @{
        virtual Step::Integer getDegree();
        virtual Step::Integer getDegree() const;
        virtual void setDegree(Step::Integer value);
        virtual void unsetDegree();
        virtual bool testDegree() const;
        /// @}

        /// Attribute ControlPointsList
        /// @{
        virtual List_IfcCartesianPoint_2_n &getControlPointsList();
        virtual const List_IfcCartesianPoint_2_n &getControlPointsList() const;
        virtual void setControlPointsList(const List_IfcCartesianPoint_2_n &value);
        virtual void unsetControlPointsList();
        virtual bool testControlPointsList() const;
        /// @}

        /// Attribute CurveForm
        /// @{
        virtual IfcBSplineCurveForm getCurveForm();
        virtual IfcBSplineCurveForm getCurveForm() const;
        virtual void setCurveForm(IfcBSplineCurveForm value);
        virtual void unsetCurveForm();
        virtual bool testCurveForm() const;
        /// @}

        /// Attribute ClosedCurve
        /// @{
        virtual Step::Logical getClosedCurve();
        virtual Step::Logical getClosedCurve() const;
        virtual void setClosedCurve(Step::Logical value);
        virtual void unsetClosedCurve();
        virtual bool testClosedCurve() const;
        /// @}

        /// Attribute SelfIntersect
        /// @{
        virtual Step::Logical getSelfIntersect();
        virtual Step::Logical getSelfIntersect() const;
        virtual void setSelfIntersect(Step::Logical value);
        virtual void unsetSelfIntersect();
        virtual bool testSelfIntersect() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual Array_IfcCartesianPoint_0_255 getControlPoints() const;
        virtual Step::Integer getUpperIndexOnControlPoints() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcBSplineCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcBSplineCurve();

        virtual bool init();

        virtual void copy(const IfcBSplineCurve &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3