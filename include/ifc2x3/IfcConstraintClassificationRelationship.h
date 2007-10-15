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

#ifndef IFC2X3_IFCCONSTRAINTCLASSIFICATIONRELATIONSHIP_H
#define IFC2X3_IFCCONSTRAINTCLASSIFICATIONRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcClassificationNotationSelect.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcConstraint;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstraintClassificationRelationship : public Step::BaseEntity {
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
        IfcConstraint *getClassifiedConstraint();
        /**
         * Sets the value of the explicit attribute 'ClassifiedConstraint'.
         * 
         * @param value
         */
        void setClassifiedConstraint(const Step::RefPtr< IfcConstraint > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &getRelatedClassifications();
        /**
         * Sets the value of the explicit attribute 'RelatedClassifications'.
         * 
         * @param value
         */
        void setRelatedClassifications(const Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstraintClassificationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraintClassificationRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcConstraint > m_classifiedConstraint;
        /**
         */
        Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > m_relatedClassifications;

    };

}

#endif // IFC2X3_IFCCONSTRAINTCLASSIFICATIONRELATIONSHIP_H
