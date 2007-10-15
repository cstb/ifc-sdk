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

#ifndef IFC2X3_IFCWATERPROPERTIES_H
#define IFC2X3_IFCWATERPROPERTIES_H
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
    class IFC2X3_DLL_DEF IfcWaterProperties : public IfcMaterialProperties {
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
        Step::Bool getIsPotable();
        /**
         * Sets the value of the explicit attribute 'IsPotable'.
         * 
         * @param value
         */
        void setIsPotable(Step::Bool value);
        /**
         */
        IfcIonConcentrationMeasure getHardness();
        /**
         * Sets the value of the explicit attribute 'Hardness'.
         * 
         * @param value
         */
        void setHardness(IfcIonConcentrationMeasure value);
        /**
         */
        IfcIonConcentrationMeasure getAlkalinityConcentration();
        /**
         * Sets the value of the explicit attribute 'AlkalinityConcentration'.
         * 
         * @param value
         */
        void setAlkalinityConcentration(IfcIonConcentrationMeasure value);
        /**
         */
        IfcIonConcentrationMeasure getAcidityConcentration();
        /**
         * Sets the value of the explicit attribute 'AcidityConcentration'.
         * 
         * @param value
         */
        void setAcidityConcentration(IfcIonConcentrationMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getImpuritiesContent();
        /**
         * Sets the value of the explicit attribute 'ImpuritiesContent'.
         * 
         * @param value
         */
        void setImpuritiesContent(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcPHMeasure getPHLevel();
        /**
         * Sets the value of the explicit attribute 'PHLevel'.
         * 
         * @param value
         */
        void setPHLevel(IfcPHMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getDissolvedSolidsContent();
        /**
         * Sets the value of the explicit attribute 'DissolvedSolidsContent'.
         * 
         * @param value
         */
        void setDissolvedSolidsContent(IfcNormalisedRatioMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcWaterProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcWaterProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcWaterProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Bool m_isPotable;
        /**
         */
        Step::Real m_hardness;
        /**
         */
        Step::Real m_alkalinityConcentration;
        /**
         */
        Step::Real m_acidityConcentration;
        /**
         */
        Step::Real m_impuritiesContent;
        /**
         */
        Step::Real m_pHLevel;
        /**
         */
        Step::Real m_dissolvedSolidsContent;

    };

}

#endif // IFC2X3_IFCWATERPROPERTIES_H
