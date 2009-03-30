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

#ifndef IFC2X3_IFCPROFILEDEF_H
#define IFC2X3_IFCPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcProfileDef Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcProfileDef : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ProfileType'.
         * 
         */
        virtual IfcProfileTypeEnum getProfileType();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileType'.
         * 
         * @return the value of the explicit attribute 'ProfileType'
         */
        virtual const IfcProfileTypeEnum getProfileType() const;
        /**
         * Sets the value of the explicit attribute 'ProfileType'.
         * 
         * @param value
         */
        virtual void setProfileType(IfcProfileTypeEnum value);
        /**
         * unset the attribute 'ProfileType'.
         * 
         */
        virtual void unsetProfileType();
        /**
         * Test if the attribute 'ProfileType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfileType() const;
        /**
         * Gets the value of the explicit attribute 'ProfileName'.
         * 
         */
        virtual IfcLabel getProfileName();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileName'.
         * 
         * @return the value of the explicit attribute 'ProfileName'
         */
        virtual const IfcLabel getProfileName() const;
        /**
         * Sets the value of the explicit attribute 'ProfileName'.
         * 
         * @param value
         */
        virtual void setProfileName(const IfcLabel &value);
        /**
         * unset the attribute 'ProfileName'.
         * 
         */
        virtual void unsetProfileName();
        /**
         * Test if the attribute 'ProfileName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProfileName() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcProfileTypeEnum m_profileType;
        /**
         */
        Step::String m_profileName;

    };

}

#endif // IFC2X3_IFCPROFILEDEF_H
