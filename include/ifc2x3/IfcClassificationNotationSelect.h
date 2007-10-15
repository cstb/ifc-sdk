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

#ifndef IFC2X3_IFCCLASSIFICATIONNOTATIONSELECT_H
#define IFC2X3_IFCCLASSIFICATIONNOTATIONSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcClassificationNotation;
    class IfcClassificationReference;

    /**
     */
    class IFC2X3_DLL_DEF IfcClassificationNotationSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcClassificationNotationSelect_select {
            IFCCLASSIFICATIONNOTATION,
            IFCCLASSIFICATIONREFERENCE,
            UNSET,
        };

        union IfcClassificationNotationSelect_union {
            IfcClassificationNotation *m_IfcClassificationNotation;
            IfcClassificationReference *m_IfcClassificationReference;
        };
        /**
         */
        IfcClassificationNotationSelect();
        virtual ~IfcClassificationNotationSelect();
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
        virtual void copy(const IfcClassificationNotationSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcClassificationNotationSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcClassificationNotation *getIfcClassificationNotation();
        /**
         * @param value
         */
        void setIfcClassificationNotation(IfcClassificationNotation *value);
        /**
         */
        IfcClassificationReference *getIfcClassificationReference();
        /**
         * @param value
         */
        void setIfcClassificationReference(IfcClassificationReference *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcClassificationNotationSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcClassificationNotationSelect_select m_type;
        /**
         */
        IfcClassificationNotationSelect_union m_IfcClassificationNotationSelect_union;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONNOTATIONSELECT_H
