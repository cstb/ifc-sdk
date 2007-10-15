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

#ifndef IFC2X3_IFCSTRUCTURALACTIVITYASSIGNMENTSELECT_H
#define IFC2X3_IFCSTRUCTURALACTIVITYASSIGNMENTSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcElement;
    class IfcStructuralItem;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralActivityAssignmentSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcStructuralActivityAssignmentSelect_select {
            IFCSTRUCTURALITEM,
            IFCELEMENT,
            UNSET,
        };

        union IfcStructuralActivityAssignmentSelect_union {
            IfcStructuralItem *m_IfcStructuralItem;
            IfcElement *m_IfcElement;
        };
        /**
         */
        IfcStructuralActivityAssignmentSelect();
        virtual ~IfcStructuralActivityAssignmentSelect();
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
        virtual void copy(const IfcStructuralActivityAssignmentSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcStructuralActivityAssignmentSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcStructuralItem *getIfcStructuralItem();
        /**
         * @param value
         */
        void setIfcStructuralItem(IfcStructuralItem *value);
        /**
         */
        IfcElement *getIfcElement();
        /**
         * @param value
         */
        void setIfcElement(IfcElement *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcStructuralActivityAssignmentSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcStructuralActivityAssignmentSelect_select m_type;
        /**
         */
        IfcStructuralActivityAssignmentSelect_union m_IfcStructuralActivityAssignmentSelect_union;

    };

}

#endif // IFC2X3_IFCSTRUCTURALACTIVITYASSIGNMENTSELECT_H
