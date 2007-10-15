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

#ifndef IFC2X3_IFCPROPERTYLISTVALUE_H
#define IFC2X3_IFCPROPERTYLISTVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcSimpleProperty.h"
#include <Step/Referenced.h>
#include "ifc2x3/IfcValue.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertyListValue : public IfcSimpleProperty {
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
        Step::List< Step::RefPtr< IfcValue > > &getListValues();
        /**
         * Sets the value of the explicit attribute 'ListValues'.
         * 
         * @param value
         */
        void setListValues(const Step::List< Step::RefPtr< IfcValue > > &value);
        /**
         */
        IfcUnit *getUnit();
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        void setUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyListValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyListValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyListValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::List< Step::RefPtr< IfcValue > > m_listValues;
        /**
         */
        Step::RefPtr< IfcUnit > m_unit;

    };

}

#endif // IFC2X3_IFCPROPERTYLISTVALUE_H
