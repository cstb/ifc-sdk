#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProcess.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTask Entity.
     *
     */
    class IFC2X3_EXPORT IfcTask : public IfcProcess
    {

        // Attributes
        IfcIdentifier m_TaskId;
        IfcLabel m_Status;
        IfcLabel m_WorkMethod;
        Step::Boolean m_IsMilestone;
        Step::Integer m_Priority;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TaskId
        /// @{
        virtual IfcIdentifier getTaskId();
        virtual const IfcIdentifier getTaskId() const;
        virtual void setTaskId(const IfcIdentifier &value);
        virtual void unsetTaskId();
        virtual bool testTaskId() const;
        /// @}

        /// Attribute Status
        /// @{
        virtual IfcLabel getStatus();
        virtual const IfcLabel getStatus() const;
        virtual void setStatus(const IfcLabel &value);
        virtual void unsetStatus();
        virtual bool testStatus() const;
        /// @}

        /// Attribute WorkMethod
        /// @{
        virtual IfcLabel getWorkMethod();
        virtual const IfcLabel getWorkMethod() const;
        virtual void setWorkMethod(const IfcLabel &value);
        virtual void unsetWorkMethod();
        virtual bool testWorkMethod() const;
        /// @}

        /// Attribute IsMilestone
        /// @{
        virtual Step::Boolean getIsMilestone();
        virtual Step::Boolean getIsMilestone() const;
        virtual void setIsMilestone(Step::Boolean value);
        virtual void unsetIsMilestone();
        virtual bool testIsMilestone() const;
        /// @}

        /// Attribute Priority
        /// @{
        virtual Step::Integer getPriority();
        virtual Step::Integer getPriority() const;
        virtual void setPriority(Step::Integer value);
        virtual void unsetPriority();
        virtual bool testPriority() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTask(Step::Id id, Step::SPFData *args);
        virtual ~IfcTask();

        virtual bool init();

        virtual void copy(const IfcTask &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3