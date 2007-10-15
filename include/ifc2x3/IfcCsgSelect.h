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

#ifndef IFC2X3_IFCCSGSELECT_H
#define IFC2X3_IFCCSGSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcBooleanResult;
    class IfcCsgPrimitive3D;

    /**
     */
    class IFC2X3_DLL_DEF IfcCsgSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcCsgSelect_select {
            IFCBOOLEANRESULT,
            IFCCSGPRIMITIVE3D,
            UNSET,
        };

        union IfcCsgSelect_union {
            IfcBooleanResult *m_IfcBooleanResult;
            IfcCsgPrimitive3D *m_IfcCsgPrimitive3D;
        };
        /**
         */
        IfcCsgSelect();
        virtual ~IfcCsgSelect();
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
        virtual void copy(const IfcCsgSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcCsgSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcBooleanResult *getIfcBooleanResult();
        /**
         * @param value
         */
        void setIfcBooleanResult(IfcBooleanResult *value);
        /**
         */
        IfcCsgPrimitive3D *getIfcCsgPrimitive3D();
        /**
         * @param value
         */
        void setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcCsgSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcCsgSelect_select m_type;
        /**
         */
        IfcCsgSelect_union m_IfcCsgSelect_union;

    };

}

#endif // IFC2X3_IFCCSGSELECT_H
