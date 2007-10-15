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

#ifndef IFC2X3_IFCGEOMETRICSETSELECT_H
#define IFC2X3_IFCGEOMETRICSETSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcPoint;
    class IfcSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcGeometricSetSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcGeometricSetSelect_select {
            IFCPOINT,
            IFCCURVE,
            IFCSURFACE,
            UNSET,
        };

        union IfcGeometricSetSelect_union {
            IfcPoint *m_IfcPoint;
            IfcCurve *m_IfcCurve;
            IfcSurface *m_IfcSurface;
        };
        /**
         */
        IfcGeometricSetSelect();
        virtual ~IfcGeometricSetSelect();
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
        virtual void copy(const IfcGeometricSetSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcGeometricSetSelect_select currentType();
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
        IfcCurve *getIfcCurve();
        /**
         * @param value
         */
        void setIfcCurve(IfcCurve *value);
        /**
         */
        IfcSurface *getIfcSurface();
        /**
         * @param value
         */
        void setIfcSurface(IfcSurface *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcGeometricSetSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcGeometricSetSelect_select m_type;
        /**
         */
        IfcGeometricSetSelect_union m_IfcGeometricSetSelect_union;

    };

}

#endif // IFC2X3_IFCGEOMETRICSETSELECT_H
