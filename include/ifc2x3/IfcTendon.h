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

#ifndef IFC2X3_IFCTENDON_H
#define IFC2X3_IFCTENDON_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcReinforcingElement.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTendon : public IfcReinforcingElement {
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
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcTendonTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcTendonTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcTendonTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'NominalDiameter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getNominalDiameter();
        /**
         * (const) Returns the value of the explicit attribute 'NominalDiameter'.
         * 
         * @return the value of the explicit attribute 'NominalDiameter'
         */
        virtual const IfcPositiveLengthMeasure getNominalDiameter() const;
        /**
         * Sets the value of the explicit attribute 'NominalDiameter'.
         * 
         * @param value
         */
        virtual void setNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'CrossSectionArea'.
         * 
         */
        virtual IfcAreaMeasure getCrossSectionArea();
        /**
         * (const) Returns the value of the explicit attribute 'CrossSectionArea'.
         * 
         * @return the value of the explicit attribute 'CrossSectionArea'
         */
        virtual const IfcAreaMeasure getCrossSectionArea() const;
        /**
         * Sets the value of the explicit attribute 'CrossSectionArea'.
         * 
         * @param value
         */
        virtual void setCrossSectionArea(IfcAreaMeasure value);
        /**
         * Gets the value of the explicit attribute 'TensionForce'.
         * 
         */
        virtual IfcForceMeasure getTensionForce();
        /**
         * (const) Returns the value of the explicit attribute 'TensionForce'.
         * 
         * @return the value of the explicit attribute 'TensionForce'
         */
        virtual const IfcForceMeasure getTensionForce() const;
        /**
         * Sets the value of the explicit attribute 'TensionForce'.
         * 
         * @param value
         */
        virtual void setTensionForce(IfcForceMeasure value);
        /**
         * Gets the value of the explicit attribute 'PreStress'.
         * 
         */
        virtual IfcPressureMeasure getPreStress();
        /**
         * (const) Returns the value of the explicit attribute 'PreStress'.
         * 
         * @return the value of the explicit attribute 'PreStress'
         */
        virtual const IfcPressureMeasure getPreStress() const;
        /**
         * Sets the value of the explicit attribute 'PreStress'.
         * 
         * @param value
         */
        virtual void setPreStress(IfcPressureMeasure value);
        /**
         * Gets the value of the explicit attribute 'FrictionCoefficient'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getFrictionCoefficient();
        /**
         * (const) Returns the value of the explicit attribute 'FrictionCoefficient'.
         * 
         * @return the value of the explicit attribute 'FrictionCoefficient'
         */
        virtual const IfcNormalisedRatioMeasure getFrictionCoefficient() const;
        /**
         * Sets the value of the explicit attribute 'FrictionCoefficient'.
         * 
         * @param value
         */
        virtual void setFrictionCoefficient(IfcNormalisedRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'AnchorageSlip'.
         * 
         */
        virtual IfcPositiveLengthMeasure getAnchorageSlip();
        /**
         * (const) Returns the value of the explicit attribute 'AnchorageSlip'.
         * 
         * @return the value of the explicit attribute 'AnchorageSlip'
         */
        virtual const IfcPositiveLengthMeasure getAnchorageSlip() const;
        /**
         * Sets the value of the explicit attribute 'AnchorageSlip'.
         * 
         * @param value
         */
        virtual void setAnchorageSlip(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'MinCurvatureRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMinCurvatureRadius();
        /**
         * (const) Returns the value of the explicit attribute 'MinCurvatureRadius'.
         * 
         * @return the value of the explicit attribute 'MinCurvatureRadius'
         */
        virtual const IfcPositiveLengthMeasure getMinCurvatureRadius() const;
        /**
         * Sets the value of the explicit attribute 'MinCurvatureRadius'.
         * 
         * @param value
         */
        virtual void setMinCurvatureRadius(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTendon(Step::Id id, Step::SPFData *args);
        virtual ~IfcTendon();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTendon &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTendonTypeEnum m_predefinedType;
        /**
         */
        Step::Real m_nominalDiameter;
        /**
         */
        Step::Real m_crossSectionArea;
        /**
         */
        Step::Real m_tensionForce;
        /**
         */
        Step::Real m_preStress;
        /**
         */
        Step::Real m_frictionCoefficient;
        /**
         */
        Step::Real m_anchorageSlip;
        /**
         */
        Step::Real m_minCurvatureRadius;

    };

}

#endif // IFC2X3_IFCTENDON_H
