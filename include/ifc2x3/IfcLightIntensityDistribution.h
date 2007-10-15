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

#ifndef IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H
#define IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcLightDistributionData;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightIntensityDistribution : public Step::BaseEntity {
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
        IfcLightDistributionCurveEnum getLightDistributionCurve();
        /**
         * Sets the value of the explicit attribute 'LightDistributionCurve'.
         * 
         * @param value
         */
        void setLightDistributionCurve(IfcLightDistributionCurveEnum value);
        /**
         */
        Step::List< Step::RefPtr< IfcLightDistributionData > > &getDistributionData();
        /**
         * Sets the value of the explicit attribute 'DistributionData'.
         * 
         * @param value
         */
        void setDistributionData(const Step::List< Step::RefPtr< IfcLightDistributionData > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightIntensityDistribution(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightIntensityDistribution();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightIntensityDistribution &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLightDistributionCurveEnum m_lightDistributionCurve;
        /**
         */
        Step::List< Step::RefPtr< IfcLightDistributionData > > m_distributionData;

    };

}

#endif // IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H
