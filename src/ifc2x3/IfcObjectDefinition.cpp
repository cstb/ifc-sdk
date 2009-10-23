#include "ifc2x3/IfcObjectDefinition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/IfcRelDecomposes.h"
#include "ifc2x3/IfcRoot.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcObjectDefinition::IfcObjectDefinition(Step::Id id, Step::SPFData *args) : IfcRoot(id, args) {
}

IfcObjectDefinition::~IfcObjectDefinition() {
}

bool IfcObjectDefinition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcObjectDefinition(this);
}

const std::string &IfcObjectDefinition::type() const {
    return IfcObjectDefinition::s_type.getName();
}

const Step::ClassType &IfcObjectDefinition::getClassType() {
    return IfcObjectDefinition::s_type;
}

const Step::ClassType &IfcObjectDefinition::getType() const {
    return IfcObjectDefinition::s_type;
}

bool IfcObjectDefinition::isOfType(const Step::ClassType &t) const {
    return IfcObjectDefinition::s_type == t ? true : IfcRoot::isOfType(t);
}

Inverse_Set_IfcRelAssigns_0_n &IfcObjectDefinition::getHasAssignments() {
    if (Step::BaseObject::inited()) {
        return m_hasAssignments;
    }
    else {
        m_hasAssignments.setUnset(true);
        return m_hasAssignments;
    }
}

const Inverse_Set_IfcRelAssigns_0_n &IfcObjectDefinition::getHasAssignments() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getHasAssignments();
}

bool IfcObjectDefinition::testHasAssignments() const {
    return !Step::isUnset(getHasAssignments());
}

Inverse_Set_IfcRelDecomposes_0_n &IfcObjectDefinition::getIsDecomposedBy() {
    if (Step::BaseObject::inited()) {
        return m_isDecomposedBy;
    }
    else {
        m_isDecomposedBy.setUnset(true);
        return m_isDecomposedBy;
    }
}

const Inverse_Set_IfcRelDecomposes_0_n &IfcObjectDefinition::getIsDecomposedBy() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getIsDecomposedBy();
}

bool IfcObjectDefinition::testIsDecomposedBy() const {
    return !Step::isUnset(getIsDecomposedBy());
}

Inverse_Set_IfcRelDecomposes_0_1 &IfcObjectDefinition::getDecomposes() {
    if (Step::BaseObject::inited()) {
        return m_decomposes;
    }
    else {
        m_decomposes.setUnset(true);
        return m_decomposes;
    }
}

const Inverse_Set_IfcRelDecomposes_0_1 &IfcObjectDefinition::getDecomposes() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getDecomposes();
}

bool IfcObjectDefinition::testDecomposes() const {
    return !Step::isUnset(getDecomposes());
}

Inverse_Set_IfcRelAssociates_0_n &IfcObjectDefinition::getHasAssociations() {
    if (Step::BaseObject::inited()) {
        return m_hasAssociations;
    }
    else {
        m_hasAssociations.setUnset(true);
        return m_hasAssociations;
    }
}

const Inverse_Set_IfcRelAssociates_0_n &IfcObjectDefinition::getHasAssociations() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getHasAssociations();
}

bool IfcObjectDefinition::testHasAssociations() const {
    return !Step::isUnset(getHasAssociations());
}

bool IfcObjectDefinition::init() {
    bool status = IfcRoot::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssigns::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasAssignments.insert(static_cast< IfcRelAssigns * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_isDecomposedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isDecomposedBy.insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_decomposes.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_decomposes.insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelAssociates::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasAssociations.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasAssociations.insert(static_cast< IfcRelAssociates * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObjectDefinition::copy(const IfcObjectDefinition &obj, const CopyOp &copyop) {
    IfcRoot::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcObjectDefinition::s_type("IfcObjectDefinition");
