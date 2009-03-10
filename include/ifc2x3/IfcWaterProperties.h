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
 *     Copyright (C) 2008 CSTB                                             *
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
         * Gets the value of the explicit attribute 'IsPotable'.
         * 
         */
        virtual Step::Boolean getIsPotable();
        /**
         * (const) Returns the value of the explicit attribute 'IsPotable'.
         * 
         * @return the value of the explicit attribute 'IsPotable'
         */
        virtual const Step::Boolean getIsPotable() const;
        /**
         * Sets the value of the explicit attribute 'IsPotable'.
         * 
         * @param value
         */
        virtual void setIsPotable(Step::Boolean value);
        /**
         * Gets the value of the explicit attribute 'Hardness'.
         * 
         */
        virtual IfcIonConcentrationMeasure getHardness();
        /**
         * (const) Returns the value of the explicit attribute 'Hardness'.
         * 
         * @return the value of the explicit attribute 'Hardness'
         */
        virtual const IfcIonConcentrationMeasure getHardness() const;
        /**
         * Sets the value of the explicit attribute 'Hardness'.
         * 
         * @param value
         */
        virtual void setHardness(IfcIonConcentrationMeasure value);
        /**
         * Gets the value of the explicit attribute 'AlkalinityConcentration'.
         * 
         */
        virtual IfcIonConcentrationMeasure getAlkalinityConcentration();
        /**
         * (const) Returns the value of the explicit attribute 'AlkalinityConcentration'.
         * 
         * @return the value of the explicit attribute 'AlkalinityConcentration'
         */
        virtual const IfcIonConcentrationMeasure getAlkalinityConcentration() const;
        /**
         * Sets the value of the explicit attribute 'AlkalinityConcentration'.
         * 
         * @param value
         */
        virtual void setAlkalinityConcentration(IfcIonConcentrationMeasure value);
        /**
         * Gets the value of the explicit attribute 'AcidityConcentration'.
         * 
         */
        virtual IfcIonConcentrationMeasure getAcidityConcentration();
        /**
         * (const) Returns the value of the explicit attribute 'AcidityConcentration'.
         * 
         * @return the value of the explicit attribute 'AcidityConcentration'
         */
        virtual const IfcIonConcentrationMeasure getAcidityConcentration() const;
        /**
         * Sets the value of the explicit attribute 'AcidityConcentration'.
         * 
         * @param value
         */
        virtual void setAcidityConcentration(IfcIonConcentrationMeasure value);
        /**
         * Gets the value of the explicit attribute 'ImpuritiesContent'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getImpuritiesContent();
        /**
         * (const) Returns the value of the explicit attribute 'ImpuritiesContent'.
         * 
         * @return the value of the explicit attribute 'ImpuritiesContent'
         */
        virtual const IfcNormalisedRatioMeasure getImpuritiesContent() const;
        /**
         * Sets the value of the explicit attribute 'ImpuritiesContent'.
         * 
         * @param value
         */
        virtual void setImpuritiesContent(IfcNormalisedRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'PHLevel'.
         * 
         */
        virtual IfcPHMeasure getPHLevel();
        /**
         * (const) Returns the value of the explicit attribute 'PHLevel'.
         * 
         * @return the value of the explicit attribute 'PHLevel'
         */
        virtual const IfcPHMeasure getPHLevel() const;
        /**
         * Sets the value of the explicit attribute 'PHLevel'.
         * 
         * @param value
         */
        virtual void setPHLevel(IfcPHMeasure value);
        /**
         * Gets the value of the explicit attribute 'DissolvedSolidsContent'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getDissolvedSolidsContent();
        /**
         * (const) Returns the value of the explicit attribute 'DissolvedSolidsContent'.
         * 
         * @return the value of the explicit attribute 'DissolvedSolidsContent'
         */
        virtual const IfcNormalisedRatioMeasure getDissolvedSolidsContent() const;
        /**
         * Sets the value of the explicit attribute 'DissolvedSolidsContent'.
         * 
         * @param value
         */
        virtual void setDissolvedSolidsContent(IfcNormalisedRatioMeasure value);
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
        Step::Boolean m_isPotable;
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
