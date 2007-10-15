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

#ifndef IFC2X3_IFCDOCUMENTINFORMATIONRELATIONSHIP_H
#define IFC2X3_IFCDOCUMENTINFORMATIONRELATIONSHIP_H
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
    class IfcDocumentInformation;

    /**
     */
    class IFC2X3_DLL_DEF IfcDocumentInformationRelationship : public Step::BaseEntity {
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
        IfcDocumentInformation *getRelatingDocument();
        /**
         * Sets the value of the explicit attribute 'RelatingDocument'.
         * 
         * @param value
         */
        void setRelatingDocument(const Step::RefPtr< IfcDocumentInformation > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcDocumentInformation > > &getRelatedDocuments();
        /**
         */
        IfcLabel getRelationshipType();
        /**
         * Sets the value of the explicit attribute 'RelationshipType'.
         * 
         * @param value
         */
        void setRelationshipType(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedDocuments_type : public Step::Set< Step::RefPtr< IfcDocumentInformation > > {
        public:
            /**
             */
            IfcDocumentInformationRelationship *mOwner;
            /**
             */
            Inverted_RelatedDocuments_type();
            /**
             * @param owner
             */
            void setOwner(IfcDocumentInformationRelationship *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcDocumentInformation > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcDocumentInformationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcDocumentInformationRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDocumentInformation > m_relatingDocument;
        /**
         */
        Inverted_RelatedDocuments_type m_relatedDocuments;
        /**
         */
        std::string m_relationshipType;

    };

}

#endif // IFC2X3_IFCDOCUMENTINFORMATIONRELATIONSHIP_H
