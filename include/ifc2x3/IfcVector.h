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
     * Generated class for the IfcVector Entity.
     *
     */
    class IFC2X3_EXPORT IfcVector : public IfcGeometricRepresentationItem
    {

        // Attributes
        Step::RefPtr< IfcDirection > m_Orientation;
        IfcLengthMeasure m_Magnitude;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Orientation
        /// @{
        virtual IfcDirection *getOrientation();
        virtual const IfcDirection *getOrientation() const;
        virtual void setOrientation(const Step::RefPtr< IfcDirection > &value);
        virtual void unsetOrientation();
        virtual bool testOrientation() const;
        /// @}

        /// Attribute Magnitude
        /// @{
        virtual IfcLengthMeasure getMagnitude();
        virtual IfcLengthMeasure getMagnitude() const;
        virtual void setMagnitude(IfcLengthMeasure value);
        virtual void unsetMagnitude();
        virtual bool testMagnitude() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual IfcDimensionCount getDim() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcVector(Step::Id id, Step::SPFData *args);
        virtual ~IfcVector();

        virtual bool init();

        virtual void copy(const IfcVector &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3