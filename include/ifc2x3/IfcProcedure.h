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

#ifndef IFC2X3_IFCPROCEDURE_H
#define IFC2X3_IFCPROCEDURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProcess.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcProcedure Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProcedure : public IfcProcess {
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
         * Gets the value of the explicit attribute 'ProcedureID'.
         * 
         */
        virtual IfcIdentifier getProcedureID();
        /**
         * (const) Returns the value of the explicit attribute 'ProcedureID'.
         * 
         * @return the value of the explicit attribute 'ProcedureID'
         */
        virtual const IfcIdentifier getProcedureID() const;
        /**
         * Sets the value of the explicit attribute 'ProcedureID'.
         * 
         * @param value
         */
        virtual void setProcedureID(const IfcIdentifier &value);
        /**
         * unset the attribute 'ProcedureID'.
         * 
         */
        virtual void unsetProcedureID();
        /**
         * Test if the attribute 'ProcedureID' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProcedureID() const;
        /**
         * Gets the value of the explicit attribute 'ProcedureType'.
         * 
         */
        virtual IfcProcedureTypeEnum getProcedureType();
        /**
         * (const) Returns the value of the explicit attribute 'ProcedureType'.
         * 
         * @return the value of the explicit attribute 'ProcedureType'
         */
        virtual const IfcProcedureTypeEnum getProcedureType() const;
        /**
         * Sets the value of the explicit attribute 'ProcedureType'.
         * 
         * @param value
         */
        virtual void setProcedureType(IfcProcedureTypeEnum value);
        /**
         * unset the attribute 'ProcedureType'.
         * 
         */
        virtual void unsetProcedureType();
        /**
         * Test if the attribute 'ProcedureType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProcedureType() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedProcedureType'.
         * 
         */
        virtual IfcLabel getUserDefinedProcedureType();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedProcedureType'.
         * 
         * @return the value of the explicit attribute 'UserDefinedProcedureType'
         */
        virtual const IfcLabel getUserDefinedProcedureType() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedProcedureType'.
         * 
         * @param value
         */
        virtual void setUserDefinedProcedureType(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedProcedureType'.
         * 
         */
        virtual void unsetUserDefinedProcedureType();
        /**
         * Test if the attribute 'UserDefinedProcedureType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedProcedureType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProcedure(Step::Id id, Step::SPFData *args);
        virtual ~IfcProcedure();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProcedure &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_procedureID;
        /**
         */
        IfcProcedureTypeEnum m_procedureType;
        /**
         */
        Step::String m_userDefinedProcedureType;

    };

}

#endif // IFC2X3_IFCPROCEDURE_H
