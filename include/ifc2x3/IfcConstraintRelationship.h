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

#ifndef IFC2X3_IFCCONSTRAINTRELATIONSHIP_H
#define IFC2X3_IFCCONSTRAINTRELATIONSHIP_H
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
#include <Step/Referenced.h>

namespace ifc2x3 {

    class IfcConstraint;
    class IfcConstraintRelationship;

    /**
     */
    class Inverted_IfcConstraintRelationship_RelatedConstraints_type : public Set_IfcConstraint_1_n {
    public:
        /**
         */
        typedef Set_IfcConstraint_1_n::size_type size_type;

        /**
         */
        IfcConstraintRelationship *mOwner;
        /**
         */
        Inverted_IfcConstraintRelationship_RelatedConstraints_type();
        /**
         * @param owner
         */
        void setOwner(IfcConstraintRelationship *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcConstraint > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcConstraint > &value);

    };

    class CopyOp;
    class IfcConstraint;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstraintRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'RelatingConstraint'.
         * 
         */
        virtual IfcConstraint *getRelatingConstraint();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @return the value of the explicit attribute 'RelatingConstraint'
         */
        virtual const IfcConstraint *getRelatingConstraint() const;
        /**
         * Sets the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @param value
         */
        virtual void setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedConstraints'.
         * 
         */
        virtual Set_IfcConstraint_1_n &getRelatedConstraints();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedConstraints'.
         * 
         * @return the value of the explicit attribute 'RelatedConstraints'
         */
        virtual const Set_IfcConstraint_1_n &getRelatedConstraints() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstraintRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraintRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstraintRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::RefPtr< IfcConstraint > m_relatingConstraint;
        /**
         */
        Inverted_IfcConstraintRelationship_RelatedConstraints_type m_relatedConstraints;

    };

}

#endif // IFC2X3_IFCCONSTRAINTRELATIONSHIP_H
