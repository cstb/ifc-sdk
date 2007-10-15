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

#ifndef IFC2X3_IFCELECTRICALBASEPROPERTIES_H
#define IFC2X3_IFCELECTRICALBASEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcEnergyProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcElectricalBaseProperties : public IfcEnergyProperties {
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
        IfcElectricCurrentEnum getElectricCurrentType();
        /**
         * Sets the value of the explicit attribute 'ElectricCurrentType'.
         * 
         * @param value
         */
        void setElectricCurrentType(IfcElectricCurrentEnum value);
        /**
         */
        IfcElectricVoltageMeasure getInputVoltage();
        /**
         * Sets the value of the explicit attribute 'InputVoltage'.
         * 
         * @param value
         */
        void setInputVoltage(IfcElectricVoltageMeasure value);
        /**
         */
        IfcFrequencyMeasure getInputFrequency();
        /**
         * Sets the value of the explicit attribute 'InputFrequency'.
         * 
         * @param value
         */
        void setInputFrequency(IfcFrequencyMeasure value);
        /**
         */
        IfcElectricCurrentMeasure getFullLoadCurrent();
        /**
         * Sets the value of the explicit attribute 'FullLoadCurrent'.
         * 
         * @param value
         */
        void setFullLoadCurrent(IfcElectricCurrentMeasure value);
        /**
         */
        IfcElectricCurrentMeasure getMinimumCircuitCurrent();
        /**
         * Sets the value of the explicit attribute 'MinimumCircuitCurrent'.
         * 
         * @param value
         */
        void setMinimumCircuitCurrent(IfcElectricCurrentMeasure value);
        /**
         */
        IfcPowerMeasure getMaximumPowerInput();
        /**
         * Sets the value of the explicit attribute 'MaximumPowerInput'.
         * 
         * @param value
         */
        void setMaximumPowerInput(IfcPowerMeasure value);
        /**
         */
        IfcPowerMeasure getRatedPowerInput();
        /**
         * Sets the value of the explicit attribute 'RatedPowerInput'.
         * 
         * @param value
         */
        void setRatedPowerInput(IfcPowerMeasure value);
        /**
         */
        Step::Integer getInputPhase();
        /**
         * Sets the value of the explicit attribute 'InputPhase'.
         * 
         * @param value
         */
        void setInputPhase(Step::Integer value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcElectricalBaseProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcElectricalBaseProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcElectricalBaseProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcElectricCurrentEnum m_electricCurrentType;
        /**
         */
        Step::Real m_inputVoltage;
        /**
         */
        Step::Real m_inputFrequency;
        /**
         */
        Step::Real m_fullLoadCurrent;
        /**
         */
        Step::Real m_minimumCircuitCurrent;
        /**
         */
        Step::Real m_maximumPowerInput;
        /**
         */
        Step::Real m_ratedPowerInput;
        /**
         */
        Step::Integer m_inputPhase;

    };

}

#endif // IFC2X3_IFCELECTRICALBASEPROPERTIES_H
