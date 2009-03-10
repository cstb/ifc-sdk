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

#ifndef IFC2X3_IFCTSHAPEPROFILEDEF_H
#define IFC2X3_IFCTSHAPEPROFILEDEF_H
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
    class IFC2X3_DLL_DEF IfcTShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'Depth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getDepth();
        /**
         * (const) Returns the value of the explicit attribute 'Depth'.
         * 
         * @return the value of the explicit attribute 'Depth'
         */
        virtual const IfcPositiveLengthMeasure getDepth() const;
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        virtual void setDepth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FlangeWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeWidth();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeWidth'.
         * 
         * @return the value of the explicit attribute 'FlangeWidth'
         */
        virtual const IfcPositiveLengthMeasure getFlangeWidth() const;
        /**
         * Sets the value of the explicit attribute 'FlangeWidth'.
         * 
         * @param value
         */
        virtual void setFlangeWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'WebThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWebThickness();
        /**
         * (const) Returns the value of the explicit attribute 'WebThickness'.
         * 
         * @return the value of the explicit attribute 'WebThickness'
         */
        virtual const IfcPositiveLengthMeasure getWebThickness() const;
        /**
         * Sets the value of the explicit attribute 'WebThickness'.
         * 
         * @param value
         */
        virtual void setWebThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FlangeThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeThickness();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeThickness'.
         * 
         * @return the value of the explicit attribute 'FlangeThickness'
         */
        virtual const IfcPositiveLengthMeasure getFlangeThickness() const;
        /**
         * Sets the value of the explicit attribute 'FlangeThickness'.
         * 
         * @param value
         */
        virtual void setFlangeThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'FilletRadius'.
         * 
         * @return the value of the explicit attribute 'FilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'FilletRadius'.
         * 
         * @param value
         */
        virtual void setFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FlangeEdgeRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeEdgeRadius();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeEdgeRadius'.
         * 
         * @return the value of the explicit attribute 'FlangeEdgeRadius'
         */
        virtual const IfcPositiveLengthMeasure getFlangeEdgeRadius() const;
        /**
         * Sets the value of the explicit attribute 'FlangeEdgeRadius'.
         * 
         * @param value
         */
        virtual void setFlangeEdgeRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'WebEdgeRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWebEdgeRadius();
        /**
         * (const) Returns the value of the explicit attribute 'WebEdgeRadius'.
         * 
         * @return the value of the explicit attribute 'WebEdgeRadius'
         */
        virtual const IfcPositiveLengthMeasure getWebEdgeRadius() const;
        /**
         * Sets the value of the explicit attribute 'WebEdgeRadius'.
         * 
         * @param value
         */
        virtual void setWebEdgeRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'WebSlope'.
         * 
         */
        virtual IfcPlaneAngleMeasure getWebSlope();
        /**
         * (const) Returns the value of the explicit attribute 'WebSlope'.
         * 
         * @return the value of the explicit attribute 'WebSlope'
         */
        virtual const IfcPlaneAngleMeasure getWebSlope() const;
        /**
         * Sets the value of the explicit attribute 'WebSlope'.
         * 
         * @param value
         */
        virtual void setWebSlope(IfcPlaneAngleMeasure value);
        /**
         * Gets the value of the explicit attribute 'FlangeSlope'.
         * 
         */
        virtual IfcPlaneAngleMeasure getFlangeSlope();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeSlope'.
         * 
         * @return the value of the explicit attribute 'FlangeSlope'
         */
        virtual const IfcPlaneAngleMeasure getFlangeSlope() const;
        /**
         * Sets the value of the explicit attribute 'FlangeSlope'.
         * 
         * @param value
         */
        virtual void setFlangeSlope(IfcPlaneAngleMeasure value);
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInY();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInY'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInY() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcTShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTShapeProfileDef &obj, const CopyOp &copyop);

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
        Step::Real m_flangeEdgeRadius;
        /**
         */
        Step::Real m_webEdgeRadius;
        /**
         */
        Step::Real m_webSlope;
        /**
         */
        Step::Real m_flangeSlope;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCTSHAPEPROFILEDEF_H
