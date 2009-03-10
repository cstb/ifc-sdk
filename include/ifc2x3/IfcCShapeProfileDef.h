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

#ifndef IFC2X3_IFCCSHAPEPROFILEDEF_H
#define IFC2X3_IFCCSHAPEPROFILEDEF_H
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
    class IFC2X3_DLL_DEF IfcCShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'Width'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWidth();
        /**
         * (const) Returns the value of the explicit attribute 'Width'.
         * 
         * @return the value of the explicit attribute 'Width'
         */
        virtual const IfcPositiveLengthMeasure getWidth() const;
        /**
         * Sets the value of the explicit attribute 'Width'.
         * 
         * @param value
         */
        virtual void setWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'WallThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWallThickness();
        /**
         * (const) Returns the value of the explicit attribute 'WallThickness'.
         * 
         * @return the value of the explicit attribute 'WallThickness'
         */
        virtual const IfcPositiveLengthMeasure getWallThickness() const;
        /**
         * Sets the value of the explicit attribute 'WallThickness'.
         * 
         * @param value
         */
        virtual void setWallThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'Girth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getGirth();
        /**
         * (const) Returns the value of the explicit attribute 'Girth'.
         * 
         * @return the value of the explicit attribute 'Girth'
         */
        virtual const IfcPositiveLengthMeasure getGirth() const;
        /**
         * Sets the value of the explicit attribute 'Girth'.
         * 
         * @param value
         */
        virtual void setGirth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'InternalFilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getInternalFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'InternalFilletRadius'.
         * 
         * @return the value of the explicit attribute 'InternalFilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getInternalFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'InternalFilletRadius'.
         * 
         * @param value
         */
        virtual void setInternalFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInX();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInX'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInX() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInX(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_depth;
        /**
         */
        Step::Real m_width;
        /**
         */
        Step::Real m_wallThickness;
        /**
         */
        Step::Real m_girth;
        /**
         */
        Step::Real m_internalFilletRadius;
        /**
         */
        Step::Real m_centreOfGravityInX;

    };

}

#endif // IFC2X3_IFCCSHAPEPROFILEDEF_H
