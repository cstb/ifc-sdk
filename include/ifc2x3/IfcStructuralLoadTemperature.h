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

#include <ifc2x3/IfcStructuralLoadStatic.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStructuralLoadTemperature Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralLoadTemperature : public IfcStructuralLoadStatic
    {

        // Attributes
        IfcThermodynamicTemperatureMeasure m_DeltaT_Constant;
        IfcThermodynamicTemperatureMeasure m_DeltaT_Y;
        IfcThermodynamicTemperatureMeasure m_DeltaT_Z;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DeltaT_Constant
        /// @{
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Constant();
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Constant() const;
        virtual void setDeltaT_Constant(IfcThermodynamicTemperatureMeasure value);
        virtual void unsetDeltaT_Constant();
        virtual bool testDeltaT_Constant() const;
        /// @}

        /// Attribute DeltaT_Y
        /// @{
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Y();
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Y() const;
        virtual void setDeltaT_Y(IfcThermodynamicTemperatureMeasure value);
        virtual void unsetDeltaT_Y();
        virtual bool testDeltaT_Y() const;
        /// @}

        /// Attribute DeltaT_Z
        /// @{
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Z();
        virtual IfcThermodynamicTemperatureMeasure getDeltaT_Z() const;
        virtual void setDeltaT_Z(IfcThermodynamicTemperatureMeasure value);
        virtual void unsetDeltaT_Z();
        virtual bool testDeltaT_Z() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralLoadTemperature(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadTemperature();

        virtual bool init();

        virtual void copy(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3