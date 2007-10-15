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

#ifndef IFC2X3_IFCZSHAPEPROFILEDEF_H
#define IFC2X3_IFCZSHAPEPROFILEDEF_H
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
    class IFC2X3_DLL_DEF IfcZShapeProfileDef : public IfcParameterizedProfileDef {
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
        IfcPositiveLengthMeasure getDepth();
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        void setDepth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getFlangeWidth();
        /**
         * Sets the value of the explicit attribute 'FlangeWidth'.
         * 
         * @param value
         */
        void setFlangeWidth(IfcPositiveLengthMeasure value);
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
        IfcPositiveLengthMeasure getEdgeRadius();
        /**
         * Sets the value of the explicit attribute 'EdgeRadius'.
         * 
         * @param value
         */
        void setEdgeRadius(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcZShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcZShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcZShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_depth;
        /**
         */
        Step::Real m_flangeWidth;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_flangeThickness;
        /**
         */
        Step::Real m_filletRadius;
        /**
         */
        Step::Real m_edgeRadius;

    };

}

#endif // IFC2X3_IFCZSHAPEPROFILEDEF_H
