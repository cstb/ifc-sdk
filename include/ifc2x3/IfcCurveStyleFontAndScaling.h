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

#ifndef IFC2X3_IFCCURVESTYLEFONTANDSCALING_H
#define IFC2X3_IFCCURVESTYLEFONTANDSCALING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurveStyleFontSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcCurveStyleFontAndScaling : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'CurveFont'.
         * 
         */
        virtual IfcCurveStyleFontSelect *getCurveFont();
        /**
         * (const) Returns the value of the explicit attribute 'CurveFont'.
         * 
         * @return the value of the explicit attribute 'CurveFont'
         */
        virtual const IfcCurveStyleFontSelect *getCurveFont() const;
        /**
         * Sets the value of the explicit attribute 'CurveFont'.
         * 
         * @param value
         */
        virtual void setCurveFont(const Step::RefPtr< IfcCurveStyleFontSelect > &value);
        /**
         * Gets the value of the explicit attribute 'CurveFontScaling'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCurveFontScaling();
        /**
         * (const) Returns the value of the explicit attribute 'CurveFontScaling'.
         * 
         * @return the value of the explicit attribute 'CurveFontScaling'
         */
        virtual const IfcPositiveRatioMeasure getCurveFontScaling() const;
        /**
         * Sets the value of the explicit attribute 'CurveFontScaling'.
         * 
         * @param value
         */
        virtual void setCurveFontScaling(IfcPositiveRatioMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCurveStyleFontAndScaling(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveStyleFontAndScaling();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::RefPtr< IfcCurveStyleFontSelect > m_curveFont;
        /**
         */
        Step::Real m_curveFontScaling;

    };

}

#endif // IFC2X3_IFCCURVESTYLEFONTANDSCALING_H
