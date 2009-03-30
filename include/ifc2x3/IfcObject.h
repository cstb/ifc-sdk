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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcObjectDefinition.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcObject Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcObject : public IfcObjectDefinition {
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
         * Gets the value of the explicit attribute 'ObjectType'.
         * 
         */
        virtual IfcLabel getObjectType();
        /**
         * (const) Returns the value of the explicit attribute 'ObjectType'.
         * 
         * @return the value of the explicit attribute 'ObjectType'
         */
        virtual const IfcLabel getObjectType() const;
        /**
         * Sets the value of the explicit attribute 'ObjectType'.
         * 
         * @param value
         */
        virtual void setObjectType(const IfcLabel &value);
        /**
         * unset the attribute 'ObjectType'.
         * 
         */
        virtual void unsetObjectType();
        /**
         * Test if the attribute 'ObjectType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testObjectType() const;
        /**
         * Gets the value of the inverse attribute 'IsDefinedBy'.
         * 
         */
        Inverse_Set_IfcRelDefines_0_n &getIsDefinedBy();
        /**
         * (const) Returns the value of the explicit attribute 'IsDefinedBy'.
         * 
         * @return the value of the explicit attribute 'IsDefinedBy'
         */
        virtual const Inverse_Set_IfcRelDefines_0_n &getIsDefinedBy() const;
        /**
         * Test if the attribute 'IsDefinedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsDefinedBy() const;
        friend class Inverted_IfcRelDefines_RelatedObjects_type;
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
        Step::String m_objectType;
        /**
         */
        Inverse_Set_IfcRelDefines_0_n m_isDefinedBy;

    };

}

#endif // IFC2X3_IFCOBJECT_H
