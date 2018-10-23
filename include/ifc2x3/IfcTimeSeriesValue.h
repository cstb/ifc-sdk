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
     * Generated class for the IfcTimeSeriesValue Entity.
     *
     */
    class IFC2X3_EXPORT IfcTimeSeriesValue : public Step::BaseEntity
    {

        // Attributes
        List_IfcValue_1_n m_ListValues;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ListValues
        /// @{
        virtual List_IfcValue_1_n &getListValues();
        virtual const List_IfcValue_1_n &getListValues() const;
        virtual void setListValues(const List_IfcValue_1_n &value);
        virtual void unsetListValues();
        virtual bool testListValues() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTimeSeriesValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcTimeSeriesValue();

        virtual bool init();

        virtual void copy(const IfcTimeSeriesValue &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3