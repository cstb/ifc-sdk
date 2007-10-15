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

#ifndef IFC2X3_IFCTRIMMINGSELECT_H
#define IFC2X3_IFCTRIMMINGSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;

    /**
     */
    class IFC2X3_DLL_DEF IfcTrimmingSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcTrimmingSelect_select {
            IFCCARTESIANPOINT,
            IFCPARAMETERVALUE,
            UNSET,
        };

        union IfcTrimmingSelect_union {
            IfcCartesianPoint *m_IfcCartesianPoint;
            IfcParameterValue m_IfcParameterValue;
        };
        /**
         */
        IfcTrimmingSelect();
        virtual ~IfcTrimmingSelect();
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
        virtual void copy(const IfcTrimmingSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcTrimmingSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcCartesianPoint *getIfcCartesianPoint();
        /**
         * @param value
         */
        void setIfcCartesianPoint(IfcCartesianPoint *value);
        /**
         */
        IfcParameterValue getIfcParameterValue();
        /**
         * @param value
         */
        void setIfcParameterValue(IfcParameterValue value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcTrimmingSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTrimmingSelect_select m_type;
        /**
         */
        IfcTrimmingSelect_union m_IfcTrimmingSelect_union;

    };

}

#endif // IFC2X3_IFCTRIMMINGSELECT_H
