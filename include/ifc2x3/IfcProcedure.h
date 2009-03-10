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

#ifndef IFC2X3_IFCPROCEDURE_H
#define IFC2X3_IFCPROCEDURE_H
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
    class IFC2X3_DLL_DEF IfcProcedure : public IfcProcess {
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
