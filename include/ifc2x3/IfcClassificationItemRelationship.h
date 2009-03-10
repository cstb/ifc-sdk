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

#ifndef IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
#define IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class IfcClassificationItem;
    class IfcClassificationItemRelationship;

    /**
     */
    class Inverted_IfcClassificationItemRelationship_RelatedItems_type : public Set_IfcClassificationItem_1_n {
    public:
        /**
         */
        typedef Set_IfcClassificationItem_1_n::size_type size_type;

        /**
         */
        IfcClassificationItemRelationship *mOwner;
        /**
         */
        Inverted_IfcClassificationItemRelationship_RelatedItems_type();
        /**
         * @param owner
         */
        void setOwner(IfcClassificationItemRelationship *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcClassificationItem > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcClassificationItem > &value);

    };

    class CopyOp;
    class IfcClassificationItem;

    /**
     */
    class IFC2X3_DLL_DEF IfcClassificationItemRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'RelatingItem'.
         * 
         */
        virtual IfcClassificationItem *getRelatingItem();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingItem'.
         * 
         * @return the value of the explicit attribute 'RelatingItem'
         */
        virtual const IfcClassificationItem *getRelatingItem() const;
        /**
         * Sets the value of the explicit attribute 'RelatingItem'.
         * 
         * @param value
         */
        virtual void setRelatingItem(const Step::RefPtr< IfcClassificationItem > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedItems'.
         * 
         */
        virtual Set_IfcClassificationItem_1_n &getRelatedItems();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedItems'.
         * 
         * @return the value of the explicit attribute 'RelatedItems'
         */
        virtual const Set_IfcClassificationItem_1_n &getRelatedItems() const;
        friend class ExpressDataSet;

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
        Inverted_IfcClassificationItemRelationship_RelatedItems_type m_relatedItems;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONITEMRELATIONSHIP_H
