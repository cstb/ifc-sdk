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
     * Generated class for the IfcCartesianTransformationOperator Entity.
     *
     */
    class IFC2X3_EXPORT IfcCartesianTransformationOperator : public IfcGeometricRepresentationItem
    {

        // Attributes
        Step::RefPtr< IfcDirection > m_Axis1;
        Step::RefPtr< IfcDirection > m_Axis2;
        Step::RefPtr< IfcCartesianPoint > m_LocalOrigin;
        Step::Real m_Scale;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Axis1
        /// @{
        virtual IfcDirection *getAxis1();
        virtual const IfcDirection *getAxis1() const;
        virtual void setAxis1(const Step::RefPtr< IfcDirection > &value);
        virtual void unsetAxis1();
        virtual bool testAxis1() const;
        /// @}

        /// Attribute Axis2
        /// @{
        virtual IfcDirection *getAxis2();
        virtual const IfcDirection *getAxis2() const;
        virtual void setAxis2(const Step::RefPtr< IfcDirection > &value);
        virtual void unsetAxis2();
        virtual bool testAxis2() const;
        /// @}

        /// Attribute LocalOrigin
        /// @{
        virtual IfcCartesianPoint *getLocalOrigin();
        virtual const IfcCartesianPoint *getLocalOrigin() const;
        virtual void setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value);
        virtual void unsetLocalOrigin();
        virtual bool testLocalOrigin() const;
        /// @}

        /// Attribute Scale
        /// @{
        virtual Step::Real getScale();
        virtual Step::Real getScale() const;
        virtual void setScale(Step::Real value);
        virtual void unsetScale();
        virtual bool testScale() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual Step::Real getScl() const;
        virtual IfcDimensionCount getDim() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcCartesianTransformationOperator(Step::Id id, Step::SPFData *args);
        virtual ~IfcCartesianTransformationOperator();

        virtual bool init();

        virtual void copy(const IfcCartesianTransformationOperator &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3