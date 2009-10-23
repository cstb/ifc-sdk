#include "ifc2x3/IfcOpeningElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFeatureElementSubtraction.h"
#include "ifc2x3/IfcRelFillsElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcOpeningElement::IfcOpeningElement(Step::Id id, Step::SPFData *args) : IfcFeatureElementSubtraction(id, args) {
}

IfcOpeningElement::~IfcOpeningElement() {
}

bool IfcOpeningElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOpeningElement(this);
}

const std::string &IfcOpeningElement::type() const {
    return IfcOpeningElement::s_type.getName();
}

const Step::ClassType &IfcOpeningElement::getClassType() {
    return IfcOpeningElement::s_type;
}

const Step::ClassType &IfcOpeningElement::getType() const {
    return IfcOpeningElement::s_type;
}

bool IfcOpeningElement::isOfType(const Step::ClassType &t) const {
    return IfcOpeningElement::s_type == t ? true : IfcFeatureElementSubtraction::isOfType(t);
}

Inverse_Set_IfcRelFillsElement_0_n &IfcOpeningElement::getHasFillings() {
    if (Step::BaseObject::inited()) {
        return m_hasFillings;
    }
    else {
        m_hasFillings.setUnset(true);
        return m_hasFillings;
    }
}

const Inverse_Set_IfcRelFillsElement_0_n &IfcOpeningElement::getHasFillings() const {
    IfcOpeningElement * deConstObject = const_cast< IfcOpeningElement * > (this);
    return deConstObject->getHasFillings();
}

bool IfcOpeningElement::testHasFillings() const {
    return !Step::isUnset(getHasFillings());
}

bool IfcOpeningElement::init() {
    bool status = IfcFeatureElementSubtraction::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasFillings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasFillings.insert(static_cast< IfcRelFillsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcOpeningElement::copy(const IfcOpeningElement &obj, const CopyOp &copyop) {
    IfcFeatureElementSubtraction::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOpeningElement::s_type("IfcOpeningElement");
