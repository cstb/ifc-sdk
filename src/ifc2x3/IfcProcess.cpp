#include "ifc2x3/IfcProcess.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcRelAssignsToProcess.h"
#include "ifc2x3/IfcRelSequence.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcProcess::IfcProcess(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
}

IfcProcess::~IfcProcess() {
}

bool IfcProcess::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProcess(this);
}

const std::string &IfcProcess::type() const {
    return IfcProcess::s_type.getName();
}

const Step::ClassType &IfcProcess::getClassType() {
    return IfcProcess::s_type;
}

const Step::ClassType &IfcProcess::getType() const {
    return IfcProcess::s_type;
}

bool IfcProcess::isOfType(const Step::ClassType &t) const {
    return IfcProcess::s_type == t ? true : IfcObject::isOfType(t);
}

Inverse_Set_IfcRelAssignsToProcess_0_n &IfcProcess::getOperatesOn() {
    if (Step::BaseObject::inited()) {
        return m_operatesOn;
    }
    else {
        m_operatesOn.setUnset(true);
        return m_operatesOn;
    }
}

const Inverse_Set_IfcRelAssignsToProcess_0_n &IfcProcess::getOperatesOn() const {
    IfcProcess * deConstObject = const_cast< IfcProcess * > (this);
    return deConstObject->getOperatesOn();
}

bool IfcProcess::testOperatesOn() const {
    return !Step::isUnset(getOperatesOn());
}

Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsSuccessorFrom() {
    if (Step::BaseObject::inited()) {
        return m_isSuccessorFrom;
    }
    else {
        m_isSuccessorFrom.setUnset(true);
        return m_isSuccessorFrom;
    }
}

const Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsSuccessorFrom() const {
    IfcProcess * deConstObject = const_cast< IfcProcess * > (this);
    return deConstObject->getIsSuccessorFrom();
}

bool IfcProcess::testIsSuccessorFrom() const {
    return !Step::isUnset(getIsSuccessorFrom());
}

Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsPredecessorTo() {
    if (Step::BaseObject::inited()) {
        return m_isPredecessorTo;
    }
    else {
        m_isPredecessorTo.setUnset(true);
        return m_isPredecessorTo;
    }
}

const Inverse_Set_IfcRelSequence_0_n &IfcProcess::getIsPredecessorTo() const {
    IfcProcess * deConstObject = const_cast< IfcProcess * > (this);
    return deConstObject->getIsPredecessorTo();
}

bool IfcProcess::testIsPredecessorTo() const {
    return !Step::isUnset(getIsPredecessorTo());
}

bool IfcProcess::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssignsToProcess::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_operatesOn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_operatesOn.insert(static_cast< IfcRelAssignsToProcess * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSequence::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_isSuccessorFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isSuccessorFrom.insert(static_cast< IfcRelSequence * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSequence::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_isPredecessorTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isPredecessorTo.insert(static_cast< IfcRelSequence * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProcess::copy(const IfcProcess &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProcess::s_type("IfcProcess");
