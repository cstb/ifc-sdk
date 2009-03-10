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

#ifndef IFC2X3_IFCORGANIZATION_H
#define IFC2X3_IFCORGANIZATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class IfcAddress;
    class IfcOrganization;

    /**
     */
    class Inverted_IfcOrganization_Addresses_type : public List_IfcAddress_1_n {
    public:
        /**
         */
        typedef List_IfcAddress_1_n::iterator iterator;

        /**
         */
        IfcOrganization *mOwner;
        /**
         */
        Inverted_IfcOrganization_Addresses_type();
        /**
         * @param owner
         */
        void setOwner(IfcOrganization *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcAddress > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcAddress > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcOrganization : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Id'.
         * 
         */
        virtual IfcIdentifier getId();
        /**
         * (const) Returns the value of the explicit attribute 'Id'.
         * 
         * @return the value of the explicit attribute 'Id'
         */
        virtual const IfcIdentifier getId() const;
        /**
         * Sets the value of the explicit attribute 'Id'.
         * 
         * @param value
         */
        virtual void setId(const IfcIdentifier &value);
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
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
        /**
         * Gets the value of the explicit attribute 'Roles'.
         * 
         */
        virtual List_IfcActorRole_1_n &getRoles();
        /**
         * (const) Returns the value of the explicit attribute 'Roles'.
         * 
         * @return the value of the explicit attribute 'Roles'
         */
        virtual const List_IfcActorRole_1_n &getRoles() const;
        /**
         * Sets the value of the explicit attribute 'Roles'.
         * 
         * @param value
         */
        virtual void setRoles(const List_IfcActorRole_1_n &value);
        /**
         * Gets the value of the explicit attribute 'Addresses'.
         * 
         */
        virtual List_IfcAddress_1_n &getAddresses();
        /**
         * (const) Returns the value of the explicit attribute 'Addresses'.
         * 
         * @return the value of the explicit attribute 'Addresses'
         */
        virtual const List_IfcAddress_1_n &getAddresses() const;
        /**
         * Gets the value of the inverse attribute 'IsRelatedBy'.
         * 
         */
        Inverse_Set_IfcOrganizationRelationship_0_n &getIsRelatedBy();
        /**
         * (const) Returns the value of the explicit attribute 'IsRelatedBy'.
         * 
         * @return the value of the explicit attribute 'IsRelatedBy'
         */
        virtual const Inverse_Set_IfcOrganizationRelationship_0_n &getIsRelatedBy() const;
        /**
         * Gets the value of the inverse attribute 'Relates'.
         * 
         */
        Inverse_Set_IfcOrganizationRelationship_0_n &getRelates();
        /**
         * (const) Returns the value of the explicit attribute 'Relates'.
         * 
         * @return the value of the explicit attribute 'Relates'
         */
        virtual const Inverse_Set_IfcOrganizationRelationship_0_n &getRelates() const;
        /**
         * Gets the value of the inverse attribute 'Engages'.
         * 
         */
        Inverse_Set_IfcPersonAndOrganization_0_n &getEngages();
        /**
         * (const) Returns the value of the explicit attribute 'Engages'.
         * 
         * @return the value of the explicit attribute 'Engages'
         */
        virtual const Inverse_Set_IfcPersonAndOrganization_0_n &getEngages() const;
        friend class Inverted_IfcOrganizationRelationship_RelatedOrganizations_type;
        friend class ExpressDataSet;
        friend class IfcPersonAndOrganization;
        friend class IfcOrganizationRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOrganization(Step::Id id, Step::SPFData *args);
        virtual ~IfcOrganization();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOrganization &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_id;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        List_IfcActorRole_1_n m_roles;
        /**
         */
        Inverted_IfcOrganization_Addresses_type m_addresses;
        /**
         */
        Inverse_Set_IfcOrganizationRelationship_0_n m_isRelatedBy;
        /**
         */
        Inverse_Set_IfcOrganizationRelationship_0_n m_relates;
        /**
         */
        Inverse_Set_IfcPersonAndOrganization_0_n m_engages;

    };

}

#endif // IFC2X3_IFCORGANIZATION_H
