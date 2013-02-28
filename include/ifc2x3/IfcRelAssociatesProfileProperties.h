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

#ifndef IFC2X3_IFCRELASSOCIATESPROFILEPROPERTIES_H
#define IFC2X3_IFCRELASSOCIATESPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelAssociates.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcOrientationSelect;
    class IfcProfileProperties;
    class IfcShapeAspect;

    /**
     * Generated class for the IfcRelAssociatesProfileProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelAssociatesProfileProperties : public IfcRelAssociates {
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
         * Gets the value of the explicit attribute 'RelatingProfileProperties'.
         * 
         */
        virtual IfcProfileProperties *getRelatingProfileProperties();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingProfileProperties'.
         * 
         * @return the value of the explicit attribute 'RelatingProfileProperties'
         */
        virtual const IfcProfileProperties *getRelatingProfileProperties() const;
        /**
         * Sets the value of the explicit attribute 'RelatingProfileProperties'.
         * 
         * @param value
         */
        virtual void setRelatingProfileProperties(const Step::RefPtr< IfcProfileProperties > &value);
        /**
         * unset the attribute 'RelatingProfileProperties'.
         * 
         */
        virtual void unsetRelatingProfileProperties();
        /**
         * Test if the attribute 'RelatingProfileProperties' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingProfileProperties() const;
        /**
         * Gets the value of the explicit attribute 'ProfileSectionLocation'.
         * 
         */
        virtual IfcShapeAspect *getProfileSectionLocation();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileSectionLocation'.
         * 
         * @return the value of the explicit attribute 'ProfileSectionLocation'
         */
        virtual const IfcShapeAspect *getProfileSectionLocation() const;
        /**
         * Sets the value of the explicit attribute 'ProfileSectionLocation'.
         * 
         * @param value
         */
        virtual void setProfileSectionLocation(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         * unset the attribute 'ProfileSectionLocation'.
         * 
         */
        virtual void unsetProfileSectionLocation();
        /**
         * Test if the attribute 'ProfileSectionLocation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfileSectionLocation() const;
        /**
         * Gets the value of the explicit attribute 'ProfileOrientation'.
         * 
         */
        virtual IfcOrientationSelect *getProfileOrientation();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileOrientation'.
         * 
         * @return the value of the explicit attribute 'ProfileOrientation'
         */
        virtual const IfcOrientationSelect *getProfileOrientation() const;
        /**
         * Sets the value of the explicit attribute 'ProfileOrientation'.
         * 
         * @param value
         */
        virtual void setProfileOrientation(const Step::RefPtr< IfcOrientationSelect > &value);
        /**
         * unset the attribute 'ProfileOrientation'.
         * 
         */
        virtual void unsetProfileOrientation();
        /**
         * Test if the attribute 'ProfileOrientation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfileOrientation() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssociatesProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssociatesProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProfileProperties > m_relatingProfileProperties;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_profileSectionLocation;
        /**
         */
        Step::RefPtr< IfcOrientationSelect > m_profileOrientation;

    };

}

#endif // IFC2X3_IFCRELASSOCIATESPROFILEPROPERTIES_H
