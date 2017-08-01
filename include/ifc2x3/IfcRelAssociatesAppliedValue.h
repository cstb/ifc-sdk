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

#ifndef IFC2X3_IFCRELASSOCIATESAPPLIEDVALUE_H
#define IFC2X3_IFCRELASSOCIATESAPPLIEDVALUE_H
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
    class IfcAppliedValue;

    /**
     * Generated class for the IfcRelAssociatesAppliedValue Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelAssociatesAppliedValue : public IfcRelAssociates {
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
         * Gets the value of the explicit attribute 'RelatingAppliedValue'.
         * 
         */
        virtual IfcAppliedValue *getRelatingAppliedValue();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingAppliedValue'.
         * 
         * @return the value of the explicit attribute 'RelatingAppliedValue'
         */
        virtual const IfcAppliedValue *getRelatingAppliedValue() const;
        /**
         * Sets the value of the explicit attribute 'RelatingAppliedValue'.
         * 
         * @param value
         */
        virtual void setRelatingAppliedValue(const Step::RefPtr< IfcAppliedValue > &value);
        /**
         * unset the attribute 'RelatingAppliedValue'.
         * 
         */
        virtual void unsetRelatingAppliedValue();
        /**
         * Test if the attribute 'RelatingAppliedValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingAppliedValue() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssociatesAppliedValue(Step::Id id, Step::SPFData *args);
        ~IfcRelAssociatesAppliedValue() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAppliedValue > m_relatingAppliedValue;

    };

}

#endif // IFC2X3_IFCRELASSOCIATESAPPLIEDVALUE_H
