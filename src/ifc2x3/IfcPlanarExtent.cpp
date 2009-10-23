#include "ifc2x3/IfcPlanarExtent.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPlanarExtent::IfcPlanarExtent(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_sizeInX = Step::getUnset(m_sizeInX);
    m_sizeInY = Step::getUnset(m_sizeInY);
}

IfcPlanarExtent::~IfcPlanarExtent() {
}

bool IfcPlanarExtent::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlanarExtent(this);
}

const std::string &IfcPlanarExtent::type() const {
    return IfcPlanarExtent::s_type.getName();
}

const Step::ClassType &IfcPlanarExtent::getClassType() {
    return IfcPlanarExtent::s_type;
}

const Step::ClassType &IfcPlanarExtent::getType() const {
    return IfcPlanarExtent::s_type;
}

bool IfcPlanarExtent::isOfType(const Step::ClassType &t) const {
    return IfcPlanarExtent::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcLengthMeasure IfcPlanarExtent::getSizeInX() {
    if (Step::BaseObject::inited()) {
        return m_sizeInX;
    }
    else {
        return Step::getUnset(m_sizeInX);
    }
}

const IfcLengthMeasure IfcPlanarExtent::getSizeInX() const {
    IfcPlanarExtent * deConstObject = const_cast< IfcPlanarExtent * > (this);
    return deConstObject->getSizeInX();
}

void IfcPlanarExtent::setSizeInX(IfcLengthMeasure value) {
    m_sizeInX = value;
}

void IfcPlanarExtent::unsetSizeInX() {
    m_sizeInX = Step::getUnset(getSizeInX());
}

bool IfcPlanarExtent::testSizeInX() const {
    return !Step::isUnset(getSizeInX());
}

IfcLengthMeasure IfcPlanarExtent::getSizeInY() {
    if (Step::BaseObject::inited()) {
        return m_sizeInY;
    }
    else {
        return Step::getUnset(m_sizeInY);
    }
}

const IfcLengthMeasure IfcPlanarExtent::getSizeInY() const {
    IfcPlanarExtent * deConstObject = const_cast< IfcPlanarExtent * > (this);
    return deConstObject->getSizeInY();
}

void IfcPlanarExtent::setSizeInY(IfcLengthMeasure value) {
    m_sizeInY = value;
}

void IfcPlanarExtent::unsetSizeInY() {
    m_sizeInY = Step::getUnset(getSizeInY());
}

bool IfcPlanarExtent::testSizeInY() const {
    return !Step::isUnset(getSizeInY());
}

bool IfcPlanarExtent::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sizeInX = Step::getUnset(m_sizeInX);
    }
    else {
        m_sizeInX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sizeInY = Step::getUnset(m_sizeInY);
    }
    else {
        m_sizeInY = Step::spfToReal(arg);
    }
    return true;
}

void IfcPlanarExtent::copy(const IfcPlanarExtent &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSizeInX(obj.m_sizeInX);
    setSizeInY(obj.m_sizeInY);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlanarExtent::s_type("IfcPlanarExtent");
