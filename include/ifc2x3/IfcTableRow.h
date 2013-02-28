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

#ifndef IFC2X3_IFCTABLEROW_H
#define IFC2X3_IFCTABLEROW_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcTable;

    /**
     * Generated class for the IfcTableRow Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTableRow : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'RowCells'.
         * 
         */
        virtual List_IfcValue_1_n &getRowCells();
        /**
         * (const) Returns the value of the explicit attribute 'RowCells'.
         * 
         * @return the value of the explicit attribute 'RowCells'
         */
        virtual const List_IfcValue_1_n &getRowCells() const;
        /**
         * Sets the value of the explicit attribute 'RowCells'.
         * 
         * @param value
         */
        virtual void setRowCells(const List_IfcValue_1_n &value);
        /**
         * unset the attribute 'RowCells'.
         * 
         */
        virtual void unsetRowCells();
        /**
         * Test if the attribute 'RowCells' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRowCells() const;
        /**
         * Gets the value of the explicit attribute 'IsHeading'.
         * 
         */
        virtual Step::Boolean getIsHeading();
        /**
         * (const) Returns the value of the explicit attribute 'IsHeading'.
         * 
         * @return the value of the explicit attribute 'IsHeading'
         */
        virtual const Step::Boolean getIsHeading() const;
        /**
         * Sets the value of the explicit attribute 'IsHeading'.
         * 
         * @param value
         */
        virtual void setIsHeading(Step::Boolean value);
        /**
         * unset the attribute 'IsHeading'.
         * 
         */
        virtual void unsetIsHeading();
        /**
         * Test if the attribute 'IsHeading' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsHeading() const;
        /**
         * Gets the value of the inverse attribute 'OfTable'.
         * 
         */
        IfcTable *getOfTable();
        /**
         * (const) Returns the value of the explicit attribute 'OfTable'.
         * 
         * @return the value of the explicit attribute 'OfTable'
         */
        virtual const IfcTable *getOfTable() const;
        /**
         * Test if the attribute 'OfTable' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOfTable() const;
        friend class IfcTable;
        friend class ExpressDataSet;
        friend class Inverted_IfcTable_Rows_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTableRow(Step::Id id, Step::SPFData *args);
        virtual ~IfcTableRow();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTableRow &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcValue_1_n m_rowCells;
        /**
         */
        Step::Boolean m_isHeading;
        /**
         */
        Step::ObsPtr< IfcTable > m_ofTable;

    };

}

#endif // IFC2X3_IFCTABLEROW_H
