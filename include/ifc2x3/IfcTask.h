/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCTASK_H
#define IFC2X3_IFCTASK_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcProcess.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTask : public IfcProcess {
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
