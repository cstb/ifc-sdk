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

#ifndef IFC2X3_IFCPROFILEPROPERTIES_H
#define IFC2X3_IFCPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcProfileDef;

    /**
     * Generated class for the IfcProfileProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProfileProperties : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ProfileName'.
         * 
         */
        virtual IfcLabel getProfileName();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileName'.
         * 
         * @return the value of the explicit attribute 'ProfileName'
         */
        virtual const IfcLabel getProfileName() const;
        /**
         * Sets the value of the explicit attribute 'ProfileName'.
         * 
         * @param value
         */
        virtual void setProfileName(const IfcLabel &value);
        /**
         * unset the attribute 'ProfileName'.
         * 
         */
        virtual void unsetProfileName();
        /**
         * Test if the attribute 'ProfileName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfileName() const;
        /**
         * Gets the value of the explicit attribute 'ProfileDefinition'.
         * 
         */
        virtual IfcProfileDef *getProfileDefinition();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileDefinition'.
         * 
         * @return the value of the explicit attribute 'ProfileDefinition'
         */
        virtual const IfcProfileDef *getProfileDefinition() const;
        /**
         * Sets the value of the explicit attribute 'ProfileDefinition'.
         * 
         * @param value
         */
        virtual void setProfileDefinition(const Step::RefPtr< IfcProfileDef > &value);
        /**
         * unset the attribute 'ProfileDefinition'.
         * 
         */
        virtual void unsetProfileDefinition();
        /**
         * Test if the attribute 'ProfileDefinition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfileDefinition() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_profileName;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_profileDefinition;

    };

}

#endif // IFC2X3_IFCPROFILEPROPERTIES_H
