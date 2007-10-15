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

#ifndef IFC2X3_IFCTABLEROW_H
#define IFC2X3_IFCTABLEROW_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcValue.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcTable;

    /**
     */
    class IFC2X3_DLL_DEF IfcTableRow : public Step::BaseEntity {
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
        Step::List< Step::RefPtr< IfcValue > > &getRowCells();
        /**
         * Sets the value of the explicit attribute 'RowCells'.
         * 
         * @param value
         */
        void setRowCells(const Step::List< Step::RefPtr< IfcValue > > &value);
        /**
         */
        Step::Bool getIsHeading();
        /**
         * Sets the value of the explicit attribute 'IsHeading'.
         * 
         * @param value
         */
        void setIsHeading(Step::Bool value);
        /**
         */
        IfcTable *getOfTable();
        /**
         */
        virtual void release();
        friend class IfcTable;
        friend class ExpressDataSet;

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
        Step::List< Step::RefPtr< IfcValue > > m_rowCells;
        /**
         */
        Step::Bool m_isHeading;
        /**
         */
        Step::ObsPtr< IfcTable > m_ofTable;

    };

}

#endif // IFC2X3_IFCTABLEROW_H
