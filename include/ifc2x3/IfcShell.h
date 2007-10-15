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

#ifndef IFC2X3_IFCSHELL_H
#define IFC2X3_IFCSHELL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcClosedShell;
    class IfcOpenShell;

    /**
     */
    class IFC2X3_DLL_DEF IfcShell : public Step::BaseObject {
    public:
        /**
 */
enum IfcShell_select {
            IFCCLOSEDSHELL,
            IFCOPENSHELL,
            UNSET,
        };

        union IfcShell_union {
            IfcClosedShell *m_IfcClosedShell;
            IfcOpenShell *m_IfcOpenShell;
        };
        /**
         */
        IfcShell();
        virtual ~IfcShell();
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
        virtual void copy(const IfcShell &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcShell_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcClosedShell *getIfcClosedShell();
        /**
         * @param value
         */
        void setIfcClosedShell(IfcClosedShell *value);
        /**
         */
        IfcOpenShell *getIfcOpenShell();
        /**
         * @param value
         */
        void setIfcOpenShell(IfcOpenShell *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcShell(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcShell_select m_type;
        /**
         */
        IfcShell_union m_IfcShell_union;

    };

}

#endif // IFC2X3_IFCSHELL_H
