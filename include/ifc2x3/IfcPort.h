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

#ifndef IFC2X3_IFCPORT_H
#define IFC2X3_IFCPORT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProduct.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelConnectsPortToElement;

    /**
     * Generated class for the IfcPort Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPort : public IfcProduct {
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
         * Gets the value of the inverse attribute 'ContainedIn'.
         * 
         */
        IfcRelConnectsPortToElement *getContainedIn();
        /**
         * (const) Returns the value of the explicit attribute 'ContainedIn'.
         * 
         * @return the value of the explicit attribute 'ContainedIn'
         */
        virtual const IfcRelConnectsPortToElement *getContainedIn() const;
        /**
         * Test if the attribute 'ContainedIn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContainedIn() const;
        /**
         * Gets the value of the inverse attribute 'ConnectedFrom'.
         * 
         */
        virtual Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedFrom();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectedFrom'.
         * 
         * @return the value of the explicit attribute 'ConnectedFrom'
         */
        const virtual Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedFrom() const;
        /**
         * Test if the attribute 'ConnectedFrom' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectedFrom() const;
        /**
         * Gets the value of the inverse attribute 'ConnectedTo'.
         * 
         */
        virtual Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedTo();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectedTo'.
         * 
         * @return the value of the explicit attribute 'ConnectedTo'
         */
        const virtual Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedTo() const;
        /**
         * Test if the attribute 'ConnectedTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectedTo() const;
        friend class ExpressDataSet;
        friend class IfcRelConnectsPortToElement;
        friend class IfcRelConnectsPorts;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPort(Step::Id id, Step::SPFData *args);
        virtual ~IfcPort();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPort &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::ObsPtr< IfcRelConnectsPortToElement > m_containedIn;
        /**
         */
        Inverse_Set_IfcRelConnectsPorts_0_1 m_connectedFrom;
        /**
         */
        Inverse_Set_IfcRelConnectsPorts_0_1 m_connectedTo;

    };

}

#endif // IFC2X3_IFCPORT_H
