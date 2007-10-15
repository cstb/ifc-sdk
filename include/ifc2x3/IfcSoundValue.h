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

#ifndef IFC2X3_IFCSOUNDVALUE_H
#define IFC2X3_IFCSOUNDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDerivedMeasureValue;
    class IfcTimeSeries;

    /**
     */
    class IFC2X3_DLL_DEF IfcSoundValue : public IfcPropertySetDefinition {
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
        IfcTimeSeries *getSoundLevelTimeSeries();
        /**
         * Sets the value of the explicit attribute 'SoundLevelTimeSeries'.
         * 
         * @param value
         */
        void setSoundLevelTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcFrequencyMeasure getFrequency();
        /**
         * Sets the value of the explicit attribute 'Frequency'.
         * 
         * @param value
         */
        void setFrequency(IfcFrequencyMeasure value);
        /**
         */
        IfcDerivedMeasureValue *getSoundLevelSingleValue();
        /**
         * Sets the value of the explicit attribute 'SoundLevelSingleValue'.
         * 
         * @param value
         */
        void setSoundLevelSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSoundValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcSoundValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSoundValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_soundLevelTimeSeries;
        /**
         */
        Step::Real m_frequency;
        /**
         */
        Step::RefPtr< IfcDerivedMeasureValue > m_soundLevelSingleValue;

    };

}

#endif // IFC2X3_IFCSOUNDVALUE_H
