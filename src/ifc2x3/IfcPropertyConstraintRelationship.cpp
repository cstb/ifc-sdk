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

#include "ifc2x3/IfcPropertyConstraintRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/Visitor.h"
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

IfcPropertyConstraintRelationship::IfcPropertyConstraintRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingConstraint = NULL;
    m_relatedProperties.setUnset(true);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcPropertyConstraintRelationship::~IfcPropertyConstraintRelationship() {
}

bool IfcPropertyConstraintRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPropertyConstraintRelationship(this);
}

const std::string &IfcPropertyConstraintRelationship::type() {
    return IfcPropertyConstraintRelationship::s_type.getName();
}

Step::ClassType IfcPropertyConstraintRelationship::getClassType() {
    return IfcPropertyConstraintRelationship::s_type;
}

Step::ClassType IfcPropertyConstraintRelationship::getType() const {
    return IfcPropertyConstraintRelationship::s_type;
}

bool IfcPropertyConstraintRelationship::isOfType(Step::ClassType t) {
    return IfcPropertyConstraintRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcConstraint *IfcPropertyConstraintRelationship::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

void IfcPropertyConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    m_relatingConstraint = value;
    m_relatingConstraint->m_propertiesForConstraint.insert(this);
}

Step::Set< Step::RefPtr< IfcProperty > > &IfcPropertyConstraintRelationship::getRelatedProperties() {
    if (Step::BaseObject::inited()) {
        return m_relatedProperties;
    }
    else {
        m_relatedProperties.setUnset(true);
        return m_relatedProperties;
    }
}

void IfcPropertyConstraintRelationship::setRelatedProperties(const Step::Set< Step::RefPtr< IfcProperty > > &value) {
    m_relatedProperties = value;
}

IfcLabel IfcPropertyConstraintRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcPropertyConstraintRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcPropertyConstraintRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcPropertyConstraintRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcPropertyConstraintRelationship::release() {
    m_relatingConstraint.release();
    m_relatedProperties.clear();
}

bool IfcPropertyConstraintRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedProperties.setUnset(true);
    }
    else {
        m_relatedProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedProperties.insert(attr2);
            }
            else {
                break;
            }
        }
    }
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
    return true;
}

void IfcPropertyConstraintRelationship::copy(const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty > >::const_iterator it_m_relatedProperties;
    Step::BaseEntity::copy(obj, copyop);
    setRelatingConstraint(copyop(obj.m_relatingConstraint.get()));
    for (it_m_relatedProperties = obj.m_relatedProperties.begin(); it_m_relatedProperties != obj.m_relatedProperties.end(); ++it_m_relatedProperties) {
        Step::RefPtr< IfcProperty > copyTarget = copyop((*it_m_relatedProperties).get());
        m_relatedProperties.insert(copyTarget.get());
    }
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyConstraintRelationship::s_type("IfcPropertyConstraintRelationship");
