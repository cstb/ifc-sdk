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

#ifndef IFC2X3_IFCPRESENTATIONSTYLESELECT_H
#define IFC2X3_IFCPRESENTATIONSTYLESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurveStyle;
    class IfcFillAreaStyle;
    class IfcSurfaceStyle;
    class IfcSymbolStyle;
    class IfcTextStyle;

    /**
     */
    class IFC2X3_DLL_DEF IfcPresentationStyleSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcPresentationStyleSelect_select {
            IFCNULLSTYLE,
            IFCCURVESTYLE,
            IFCSYMBOLSTYLE,
            IFCFILLAREASTYLE,
            IFCTEXTSTYLE,
            IFCSURFACESTYLE,
            UNSET,
        };

        union IfcPresentationStyleSelect_union {
            IfcNullStyle m_IfcNullStyle;
            IfcCurveStyle *m_IfcCurveStyle;
            IfcSymbolStyle *m_IfcSymbolStyle;
            IfcFillAreaStyle *m_IfcFillAreaStyle;
            IfcTextStyle *m_IfcTextStyle;
            IfcSurfaceStyle *m_IfcSurfaceStyle;
        };
        /**
         */
        IfcPresentationStyleSelect();
        virtual ~IfcPresentationStyleSelect();
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
        virtual void copy(const IfcPresentationStyleSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcPresentationStyleSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcNullStyle getIfcNullStyle();
        /**
         * @param value
         */
        void setIfcNullStyle(IfcNullStyle value);
        /**
         */
        IfcCurveStyle *getIfcCurveStyle();
        /**
         * @param value
         */
        void setIfcCurveStyle(IfcCurveStyle *value);
        /**
         */
        IfcSymbolStyle *getIfcSymbolStyle();
        /**
         * @param value
         */
        void setIfcSymbolStyle(IfcSymbolStyle *value);
        /**
         */
        IfcFillAreaStyle *getIfcFillAreaStyle();
        /**
         * @param value
         */
        void setIfcFillAreaStyle(IfcFillAreaStyle *value);
        /**
         */
        IfcTextStyle *getIfcTextStyle();
        /**
         * @param value
         */
        void setIfcTextStyle(IfcTextStyle *value);
        /**
         */
        IfcSurfaceStyle *getIfcSurfaceStyle();
        /**
         * @param value
         */
        void setIfcSurfaceStyle(IfcSurfaceStyle *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcPresentationStyleSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcPresentationStyleSelect_select m_type;
        /**
         */
        IfcPresentationStyleSelect_union m_IfcPresentationStyleSelect_union;

    };

}

#endif // IFC2X3_IFCPRESENTATIONSTYLESELECT_H
