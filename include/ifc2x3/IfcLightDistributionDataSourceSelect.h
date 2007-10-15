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

#ifndef IFC2X3_IFCLIGHTDISTRIBUTIONDATASOURCESELECT_H
#define IFC2X3_IFCLIGHTDISTRIBUTIONDATASOURCESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcExternalReference;
    class IfcLightIntensityDistribution;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightDistributionDataSourceSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcLightDistributionDataSourceSelect_select {
            IFCEXTERNALREFERENCE,
            IFCLIGHTINTENSITYDISTRIBUTION,
            UNSET,
        };

        union IfcLightDistributionDataSourceSelect_union {
            IfcExternalReference *m_IfcExternalReference;
            IfcLightIntensityDistribution *m_IfcLightIntensityDistribution;
        };
        /**
         */
        IfcLightDistributionDataSourceSelect();
        virtual ~IfcLightDistributionDataSourceSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightDistributionDataSourceSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcLightDistributionDataSourceSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcExternalReference *getIfcExternalReference();
        /**
         * @param value
         */
        void setIfcExternalReference(IfcExternalReference *value);
        /**
         */
        IfcLightIntensityDistribution *getIfcLightIntensityDistribution();
        /**
         * @param value
         */
        void setIfcLightIntensityDistribution(IfcLightIntensityDistribution *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcLightDistributionDataSourceSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLightDistributionDataSourceSelect_select m_type;
        /**
         */
        IfcLightDistributionDataSourceSelect_union m_IfcLightDistributionDataSourceSelect_union;

    };

}

#endif // IFC2X3_IFCLIGHTDISTRIBUTIONDATASOURCESELECT_H
