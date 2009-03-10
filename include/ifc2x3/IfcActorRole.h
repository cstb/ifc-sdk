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

#ifndef IFC2X3_IFCACTORROLE_H
#define IFC2X3_IFCACTORROLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcActorRole : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Role'.
         * 
         */
        virtual IfcRoleEnum getRole();
        /**
         * (const) Returns the value of the explicit attribute 'Role'.
         * 
         * @return the value of the explicit attribute 'Role'
         */
        virtual const IfcRoleEnum getRole() const;
        /**
         * Sets the value of the explicit attribute 'Role'.
         * 
         * @param value
         */
        virtual void setRole(IfcRoleEnum value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedRole'.
         * 
         */
        virtual IfcLabel getUserDefinedRole();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedRole'.
         * 
         * @return the value of the explicit attribute 'UserDefinedRole'
         */
        virtual const IfcLabel getUserDefinedRole() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedRole'.
         * 
         * @param value
         */
        virtual void setUserDefinedRole(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcActorRole(Step::Id id, Step::SPFData *args);
        virtual ~IfcActorRole();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcActorRole &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcRoleEnum m_role;
        /**
         */
        Step::String m_userDefinedRole;
        /**
         */
        Step::String m_description;

    };

}

#endif // IFC2X3_IFCACTORROLE_H
