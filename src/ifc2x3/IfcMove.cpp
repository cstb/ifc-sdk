#include "ifc2x3/IfcMove.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/IfcTask.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcMove::IfcMove(Step::Id id, Step::SPFData *args) : IfcTask(id, args) {
    m_moveFrom = NULL;
    m_moveTo = NULL;
    m_punchList.setUnset(true);
}

IfcMove::~IfcMove() {
}

bool IfcMove::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMove(this);
}

const std::string &IfcMove::type() const {
    return IfcMove::s_type.getName();
}

const Step::ClassType &IfcMove::getClassType() {
    return IfcMove::s_type;
}

const Step::ClassType &IfcMove::getType() const {
    return IfcMove::s_type;
}

bool IfcMove::isOfType(const Step::ClassType &t) const {
    return IfcMove::s_type == t ? true : IfcTask::isOfType(t);
}

IfcSpatialStructureElement *IfcMove::getMoveFrom() {
    if (Step::BaseObject::inited()) {
        return m_moveFrom.get();
    }
    else {
        return NULL;
    }
}

const IfcSpatialStructureElement *IfcMove::getMoveFrom() const {
    IfcMove * deConstObject = const_cast< IfcMove * > (this);
    return deConstObject->getMoveFrom();
}

void IfcMove::setMoveFrom(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    m_moveFrom = value;
}

void IfcMove::unsetMoveFrom() {
    m_moveFrom = Step::getUnset(getMoveFrom());
}

bool IfcMove::testMoveFrom() const {
    return !Step::isUnset(getMoveFrom());
}

IfcSpatialStructureElement *IfcMove::getMoveTo() {
    if (Step::BaseObject::inited()) {
        return m_moveTo.get();
    }
    else {
        return NULL;
    }
}

const IfcSpatialStructureElement *IfcMove::getMoveTo() const {
    IfcMove * deConstObject = const_cast< IfcMove * > (this);
    return deConstObject->getMoveTo();
}

void IfcMove::setMoveTo(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    m_moveTo = value;
}

void IfcMove::unsetMoveTo() {
    m_moveTo = Step::getUnset(getMoveTo());
}

bool IfcMove::testMoveTo() const {
    return !Step::isUnset(getMoveTo());
}

List_IfcText_1_n &IfcMove::getPunchList() {
    if (Step::BaseObject::inited()) {
        return m_punchList;
    }
    else {
        m_punchList.setUnset(true);
        return m_punchList;
    }
}

const List_IfcText_1_n &IfcMove::getPunchList() const {
    IfcMove * deConstObject = const_cast< IfcMove * > (this);
    return deConstObject->getPunchList();
}

void IfcMove::setPunchList(const List_IfcText_1_n &value) {
    m_punchList = value;
}

void IfcMove::unsetPunchList() {
    m_punchList.clear();
    m_punchList.setUnset(true);
}

bool IfcMove::testPunchList() const {
    return !Step::isUnset(getPunchList());
}

bool IfcMove::init() {
    bool status = IfcTask::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_moveFrom = NULL;
    }
    else {
        m_moveFrom = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_moveTo = NULL;
    }
    else {
        m_moveTo = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_punchList.setUnset(true);
    }
    else {
        m_punchList.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcText attr2;
                attr2 = Step::String::fromSPF(str1);
                m_punchList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcMove::copy(const IfcMove &obj, const CopyOp &copyop) {
    Step::List< IfcText, 1 >::const_iterator it_m_punchList;
    IfcTask::copy(obj, copyop);
    setMoveFrom((IfcSpatialStructureElement*)copyop(obj.m_moveFrom.get()));
    setMoveTo((IfcSpatialStructureElement*)copyop(obj.m_moveTo.get()));
    for (it_m_punchList = obj.m_punchList.begin(); it_m_punchList != obj.m_punchList.end(); ++it_m_punchList) {
        IfcText copyTarget = (*it_m_punchList);
        m_punchList.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMove::s_type("IfcMove");
