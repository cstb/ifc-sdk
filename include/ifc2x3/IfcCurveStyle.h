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

#ifndef IFC2X3_IFCCURVESTYLE_H
#define IFC2X3_IFCCURVESTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcPresentationStyle.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColour;
    class IfcCurveFontOrScaledCurveFontSelect;
    class IfcSizeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcCurveStyle : public IfcPresentationStyle {
    public:
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
         */
        IfcCurveFontOrScaledCurveFontSelect *getCurveFont();
        /**
         * Sets the value of the explicit attribute 'CurveFont'.
         * 
         * @param value
         */
        void setCurveFont(const Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > &value);
        /**
         */
        IfcSizeSelect *getCurveWidth();
        /**
         * Sets the value of the explicit attribute 'CurveWidth'.
         * 
         * @param value
         */
        void setCurveWidth(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         */
        IfcColour *getCurveColour();
        /**
         * Sets the value of the explicit attribute 'CurveColour'.
         * 
         * @param value
         */
        void setCurveColour(const Step::RefPtr< IfcColour > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCurveStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurveStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > m_curveFont;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_curveWidth;
        /**
         */
        Step::RefPtr< IfcColour > m_curveColour;

    };

}

#endif // IFC2X3_IFCCURVESTYLE_H
