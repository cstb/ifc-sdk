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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDerivedMeasureValue;
    class IfcTimeSeries;

    /**
     * Generated class for the IfcSoundValue Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcSoundValue : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'SoundLevelTimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getSoundLevelTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'SoundLevelTimeSeries'.
         * 
         * @return the value of the explicit attribute 'SoundLevelTimeSeries'
         */
        virtual const IfcTimeSeries *getSoundLevelTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'SoundLevelTimeSeries'.
         * 
         * @param value
         */
        virtual void setSoundLevelTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * unset the attribute 'SoundLevelTimeSeries'.
         * 
         */
        virtual void unsetSoundLevelTimeSeries();
        /**
         * Test if the attribute 'SoundLevelTimeSeries' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSoundLevelTimeSeries() const;
        /**
         * Gets the value of the explicit attribute 'Frequency'.
         * 
         */
        virtual IfcFrequencyMeasure getFrequency();
        /**
         * (const) Returns the value of the explicit attribute 'Frequency'.
         * 
         * @return the value of the explicit attribute 'Frequency'
         */
        virtual const IfcFrequencyMeasure getFrequency() const;
        /**
         * Sets the value of the explicit attribute 'Frequency'.
         * 
         * @param value
         */
        virtual void setFrequency(IfcFrequencyMeasure value);
        /**
         * unset the attribute 'Frequency'.
         * 
         */
        virtual void unsetFrequency();
        /**
         * Test if the attribute 'Frequency' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFrequency() const;
        /**
         * Gets the value of the explicit attribute 'SoundLevelSingleValue'.
         * 
         */
        virtual IfcDerivedMeasureValue *getSoundLevelSingleValue();
        /**
         * (const) Returns the value of the explicit attribute 'SoundLevelSingleValue'.
         * 
         * @return the value of the explicit attribute 'SoundLevelSingleValue'
         */
        virtual const IfcDerivedMeasureValue *getSoundLevelSingleValue() const;
        /**
         * Sets the value of the explicit attribute 'SoundLevelSingleValue'.
         * 
         * @param value
         */
        virtual void setSoundLevelSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value);
        /**
         * unset the attribute 'SoundLevelSingleValue'.
         * 
         */
        virtual void unsetSoundLevelSingleValue();
        /**
         * Test if the attribute 'SoundLevelSingleValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSoundLevelSingleValue() const;
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
