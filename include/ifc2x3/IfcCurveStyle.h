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
         * Gets the value of the explicit attribute 'CurveFont'.
         * 
         */
        virtual IfcCurveFontOrScaledCurveFontSelect *getCurveFont();
        /**
         * (const) Returns the value of the explicit attribute 'CurveFont'.
         * 
         * @return the value of the explicit attribute 'CurveFont'
         */
        virtual const IfcCurveFontOrScaledCurveFontSelect *getCurveFont() const;
        /**
         * Sets the value of the explicit attribute 'CurveFont'.
         * 
         * @param value
         */
        virtual void setCurveFont(const Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > &value);
        /**
         * Gets the value of the explicit attribute 'CurveWidth'.
         * 
         */
        virtual IfcSizeSelect *getCurveWidth();
        /**
         * (const) Returns the value of the explicit attribute 'CurveWidth'.
         * 
         * @return the value of the explicit attribute 'CurveWidth'
         */
        virtual const IfcSizeSelect *getCurveWidth() const;
        /**
         * Sets the value of the explicit attribute 'CurveWidth'.
         * 
         * @param value
         */
        virtual void setCurveWidth(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'CurveColour'.
         * 
         */
        virtual IfcColour *getCurveColour();
        /**
         * (const) Returns the value of the explicit attribute 'CurveColour'.
         * 
         * @return the value of the explicit attribute 'CurveColour'
         */
        virtual const IfcColour *getCurveColour() const;
        /**
         * Sets the value of the explicit attribute 'CurveColour'.
         * 
         * @param value
         */
        virtual void setCurveColour(const Step::RefPtr< IfcColour > &value);
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
