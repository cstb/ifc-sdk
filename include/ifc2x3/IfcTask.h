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

#ifndef IFC2X3_IFCTASK_H
#define IFC2X3_IFCTASK_H
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
     * Generated class for the IfcTask Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTask : public IfcProcess {
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
         * Gets the value of the explicit attribute 'TaskId'.
         * 
         */
        virtual IfcIdentifier getTaskId();
        /**
         * (const) Returns the value of the explicit attribute 'TaskId'.
         * 
         * @return the value of the explicit attribute 'TaskId'
         */
        virtual const IfcIdentifier getTaskId() const;
        /**
         * Sets the value of the explicit attribute 'TaskId'.
         * 
         * @param value
         */
        virtual void setTaskId(const IfcIdentifier &value);
        /**
         * unset the attribute 'TaskId'.
         * 
         */
        virtual void unsetTaskId();
        /**
         * Test if the attribute 'TaskId' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTaskId() const;
        /**
         * Gets the value of the explicit attribute 'Status'.
         * 
         */
        virtual IfcLabel getStatus();
        /**
         * (const) Returns the value of the explicit attribute 'Status'.
         * 
         * @return the value of the explicit attribute 'Status'
         */
        virtual const IfcLabel getStatus() const;
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        virtual void setStatus(const IfcLabel &value);
        /**
         * unset the attribute 'Status'.
         * 
         */
        virtual void unsetStatus();
        /**
         * Test if the attribute 'Status' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStatus() const;
        /**
         * Gets the value of the explicit attribute 'WorkMethod'.
         * 
         */
        virtual IfcLabel getWorkMethod();
        /**
         * (const) Returns the value of the explicit attribute 'WorkMethod'.
         * 
         * @return the value of the explicit attribute 'WorkMethod'
         */
        virtual const IfcLabel getWorkMethod() const;
        /**
         * Sets the value of the explicit attribute 'WorkMethod'.
         * 
         * @param value
         */
        virtual void setWorkMethod(const IfcLabel &value);
        /**
         * unset the attribute 'WorkMethod'.
         * 
         */
        virtual void unsetWorkMethod();
        /**
         * Test if the attribute 'WorkMethod' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWorkMethod() const;
        /**
         * Gets the value of the explicit attribute 'IsMilestone'.
         * 
         */
        virtual Step::Boolean getIsMilestone();
        /**
         * (const) Returns the value of the explicit attribute 'IsMilestone'.
         * 
         * @return the value of the explicit attribute 'IsMilestone'
         */
        virtual const Step::Boolean getIsMilestone() const;
        /**
         * Sets the value of the explicit attribute 'IsMilestone'.
         * 
         * @param value
         */
        virtual void setIsMilestone(Step::Boolean value);
        /**
         * unset the attribute 'IsMilestone'.
         * 
         */
        virtual void unsetIsMilestone();
        /**
         * Test if the attribute 'IsMilestone' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsMilestone() const;
        /**
         * Gets the value of the explicit attribute 'Priority'.
         * 
         */
        virtual Step::Integer getPriority();
        /**
         * (const) Returns the value of the explicit attribute 'Priority'.
         * 
         * @return the value of the explicit attribute 'Priority'
         */
        virtual const Step::Integer getPriority() const;
        /**
         * Sets the value of the explicit attribute 'Priority'.
         * 
         * @param value
         */
        virtual void setPriority(Step::Integer value);
        /**
         * unset the attribute 'Priority'.
         * 
         */
        virtual void unsetPriority();
        /**
         * Test if the attribute 'Priority' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPriority() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTask(Step::Id id, Step::SPFData *args);
        virtual ~IfcTask();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTask &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_taskId;
        /**
         */
        Step::String m_status;
        /**
         */
        Step::String m_workMethod;
        /**
         */
        Step::Boolean m_isMilestone;
        /**
         */
        Step::Integer m_priority;

    };

}

#endif // IFC2X3_IFCTASK_H
