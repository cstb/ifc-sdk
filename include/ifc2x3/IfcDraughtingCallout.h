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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUT_H
#define IFC2X3_IFCDRAUGHTINGCALLOUT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcDraughtingCallout Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDraughtingCallout : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Contents'.
         * 
         */
        virtual Set_IfcDraughtingCalloutElement_1_n &getContents();
        /**
         * (const) Returns the value of the explicit attribute 'Contents'.
         * 
         * @return the value of the explicit attribute 'Contents'
         */
        virtual const Set_IfcDraughtingCalloutElement_1_n &getContents() const;
        /**
         * Sets the value of the explicit attribute 'Contents'.
         * 
         * @param value
         */
        virtual void setContents(const Set_IfcDraughtingCalloutElement_1_n &value);
        /**
         * unset the attribute 'Contents'.
         * 
         */
        virtual void unsetContents();
        /**
         * Test if the attribute 'Contents' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContents() const;
        /**
         * Gets the value of the inverse attribute 'IsRelatedFromCallout'.
         * 
         */
        virtual Inverse_Set_IfcDraughtingCalloutRelationship_0_n &getIsRelatedFromCallout();
        /**
         * (const) Returns the value of the explicit attribute 'IsRelatedFromCallout'.
         * 
         * @return the value of the explicit attribute 'IsRelatedFromCallout'
         */
        const virtual Inverse_Set_IfcDraughtingCalloutRelationship_0_n &getIsRelatedFromCallout() const;
        /**
         * Test if the attribute 'IsRelatedFromCallout' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsRelatedFromCallout() const;
        /**
         * Gets the value of the inverse attribute 'IsRelatedToCallout'.
         * 
         */
        virtual Inverse_Set_IfcDraughtingCalloutRelationship_0_n &getIsRelatedToCallout();
        /**
         * (const) Returns the value of the explicit attribute 'IsRelatedToCallout'.
         * 
         * @return the value of the explicit attribute 'IsRelatedToCallout'
         */
        const virtual Inverse_Set_IfcDraughtingCalloutRelationship_0_n &getIsRelatedToCallout() const;
        /**
         * Test if the attribute 'IsRelatedToCallout' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsRelatedToCallout() const;
        friend class ExpressDataSet;
        friend class IfcDraughtingCalloutRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDraughtingCallout(Step::Id id, Step::SPFData *args);
        virtual ~IfcDraughtingCallout();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDraughtingCallout &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcDraughtingCalloutElement_1_n m_contents;
        /**
         */
        Inverse_Set_IfcDraughtingCalloutRelationship_0_n m_isRelatedFromCallout;
        /**
         */
        Inverse_Set_IfcDraughtingCalloutRelationship_0_n m_isRelatedToCallout;

    };

}

#endif // IFC2X3_IFCDRAUGHTINGCALLOUT_H
