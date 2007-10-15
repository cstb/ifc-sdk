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

#ifndef IFC2X3_IFCPROPERTYSETDEFINITION_H
#define IFC2X3_IFCPROPERTYSETDEFINITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcPropertyDefinition.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelDefinesByProperties;
    class IfcTypeObject;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertySetDefinition : public IfcPropertyDefinition {
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
        Step::Set< Step::ObsPtr< IfcRelDefinesByProperties > > &getPropertyDefinitionOf();
        /**
         */
        Step::Set< Step::ObsPtr< IfcTypeObject > > &getDefinesType();
        /**
         */
        virtual void release();
        friend class IfcRelDefinesByProperties;
        friend class ExpressDataSet;
        friend class IfcTypeObject;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertySetDefinition(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertySetDefinition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertySetDefinition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDefinesByProperties > > m_propertyDefinitionOf;
        /**
         */
        Step::Set< Step::ObsPtr< IfcTypeObject > > m_definesType;

    };

}

#endif // IFC2X3_IFCPROPERTYSETDEFINITION_H
