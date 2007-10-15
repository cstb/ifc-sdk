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

#ifndef IFC2X3_IFCPERSON_H
#define IFC2X3_IFCPERSON_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorRole;
    class IfcAddress;
    class IfcPersonAndOrganization;

    /**
     */
    class IFC2X3_DLL_DEF IfcPerson : public Step::BaseEntity {
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
        IfcLabel getFamilyName();
        /**
         * Sets the value of the explicit attribute 'FamilyName'.
         * 
         * @param value
         */
        void setFamilyName(const IfcLabel &value);
        /**
         */
        IfcLabel getGivenName();
        /**
         * Sets the value of the explicit attribute 'GivenName'.
         * 
         * @param value
         */
        void setGivenName(const IfcLabel &value);
        /**
         */
        Step::List< IfcLabel > &getMiddleNames();
        /**
         * Sets the value of the explicit attribute 'MiddleNames'.
         * 
         * @param value
         */
        void setMiddleNames(const Step::List< IfcLabel > &value);
        /**
         */
        Step::List< IfcLabel > &getPrefixTitles();
        /**
         * Sets the value of the explicit attribute 'PrefixTitles'.
         * 
         * @param value
         */
        void setPrefixTitles(const Step::List< IfcLabel > &value);
        /**
         */
        Step::List< IfcLabel > &getSuffixTitles();
        /**
         * Sets the value of the explicit attribute 'SuffixTitles'.
         * 
         * @param value
         */
        void setSuffixTitles(const Step::List< IfcLabel > &value);
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
        Step::Set< Step::ObsPtr< IfcPersonAndOrganization > > &getEngagedIn();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcPersonAndOrganization;
        /**
         */
        class Inverted_Addresses_type : public Step::List< Step::RefPtr< IfcAddress > > {
        public:
            /**
             */
            IfcPerson *mOwner;
            /**
             */
            Inverted_Addresses_type();
            /**
             * @param owner
             */
            void setOwner(IfcPerson *owner);
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
        IfcPerson(Step::Id id, Step::SPFData *args);
        virtual ~IfcPerson();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPerson &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_id;
        /**
         */
        std::string m_familyName;
        /**
         */
        std::string m_givenName;
        /**
         */
        Step::List< IfcLabel > m_middleNames;
        /**
         */
        Step::List< IfcLabel > m_prefixTitles;
        /**
         */
        Step::List< IfcLabel > m_suffixTitles;
        /**
         */
        Step::List< Step::RefPtr< IfcActorRole > > m_roles;
        /**
         */
        Inverted_Addresses_type m_addresses;
        /**
         */
        Step::Set< Step::ObsPtr< IfcPersonAndOrganization > > m_engagedIn;

    };

}

#endif // IFC2X3_IFCPERSON_H
