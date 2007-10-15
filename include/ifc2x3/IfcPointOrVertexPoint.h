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

#ifndef IFC2X3_IFCPOINTORVERTEXPOINT_H
#define IFC2X3_IFCPOINTORVERTEXPOINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPoint;
    class IfcVertexPoint;

    /**
     */
    class IFC2X3_DLL_DEF IfcPointOrVertexPoint : public Step::BaseObject {
    public:
        /**
 */
enum IfcPointOrVertexPoint_select {
            IFCPOINT,
            IFCVERTEXPOINT,
            UNSET,
        };

        union IfcPointOrVertexPoint_union {
            IfcPoint *m_IfcPoint;
            IfcVertexPoint *m_IfcVertexPoint;
        };
        /**
         */
        IfcPointOrVertexPoint();
        virtual ~IfcPointOrVertexPoint();
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
        virtual void copy(const IfcPointOrVertexPoint &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcPointOrVertexPoint_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPoint *getIfcPoint();
        /**
         * @param value
         */
        void setIfcPoint(IfcPoint *value);
        /**
         */
        IfcVertexPoint *getIfcVertexPoint();
        /**
         * @param value
         */
        void setIfcVertexPoint(IfcVertexPoint *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcPointOrVertexPoint(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcPointOrVertexPoint_select m_type;
        /**
         */
        IfcPointOrVertexPoint_union m_IfcPointOrVertexPoint_union;

    };

}

#endif // IFC2X3_IFCPOINTORVERTEXPOINT_H
