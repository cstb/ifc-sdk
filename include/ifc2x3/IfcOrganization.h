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

#ifndef IFC2X3_IFCORGANIZATION_H
#define IFC2X3_IFCORGANIZATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include <Step/ClassType.h>
#include <Step/BaseEntity.h>
#include <string>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorRole;
    class IfcAddress;
    class IfcOrganizationRelationship;
    class IfcPersonAndOrganization;

    /**
     */
    class IFC2X3_DLL_DEF IfcOrganization : public Step::BaseEntity {
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
        IfcIdentifier getId();
        /**
         * Sets the value of the explicit attribute 'Id'.
         * 
         * @param value
         */
        void setId(const IfcIdentifier &value);
        /**
         */
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        Step::List< Step::RefPtr< IfcActorRole > > &getRoles();
        /**
         * Sets the value of the explicit attribute 'Roles'.
         * 
         * @param value
         */
        void setRoles(const Step::List< Step::RefPtr< IfcActorRole > > &value);
        /**
         */
        Step::List< Step::RefPtr< IfcAddress > > &getAddresses();
        /**
         */
        Step::Set< Step::ObsPtr< IfcOrganizationRelationship > > &getIsRelatedBy();
        /**
         */
        Step::Set< Step::ObsPtr< IfcOrganizationRelationship > > &getRelates();
        /**
         */
        Step::Set< Step::ObsPtr< IfcPersonAndOrganization > > &getEngages();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcPersonAndOrganization;
        friend class IfcOrganizationRelationship;
        /**
         */
        class Inverted_Addresses_type : public Step::List< Step::RefPtr< IfcAddress > > {
        public:
            /**
             */
            IfcOrganization *mOwner;
            /**
             */
            Inverted_Addresses_type();
            /**
             * @param owner
             */
            void setOwner(IfcOrganization *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcAddress > &value);

        };


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
        std::string m_id;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Step::List< Step::RefPtr< IfcActorRole > > m_roles;
        /**
         */
        Inverted_Addresses_type m_addresses;
        /**
         */
        Step::Set< Step::ObsPtr< IfcOrganizationRelationship > > m_isRelatedBy;
        /**
         */
        Step::Set< Step::ObsPtr< IfcOrganizationRelationship > > m_relates;
        /**
         */
        Step::Set< Step::ObsPtr< IfcPersonAndOrganization > > m_engages;

    };

}

#endif // IFC2X3_IFCORGANIZATION_H
