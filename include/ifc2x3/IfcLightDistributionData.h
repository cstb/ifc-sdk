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

#ifndef IFC2X3_IFCLIGHTDISTRIBUTIONDATA_H
#define IFC2X3_IFCLIGHTDISTRIBUTIONDATA_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightDistributionData : public Step::BaseEntity {
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
        IfcPlaneAngleMeasure getMainPlaneAngle();
        /**
         * Sets the value of the explicit attribute 'MainPlaneAngle'.
         * 
         * @param value
         */
        void setMainPlaneAngle(IfcPlaneAngleMeasure value);
        /**
         */
        Step::List< IfcPlaneAngleMeasure > &getSecondaryPlaneAngle();
        /**
         * Sets the value of the explicit attribute 'SecondaryPlaneAngle'.
         * 
         * @param value
         */
        void setSecondaryPlaneAngle(const Step::List< IfcPlaneAngleMeasure > &value);
        /**
         */
        Step::List< IfcLuminousIntensityDistributionMeasure > &getLuminousIntensity();
        /**
         * Sets the value of the explicit attribute 'LuminousIntensity'.
         * 
         * @param value
         */
        void setLuminousIntensity(const Step::List< IfcLuminousIntensityDistributionMeasure > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightDistributionData(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightDistributionData();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightDistributionData &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_mainPlaneAngle;
        /**
         */
        Step::List< IfcPlaneAngleMeasure > m_secondaryPlaneAngle;
        /**
         */
        Step::List< IfcLuminousIntensityDistributionMeasure > m_luminousIntensity;

    };

}

#endif // IFC2X3_IFCLIGHTDISTRIBUTIONDATA_H
