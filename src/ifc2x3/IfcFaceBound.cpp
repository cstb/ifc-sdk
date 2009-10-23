#include "ifc2x3/IfcFaceBound.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLoop.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFaceBound::IfcFaceBound(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_bound = NULL;
    m_orientation = Step::getUnset(m_orientation);
}

IfcFaceBound::~IfcFaceBound() {
}

bool IfcFaceBound::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFaceBound(this);
}

const std::string &IfcFaceBound::type() const {
    return IfcFaceBound::s_type.getName();
}

const Step::ClassType &IfcFaceBound::getClassType() {
    return IfcFaceBound::s_type;
}

const Step::ClassType &IfcFaceBound::getType() const {
    return IfcFaceBound::s_type;
}

bool IfcFaceBound::isOfType(const Step::ClassType &t) const {
    return IfcFaceBound::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

IfcLoop *IfcFaceBound::getBound() {
    if (Step::BaseObject::inited()) {
        return m_bound.get();
    }
    else {
        return NULL;
    }
}

const IfcLoop *IfcFaceBound::getBound() const {
    IfcFaceBound * deConstObject = const_cast< IfcFaceBound * > (this);
    return deConstObject->getBound();
}

void IfcFaceBound::setBound(const Step::RefPtr< IfcLoop > &value) {
    m_bound = value;
}

void IfcFaceBound::unsetBound() {
    m_bound = Step::getUnset(getBound());
}

bool IfcFaceBound::testBound() const {
    return !Step::isUnset(getBound());
}

Step::Boolean IfcFaceBound::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation;
    }
    else {
        return Step::getUnset(m_orientation);
    }
}

const Step::Boolean IfcFaceBound::getOrientation() const {
    IfcFaceBound * deConstObject = const_cast< IfcFaceBound * > (this);
    return deConstObject->getOrientation();
}

void IfcFaceBound::setOrientation(Step::Boolean value) {
    m_orientation = value;
}

void IfcFaceBound::unsetOrientation() {
    m_orientation = Step::getUnset(getOrientation());
}

bool IfcFaceBound::testOrientation() const {
    return !Step::isUnset(getOrientation());
}

bool IfcFaceBound::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_bound = NULL;
    }
    else {
        m_bound = static_cast< IfcLoop * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = Step::getUnset(m_orientation);
    }
    else {
        m_orientation = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcFaceBound::copy(const IfcFaceBound &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    setBound((IfcLoop*)copyop(obj.m_bound.get()));
    setOrientation(obj.m_orientation);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceBound::s_type("IfcFaceBound");
