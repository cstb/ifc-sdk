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

#ifndef IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
#define IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcMaterialProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcProductsOfCombustionProperties : public IfcMaterialProperties {
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
        IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity();
        /**
         * Sets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @param value
         */
        void setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getN20Content();
        /**
         * Sets the value of the explicit attribute 'N20Content'.
         * 
         * @param value
         */
        void setN20Content(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getCOContent();
        /**
         * Sets the value of the explicit attribute 'COContent'.
         * 
         * @param value
         */
        void setCOContent(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getCO2Content();
        /**
         * Sets the value of the explicit attribute 'CO2Content'.
         * 
         * @param value
         */
        void setCO2Content(IfcPositiveRatioMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProductsOfCombustionProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductsOfCombustionProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_specificHeatCapacity;
        /**
         */
        Step::Real m_n20Content;
        /**
         */
        Step::Real m_cOContent;
        /**
         */
        Step::Real m_cO2Content;

    };

}

#endif // IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
