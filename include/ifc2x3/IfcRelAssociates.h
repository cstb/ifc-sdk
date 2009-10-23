#ifndef IFC2X3_IFCRELASSOCIATES_H
#define IFC2X3_IFCRELASSOCIATES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRelationship.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcRelAssociates;
    class IfcRoot;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcRelAssociates_RelatedObjects_type : public Set_IfcRoot_1_n {
    public:
        /**
         */
        typedef Set_IfcRoot_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelAssociates_RelatedObjects_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcRoot > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcRoot > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcRelAssociates;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcRelAssociates *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelAssociates *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcRelAssociates Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRelAssociates : public IfcRelationship {
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
         * Gets the value of the explicit attribute 'RelatedObjects'.
         * 
         */
        virtual Set_IfcRoot_1_n &getRelatedObjects();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedObjects'.
         * 
         * @return the value of the explicit attribute 'RelatedObjects'
         */
        virtual const Set_IfcRoot_1_n &getRelatedObjects() const;
        /**
         * unset the attribute 'RelatedObjects'.
         * 
         */
        virtual void unsetRelatedObjects();
        /**
         * Test if the attribute 'RelatedObjects' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedObjects() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssociates(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssociates();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssociates &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelAssociates_RelatedObjects_type m_relatedObjects;

    };

}

#endif // IFC2X3_IFCRELASSOCIATES_H
