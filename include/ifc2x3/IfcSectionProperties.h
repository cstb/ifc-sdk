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

#ifndef IFC2X3_IFCSECTIONPROPERTIES_H
#define IFC2X3_IFCSECTIONPROPERTIES_H
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
    class IfcProfileDef;

    /**
     * Generated class for the IfcSectionProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSectionProperties : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'SectionType'.
         * 
         */
        virtual IfcSectionTypeEnum getSectionType();
        /**
         * (const) Returns the value of the explicit attribute 'SectionType'.
         * 
         * @return the value of the explicit attribute 'SectionType'
         */
        virtual const IfcSectionTypeEnum getSectionType() const;
        /**
         * Sets the value of the explicit attribute 'SectionType'.
         * 
         * @param value
         */
        virtual void setSectionType(IfcSectionTypeEnum value);
        /**
         * unset the attribute 'SectionType'.
         * 
         */
        virtual void unsetSectionType();
        /**
         * Test if the attribute 'SectionType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSectionType() const;
        /**
         * Gets the value of the explicit attribute 'StartProfile'.
         * 
         */
        virtual IfcProfileDef *getStartProfile();
        /**
         * (const) Returns the value of the explicit attribute 'StartProfile'.
         * 
         * @return the value of the explicit attribute 'StartProfile'
         */
        virtual const IfcProfileDef *getStartProfile() const;
        /**
         * Sets the value of the explicit attribute 'StartProfile'.
         * 
         * @param value
         */
        virtual void setStartProfile(const Step::RefPtr< IfcProfileDef > &value);
        /**
         * unset the attribute 'StartProfile'.
         * 
         */
        virtual void unsetStartProfile();
        /**
         * Test if the attribute 'StartProfile' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStartProfile() const;
        /**
         * Gets the value of the explicit attribute 'EndProfile'.
         * 
         */
        virtual IfcProfileDef *getEndProfile();
        /**
         * (const) Returns the value of the explicit attribute 'EndProfile'.
         * 
         * @return the value of the explicit attribute 'EndProfile'
         */
        virtual const IfcProfileDef *getEndProfile() const;
        /**
         * Sets the value of the explicit attribute 'EndProfile'.
         * 
         * @param value
         */
        virtual void setEndProfile(const Step::RefPtr< IfcProfileDef > &value);
        /**
         * unset the attribute 'EndProfile'.
         * 
         */
        virtual void unsetEndProfile();
        /**
         * Test if the attribute 'EndProfile' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEndProfile() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSectionProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSectionProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSectionProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSectionTypeEnum m_sectionType;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_startProfile;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_endProfile;

    };

}

#endif // IFC2X3_IFCSECTIONPROPERTIES_H
