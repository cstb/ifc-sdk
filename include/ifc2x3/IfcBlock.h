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

#include <ifc2x3/IfcCsgPrimitive3D.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcBlock Entity.
     *
     */
    class IFC2X3_EXPORT IfcBlock : public IfcCsgPrimitive3D
    {

        // Attributes
        IfcPositiveLengthMeasure m_XLength;
        IfcPositiveLengthMeasure m_YLength;
        IfcPositiveLengthMeasure m_ZLength;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute XLength
        /// @{
        virtual IfcPositiveLengthMeasure getXLength();
        virtual IfcPositiveLengthMeasure getXLength() const;
        virtual void setXLength(IfcPositiveLengthMeasure value);
        virtual void unsetXLength();
        virtual bool testXLength() const;
        /// @}

        /// Attribute YLength
        /// @{
        virtual IfcPositiveLengthMeasure getYLength();
        virtual IfcPositiveLengthMeasure getYLength() const;
        virtual void setYLength(IfcPositiveLengthMeasure value);
        virtual void unsetYLength();
        virtual bool testYLength() const;
        /// @}

        /// Attribute ZLength
        /// @{
        virtual IfcPositiveLengthMeasure getZLength();
        virtual IfcPositiveLengthMeasure getZLength() const;
        virtual void setZLength(IfcPositiveLengthMeasure value);
        virtual void unsetZLength();
        virtual bool testZLength() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcBlock(Step::Id id, Step::SPFData *args);
        virtual ~IfcBlock();

        virtual bool init();

        virtual void copy(const IfcBlock &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3