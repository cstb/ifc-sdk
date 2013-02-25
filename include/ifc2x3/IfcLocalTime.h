// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCLOCALTIME_H
#define IFC2X3_IFCLOCALTIME_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCoordinatedUniversalTimeOffset;

    /**
     * Generated class for the IfcLocalTime Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLocalTime : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'HourComponent'.
         * 
         */
        virtual IfcHourInDay getHourComponent();
        /**
         * (const) Returns the value of the explicit attribute 'HourComponent'.
         * 
         * @return the value of the explicit attribute 'HourComponent'
         */
        virtual const IfcHourInDay getHourComponent() const;
        /**
         * Sets the value of the explicit attribute 'HourComponent'.
         * 
         * @param value
         */
        virtual void setHourComponent(IfcHourInDay value);
        /**
         * unset the attribute 'HourComponent'.
         * 
         */
        virtual void unsetHourComponent();
        /**
         * Test if the attribute 'HourComponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHourComponent() const;
        /**
         * Gets the value of the explicit attribute 'MinuteComponent'.
         * 
         */
        virtual IfcMinuteInHour getMinuteComponent();
        /**
         * (const) Returns the value of the explicit attribute 'MinuteComponent'.
         * 
         * @return the value of the explicit attribute 'MinuteComponent'
         */
        virtual const IfcMinuteInHour getMinuteComponent() const;
        /**
         * Sets the value of the explicit attribute 'MinuteComponent'.
         * 
         * @param value
         */
        virtual void setMinuteComponent(IfcMinuteInHour value);
        /**
         * unset the attribute 'MinuteComponent'.
         * 
         */
        virtual void unsetMinuteComponent();
        /**
         * Test if the attribute 'MinuteComponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinuteComponent() const;
        /**
         * Gets the value of the explicit attribute 'SecondComponent'.
         * 
         */
        virtual IfcSecondInMinute getSecondComponent();
        /**
         * (const) Returns the value of the explicit attribute 'SecondComponent'.
         * 
         * @return the value of the explicit attribute 'SecondComponent'
         */
        virtual const IfcSecondInMinute getSecondComponent() const;
        /**
         * Sets the value of the explicit attribute 'SecondComponent'.
         * 
         * @param value
         */
        virtual void setSecondComponent(IfcSecondInMinute value);
        /**
         * unset the attribute 'SecondComponent'.
         * 
         */
        virtual void unsetSecondComponent();
        /**
         * Test if the attribute 'SecondComponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSecondComponent() const;
        /**
         * Gets the value of the explicit attribute 'Zone'.
         * 
         */
        virtual IfcCoordinatedUniversalTimeOffset *getZone();
        /**
         * (const) Returns the value of the explicit attribute 'Zone'.
         * 
         * @return the value of the explicit attribute 'Zone'
         */
        virtual const IfcCoordinatedUniversalTimeOffset *getZone() const;
        /**
         * Sets the value of the explicit attribute 'Zone'.
         * 
         * @param value
         */
        virtual void setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value);
        /**
         * unset the attribute 'Zone'.
         * 
         */
        virtual void unsetZone();
        /**
         * Test if the attribute 'Zone' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testZone() const;
        /**
         * Gets the value of the explicit attribute 'DaylightSavingOffset'.
         * 
         */
        virtual IfcDaylightSavingHour getDaylightSavingOffset();
        /**
         * (const) Returns the value of the explicit attribute 'DaylightSavingOffset'.
         * 
         * @return the value of the explicit attribute 'DaylightSavingOffset'
         */
        virtual const IfcDaylightSavingHour getDaylightSavingOffset() const;
        /**
         * Sets the value of the explicit attribute 'DaylightSavingOffset'.
         * 
         * @param value
         */
        virtual void setDaylightSavingOffset(IfcDaylightSavingHour value);
        /**
         * unset the attribute 'DaylightSavingOffset'.
         * 
         */
        virtual void unsetDaylightSavingOffset();
        /**
         * Test if the attribute 'DaylightSavingOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDaylightSavingOffset() const;
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
