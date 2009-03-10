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

#ifndef IFC2X3_IFCCALENDARDATE_H
#define IFC2X3_IFCCALENDARDATE_H
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
    class IFC2X3_DLL_DEF IfcCalendarDate : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'DayComponent'.
         * 
         */
        virtual IfcDayInMonthNumber getDayComponent();
        /**
         * (const) Returns the value of the explicit attribute 'DayComponent'.
         * 
         * @return the value of the explicit attribute 'DayComponent'
         */
        virtual const IfcDayInMonthNumber getDayComponent() const;
        /**
         * Sets the value of the explicit attribute 'DayComponent'.
         * 
         * @param value
         */
        virtual void setDayComponent(IfcDayInMonthNumber value);
        /**
         * Gets the value of the explicit attribute 'MonthComponent'.
         * 
         */
        virtual IfcMonthInYearNumber getMonthComponent();
        /**
         * (const) Returns the value of the explicit attribute 'MonthComponent'.
         * 
         * @return the value of the explicit attribute 'MonthComponent'
         */
        virtual const IfcMonthInYearNumber getMonthComponent() const;
        /**
         * Sets the value of the explicit attribute 'MonthComponent'.
         * 
         * @param value
         */
        virtual void setMonthComponent(IfcMonthInYearNumber value);
        /**
         * Gets the value of the explicit attribute 'YearComponent'.
         * 
         */
        virtual IfcYearNumber getYearComponent();
        /**
         * (const) Returns the value of the explicit attribute 'YearComponent'.
         * 
         * @return the value of the explicit attribute 'YearComponent'
         */
        virtual const IfcYearNumber getYearComponent() const;
        /**
         * Sets the value of the explicit attribute 'YearComponent'.
         * 
         * @param value
         */
        virtual void setYearComponent(IfcYearNumber value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCalendarDate(Step::Id id, Step::SPFData *args);
        virtual ~IfcCalendarDate();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCalendarDate &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_dayComponent;
        /**
         */
        Step::Integer m_monthComponent;
        /**
         */
        Step::Integer m_yearComponent;

    };

}

#endif // IFC2X3_IFCCALENDARDATE_H
