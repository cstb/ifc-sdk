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

#ifndef IFC2X3_IFCCURVEFONTORSCALEDCURVEFONTSELECT_H
#define IFC2X3_IFCCURVEFONTORSCALEDCURVEFONTSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurveStyleFont;
    class IfcCurveStyleFontAndScaling;
    class IfcPreDefinedCurveFont;

    /**
     */
    class IFC2X3_DLL_DEF IfcCurveFontOrScaledCurveFontSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcCurveFontOrScaledCurveFontSelect_select {
            IFCPREDEFINEDCURVEFONT,
            IFCCURVESTYLEFONT,
            IFCCURVESTYLEFONTANDSCALING,
            UNSET,
        };

        union IfcCurveFontOrScaledCurveFontSelect_union {
            IfcPreDefinedCurveFont *m_IfcPreDefinedCurveFont;
            IfcCurveStyleFont *m_IfcCurveStyleFont;
            IfcCurveStyleFontAndScaling *m_IfcCurveStyleFontAndScaling;
        };
        /**
         */
        IfcCurveFontOrScaledCurveFontSelect();
        virtual ~IfcCurveFontOrScaledCurveFontSelect();
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
        virtual void copy(const IfcCurveFontOrScaledCurveFontSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcCurveFontOrScaledCurveFontSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPreDefinedCurveFont *getIfcPreDefinedCurveFont();
        /**
         * @param value
         */
        void setIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value);
        /**
         */
        IfcCurveStyleFont *getIfcCurveStyleFont();
        /**
         * @param value
         */
        void setIfcCurveStyleFont(IfcCurveStyleFont *value);
        /**
         */
        IfcCurveStyleFontAndScaling *getIfcCurveStyleFontAndScaling();
        /**
         * @param value
         */
        void setIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcCurveFontOrScaledCurveFontSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcCurveFontOrScaledCurveFontSelect_select m_type;
        /**
         */
        IfcCurveFontOrScaledCurveFontSelect_union m_IfcCurveFontOrScaledCurveFontSelect_union;

    };

}

#endif // IFC2X3_IFCCURVEFONTORSCALEDCURVEFONTSELECT_H
