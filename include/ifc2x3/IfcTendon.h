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
        IfcTendonTypeEnum getPredefinedType();
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        void setPredefinedType(IfcTendonTypeEnum value);
        /**
         */
        IfcPositiveLengthMeasure getNominalDiameter();
        /**
         * Sets the value of the explicit attribute 'NominalDiameter'.
         * 
         * @param value
         */
        void setNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         */
        IfcAreaMeasure getCrossSectionArea();
        /**
         * Sets the value of the explicit attribute 'CrossSectionArea'.
         * 
         * @param value
         */
        void setCrossSectionArea(IfcAreaMeasure value);
        /**
         */
        IfcForceMeasure getTensionForce();
        /**
         * Sets the value of the explicit attribute 'TensionForce'.
         * 
         * @param value
         */
        void setTensionForce(IfcForceMeasure value);
        /**
         */
        IfcPressureMeasure getPreStress();
        /**
         * Sets the value of the explicit attribute 'PreStress'.
         * 
         * @param value
         */
        void setPreStress(IfcPressureMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getFrictionCoefficient();
        /**
         * Sets the value of the explicit attribute 'FrictionCoefficient'.
         * 
         * @param value
         */
        void setFrictionCoefficient(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getAnchorageSlip();
        /**
         * Sets the value of the explicit attribute 'AnchorageSlip'.
         * 
         * @param value
         */
        void setAnchorageSlip(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getMinCurvatureRadius();
        /**
         * Sets the value of the explicit attribute 'MinCurvatureRadius'.
         * 
         * @param value
         */
        void setMinCurvatureRadius(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
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
