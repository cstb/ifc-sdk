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

#ifndef IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
#define IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcClassificationItem;

    /**
     */
    class IFC2X3_DLL_DEF IfcClassificationItemRelationship : public Step::BaseEntity {
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
        IfcClassificationItem *getRelatingItem();
        /**
         * Sets the value of the explicit attribute 'RelatingItem'.
         * 
         * @param value
         */
        void setRelatingItem(const Step::RefPtr< IfcClassificationItem > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcClassificationItem > > &getRelatedItems();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedItems_type : public Step::Set< Step::RefPtr< IfcClassificationItem > > {
        public:
            /**
             */
            IfcClassificationItemRelationship *mOwner;
            /**
             */
            Inverted_RelatedItems_type();
            /**
             * @param owner
             */
            void setOwner(IfcClassificationItemRelationship *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcClassificationItem > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcClassificationItemRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassificationItemRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcClassificationItemRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcClassificationItem > m_relatingItem;
        /**
         */
        Inverted_RelatedItems_type m_relatedItems;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
