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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcShell &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcShell_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcClosedShell *getIfcClosedShell() const;
        /**
         * @param value
         */
        void setIfcClosedShell(IfcClosedShell *value);
        /**
         */
        IfcOpenShell *getIfcOpenShell() const;
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
