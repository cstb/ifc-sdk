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

#ifndef IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
#define IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcConnectionGeometry.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;
    class IfcProfileDef;

    /**
     * Generated class for the IfcConnectionPortGeometry Entity.
     * 
     */
    class IFC2X3_EXPORT IfcConnectionPortGeometry : public IfcConnectionGeometry {
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
         * Gets the value of the explicit attribute 'LocationAtRelatingElement'.
         * 
         */
        virtual IfcAxis2Placement *getLocationAtRelatingElement();
        /**
         * (const) Returns the value of the explicit attribute 'LocationAtRelatingElement'.
         * 
         * @return the value of the explicit attribute 'LocationAtRelatingElement'
         */
        virtual const IfcAxis2Placement *getLocationAtRelatingElement() const;
        /**
         * Sets the value of the explicit attribute 'LocationAtRelatingElement'.
         * 
         * @param value
         */
        virtual void setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         * unset the attribute 'LocationAtRelatingElement'.
         * 
         */
        virtual void unsetLocationAtRelatingElement();
        /**
         * Test if the attribute 'LocationAtRelatingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLocationAtRelatingElement() const;
        /**
         * Gets the value of the explicit attribute 'LocationAtRelatedElement'.
         * 
         */
        virtual IfcAxis2Placement *getLocationAtRelatedElement();
        /**
         * (const) Returns the value of the explicit attribute 'LocationAtRelatedElement'.
         * 
         * @return the value of the explicit attribute 'LocationAtRelatedElement'
         */
        virtual const IfcAxis2Placement *getLocationAtRelatedElement() const;
        /**
         * Sets the value of the explicit attribute 'LocationAtRelatedElement'.
         * 
         * @param value
         */
        virtual void setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         * unset the attribute 'LocationAtRelatedElement'.
         * 
         */
        virtual void unsetLocationAtRelatedElement();
        /**
         * Test if the attribute 'LocationAtRelatedElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLocationAtRelatedElement() const;
        /**
         * Gets the value of the explicit attribute 'ProfileOfPort'.
         * 
         */
        virtual IfcProfileDef *getProfileOfPort();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileOfPort'.
         * 
         * @return the value of the explicit attribute 'ProfileOfPort'
         */
        virtual const IfcProfileDef *getProfileOfPort() const;
        /**
         * Sets the value of the explicit attribute 'ProfileOfPort'.
         * 
         * @param value
         */
        virtual void setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value);
        /**
         * unset the attribute 'ProfileOfPort'.
         * 
         */
        virtual void unsetProfileOfPort();
        /**
         * Test if the attribute 'ProfileOfPort' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfileOfPort() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConnectionPortGeometry(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionPortGeometry();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConnectionPortGeometry &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_locationAtRelatingElement;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_locationAtRelatedElement;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_profileOfPort;

    };

}

#endif // IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
