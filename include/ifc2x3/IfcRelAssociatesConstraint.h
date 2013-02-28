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

#ifndef IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
#define IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelAssociates.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcConstraint;

    /**
     * Generated class for the IfcRelAssociatesConstraint Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelAssociatesConstraint : public IfcRelAssociates {
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
         * Gets the value of the explicit attribute 'Intent'.
         * 
         */
        virtual IfcLabel getIntent();
        /**
         * (const) Returns the value of the explicit attribute 'Intent'.
         * 
         * @return the value of the explicit attribute 'Intent'
         */
        virtual const IfcLabel getIntent() const;
        /**
         * Sets the value of the explicit attribute 'Intent'.
         * 
         * @param value
         */
        virtual void setIntent(const IfcLabel &value);
        /**
         * unset the attribute 'Intent'.
         * 
         */
        virtual void unsetIntent();
        /**
         * Test if the attribute 'Intent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIntent() const;
        /**
         * Gets the value of the explicit attribute 'RelatingConstraint'.
         * 
         */
        virtual IfcConstraint *getRelatingConstraint();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @return the value of the explicit attribute 'RelatingConstraint'
         */
        virtual const IfcConstraint *getRelatingConstraint() const;
        /**
         * Sets the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @param value
         */
        virtual void setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value);
        /**
         * unset the attribute 'RelatingConstraint'.
         * 
         */
        virtual void unsetRelatingConstraint();
        /**
         * Test if the attribute 'RelatingConstraint' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingConstraint() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssociatesConstraint(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssociatesConstraint();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssociatesConstraint &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_intent;
        /**
         */
        Step::RefPtr< IfcConstraint > m_relatingConstraint;

    };

}

#endif // IFC2X3_IFCRELASSOCIATESCONSTRAINT_H
