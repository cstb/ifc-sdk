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

#ifndef IFC2X3_IFCCONNECTIONPOINTECCENTRICITY_H
#define IFC2X3_IFCCONNECTIONPOINTECCENTRICITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcConnectionPointGeometry.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcConnectionPointEccentricity : public IfcConnectionPointGeometry {
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
        IfcLengthMeasure getEccentricityInX();
        /**
         * Sets the value of the explicit attribute 'EccentricityInX'.
         * 
         * @param value
         */
        void setEccentricityInX(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getEccentricityInY();
        /**
         * Sets the value of the explicit attribute 'EccentricityInY'.
         * 
         * @param value
         */
        void setEccentricityInY(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getEccentricityInZ();
        /**
         * Sets the value of the explicit attribute 'EccentricityInZ'.
         * 
         * @param value
         */
        void setEccentricityInZ(IfcLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConnectionPointEccentricity(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionPointEccentricity();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConnectionPointEccentricity &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_eccentricityInX;
        /**
         */
        Step::Real m_eccentricityInY;
        /**
         */
        Step::Real m_eccentricityInZ;

    };

}

#endif // IFC2X3_IFCCONNECTIONPOINTECCENTRICITY_H
