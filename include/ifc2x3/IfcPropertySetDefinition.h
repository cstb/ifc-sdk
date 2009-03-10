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

#ifndef IFC2X3_IFCPROPERTYSETDEFINITION_H
#define IFC2X3_IFCPROPERTYSETDEFINITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcPropertyDefinition.h"
#include <string>
#include <Step/SPFData.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertySetDefinition : public IfcPropertyDefinition {
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
         * Gets the value of the inverse attribute 'PropertyDefinitionOf'.
         * 
         */
        Inverse_Set_IfcRelDefinesByProperties_0_1 &getPropertyDefinitionOf();
        /**
         * (const) Returns the value of the explicit attribute 'PropertyDefinitionOf'.
         * 
         * @return the value of the explicit attribute 'PropertyDefinitionOf'
         */
        virtual const Inverse_Set_IfcRelDefinesByProperties_0_1 &getPropertyDefinitionOf() const;
        /**
         * Gets the value of the inverse attribute 'DefinesType'.
         * 
         */
        Inverse_Set_IfcTypeObject_0_1 &getDefinesType();
        /**
         * (const) Returns the value of the explicit attribute 'DefinesType'.
         * 
         * @return the value of the explicit attribute 'DefinesType'
         */
        virtual const Inverse_Set_IfcTypeObject_0_1 &getDefinesType() const;
        friend class Inverted_IfcTypeObject_HasPropertySets_type;
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
        Inverse_Set_IfcRelDefinesByProperties_0_1 m_propertyDefinitionOf;
        /**
         */
        Inverse_Set_IfcTypeObject_0_1 m_definesType;

    };

}

#endif // IFC2X3_IFCPROPERTYSETDEFINITION_H
