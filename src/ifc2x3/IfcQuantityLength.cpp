#include "ifc2x3/IfcQuantityLength.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPhysicalSimpleQuantity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcQuantityLength::IfcQuantityLength(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_lengthValue = Step::getUnset(m_lengthValue);
}

IfcQuantityLength::~IfcQuantityLength() {
}

bool IfcQuantityLength::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcQuantityLength(this);
}

const std::string &IfcQuantityLength::type() const {
    return IfcQuantityLength::s_type.getName();
}

const Step::ClassType &IfcQuantityLength::getClassType() {
    return IfcQuantityLength::s_type;
}

const Step::ClassType &IfcQuantityLength::getType() const {
    return IfcQuantityLength::s_type;
}

bool IfcQuantityLength::isOfType(const Step::ClassType &t) const {
    return IfcQuantityLength::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcLengthMeasure IfcQuantityLength::getLengthValue() {
    if (Step::BaseObject::inited()) {
        return m_lengthValue;
    }
    else {
        return Step::getUnset(m_lengthValue);
    }
}

const IfcLengthMeasure IfcQuantityLength::getLengthValue() const {
    IfcQuantityLength * deConstObject = const_cast< IfcQuantityLength * > (this);
    return deConstObject->getLengthValue();
}

void IfcQuantityLength::setLengthValue(IfcLengthMeasure value) {
    m_lengthValue = value;
}

void IfcQuantityLength::unsetLengthValue() {
    m_lengthValue = Step::getUnset(getLengthValue());
}

bool IfcQuantityLength::testLengthValue() const {
    return !Step::isUnset(getLengthValue());
}

bool IfcQuantityLength::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lengthValue = Step::getUnset(m_lengthValue);
    }
    else {
        m_lengthValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcQuantityLength::copy(const IfcQuantityLength &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setLengthValue(obj.m_lengthValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityLength::s_type("IfcQuantityLength");
