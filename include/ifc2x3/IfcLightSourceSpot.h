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

#ifndef IFC2X3_IFCLIGHTSOURCESPOT_H
#define IFC2X3_IFCLIGHTSOURCESPOT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcLightSourcePositional.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightSourceSpot : public IfcLightSourcePositional {
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
        IfcDirection *getOrientation();
        /**
         * Sets the value of the explicit attribute 'Orientation'.
         * 
         * @param value
         */
        void setOrientation(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        IfcReal getConcentrationExponent();
        /**
         * Sets the value of the explicit attribute 'ConcentrationExponent'.
         * 
         * @param value
         */
        void setConcentrationExponent(IfcReal value);
        /**
         */
        IfcPositivePlaneAngleMeasure getSpreadAngle();
        /**
         * Sets the value of the explicit attribute 'SpreadAngle'.
         * 
         * @param value
         */
        void setSpreadAngle(IfcPositivePlaneAngleMeasure value);
        /**
         */
        IfcPositivePlaneAngleMeasure getBeamWidthAngle();
        /**
         * Sets the value of the explicit attribute 'BeamWidthAngle'.
         * 
         * @param value
         */
        void setBeamWidthAngle(IfcPositivePlaneAngleMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightSourceSpot(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSourceSpot();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightSourceSpot &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_orientation;
        /**
         */
        Step::Real m_concentrationExponent;
        /**
         */
        Step::Real m_spreadAngle;
        /**
         */
        Step::Real m_beamWidthAngle;

    };

}

#endif // IFC2X3_IFCLIGHTSOURCESPOT_H
