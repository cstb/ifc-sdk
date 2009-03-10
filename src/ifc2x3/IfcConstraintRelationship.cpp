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

#include "ifc2x3/IfcConstraintRelationship.h"


#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

Inverted_IfcConstraintRelationship_RelatedConstraints_type::Inverted_IfcConstraintRelationship_RelatedConstraints_type() {
}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::setOwner(IfcConstraintRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::insert(const Step::RefPtr< IfcConstraint > &value) throw(std::out_of_range) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    Set_IfcConstraint_1_n::insert(value);
    inverse->m_isRelatedWith.insert(mOwner);
}

Inverted_IfcConstraintRelationship_RelatedConstraints_type::size_type Inverted_IfcConstraintRelationship_RelatedConstraints_type::erase(const Step::RefPtr< IfcConstraint > &value) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    inverse->m_isRelatedWith.erase(mOwner);
    return Set_IfcConstraint_1_n::erase(value);
}

IfcConstraintRelationship::IfcConstraintRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingConstraint = NULL;
    m_relatedConstraints.setUnset(true);
    m_relatedConstraints.setOwner(this);
}

IfcConstraintRelationship::~IfcConstraintRelationship() {
}

bool IfcConstraintRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstraintRelationship(this);
}

const std::string &IfcConstraintRelationship::type() const {
    return IfcConstraintRelationship::s_type.getName();
}

const Step::ClassType &IfcConstraintRelationship::getClassType() {
    return IfcConstraintRelationship::s_type;
}

const Step::ClassType &IfcConstraintRelationship::getType() const {
    return IfcConstraintRelationship::s_type;
}

bool IfcConstraintRelationship::isOfType(const Step::ClassType &t) const {
    return IfcConstraintRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraintRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcConstraintRelationship::getName() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getName();
}

void IfcConstraintRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcConstraintRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcConstraintRelationship::getDescription() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcConstraintRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

IfcConstraint *IfcConstraintRelationship::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConstraint *IfcConstraintRelationship::getRelatingConstraint() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getRelatingConstraint();
}

void IfcConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    if (m_relatingConstraint.valid()) {
        m_relatingConstraint->m_relatesConstraints.erase(this);
    }
    if (value.valid()) {
        value->m_relatesConstraints.insert(this);
    }
    m_relatingConstraint = value;
}

Set_IfcConstraint_1_n &IfcConstraintRelationship::getRelatedConstraints() {
    if (Step::BaseObject::inited()) {
        return m_relatedConstraints;
    }
    else {
        m_relatedConstraints.setUnset(true);
        return m_relatedConstraints;
    }
}

const Set_IfcConstraint_1_n &IfcConstraintRelationship::getRelatedConstraints() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getRelatedConstraints();
}

bool IfcConstraintRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
                attr2 = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_relatedConstraints.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcConstraintRelationship::copy(const IfcConstraintRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcConstraint >, 1 >::const_iterator it_m_relatedConstraints;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_relatingConstraint.get()));
    for (it_m_relatedConstraints = obj.m_relatedConstraints.begin(); it_m_relatedConstraints != obj.m_relatedConstraints.end(); ++it_m_relatedConstraints) {
        Step::RefPtr< IfcConstraint > copyTarget = (IfcConstraint *) (copyop((*it_m_relatedConstraints).get()));
        m_relatedConstraints.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraintRelationship::s_type("IfcConstraintRelationship");
