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

#ifndef IFC2X3_IFCDIMENSIONALEXPONENTS_H
#define IFC2X3_IFCDIMENSIONALEXPONENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDimensionalExponents : public Step::BaseEntity {
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
        Step::Integer getLengthExponent();
        /**
         * Sets the value of the explicit attribute 'LengthExponent'.
         * 
         * @param value
         */
        void setLengthExponent(Step::Integer value);
        /**
         */
        Step::Integer getMassExponent();
        /**
         * Sets the value of the explicit attribute 'MassExponent'.
         * 
         * @param value
         */
        void setMassExponent(Step::Integer value);
        /**
         */
        Step::Integer getTimeExponent();
        /**
         * Sets the value of the explicit attribute 'TimeExponent'.
         * 
         * @param value
         */
        void setTimeExponent(Step::Integer value);
        /**
         */
        Step::Integer getElectricCurrentExponent();
        /**
         * Sets the value of the explicit attribute 'ElectricCurrentExponent'.
         * 
         * @param value
         */
        void setElectricCurrentExponent(Step::Integer value);
        /**
         */
        Step::Integer getThermodynamicTemperatureExponent();
        /**
         * Sets the value of the explicit attribute 'ThermodynamicTemperatureExponent'.
         * 
         * @param value
         */
        void setThermodynamicTemperatureExponent(Step::Integer value);
        /**
         */
        Step::Integer getAmountOfSubstanceExponent();
        /**
         * Sets the value of the explicit attribute 'AmountOfSubstanceExponent'.
         * 
         * @param value
         */
        void setAmountOfSubstanceExponent(Step::Integer value);
        /**
         */
        Step::Integer getLuminousIntensityExponent();
        /**
         * Sets the value of the explicit attribute 'LuminousIntensityExponent'.
         * 
         * @param value
         */
        void setLuminousIntensityExponent(Step::Integer value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDimensionalExponents(Step::Id id, Step::SPFData *args);
        virtual ~IfcDimensionalExponents();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDimensionalExponents &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_lengthExponent;
        /**
         */
        Step::Integer m_massExponent;
        /**
         */
        Step::Integer m_timeExponent;
        /**
         */
        Step::Integer m_electricCurrentExponent;
        /**
         */
        Step::Integer m_thermodynamicTemperatureExponent;
        /**
         */
        Step::Integer m_amountOfSubstanceExponent;
        /**
         */
        Step::Integer m_luminousIntensityExponent;

    };

}

#endif // IFC2X3_IFCDIMENSIONALEXPONENTS_H
