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

#ifndef IFC2X3_IFCORGANIZATIONRELATIONSHIP_H
#define IFC2X3_IFCORGANIZATIONRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcOrganization;

    /**
     */
    class IFC2X3_DLL_DEF IfcOrganizationRelationship : public Step::BaseEntity {
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
        IfcOrganization *getRelatingOrganization();
        /**
         * Sets the value of the explicit attribute 'RelatingOrganization'.
         * 
         * @param value
         */
        void setRelatingOrganization(const Step::RefPtr< IfcOrganization > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcOrganization > > &getRelatedOrganizations();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedOrganizations_type : public Step::Set< Step::RefPtr< IfcOrganization > > {
        public:
            /**
             */
            IfcOrganizationRelationship *mOwner;
            /**
             */
            Inverted_RelatedOrganizations_type();
            /**
             * @param owner
             */
            void setOwner(IfcOrganizationRelationship *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcOrganization > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcOrganizationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcOrganizationRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOrganizationRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Step::RefPtr< IfcOrganization > m_relatingOrganization;
        /**
         */
        Inverted_RelatedOrganizations_type m_relatedOrganizations;

    };

}

#endif // IFC2X3_IFCORGANIZATIONRELATIONSHIP_H
