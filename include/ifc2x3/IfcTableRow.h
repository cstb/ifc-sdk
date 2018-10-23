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
     * Generated class for the IfcTableRow Entity.
     *
     */
    class IFC2X3_EXPORT IfcTableRow : public Step::BaseEntity
    {

        // Attributes
        List_IfcValue_1_n m_RowCells;
        Step::Boolean m_IsHeading;
        // InverseAttributes
        Step::ObsPtr< IfcTable > m_OfTable;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RowCells
        /// @{
        virtual List_IfcValue_1_n &getRowCells();
        virtual const List_IfcValue_1_n &getRowCells() const;
        virtual void setRowCells(const List_IfcValue_1_n &value);
        virtual void unsetRowCells();
        virtual bool testRowCells() const;
        /// @}

        /// Attribute IsHeading
        /// @{
        virtual Step::Boolean getIsHeading();
        virtual Step::Boolean getIsHeading() const;
        virtual void setIsHeading(Step::Boolean value);
        virtual void unsetIsHeading();
        virtual bool testIsHeading() const;
        /// @}

        /// Inverse attribute OfTable
        /// @{
        virtual IfcTable *getOfTable();
        virtual const IfcTable *getOfTable() const;
        virtual bool testOfTable() const;

        friend class IfcTable;
        /// @}



        friend class Inverted_IfcTable_Rows_type;


        friend class ExpressDataSet;

    protected:

        IfcTableRow(Step::Id id, Step::SPFData *args);
        virtual ~IfcTableRow();

        virtual bool init();

        virtual void copy(const IfcTableRow &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3