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
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcTable_Rows_type : public List_IfcTableRow_1_n
    {

    public:
        /**
         */
        typedef List_IfcTableRow_1_n::iterator iterator;

        /**
         */
        Inverted_IfcTable_Rows_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcTableRow > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcTableRow > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcTableRow > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcTable;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcTable *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcTable *owner);
    };


    /**
     * Generated class for the IfcTable Entity.
     *
     */
    class IFC2X3_EXPORT IfcTable : public Step::BaseEntity
    {

        // Attributes
        Step::String m_Name;
        // InvertedAttributes
        Inverted_IfcTable_Rows_type m_Rows;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Name
        /// @{
        virtual Step::String getName();
        virtual const Step::String getName() const;
        virtual void setName(const Step::String &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Rows
        /// @{
        virtual List_IfcTableRow_1_n &getRows();
        virtual const List_IfcTableRow_1_n &getRows() const;
        virtual void unsetRows();
        virtual bool testRows() const;
        /// @}

        /// Derived attributes
        /// @{
        virtual Step::Integer getNumberOfCellsInRow() const;
        virtual Step::Integer getNumberOfHeadings() const;
        virtual Step::Integer getNumberOfDataRows() const;
        /// @}




        friend class ExpressDataSet;

    protected:

        IfcTable(Step::Id id, Step::SPFData *args);
        virtual ~IfcTable();

        virtual bool init();

        virtual void copy(const IfcTable &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3