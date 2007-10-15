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
        IfcCartesianPoint *getPosition();
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        void setPosition(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         */
        IfcPositiveLengthMeasure getRadius();
        /**
         * Sets the value of the explicit attribute 'Radius'.
         * 
         * @param value
         */
        void setRadius(IfcPositiveLengthMeasure value);
        /**
         */
        IfcReal getConstantAttenuation();
        /**
         * Sets the value of the explicit attribute 'ConstantAttenuation'.
         * 
         * @param value
         */
        void setConstantAttenuation(IfcReal value);
        /**
         */
        IfcReal getDistanceAttenuation();
        /**
         * Sets the value of the explicit attribute 'DistanceAttenuation'.
         * 
         * @param value
         */
        void setDistanceAttenuation(IfcReal value);
        /**
         */
        IfcReal getQuadricAttenuation();
        /**
         * Sets the value of the explicit attribute 'QuadricAttenuation'.
         * 
         * @param value
         */
        void setQuadricAttenuation(IfcReal value);
        /**
         */
        virtual void release();
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
