// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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

#ifndef IFC2X3_IFCTABLE_H
#define IFC2X3_IFCTABLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcTable;
    class IfcTableRow;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcTable_Rows_type : public List_IfcTableRow_1_n {
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
        virtual void push_back(const Step::RefPtr< IfcTableRow > &value) throw(std::out_of_range);
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

    class CopyOp;

    /**
     * Generated class for the IfcTable Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTable : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual Step::String getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const Step::String getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const Step::String &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'Rows'.
         * 
         */
        virtual List_IfcTableRow_1_n &getRows();
        /**
         * (const) Returns the value of the explicit attribute 'Rows'.
         * 
         * @return the value of the explicit attribute 'Rows'
         */
        virtual const List_IfcTableRow_1_n &getRows() const;
        /**
         * unset the attribute 'Rows'.
         * 
         */
        virtual void unsetRows();
        /**
         * Test if the attribute 'Rows' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRows() const;
        /**
         * Gets the value of the derived attribute 'NumberOfCellsInRow'.
         * 
         */
        virtual Step::Integer getNumberOfCellsInRow() const;
        /**
         * Gets the value of the derived attribute 'NumberOfHeadings'.
         * 
         */
        virtual Step::Integer getNumberOfHeadings() const;
        /**
         * Gets the value of the derived attribute 'NumberOfDataRows'.
         * 
         */
        virtual Step::Integer getNumberOfDataRows() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTable(Step::Id id, Step::SPFData *args);
        virtual ~IfcTable();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTable &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Inverted_IfcTable_Rows_type m_rows;

    };

}

#endif // IFC2X3_IFCTABLE_H
