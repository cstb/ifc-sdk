#include "ifc2x3/IfcAxis1Placement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcPlacement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcAxis1Placement::IfcAxis1Placement(Step::Id id, Step::SPFData *args) : IfcPlacement(id, args) {
    m_axis = NULL;
}

IfcAxis1Placement::~IfcAxis1Placement() {
}

bool IfcAxis1Placement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAxis1Placement(this);
}

const std::string &IfcAxis1Placement::type() const {
    return IfcAxis1Placement::s_type.getName();
}

const Step::ClassType &IfcAxis1Placement::getClassType() {
    return IfcAxis1Placement::s_type;
}

const Step::ClassType &IfcAxis1Placement::getType() const {
    return IfcAxis1Placement::s_type;
}

bool IfcAxis1Placement::isOfType(const Step::ClassType &t) const {
    return IfcAxis1Placement::s_type == t ? true : IfcPlacement::isOfType(t);
}

IfcDirection *IfcAxis1Placement::getAxis() {
    if (Step::BaseObject::inited()) {
        return m_axis.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcAxis1Placement::getAxis() const {
    IfcAxis1Placement * deConstObject = const_cast< IfcAxis1Placement * > (this);
    return deConstObject->getAxis();
}

void IfcAxis1Placement::setAxis(const Step::RefPtr< IfcDirection > &value) {
    m_axis = value;
}

void IfcAxis1Placement::unsetAxis() {
    m_axis = Step::getUnset(getAxis());
}

bool IfcAxis1Placement::testAxis() const {
    return !Step::isUnset(getAxis());
}

bool IfcAxis1Placement::init() {
    bool status = IfcPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis = NULL;
    }
    else {
        m_axis = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcAxis1Placement::copy(const IfcAxis1Placement &obj, const CopyOp &copyop) {
    IfcPlacement::copy(obj, copyop);
    setAxis((IfcDirection*)copyop(obj.m_axis.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAxis1Placement::s_type("IfcAxis1Placement");
