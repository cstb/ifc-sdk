/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCTABLE_H
#define IFC2X3_IFCTABLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class IfcTable;
    class IfcTableRow;

    /**
     */
    class Inverted_IfcTable_Rows_type : public List_IfcTableRow_1_n {
    public:
        /**
         */
        typedef List_IfcTableRow_1_n::iterator iterator;

        /**
         */
        IfcTable *mOwner;
        /**
         */
        Inverted_IfcTable_Rows_type();
        /**
         * @param owner
         */
        void setOwner(IfcTable *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcTableRow > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcTableRow > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTable : public Step::BaseEntity {
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
