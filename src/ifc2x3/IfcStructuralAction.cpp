/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcStructuralAction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralActivity.h"
#include "ifc2x3/IfcStructuralReaction.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralAction::IfcStructuralAction(Step::Id id, Step::SPFData *args) : IfcStructuralActivity(id, args) {
    m_destabilizingLoad = Step::getUnset(m_destabilizingLoad);
    m_causedBy = NULL;
}

IfcStructuralAction::~IfcStructuralAction() {
}

bool IfcStructuralAction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralAction(this);
}

const std::string &IfcStructuralAction::type() const {
    return IfcStructuralAction::s_type.getName();
}

const Step::ClassType &IfcStructuralAction::getClassType() {
    return IfcStructuralAction::s_type;
}

const Step::ClassType &IfcStructuralAction::getType() const {
    return IfcStructuralAction::s_type;
}

bool IfcStructuralAction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralAction::s_type == t ? true : IfcStructuralActivity::isOfType(t);
}

Step::Boolean IfcStructuralAction::getDestabilizingLoad() {
    if (Step::BaseObject::inited()) {
        return m_destabilizingLoad;
    }
    else {
        return Step::getUnset(m_destabilizingLoad);
    }
}

const Step::Boolean IfcStructuralAction::getDestabilizingLoad() const {
    IfcStructuralAction * deConstObject = const_cast< IfcStructuralAction * > (this);
    return deConstObject->getDestabilizingLoad();
}

void IfcStructuralAction::setDestabilizingLoad(Step::Boolean value) {
    m_destabilizingLoad = value;
}

IfcStructuralReaction *IfcStructuralAction::getCausedBy() {
    if (Step::BaseObject::inited()) {
        return m_causedBy.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralReaction *IfcStructuralAction::getCausedBy() const {
    IfcStructuralAction * deConstObject = const_cast< IfcStructuralAction * > (this);
    return deConstObject->getCausedBy();
}

void IfcStructuralAction::setCausedBy(const Step::RefPtr< IfcStructuralReaction > &value) {
    if (m_causedBy.valid()) {
        m_causedBy->m_causes.erase(this);
    }
    if (value.valid()) {
        value->m_causes.insert(this);
    }
    m_causedBy = value;
}

bool IfcStructuralAction::init() {
    bool status = IfcStructuralActivity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_destabilizingLoad = Step::getUnset(m_destabilizingLoad);
    }
    else {
        m_destabilizingLoad = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_causedBy = NULL;
    }
    else {
        m_causedBy = static_cast< IfcStructuralReaction * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcStructuralAction::copy(const IfcStructuralAction &obj, const CopyOp &copyop) {
    IfcStructuralActivity::copy(obj, copyop);
    setDestabilizingLoad(obj.m_destabilizingLoad);
    setCausedBy((IfcStructuralReaction*)copyop(obj.m_causedBy.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralAction::s_type("IfcStructuralAction");
