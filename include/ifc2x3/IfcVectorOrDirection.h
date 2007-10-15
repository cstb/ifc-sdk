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

#ifndef IFC2X3_IFCVECTORORDIRECTION_H
#define IFC2X3_IFCVECTORORDIRECTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;
    class IfcVector;

    /**
     */
    class IFC2X3_DLL_DEF IfcVectorOrDirection : public Step::BaseObject {
    public:
        /**
 */
enum IfcVectorOrDirection_select {
            IFCDIRECTION,
            IFCVECTOR,
            UNSET,
        };

        union IfcVectorOrDirection_union {
            IfcDirection *m_IfcDirection;
            IfcVector *m_IfcVector;
        };
        /**
         */
        IfcVectorOrDirection();
        virtual ~IfcVectorOrDirection();
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
        virtual void copy(const IfcVectorOrDirection &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcVectorOrDirection_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcDirection *getIfcDirection();
        /**
         * @param value
         */
        void setIfcDirection(IfcDirection *value);
        /**
         */
        IfcVector *getIfcVector();
        /**
         * @param value
         */
        void setIfcVector(IfcVector *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcVectorOrDirection(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcVectorOrDirection_select m_type;
        /**
         */
        IfcVectorOrDirection_union m_IfcVectorOrDirection_union;

    };

}

#endif // IFC2X3_IFCVECTORORDIRECTION_H
