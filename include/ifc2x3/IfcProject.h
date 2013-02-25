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

#ifndef IFC2X3_IFCPROJECT_H
#define IFC2X3_IFCPROJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcUnitAssignment;

    /**
     * Generated class for the IfcProject Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProject : public IfcObject {
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
         * Gets the value of the explicit attribute 'LongName'.
         * 
         */
        virtual IfcLabel getLongName();
        /**
         * (const) Returns the value of the explicit attribute 'LongName'.
         * 
         * @return the value of the explicit attribute 'LongName'
         */
        virtual const IfcLabel getLongName() const;
        /**
         * Sets the value of the explicit attribute 'LongName'.
         * 
         * @param value
         */
        virtual void setLongName(const IfcLabel &value);
        /**
         * unset the attribute 'LongName'.
         * 
         */
        virtual void unsetLongName();
        /**
         * Test if the attribute 'LongName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLongName() const;
        /**
         * Gets the value of the explicit attribute 'Phase'.
         * 
         */
        virtual IfcLabel getPhase();
        /**
         * (const) Returns the value of the explicit attribute 'Phase'.
         * 
         * @return the value of the explicit attribute 'Phase'
         */
        virtual const IfcLabel getPhase() const;
        /**
         * Sets the value of the explicit attribute 'Phase'.
         * 
         * @param value
         */
        virtual void setPhase(const IfcLabel &value);
        /**
         * unset the attribute 'Phase'.
         * 
         */
        virtual void unsetPhase();
        /**
         * Test if the attribute 'Phase' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPhase() const;
        /**
         * Gets the value of the explicit attribute 'RepresentationContexts'.
         * 
         */
        virtual Set_IfcRepresentationContext_1_n &getRepresentationContexts();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationContexts'.
         * 
         * @return the value of the explicit attribute 'RepresentationContexts'
         */
        virtual const Set_IfcRepresentationContext_1_n &getRepresentationContexts() const;
        /**
         * Sets the value of the explicit attribute 'RepresentationContexts'.
         * 
         * @param value
         */
        virtual void setRepresentationContexts(const Set_IfcRepresentationContext_1_n &value);
        /**
         * unset the attribute 'RepresentationContexts'.
         * 
         */
        virtual void unsetRepresentationContexts();
        /**
         * Test if the attribute 'RepresentationContexts' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepresentationContexts() const;
        /**
         * Gets the value of the explicit attribute 'UnitsInContext'.
         * 
         */
        virtual IfcUnitAssignment *getUnitsInContext();
        /**
         * (const) Returns the value of the explicit attribute 'UnitsInContext'.
         * 
         * @return the value of the explicit attribute 'UnitsInContext'
         */
        virtual const IfcUnitAssignment *getUnitsInContext() const;
        /**
         * Sets the value of the explicit attribute 'UnitsInContext'.
         * 
         * @param value
         */
        virtual void setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value);
        /**
         * unset the attribute 'UnitsInContext'.
         * 
         */
        virtual void unsetUnitsInContext();
        /**
         * Test if the attribute 'UnitsInContext' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnitsInContext() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProject(Step::Id id, Step::SPFData *args);
        virtual ~IfcProject();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProject &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_longName;
        /**
         */
        Step::String m_phase;
        /**
         */
        Set_IfcRepresentationContext_1_n m_representationContexts;
        /**
         */
        Step::RefPtr< IfcUnitAssignment > m_unitsInContext;

    };

}

#endif // IFC2X3_IFCPROJECT_H
