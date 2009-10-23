#ifndef IFC2X3_IFCCLASSIFICATIONITEM_H
#define IFC2X3_IFCCLASSIFICATIONITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcClassification;
    class IfcClassificationNotationFacet;

    /**
     * Generated class for the IfcClassificationItem Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcClassificationItem : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Notation'.
         * 
         */
        virtual IfcClassificationNotationFacet *getNotation();
        /**
         * (const) Returns the value of the explicit attribute 'Notation'.
         * 
         * @return the value of the explicit attribute 'Notation'
         */
        virtual const IfcClassificationNotationFacet *getNotation() const;
        /**
         * Sets the value of the explicit attribute 'Notation'.
         * 
         * @param value
         */
        virtual void setNotation(const Step::RefPtr< IfcClassificationNotationFacet > &value);
        /**
         * unset the attribute 'Notation'.
         * 
         */
        virtual void unsetNotation();
        /**
         * Test if the attribute 'Notation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNotation() const;
        /**
         * Gets the value of the explicit attribute 'ItemOf'.
         * 
         */
        virtual IfcClassification *getItemOf();
        /**
         * (const) Returns the value of the explicit attribute 'ItemOf'.
         * 
         * @return the value of the explicit attribute 'ItemOf'
         */
        virtual const IfcClassification *getItemOf() const;
        /**
         * Sets the value of the explicit attribute 'ItemOf'.
         * 
         * @param value
         */
        virtual void setItemOf(const Step::RefPtr< IfcClassification > &value);
        /**
         * unset the attribute 'ItemOf'.
         * 
         */
        virtual void unsetItemOf();
        /**
         * Test if the attribute 'ItemOf' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testItemOf() const;
        /**
         * Gets the value of the explicit attribute 'Title'.
         * 
         */
        virtual IfcLabel getTitle();
        /**
         * (const) Returns the value of the explicit attribute 'Title'.
         * 
         * @return the value of the explicit attribute 'Title'
         */
        virtual const IfcLabel getTitle() const;
        /**
         * Sets the value of the explicit attribute 'Title'.
         * 
         * @param value
         */
        virtual void setTitle(const IfcLabel &value);
        /**
         * unset the attribute 'Title'.
         * 
         */
        virtual void unsetTitle();
        /**
         * Test if the attribute 'Title' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTitle() const;
        /**
         * Gets the value of the inverse attribute 'IsClassifiedItemIn'.
         * 
         */
        Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifiedItemIn();
        /**
         * (const) Returns the value of the explicit attribute 'IsClassifiedItemIn'.
         * 
         * @return the value of the explicit attribute 'IsClassifiedItemIn'
         */
        virtual const Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifiedItemIn() const;
        /**
         * Test if the attribute 'IsClassifiedItemIn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsClassifiedItemIn() const;
        /**
         * Gets the value of the inverse attribute 'IsClassifyingItemIn'.
         * 
         */
        Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifyingItemIn();
        /**
         * (const) Returns the value of the explicit attribute 'IsClassifyingItemIn'.
         * 
         * @return the value of the explicit attribute 'IsClassifyingItemIn'
         */
        virtual const Inverse_Set_IfcClassificationItemRelationship_0_1 &getIsClassifyingItemIn() const;
        /**
         * Test if the attribute 'IsClassifyingItemIn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsClassifyingItemIn() const;
        friend class Inverted_IfcClassificationItemRelationship_RelatedItems_type;
        friend class ExpressDataSet;
        friend class IfcClassificationItemRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcClassificationItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassificationItem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcClassificationItem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcClassificationNotationFacet > m_notation;
        /**
         */
        Step::RefPtr< IfcClassification > m_itemOf;
        /**
         */
        Step::String m_title;
        /**
         */
        Inverse_Set_IfcClassificationItemRelationship_0_1 m_isClassifiedItemIn;
        /**
         */
        Inverse_Set_IfcClassificationItemRelationship_0_1 m_isClassifyingItemIn;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONITEM_H
