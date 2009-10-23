#include "ifc2x3/IfcPhysicalSimpleQuantity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/IfcPhysicalQuantity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPhysicalSimpleQuantity::IfcPhysicalSimpleQuantity(Step::Id id, Step::SPFData *args) : IfcPhysicalQuantity(id, args) {
    m_unit = NULL;
}

IfcPhysicalSimpleQuantity::~IfcPhysicalSimpleQuantity() {
}

bool IfcPhysicalSimpleQuantity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPhysicalSimpleQuantity(this);
}

const std::string &IfcPhysicalSimpleQuantity::type() const {
    return IfcPhysicalSimpleQuantity::s_type.getName();
}

const Step::ClassType &IfcPhysicalSimpleQuantity::getClassType() {
    return IfcPhysicalSimpleQuantity::s_type;
}

const Step::ClassType &IfcPhysicalSimpleQuantity::getType() const {
    return IfcPhysicalSimpleQuantity::s_type;
}

bool IfcPhysicalSimpleQuantity::isOfType(const Step::ClassType &t) const {
    return IfcPhysicalSimpleQuantity::s_type == t ? true : IfcPhysicalQuantity::isOfType(t);
}

IfcNamedUnit *IfcPhysicalSimpleQuantity::getUnit() {
    if (Step::BaseObject::inited()) {
        return m_unit.get();
    }
    else {
        return NULL;
    }
}

const IfcNamedUnit *IfcPhysicalSimpleQuantity::getUnit() const {
    IfcPhysicalSimpleQuantity * deConstObject = const_cast< IfcPhysicalSimpleQuantity * > (this);
    return deConstObject->getUnit();
}

void IfcPhysicalSimpleQuantity::setUnit(const Step::RefPtr< IfcNamedUnit > &value) {
    m_unit = value;
}

void IfcPhysicalSimpleQuantity::unsetUnit() {
    m_unit = Step::getUnset(getUnit());
}

bool IfcPhysicalSimpleQuantity::testUnit() const {
    return !Step::isUnset(getUnit());
}

bool IfcPhysicalSimpleQuantity::init() {
    bool status = IfcPhysicalQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unit = NULL;
    }
    else {
        m_unit = static_cast< IfcNamedUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcPhysicalSimpleQuantity::copy(const IfcPhysicalSimpleQuantity &obj, const CopyOp &copyop) {
    IfcPhysicalQuantity::copy(obj, copyop);
    setUnit((IfcNamedUnit*)copyop(obj.m_unit.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPhysicalSimpleQuantity::s_type("IfcPhysicalSimpleQuantity");
