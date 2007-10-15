/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcProcess.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTask : public IfcProcess {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcIdentifier getTaskId();
        /**
         * Sets the value of the explicit attribute 'TaskId'.
         * 
         * @param value
         */
        void setTaskId(const IfcIdentifier &value);
        /**
         */
        IfcLabel getStatus();
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        void setStatus(const IfcLabel &value);
        /**
         */
        IfcLabel getWorkMethod();
        /**
         * Sets the value of the explicit attribute 'WorkMethod'.
         * 
         * @param value
         */
        void setWorkMethod(const IfcLabel &value);
        /**
         */
        Step::Bool getIsMilestone();
        /**
         * Sets the value of the explicit attribute 'IsMilestone'.
         * 
         * @param value
         */
        void setIsMilestone(Step::Bool value);
        /**
         */
        Step::Integer getPriority();
        /**
         * Sets the value of the explicit attribute 'Priority'.
         * 
         * @param value
         */
        void setPriority(Step::Integer value);
        /**
         */
        virtual void release();
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
        std::string m_taskId;
        /**
         */
        std::string m_status;
        /**
         */
        std::string m_workMethod;
        /**
         */
        Step::Bool m_isMilestone;
        /**
         */
        Step::Integer m_priority;

    };

}

#endif // IFC2X3_IFCTASK_H
