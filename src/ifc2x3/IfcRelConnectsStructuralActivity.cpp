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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcRelConnectsStructuralActivity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcStructuralActivity.h"
#include "ifc2x3/IfcStructuralActivityAssignmentSelect.h"
#include "ifc2x3/IfcStructuralItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcRelConnectsStructuralActivity::IfcRelConnectsStructuralActivity(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingElement = NULL;
    m_relatedStructuralActivity = NULL;
}

IfcRelConnectsStructuralActivity::~IfcRelConnectsStructuralActivity() {
}

bool IfcRelConnectsStructuralActivity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsStructuralActivity(this);
}

const std::string &IfcRelConnectsStructuralActivity::type() const {
    return IfcRelConnectsStructuralActivity::s_type.getName();
}

const Step::ClassType &IfcRelConnectsStructuralActivity::getClassType() {
    return IfcRelConnectsStructuralActivity::s_type;
}

const Step::ClassType &IfcRelConnectsStructuralActivity::getType() const {
    return IfcRelConnectsStructuralActivity::s_type;
}

bool IfcRelConnectsStructuralActivity::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsStructuralActivity::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcStructuralActivityAssignmentSelect *IfcRelConnectsStructuralActivity::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralActivityAssignmentSelect *IfcRelConnectsStructuralActivity::getRelatingElement() const {
    IfcRelConnectsStructuralActivity * deConstObject = const_cast< IfcRelConnectsStructuralActivity * > (this);
    return deConstObject->getRelatingElement();
}

void IfcRelConnectsStructuralActivity::setRelatingElement(const Step::RefPtr< IfcStructuralActivityAssignmentSelect > &value) {
    if (m_relatingElement->getIfcStructuralItem() != NULL) {
        IfcStructuralItem * object = m_relatingElement->getIfcStructuralItem();
        object->m_assignedStructuralActivity.insert(this);
    }
    m_relatingElement = value;
}

void IfcRelConnectsStructuralActivity::unsetRelatingElement() {
    m_relatingElement = Step::getUnset(getRelatingElement());
}

bool IfcRelConnectsStructuralActivity::testRelatingElement() const {
    return !Step::isUnset(getRelatingElement());
}

IfcStructuralActivity *IfcRelConnectsStructuralActivity::getRelatedStructuralActivity() {
    if (Step::BaseObject::inited()) {
        return m_relatedStructuralActivity.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralActivity *IfcRelConnectsStructuralActivity::getRelatedStructuralActivity() const {
    IfcRelConnectsStructuralActivity * deConstObject = const_cast< IfcRelConnectsStructuralActivity * > (this);
    return deConstObject->getRelatedStructuralActivity();
}

void IfcRelConnectsStructuralActivity::setRelatedStructuralActivity(const Step::RefPtr< IfcStructuralActivity > &value) {
    if (m_relatedStructuralActivity.valid()) {
        m_relatedStructuralActivity->m_assignedToStructuralItem = NULL;
    }
    if (value.valid()) {
        value->m_assignedToStructuralItem = this;
    }
    m_relatedStructuralActivity = value;
}

void IfcRelConnectsStructuralActivity::unsetRelatedStructuralActivity() {
    m_relatedStructuralActivity = Step::getUnset(getRelatedStructuralActivity());
}

bool IfcRelConnectsStructuralActivity::testRelatedStructuralActivity() const {
    return !Step::isUnset(getRelatedStructuralActivity());
}

bool IfcRelConnectsStructuralActivity::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingElement = NULL;
    }
    else {
        m_relatingElement = new IfcStructuralActivityAssignmentSelect;
        if (arg[0] == '#') {
            m_relatingElement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedStructuralActivity = NULL;
    }
    else {
        m_relatedStructuralActivity = static_cast< IfcStructuralActivity * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelConnectsStructuralActivity::copy(const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    m_relatingElement = new IfcStructuralActivityAssignmentSelect;
    m_relatingElement->copy(*(obj.m_relatingElement.get()), copyop);
    setRelatedStructuralActivity((IfcStructuralActivity*)copyop(obj.m_relatedStructuralActivity.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralActivity::s_type("IfcRelConnectsStructuralActivity");
