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

#ifndef IFC2X3_IFCDERIVEDUNIT_H
#define IFC2X3_IFCDERIVEDUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDerivedUnitElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcDerivedUnit : public Step::BaseEntity {
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
        Step::Set< Step::RefPtr< IfcDerivedUnitElement > > &getElements();
        /**
         * Sets the value of the explicit attribute 'Elements'.
         * 
         * @param value
         */
        void setElements(const Step::Set< Step::RefPtr< IfcDerivedUnitElement > > &value);
        /**
         */
        IfcDerivedUnitEnum getUnitType();
        /**
         * Sets the value of the explicit attribute 'UnitType'.
         * 
         * @param value
         */
        void setUnitType(IfcDerivedUnitEnum value);
        /**
         */
        IfcLabel getUserDefinedType();
        /**
         * Sets the value of the explicit attribute 'UserDefinedType'.
         * 
         * @param value
         */
        void setUserDefinedType(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDerivedUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcDerivedUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDerivedUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::RefPtr< IfcDerivedUnitElement > > m_elements;
        /**
         */
        IfcDerivedUnitEnum m_unitType;
        /**
         */
        std::string m_userDefinedType;

    };

}

#endif // IFC2X3_IFCDERIVEDUNIT_H
