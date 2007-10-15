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

#ifndef IFC2X3_IFCORIENTATIONSELECT_H
#define IFC2X3_IFCORIENTATIONSELECT_H
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

    /**
     */
    class IFC2X3_DLL_DEF IfcOrientationSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcOrientationSelect_select {
            IFCPLANEANGLEMEASURE,
            IFCDIRECTION,
            UNSET,
        };

        union IfcOrientationSelect_union {
            IfcPlaneAngleMeasure m_IfcPlaneAngleMeasure;
            IfcDirection *m_IfcDirection;
        };
        /**
         */
        IfcOrientationSelect();
        virtual ~IfcOrientationSelect();
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
        virtual void copy(const IfcOrientationSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcOrientationSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPlaneAngleMeasure getIfcPlaneAngleMeasure();
        /**
         * @param value
         */
        void setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value);
        /**
         */
        IfcDirection *getIfcDirection();
        /**
         * @param value
         */
        void setIfcDirection(IfcDirection *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcOrientationSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcOrientationSelect_select m_type;
        /**
         */
        IfcOrientationSelect_union m_IfcOrientationSelect_union;

    };

}

#endif // IFC2X3_IFCORIENTATIONSELECT_H
