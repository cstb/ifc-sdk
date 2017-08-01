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

#ifndef IFC2X3_IFCEXTERNALREFERENCE_H
#define IFC2X3_IFCEXTERNALREFERENCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcExternalReference Entity.
     * 
     */
    class IFC2X3_EXPORT IfcExternalReference : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Location'.
         * 
         */
        virtual IfcLabel getLocation();
        /**
         * (const) Returns the value of the explicit attribute 'Location'.
         * 
         * @return the value of the explicit attribute 'Location'
         */
        virtual const IfcLabel getLocation() const;
        /**
         * Sets the value of the explicit attribute 'Location'.
         * 
         * @param value
         */
        virtual void setLocation(const IfcLabel &value);
        /**
         * unset the attribute 'Location'.
         * 
         */
        virtual void unsetLocation();
        /**
         * Test if the attribute 'Location' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLocation() const;
        /**
         * Gets the value of the explicit attribute 'ItemReference'.
         * 
         */
        virtual IfcIdentifier getItemReference();
        /**
         * (const) Returns the value of the explicit attribute 'ItemReference'.
         * 
         * @return the value of the explicit attribute 'ItemReference'
         */
        virtual const IfcIdentifier getItemReference() const;
        /**
         * Sets the value of the explicit attribute 'ItemReference'.
         * 
         * @param value
         */
        virtual void setItemReference(const IfcIdentifier &value);
        /**
         * unset the attribute 'ItemReference'.
         * 
         */
        virtual void unsetItemReference();
        /**
         * Test if the attribute 'ItemReference' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testItemReference() const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcExternalReference(Step::Id id, Step::SPFData *args);
        ~IfcExternalReference() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcExternalReference &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_location;
        /**
         */
        Step::String m_itemReference;
        /**
         */
        Step::String m_name;

    };

}

#endif // IFC2X3_IFCEXTERNALREFERENCE_H
