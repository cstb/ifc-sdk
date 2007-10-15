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

#ifndef IFC2X3_IFCAXIS2PLACEMENT_H
#define IFC2X3_IFCAXIS2PLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement2D;
    class IfcAxis2Placement3D;

    /**
     */
    class IFC2X3_DLL_DEF IfcAxis2Placement : public Step::BaseObject {
    public:
        /**
 */
enum IfcAxis2Placement_select {
            IFCAXIS2PLACEMENT2D,
            IFCAXIS2PLACEMENT3D,
            UNSET,
        };

        union IfcAxis2Placement_union {
            IfcAxis2Placement2D *m_IfcAxis2Placement2D;
            IfcAxis2Placement3D *m_IfcAxis2Placement3D;
        };
        /**
         */
        IfcAxis2Placement();
        virtual ~IfcAxis2Placement();
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
        virtual void copy(const IfcAxis2Placement &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcAxis2Placement_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcAxis2Placement2D *getIfcAxis2Placement2D();
        /**
         * @param value
         */
        void setIfcAxis2Placement2D(IfcAxis2Placement2D *value);
        /**
         */
        IfcAxis2Placement3D *getIfcAxis2Placement3D();
        /**
         * @param value
         */
        void setIfcAxis2Placement3D(IfcAxis2Placement3D *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcAxis2Placement(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcAxis2Placement_select m_type;
        /**
         */
        IfcAxis2Placement_union m_IfcAxis2Placement_union;

    };

}

#endif // IFC2X3_IFCAXIS2PLACEMENT_H
