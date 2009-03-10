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
        virtual void copy(const IfcPointOrVertexPoint &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcPointOrVertexPoint_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPoint *getIfcPoint() const;
        /**
         * @param value
         */
        void setIfcPoint(IfcPoint *value);
        /**
         */
        IfcVertexPoint *getIfcVertexPoint() const;
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
