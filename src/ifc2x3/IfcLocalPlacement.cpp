#include "ifc2x3/IfcLocalPlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
#include "ifc2x3/IfcObjectPlacement.h"
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

IfcLocalPlacement::IfcLocalPlacement(Step::Id id, Step::SPFData *args) : IfcObjectPlacement(id, args) {
    m_placementRelTo = NULL;
    m_relativePlacement = NULL;
}

IfcLocalPlacement::~IfcLocalPlacement() {
}

bool IfcLocalPlacement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLocalPlacement(this);
}

const std::string &IfcLocalPlacement::type() const {
    return IfcLocalPlacement::s_type.getName();
}

const Step::ClassType &IfcLocalPlacement::getClassType() {
    return IfcLocalPlacement::s_type;
}

const Step::ClassType &IfcLocalPlacement::getType() const {
    return IfcLocalPlacement::s_type;
}

bool IfcLocalPlacement::isOfType(const Step::ClassType &t) const {
    return IfcLocalPlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo() {
    if (Step::BaseObject::inited()) {
        return m_placementRelTo.get();
    }
    else {
        return NULL;
    }
}

const IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo() const {
    IfcLocalPlacement * deConstObject = const_cast< IfcLocalPlacement * > (this);
    return deConstObject->getPlacementRelTo();
}

void IfcLocalPlacement::setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value) {
    if (m_placementRelTo.valid()) {
        m_placementRelTo->m_referencedByPlacements.erase(this);
    }
    if (value.valid()) {
        value->m_referencedByPlacements.insert(this);
    }
    m_placementRelTo = value;
}

void IfcLocalPlacement::unsetPlacementRelTo() {
    m_placementRelTo = Step::getUnset(getPlacementRelTo());
}

bool IfcLocalPlacement::testPlacementRelTo() const {
    return !Step::isUnset(getPlacementRelTo());
}

IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement() {
    if (Step::BaseObject::inited()) {
        return m_relativePlacement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement() const {
    IfcLocalPlacement * deConstObject = const_cast< IfcLocalPlacement * > (this);
    return deConstObject->getRelativePlacement();
}

void IfcLocalPlacement::setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_relativePlacement = value;
}

void IfcLocalPlacement::unsetRelativePlacement() {
    m_relativePlacement = Step::getUnset(getRelativePlacement());
}

bool IfcLocalPlacement::testRelativePlacement() const {
    return !Step::isUnset(getRelativePlacement());
}

bool IfcLocalPlacement::init() {
    bool status = IfcObjectPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placementRelTo = NULL;
    }
    else {
        m_placementRelTo = static_cast< IfcObjectPlacement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relativePlacement = NULL;
    }
    else {
        m_relativePlacement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_relativePlacement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
    return true;
}

void IfcLocalPlacement::copy(const IfcLocalPlacement &obj, const CopyOp &copyop) {
    IfcObjectPlacement::copy(obj, copyop);
    setPlacementRelTo((IfcObjectPlacement*)copyop(obj.m_placementRelTo.get()));
    m_relativePlacement = new IfcAxis2Placement;
    m_relativePlacement->copy(*(obj.m_relativePlacement.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLocalPlacement::s_type("IfcLocalPlacement");
