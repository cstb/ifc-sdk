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

#ifndef IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
#define IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcIShapeProfileDef.h"
#include <string>
#include <Step/SPFData.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcAsymmetricIShapeProfileDef : public IfcIShapeProfileDef {
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
        IfcPositiveLengthMeasure getTopFlangeWidth();
        /**
         * Sets the value of the explicit attribute 'TopFlangeWidth'.
         * 
         * @param value
         */
        void setTopFlangeWidth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getTopFlangeThickness();
        /**
         * Sets the value of the explicit attribute 'TopFlangeThickness'.
         * 
         * @param value
         */
        void setTopFlangeThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getTopFlangeFilletRadius();
        /**
         * Sets the value of the explicit attribute 'TopFlangeFilletRadius'.
         * 
         * @param value
         */
        void setTopFlangeFilletRadius(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getCentreOfGravityInY();
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAsymmetricIShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcAsymmetricIShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_topFlangeWidth;
        /**
         */
        Step::Real m_topFlangeThickness;
        /**
         */
        Step::Real m_topFlangeFilletRadius;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
