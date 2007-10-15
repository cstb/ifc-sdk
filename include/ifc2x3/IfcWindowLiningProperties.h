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

#ifndef IFC2X3_IFCWINDOWLININGPROPERTIES_H
#define IFC2X3_IFCWINDOWLININGPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcShapeAspect;

    /**
     */
    class IFC2X3_DLL_DEF IfcWindowLiningProperties : public IfcPropertySetDefinition {
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
        IfcPositiveLengthMeasure getLiningDepth();
        /**
         * Sets the value of the explicit attribute 'LiningDepth'.
         * 
         * @param value
         */
        void setLiningDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getLiningThickness();
        /**
         * Sets the value of the explicit attribute 'LiningThickness'.
         * 
         * @param value
         */
        void setLiningThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getTransomThickness();
        /**
         * Sets the value of the explicit attribute 'TransomThickness'.
         * 
         * @param value
         */
        void setTransomThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getMullionThickness();
        /**
         * Sets the value of the explicit attribute 'MullionThickness'.
         * 
         * @param value
         */
        void setMullionThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getFirstTransomOffset();
        /**
         * Sets the value of the explicit attribute 'FirstTransomOffset'.
         * 
         * @param value
         */
        void setFirstTransomOffset(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getSecondTransomOffset();
        /**
         * Sets the value of the explicit attribute 'SecondTransomOffset'.
         * 
         * @param value
         */
        void setSecondTransomOffset(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getFirstMullionOffset();
        /**
         * Sets the value of the explicit attribute 'FirstMullionOffset'.
         * 
         * @param value
         */
        void setFirstMullionOffset(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getSecondMullionOffset();
        /**
         * Sets the value of the explicit attribute 'SecondMullionOffset'.
         * 
         * @param value
         */
        void setSecondMullionOffset(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcShapeAspect *getShapeAspectStyle();
        /**
         * Sets the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         * @param value
         */
        void setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcWindowLiningProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcWindowLiningProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcWindowLiningProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_liningDepth;
        /**
         */
        Step::Real m_liningThickness;
        /**
         */
        Step::Real m_transomThickness;
        /**
         */
        Step::Real m_mullionThickness;
        /**
         */
        Step::Real m_firstTransomOffset;
        /**
         */
        Step::Real m_secondTransomOffset;
        /**
         */
        Step::Real m_firstMullionOffset;
        /**
         */
        Step::Real m_secondMullionOffset;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;

    };

}

#endif // IFC2X3_IFCWINDOWLININGPROPERTIES_H
