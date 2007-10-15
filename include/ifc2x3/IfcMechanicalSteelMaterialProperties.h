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

#ifndef IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelaxation;

    /**
     */
    class IFC2X3_DLL_DEF IfcMechanicalSteelMaterialProperties : public IfcMechanicalMaterialProperties {
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
        IfcPressureMeasure getYieldStress();
        /**
         * Sets the value of the explicit attribute 'YieldStress'.
         * 
         * @param value
         */
        void setYieldStress(IfcPressureMeasure value);
        /**
         */
        IfcPressureMeasure getUltimateStress();
        /**
         * Sets the value of the explicit attribute 'UltimateStress'.
         * 
         * @param value
         */
        void setUltimateStress(IfcPressureMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getUltimateStrain();
        /**
         * Sets the value of the explicit attribute 'UltimateStrain'.
         * 
         * @param value
         */
        void setUltimateStrain(IfcPositiveRatioMeasure value);
        /**
         */
        IfcModulusOfElasticityMeasure getHardeningModule();
        /**
         * Sets the value of the explicit attribute 'HardeningModule'.
         * 
         * @param value
         */
        void setHardeningModule(IfcModulusOfElasticityMeasure value);
        /**
         */
        IfcPressureMeasure getProportionalStress();
        /**
         * Sets the value of the explicit attribute 'ProportionalStress'.
         * 
         * @param value
         */
        void setProportionalStress(IfcPressureMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getPlasticStrain();
        /**
         * Sets the value of the explicit attribute 'PlasticStrain'.
         * 
         * @param value
         */
        void setPlasticStrain(IfcPositiveRatioMeasure value);
        /**
         */
        Step::Set< Step::RefPtr< IfcRelaxation > > &getRelaxations();
        /**
         * Sets the value of the explicit attribute 'Relaxations'.
         * 
         * @param value
         */
        void setRelaxations(const Step::Set< Step::RefPtr< IfcRelaxation > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMechanicalSteelMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalSteelMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_yieldStress;
        /**
         */
        Step::Real m_ultimateStress;
        /**
         */
        Step::Real m_ultimateStrain;
        /**
         */
        Step::Real m_hardeningModule;
        /**
         */
        Step::Real m_proportionalStress;
        /**
         */
        Step::Real m_plasticStrain;
        /**
         */
        Step::Set< Step::RefPtr< IfcRelaxation > > m_relaxations;

    };

}

#endif // IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
