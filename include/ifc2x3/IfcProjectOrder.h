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

#ifndef IFC2X3_IFCPROJECTORDER_H
#define IFC2X3_IFCPROJECTORDER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcProjectOrder : public IfcControl {
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
        IfcIdentifier getID();
        /**
         * Sets the value of the explicit attribute 'ID'.
         * 
         * @param value
         */
        void setID(const IfcIdentifier &value);
        /**
         */
        IfcProjectOrderTypeEnum getPredefinedType();
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        void setPredefinedType(IfcProjectOrderTypeEnum value);
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
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProjectOrder(Step::Id id, Step::SPFData *args);
        virtual ~IfcProjectOrder();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProjectOrder &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_iD;
        /**
         */
        IfcProjectOrderTypeEnum m_predefinedType;
        /**
         */
        std::string m_status;

    };

}

#endif // IFC2X3_IFCPROJECTORDER_H
