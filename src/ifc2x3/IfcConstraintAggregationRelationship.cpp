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

#include "ifc2x3/IfcConstraintAggregationRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConstraintAggregationRelationship::IfcConstraintAggregationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingConstraint = NULL;
    m_relatedConstraints.setUnset(true);
    m_relatedConstraints.setOwner(this);
    m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
}

IfcConstraintAggregationRelationship::~IfcConstraintAggregationRelationship() {
}

bool IfcConstraintAggregationRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConstraintAggregationRelationship(this);
}

const std::string &IfcConstraintAggregationRelationship::type() {
    return IfcConstraintAggregationRelationship::s_type.getName();
}

Step::ClassType IfcConstraintAggregationRelationship::getClassType() {
    return IfcConstraintAggregationRelationship::s_type;
}

Step::ClassType IfcConstraintAggregationRelationship::getType() const {
    return IfcConstraintAggregationRelationship::s_type;
}

bool IfcConstraintAggregationRelationship::isOfType(Step::ClassType t) {
    return IfcConstraintAggregationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraintAggregationRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcConstraintAggregationRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcConstraintAggregationRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcConstraintAggregationRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

IfcConstraint *IfcConstraintAggregationRelationship::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

void IfcConstraintAggregationRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    m_relatingConstraint = value;
    m_relatingConstraint->m_aggregates.insert(this);
}

Step::List< Step::RefPtr< IfcConstraint > > &IfcConstraintAggregationRelationship::getRelatedConstraints() {
    if (Step::BaseObject::inited()) {
        return m_relatedConstraints;
    }
    else {
        m_relatedConstraints.setUnset(true);
        return m_relatedConstraints;
    }
}

IfcLogicalOperatorEnum IfcConstraintAggregationRelationship::getLogicalAggregator() {
    if (Step::BaseObject::inited()) {
        return m_logicalAggregator;
    }
    else {
        return IfcLogicalOperatorEnum_UNSET;
    }
}

void IfcConstraintAggregationRelationship::setLogicalAggregator(IfcLogicalOperatorEnum value) {
    m_logicalAggregator = value;
}

void IfcConstraintAggregationRelationship::release() {
    m_relatingConstraint.release();
    m_relatedConstraints.clear();
}

bool IfcConstraintAggregationRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedConstraints.setUnset(true);
    }
    else {
        m_relatedConstraints.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcConstraint > attr2;
                attr2 = static_cast< IfcConstraint * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedConstraints.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
    }
    else {
        if (arg == ".LOGICALAND.") {
            m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALAND;
        }
        else if (arg == ".LOGICALOR.") {
            m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALOR;
        }
    }
    return true;
}

void IfcConstraintAggregationRelationship::copy(const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcConstraint > >::const_iterator it_m_relatedConstraints;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingConstraint(copyop(obj.m_relatingConstraint.get()));
    for (it_m_relatedConstraints = obj.m_relatedConstraints.begin(); it_m_relatedConstraints != obj.m_relatedConstraints.end(); ++it_m_relatedConstraints) {
        Step::RefPtr< IfcConstraint > copyTarget = copyop((*it_m_relatedConstraints).get());
        m_relatedConstraints.push_back(copyTarget.get());
    }
    setLogicalAggregator(obj.m_logicalAggregator);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraintAggregationRelationship::s_type("IfcConstraintAggregationRelationship");
IfcConstraintAggregationRelationship::Inverted_RelatedConstraints_type::Inverted_RelatedConstraints_type() {
}

void IfcConstraintAggregationRelationship::Inverted_RelatedConstraints_type::setOwner(IfcConstraintAggregationRelationship *owner) {
    mOwner = owner;
}

void IfcConstraintAggregationRelationship::Inverted_RelatedConstraints_type::push_back(const Step::RefPtr< IfcConstraint > &value) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    Step::List< Step::RefPtr< IfcConstraint > >::push_back(value);
    inverse->m_isAggregatedIn.insert(mOwner);
}

