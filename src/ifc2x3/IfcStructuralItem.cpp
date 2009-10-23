#include "ifc2x3/IfcStructuralItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelConnectsStructuralActivity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcStructuralItem::IfcStructuralItem(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
}

IfcStructuralItem::~IfcStructuralItem() {
}

bool IfcStructuralItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralItem(this);
}

const std::string &IfcStructuralItem::type() const {
    return IfcStructuralItem::s_type.getName();
}

const Step::ClassType &IfcStructuralItem::getClassType() {
    return IfcStructuralItem::s_type;
}

const Step::ClassType &IfcStructuralItem::getType() const {
    return IfcStructuralItem::s_type;
}

bool IfcStructuralItem::isOfType(const Step::ClassType &t) const {
    return IfcStructuralItem::s_type == t ? true : IfcProduct::isOfType(t);
}

Inverse_Set_IfcRelConnectsStructuralActivity_0_n &IfcStructuralItem::getAssignedStructuralActivity() {
    if (Step::BaseObject::inited()) {
        return m_assignedStructuralActivity;
    }
    else {
        m_assignedStructuralActivity.setUnset(true);
        return m_assignedStructuralActivity;
    }
}

const Inverse_Set_IfcRelConnectsStructuralActivity_0_n &IfcStructuralItem::getAssignedStructuralActivity() const {
    IfcStructuralItem * deConstObject = const_cast< IfcStructuralItem * > (this);
    return deConstObject->getAssignedStructuralActivity();
}

bool IfcStructuralItem::testAssignedStructuralActivity() const {
    return !Step::isUnset(getAssignedStructuralActivity());
}

bool IfcStructuralItem::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_assignedStructuralActivity.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_assignedStructuralActivity.insert(static_cast< IfcRelConnectsStructuralActivity * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralItem::copy(const IfcStructuralItem &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralItem::s_type("IfcStructuralItem");
