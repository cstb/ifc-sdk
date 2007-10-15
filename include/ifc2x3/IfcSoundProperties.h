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

#ifndef IFC2X3_IFCSOUNDPROPERTIES_H
#define IFC2X3_IFCSOUNDPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSoundValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcSoundProperties : public IfcPropertySetDefinition {
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
        IfcBoolean getIsAttenuating();
        /**
         * Sets the value of the explicit attribute 'IsAttenuating'.
         * 
         * @param value
         */
        void setIsAttenuating(IfcBoolean value);
        /**
         */
        IfcSoundScaleEnum getSoundScale();
        /**
         * Sets the value of the explicit attribute 'SoundScale'.
         * 
         * @param value
         */
        void setSoundScale(IfcSoundScaleEnum value);
        /**
         */
        Step::List< Step::RefPtr< IfcSoundValue > > &getSoundValues();
        /**
         * Sets the value of the explicit attribute 'SoundValues'.
         * 
         * @param value
         */
        void setSoundValues(const Step::List< Step::RefPtr< IfcSoundValue > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSoundProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSoundProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSoundProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Bool m_isAttenuating;
        /**
         */
        IfcSoundScaleEnum m_soundScale;
        /**
         */
        Step::List< Step::RefPtr< IfcSoundValue > > m_soundValues;

    };

}

#endif // IFC2X3_IFCSOUNDPROPERTIES_H
