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

#ifndef IFC2X3_IFCCOORDINATEDUNIVERSALTIMEOFFSET_H
#define IFC2X3_IFCCOORDINATEDUNIVERSALTIMEOFFSET_H
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
    class IFC2X3_DLL_DEF IfcCoordinatedUniversalTimeOffset : public Step::BaseEntity {
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
        IfcHourInDay getHourOffset();
        /**
         * Sets the value of the explicit attribute 'HourOffset'.
         * 
         * @param value
         */
        void setHourOffset(IfcHourInDay value);
        /**
         */
        IfcMinuteInHour getMinuteOffset();
        /**
         * Sets the value of the explicit attribute 'MinuteOffset'.
         * 
         * @param value
         */
        void setMinuteOffset(IfcMinuteInHour value);
        /**
         */
        IfcAheadOrBehind getSense();
        /**
         * Sets the value of the explicit attribute 'Sense'.
         * 
         * @param value
         */
        void setSense(IfcAheadOrBehind value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCoordinatedUniversalTimeOffset(Step::Id id, Step::SPFData *args);
        virtual ~IfcCoordinatedUniversalTimeOffset();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_hourOffset;
        /**
         */
        Step::Integer m_minuteOffset;
        /**
         */
        IfcAheadOrBehind m_sense;

    };

}

#endif // IFC2X3_IFCCOORDINATEDUNIVERSALTIMEOFFSET_H
