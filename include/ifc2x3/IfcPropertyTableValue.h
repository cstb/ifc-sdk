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

#ifndef IFC2X3_IFCPROPERTYTABLEVALUE_H
#define IFC2X3_IFCPROPERTYTABLEVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcSimpleProperty.h"
#include <Step/Referenced.h>
#include "ifc2x3/IfcValue.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertyTableValue : public IfcSimpleProperty {
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
        Step::List< Step::RefPtr< IfcValue > > &getDefiningValues();
        /**
         * Sets the value of the explicit attribute 'DefiningValues'.
         * 
         * @param value
         */
        void setDefiningValues(const Step::List< Step::RefPtr< IfcValue > > &value);
        /**
         */
        Step::List< Step::RefPtr< IfcValue > > &getDefinedValues();
        /**
         * Sets the value of the explicit attribute 'DefinedValues'.
         * 
         * @param value
         */
        void setDefinedValues(const Step::List< Step::RefPtr< IfcValue > > &value);
        /**
         */
        IfcText getExpression();
        /**
         * Sets the value of the explicit attribute 'Expression'.
         * 
         * @param value
         */
        void setExpression(const IfcText &value);
        /**
         */
        IfcUnit *getDefiningUnit();
        /**
         * Sets the value of the explicit attribute 'DefiningUnit'.
         * 
         * @param value
         */
        void setDefiningUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         */
        IfcUnit *getDefinedUnit();
        /**
         * Sets the value of the explicit attribute 'DefinedUnit'.
         * 
         * @param value
         */
        void setDefinedUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyTableValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyTableValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyTableValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::List< Step::RefPtr< IfcValue > > m_definingValues;
        /**
         */
        Step::List< Step::RefPtr< IfcValue > > m_definedValues;
        /**
         */
        std::string m_expression;
        /**
         */
        Step::RefPtr< IfcUnit > m_definingUnit;
        /**
         */
        Step::RefPtr< IfcUnit > m_definedUnit;

    };

}

#endif // IFC2X3_IFCPROPERTYTABLEVALUE_H
