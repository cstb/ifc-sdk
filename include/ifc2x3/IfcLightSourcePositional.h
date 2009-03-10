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

#ifndef IFC2X3_IFCLIGHTSOURCEPOSITIONAL_H
#define IFC2X3_IFCLIGHTSOURCEPOSITIONAL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcLightSource.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightSourcePositional : public IfcLightSource {
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
         * Gets the value of the explicit attribute 'Position'.
         * 
         */
        virtual IfcCartesianPoint *getPosition();
        /**
         * (const) Returns the value of the explicit attribute 'Position'.
         * 
         * @return the value of the explicit attribute 'Position'
         */
        virtual const IfcCartesianPoint *getPosition() const;
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        virtual void setPosition(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         * Gets the value of the explicit attribute 'Radius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRadius();
        /**
         * (const) Returns the value of the explicit attribute 'Radius'.
         * 
         * @return the value of the explicit attribute 'Radius'
         */
        virtual const IfcPositiveLengthMeasure getRadius() const;
        /**
         * Sets the value of the explicit attribute 'Radius'.
         * 
         * @param value
         */
        virtual void setRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'ConstantAttenuation'.
         * 
         */
        virtual IfcReal getConstantAttenuation();
        /**
         * (const) Returns the value of the explicit attribute 'ConstantAttenuation'.
         * 
         * @return the value of the explicit attribute 'ConstantAttenuation'
         */
        virtual const IfcReal getConstantAttenuation() const;
        /**
         * Sets the value of the explicit attribute 'ConstantAttenuation'.
         * 
         * @param value
         */
        virtual void setConstantAttenuation(IfcReal value);
        /**
         * Gets the value of the explicit attribute 'DistanceAttenuation'.
         * 
         */
        virtual IfcReal getDistanceAttenuation();
        /**
         * (const) Returns the value of the explicit attribute 'DistanceAttenuation'.
         * 
         * @return the value of the explicit attribute 'DistanceAttenuation'
         */
        virtual const IfcReal getDistanceAttenuation() const;
        /**
         * Sets the value of the explicit attribute 'DistanceAttenuation'.
         * 
         * @param value
         */
        virtual void setDistanceAttenuation(IfcReal value);
        /**
         * Gets the value of the explicit attribute 'QuadricAttenuation'.
         * 
         */
        virtual IfcReal getQuadricAttenuation();
        /**
         * (const) Returns the value of the explicit attribute 'QuadricAttenuation'.
         * 
         * @return the value of the explicit attribute 'QuadricAttenuation'
         */
        virtual const IfcReal getQuadricAttenuation() const;
        /**
         * Sets the value of the explicit attribute 'QuadricAttenuation'.
         * 
         * @param value
         */
        virtual void setQuadricAttenuation(IfcReal value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightSourcePositional(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSourcePositional();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightSourcePositional &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_position;
        /**
         */
        Step::Real m_radius;
        /**
         */
        Step::Real m_constantAttenuation;
        /**
         */
        Step::Real m_distanceAttenuation;
        /**
         */
        Step::Real m_quadricAttenuation;

    };

}

#endif // IFC2X3_IFCLIGHTSOURCEPOSITIONAL_H
