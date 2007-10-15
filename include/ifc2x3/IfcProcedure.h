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

#ifndef IFC2X3_IFCPROCEDURE_H
#define IFC2X3_IFCPROCEDURE_H
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
    class IFC2X3_DLL_DEF IfcProcedure : public IfcProcess {
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
        IfcIdentifier getProcedureID();
        /**
         * Sets the value of the explicit attribute 'ProcedureID'.
         * 
         * @param value
         */
        void setProcedureID(const IfcIdentifier &value);
        /**
         */
        IfcProcedureTypeEnum getProcedureType();
        /**
         * Sets the value of the explicit attribute 'ProcedureType'.
         * 
         * @param value
         */
        void setProcedureType(IfcProcedureTypeEnum value);
        /**
         */
        IfcLabel getUserDefinedProcedureType();
        /**
         * Sets the value of the explicit attribute 'UserDefinedProcedureType'.
         * 
         * @param value
         */
        void setUserDefinedProcedureType(const IfcLabel &value);
        /**
         */
        virtual void release();
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
        std::string m_procedureID;
        /**
         */
        IfcProcedureTypeEnum m_procedureType;
        /**
         */
        std::string m_userDefinedProcedureType;

    };

}

#endif // IFC2X3_IFCPROCEDURE_H
