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
 *     Copyright (C) 2009 CSTB                                             *
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

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcExternalReference;
    class IfcLightIntensityDistribution;

    /**
     * .
     * 
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightDistributionDataSourceSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcLightDistributionDataSourceSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcExternalReference *getIfcExternalReference() const;
        /**
         * @param value
         */
        void setIfcExternalReference(IfcExternalReference *value);
        /**
         */
        IfcLightIntensityDistribution *getIfcLightIntensityDistribution() const;
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
