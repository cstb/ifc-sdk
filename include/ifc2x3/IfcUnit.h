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

#ifndef IFC2X3_IFCUNIT_H
#define IFC2X3_IFCUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDerivedUnit;
    class IfcMonetaryUnit;
    class IfcNamedUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcUnit : public Step::BaseObject {
    public:
        /**
 */
enum IfcUnit_select {
            IFCDERIVEDUNIT,
            IFCNAMEDUNIT,
            IFCMONETARYUNIT,
            UNSET,
        };

        union IfcUnit_union {
            IfcDerivedUnit *m_IfcDerivedUnit;
            IfcNamedUnit *m_IfcNamedUnit;
            IfcMonetaryUnit *m_IfcMonetaryUnit;
        };
        /**
         */
        IfcUnit();
        virtual ~IfcUnit();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcUnit &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcUnit_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcDerivedUnit *getIfcDerivedUnit();
        /**
         * @param value
         */
        void setIfcDerivedUnit(IfcDerivedUnit *value);
        /**
         */
        IfcNamedUnit *getIfcNamedUnit();
        /**
         * @param value
         */
        void setIfcNamedUnit(IfcNamedUnit *value);
        /**
         */
        IfcMonetaryUnit *getIfcMonetaryUnit();
        /**
         * @param value
         */
        void setIfcMonetaryUnit(IfcMonetaryUnit *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcUnit(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcUnit_select m_type;
        /**
         */
        IfcUnit_union m_IfcUnit_union;

    };

}

#endif // IFC2X3_IFCUNIT_H
