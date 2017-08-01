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

#ifndef IFC2X3_IFCCOMPOSITEPROFILEDEF_H
#define IFC2X3_IFCCOMPOSITEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProfileDef.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcCompositeProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCompositeProfileDef : public IfcProfileDef {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
        /**
         * Gets the value of the explicit attribute 'Profiles'.
         * 
         */
        virtual Set_IfcProfileDef_2_n &getProfiles();
        /**
         * (const) Returns the value of the explicit attribute 'Profiles'.
         * 
         * @return the value of the explicit attribute 'Profiles'
         */
        virtual const Set_IfcProfileDef_2_n &getProfiles() const;
        /**
         * Sets the value of the explicit attribute 'Profiles'.
         * 
         * @param value
         */
        virtual void setProfiles(const Set_IfcProfileDef_2_n &value);
        /**
         * unset the attribute 'Profiles'.
         * 
         */
        virtual void unsetProfiles();
        /**
         * Test if the attribute 'Profiles' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfiles() const;
        /**
         * Gets the value of the explicit attribute 'Label'.
         * 
         */
        virtual IfcLabel getLabel();
        /**
         * (const) Returns the value of the explicit attribute 'Label'.
         * 
         * @return the value of the explicit attribute 'Label'
         */
        virtual const IfcLabel getLabel() const;
        /**
         * Sets the value of the explicit attribute 'Label'.
         * 
         * @param value
         */
        virtual void setLabel(const IfcLabel &value);
        /**
         * unset the attribute 'Label'.
         * 
         */
        virtual void unsetLabel();
        /**
         * Test if the attribute 'Label' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLabel() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCompositeProfileDef(Step::Id id, Step::SPFData *args);
        ~IfcCompositeProfileDef() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCompositeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcProfileDef_2_n m_profiles;
        /**
         */
        Step::String m_label;

    };

}

#endif // IFC2X3_IFCCOMPOSITEPROFILEDEF_H
