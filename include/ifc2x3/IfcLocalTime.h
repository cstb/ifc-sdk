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

#ifndef IFC2X3_IFCLOCALTIME_H
#define IFC2X3_IFCLOCALTIME_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCoordinatedUniversalTimeOffset;

    /**
     */
    class IFC2X3_DLL_DEF IfcLocalTime : public Step::BaseEntity {
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
        IfcHourInDay getHourComponent();
        /**
         * Sets the value of the explicit attribute 'HourComponent'.
         * 
         * @param value
         */
        void setHourComponent(IfcHourInDay value);
        /**
         */
        IfcMinuteInHour getMinuteComponent();
        /**
         * Sets the value of the explicit attribute 'MinuteComponent'.
         * 
         * @param value
         */
        void setMinuteComponent(IfcMinuteInHour value);
        /**
         */
        IfcSecondInMinute getSecondComponent();
        /**
         * Sets the value of the explicit attribute 'SecondComponent'.
         * 
         * @param value
         */
        void setSecondComponent(IfcSecondInMinute value);
        /**
         */
        IfcCoordinatedUniversalTimeOffset *getZone();
        /**
         * Sets the value of the explicit attribute 'Zone'.
         * 
         * @param value
         */
        void setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value);
        /**
         */
        IfcDaylightSavingHour getDaylightSavingOffset();
        /**
         * Sets the value of the explicit attribute 'DaylightSavingOffset'.
         * 
         * @param value
         */
        void setDaylightSavingOffset(IfcDaylightSavingHour value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLocalTime(Step::Id id, Step::SPFData *args);
        virtual ~IfcLocalTime();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLocalTime &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_hourComponent;
        /**
         */
        Step::Integer m_minuteComponent;
        /**
         */
        Step::Real m_secondComponent;
        /**
         */
        Step::RefPtr< IfcCoordinatedUniversalTimeOffset > m_zone;
        /**
         */
        Step::Integer m_daylightSavingOffset;

    };

}

#endif // IFC2X3_IFCLOCALTIME_H
