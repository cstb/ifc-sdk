/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTableRow;

    /**
     */
    class IFC2X3_DLL_DEF IfcTable : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        std::string getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const std::string &value);
        /**
         */
        Step::List< Step::RefPtr< IfcTableRow > > &getRows();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_Rows_type : public Step::List< Step::RefPtr< IfcTableRow > > {
        public:
            /**
             */
            IfcTable *mOwner;
            /**
             */
            Inverted_Rows_type();
            /**
             * @param owner
             */
            void setOwner(IfcTable *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcTableRow > &value);

        };


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
        std::string m_name;
        /**
         */
        Inverted_Rows_type m_rows;

    };

}

#endif // IFC2X3_IFCTABLE_H
