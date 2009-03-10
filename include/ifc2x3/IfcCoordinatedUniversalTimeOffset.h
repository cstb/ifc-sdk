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
         * Gets the value of the explicit attribute 'HourOffset'.
         * 
         */
        virtual IfcHourInDay getHourOffset();
        /**
         * (const) Returns the value of the explicit attribute 'HourOffset'.
         * 
         * @return the value of the explicit attribute 'HourOffset'
         */
        virtual const IfcHourInDay getHourOffset() const;
        /**
         * Sets the value of the explicit attribute 'HourOffset'.
         * 
         * @param value
         */
        virtual void setHourOffset(IfcHourInDay value);
        /**
         * Gets the value of the explicit attribute 'MinuteOffset'.
         * 
         */
        virtual IfcMinuteInHour getMinuteOffset();
        /**
         * (const) Returns the value of the explicit attribute 'MinuteOffset'.
         * 
         * @return the value of the explicit attribute 'MinuteOffset'
         */
        virtual const IfcMinuteInHour getMinuteOffset() const;
        /**
         * Sets the value of the explicit attribute 'MinuteOffset'.
         * 
         * @param value
         */
        virtual void setMinuteOffset(IfcMinuteInHour value);
        /**
         * Gets the value of the explicit attribute 'Sense'.
         * 
         */
        virtual IfcAheadOrBehind getSense();
        /**
         * (const) Returns the value of the explicit attribute 'Sense'.
         * 
         * @return the value of the explicit attribute 'Sense'
         */
        virtual const IfcAheadOrBehind getSense() const;
        /**
         * Sets the value of the explicit attribute 'Sense'.
         * 
         * @param value
         */
        virtual void setSense(IfcAheadOrBehind value);
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
