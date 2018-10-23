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

#include <ifc2x3/IfcBuildingElement.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStairFlight Entity.
     *
     */
    class IFC2X3_EXPORT IfcStairFlight : public IfcBuildingElement
    {

        // Attributes
        Step::Integer m_NumberOfRiser;
        Step::Integer m_NumberOfTreads;
        IfcPositiveLengthMeasure m_RiserHeight;
        IfcPositiveLengthMeasure m_TreadLength;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute NumberOfRiser
        /// @{
        virtual Step::Integer getNumberOfRiser();
        virtual Step::Integer getNumberOfRiser() const;
        virtual void setNumberOfRiser(Step::Integer value);
        virtual void unsetNumberOfRiser();
        virtual bool testNumberOfRiser() const;
        /// @}

        /// Attribute NumberOfTreads
        /// @{
        virtual Step::Integer getNumberOfTreads();
        virtual Step::Integer getNumberOfTreads() const;
        virtual void setNumberOfTreads(Step::Integer value);
        virtual void unsetNumberOfTreads();
        virtual bool testNumberOfTreads() const;
        /// @}

        /// Attribute RiserHeight
        /// @{
        virtual IfcPositiveLengthMeasure getRiserHeight();
        virtual IfcPositiveLengthMeasure getRiserHeight() const;
        virtual void setRiserHeight(IfcPositiveLengthMeasure value);
        virtual void unsetRiserHeight();
        virtual bool testRiserHeight() const;
        /// @}

        /// Attribute TreadLength
        /// @{
        virtual IfcPositiveLengthMeasure getTreadLength();
        virtual IfcPositiveLengthMeasure getTreadLength() const;
        virtual void setTreadLength(IfcPositiveLengthMeasure value);
        virtual void unsetTreadLength();
        virtual bool testTreadLength() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStairFlight(Step::Id id, Step::SPFData *args);
        virtual ~IfcStairFlight();

        virtual bool init();

        virtual void copy(const IfcStairFlight &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3