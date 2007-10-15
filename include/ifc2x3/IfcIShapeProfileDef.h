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

#ifndef IFC2X3_IFCISHAPEPROFILEDEF_H
#define IFC2X3_IFCISHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcParameterizedProfileDef.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcIShapeProfileDef : public IfcParameterizedProfileDef {
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
        IfcPositiveLengthMeasure getOverallWidth();
        /**
         * Sets the value of the explicit attribute 'OverallWidth'.
         * 
         * @param value
         */
        void setOverallWidth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getOverallDepth();
        /**
         * Sets the value of the explicit attribute 'OverallDepth'.
         * 
         * @param value
         */
        void setOverallDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getWebThickness();
        /**
         * Sets the value of the explicit attribute 'WebThickness'.
         * 
         * @param value
         */
        void setWebThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getFlangeThickness();
        /**
         * Sets the value of the explicit attribute 'FlangeThickness'.
         * 
         * @param value
         */
        void setFlangeThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getFilletRadius();
        /**
         * Sets the value of the explicit attribute 'FilletRadius'.
         * 
         * @param value
         */
        void setFilletRadius(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcIShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcIShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcIShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_overallWidth;
        /**
         */
        Step::Real m_overallDepth;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_flangeThickness;
        /**
         */
        Step::Real m_filletRadius;

    };

}

#endif // IFC2X3_IFCISHAPEPROFILEDEF_H
