#include "ifc2x3/IfcPlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPlacement::IfcPlacement(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_location = NULL;
}

IfcPlacement::~IfcPlacement() {
}

bool IfcPlacement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlacement(this);
}

const std::string &IfcPlacement::type() const {
    return IfcPlacement::s_type.getName();
}

const Step::ClassType &IfcPlacement::getClassType() {
    return IfcPlacement::s_type;
}

const Step::ClassType &IfcPlacement::getType() const {
    return IfcPlacement::s_type;
}

bool IfcPlacement::isOfType(const Step::ClassType &t) const {
    return IfcPlacement::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCartesianPoint *IfcPlacement::getLocation() {
    if (Step::BaseObject::inited()) {
        return m_location.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcPlacement::getLocation() const {
    IfcPlacement * deConstObject = const_cast< IfcPlacement * > (this);
    return deConstObject->getLocation();
}

void IfcPlacement::setLocation(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_location = value;
}

void IfcPlacement::unsetLocation() {
    m_location = Step::getUnset(getLocation());
}

bool IfcPlacement::testLocation() const {
    return !Step::isUnset(getLocation());
}

bool IfcPlacement::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_location = NULL;
    }
    else {
        m_location = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcPlacement::copy(const IfcPlacement &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setLocation((IfcCartesianPoint*)copyop(obj.m_location.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlacement::s_type("IfcPlacement");
