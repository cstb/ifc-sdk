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

#ifndef IFC2X3_IFCOBJECT_H
#define IFC2X3_IFCOBJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObjectDefinition.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcRelDefines;

    /**
     */
    class IFC2X3_DLL_DEF IfcObject : public IfcObjectDefinition {
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
        IfcLabel getObjectType();
        /**
         * Sets the value of the explicit attribute 'ObjectType'.
         * 
         * @param value
         */
        void setObjectType(const IfcLabel &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDefines > > &getIsDefinedBy();
        /**
         */
        virtual void release();
        friend class IfcRelDefines;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcObject(Step::Id id, Step::SPFData *args);
        virtual ~IfcObject();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcObject &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_objectType;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDefines > > m_isDefinedBy;

    };

}

#endif // IFC2X3_IFCOBJECT_H
