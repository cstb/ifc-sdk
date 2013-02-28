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

#ifndef IFC2X3_IFCSTRUCTURALACTIVITY_H
#define IFC2X3_IFCSTRUCTURALACTIVITY_H
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
    class IfcRelConnectsStructuralActivity;
    class IfcStructuralLoad;

    /**
     * Generated class for the IfcStructuralActivity Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralActivity : public IfcProduct {
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
         * Gets the value of the explicit attribute 'AppliedLoad'.
         * 
         */
        virtual IfcStructuralLoad *getAppliedLoad();
        /**
         * (const) Returns the value of the explicit attribute 'AppliedLoad'.
         * 
         * @return the value of the explicit attribute 'AppliedLoad'
         */
        virtual const IfcStructuralLoad *getAppliedLoad() const;
        /**
         * Sets the value of the explicit attribute 'AppliedLoad'.
         * 
         * @param value
         */
        virtual void setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value);
        /**
         * unset the attribute 'AppliedLoad'.
         * 
         */
        virtual void unsetAppliedLoad();
        /**
         * Test if the attribute 'AppliedLoad' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAppliedLoad() const;
        /**
         * Gets the value of the explicit attribute 'GlobalOrLocal'.
         * 
         */
        virtual IfcGlobalOrLocalEnum getGlobalOrLocal();
        /**
         * (const) Returns the value of the explicit attribute 'GlobalOrLocal'.
         * 
         * @return the value of the explicit attribute 'GlobalOrLocal'
         */
        virtual const IfcGlobalOrLocalEnum getGlobalOrLocal() const;
        /**
         * Sets the value of the explicit attribute 'GlobalOrLocal'.
         * 
         * @param value
         */
        virtual void setGlobalOrLocal(IfcGlobalOrLocalEnum value);
        /**
         * unset the attribute 'GlobalOrLocal'.
         * 
         */
        virtual void unsetGlobalOrLocal();
        /**
         * Test if the attribute 'GlobalOrLocal' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testGlobalOrLocal() const;
        /**
         * Gets the value of the inverse attribute 'AssignedToStructuralItem'.
         * 
         */
        IfcRelConnectsStructuralActivity *getAssignedToStructuralItem();
        /**
         * (const) Returns the value of the explicit attribute 'AssignedToStructuralItem'.
         * 
         * @return the value of the explicit attribute 'AssignedToStructuralItem'
         */
        virtual const IfcRelConnectsStructuralActivity *getAssignedToStructuralItem() const;
        /**
         * Test if the attribute 'AssignedToStructuralItem' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAssignedToStructuralItem() const;
        friend class IfcRelConnectsStructuralActivity;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralActivity(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralActivity();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralActivity &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcStructuralLoad > m_appliedLoad;
        /**
         */
        IfcGlobalOrLocalEnum m_globalOrLocal;
        /**
         */
        Step::ObsPtr< IfcRelConnectsStructuralActivity > m_assignedToStructuralItem;

    };

}

#endif // IFC2X3_IFCSTRUCTURALACTIVITY_H
