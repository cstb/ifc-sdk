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

#ifndef IFC2X3_IFCSTAIRFLIGHT_H
#define IFC2X3_IFCSTAIRFLIGHT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcBuildingElement.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStairFlight Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStairFlight : public IfcBuildingElement {
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
         * Gets the value of the explicit attribute 'NumberOfRiser'.
         * 
         */
        virtual Step::Integer getNumberOfRiser();
        /**
         * (const) Returns the value of the explicit attribute 'NumberOfRiser'.
         * 
         * @return the value of the explicit attribute 'NumberOfRiser'
         */
        virtual const Step::Integer getNumberOfRiser() const;
        /**
         * Sets the value of the explicit attribute 'NumberOfRiser'.
         * 
         * @param value
         */
        virtual void setNumberOfRiser(Step::Integer value);
        /**
         * unset the attribute 'NumberOfRiser'.
         * 
         */
        virtual void unsetNumberOfRiser();
        /**
         * Test if the attribute 'NumberOfRiser' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNumberOfRiser() const;
        /**
         * Gets the value of the explicit attribute 'NumberOfTreads'.
         * 
         */
        virtual Step::Integer getNumberOfTreads();
        /**
         * (const) Returns the value of the explicit attribute 'NumberOfTreads'.
         * 
         * @return the value of the explicit attribute 'NumberOfTreads'
         */
        virtual const Step::Integer getNumberOfTreads() const;
        /**
         * Sets the value of the explicit attribute 'NumberOfTreads'.
         * 
         * @param value
         */
        virtual void setNumberOfTreads(Step::Integer value);
        /**
         * unset the attribute 'NumberOfTreads'.
         * 
         */
        virtual void unsetNumberOfTreads();
        /**
         * Test if the attribute 'NumberOfTreads' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNumberOfTreads() const;
        /**
         * Gets the value of the explicit attribute 'RiserHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRiserHeight();
        /**
         * (const) Returns the value of the explicit attribute 'RiserHeight'.
         * 
         * @return the value of the explicit attribute 'RiserHeight'
         */
        virtual const IfcPositiveLengthMeasure getRiserHeight() const;
        /**
         * Sets the value of the explicit attribute 'RiserHeight'.
         * 
         * @param value
         */
        virtual void setRiserHeight(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'RiserHeight'.
         * 
         */
        virtual void unsetRiserHeight();
        /**
         * Test if the attribute 'RiserHeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRiserHeight() const;
        /**
         * Gets the value of the explicit attribute 'TreadLength'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTreadLength();
        /**
         * (const) Returns the value of the explicit attribute 'TreadLength'.
         * 
         * @return the value of the explicit attribute 'TreadLength'
         */
        virtual const IfcPositiveLengthMeasure getTreadLength() const;
        /**
         * Sets the value of the explicit attribute 'TreadLength'.
         * 
         * @param value
         */
        virtual void setTreadLength(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'TreadLength'.
         * 
         */
        virtual void unsetTreadLength();
        /**
         * Test if the attribute 'TreadLength' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTreadLength() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStairFlight(Step::Id id, Step::SPFData *args);
        virtual ~IfcStairFlight();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStairFlight &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_numberOfRiser;
        /**
         */
        Step::Integer m_numberOfTreads;
        /**
         */
        Step::Real m_riserHeight;
        /**
         */
        Step::Real m_treadLength;

    };

}

#endif // IFC2X3_IFCSTAIRFLIGHT_H
