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

#ifndef IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcMechanicalConcreteMaterialProperties : public IfcMechanicalMaterialProperties {
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
        IfcPressureMeasure getCompressiveStrength();
        /**
         * Sets the value of the explicit attribute 'CompressiveStrength'.
         * 
         * @param value
         */
        void setCompressiveStrength(IfcPressureMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getMaxAggregateSize();
        /**
         * Sets the value of the explicit attribute 'MaxAggregateSize'.
         * 
         * @param value
         */
        void setMaxAggregateSize(IfcPositiveLengthMeasure value);
        /**
         */
        IfcText getAdmixturesDescription();
        /**
         * Sets the value of the explicit attribute 'AdmixturesDescription'.
         * 
         * @param value
         */
        void setAdmixturesDescription(const IfcText &value);
        /**
         */
        IfcText getWorkability();
        /**
         * Sets the value of the explicit attribute 'Workability'.
         * 
         * @param value
         */
        void setWorkability(const IfcText &value);
        /**
         */
        IfcNormalisedRatioMeasure getProtectivePoreRatio();
        /**
         * Sets the value of the explicit attribute 'ProtectivePoreRatio'.
         * 
         * @param value
         */
        void setProtectivePoreRatio(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcText getWaterImpermeability();
        /**
         * Sets the value of the explicit attribute 'WaterImpermeability'.
         * 
         * @param value
         */
        void setWaterImpermeability(const IfcText &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMechanicalConcreteMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalConcreteMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_compressiveStrength;
        /**
         */
        Step::Real m_maxAggregateSize;
        /**
         */
        std::string m_admixturesDescription;
        /**
         */
        std::string m_workability;
        /**
         */
        Step::Real m_protectivePoreRatio;
        /**
         */
        std::string m_waterImpermeability;

    };

}

#endif // IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
