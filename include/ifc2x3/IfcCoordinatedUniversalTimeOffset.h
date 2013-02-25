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

#ifndef IFC2X3_IFCCOORDINATEDUNIVERSALTIMEOFFSET_H
#define IFC2X3_IFCCOORDINATEDUNIVERSALTIMEOFFSET_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcCoordinatedUniversalTimeOffset Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCoordinatedUniversalTimeOffset : public Step::BaseEntity {
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
         * unset the attribute 'HourOffset'.
         * 
         */
        virtual void unsetHourOffset();
        /**
         * Test if the attribute 'HourOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHourOffset() const;
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
         * unset the attribute 'MinuteOffset'.
         * 
         */
        virtual void unsetMinuteOffset();
        /**
         * Test if the attribute 'MinuteOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinuteOffset() const;
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
        /**
         * unset the attribute 'Sense'.
         * 
         */
        virtual void unsetSense();
        /**
         * Test if the attribute 'Sense' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSense() const;
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
