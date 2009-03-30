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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcRelAssignsToProcess.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/IfcProcess.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelAssignsToProcess::IfcRelAssignsToProcess(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingProcess = NULL;
    m_quantityInProcess = NULL;
}

IfcRelAssignsToProcess::~IfcRelAssignsToProcess() {
}

bool IfcRelAssignsToProcess::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsToProcess(this);
}

const std::string &IfcRelAssignsToProcess::type() const {
    return IfcRelAssignsToProcess::s_type.getName();
}

const Step::ClassType &IfcRelAssignsToProcess::getClassType() {
    return IfcRelAssignsToProcess::s_type;
}

const Step::ClassType &IfcRelAssignsToProcess::getType() const {
    return IfcRelAssignsToProcess::s_type;
}

bool IfcRelAssignsToProcess::isOfType(const Step::ClassType &t) const {
    return IfcRelAssignsToProcess::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcProcess *IfcRelAssignsToProcess::getRelatingProcess() {
    if (Step::BaseObject::inited()) {
        return m_relatingProcess.get();
    }
    else {
        return NULL;
    }
}

const IfcProcess *IfcRelAssignsToProcess::getRelatingProcess() const {
    IfcRelAssignsToProcess * deConstObject = const_cast< IfcRelAssignsToProcess * > (this);
    return deConstObject->getRelatingProcess();
}

void IfcRelAssignsToProcess::setRelatingProcess(const Step::RefPtr< IfcProcess > &value) {
    if (m_relatingProcess.valid()) {
        m_relatingProcess->m_operatesOn.erase(this);
    }
    if (value.valid()) {
        value->m_operatesOn.insert(this);
    }
    m_relatingProcess = value;
}

void IfcRelAssignsToProcess::unsetRelatingProcess() {
    m_relatingProcess = Step::getUnset(getRelatingProcess());
}

bool IfcRelAssignsToProcess::testRelatingProcess() const {
    return !Step::isUnset(getRelatingProcess());
}

IfcMeasureWithUnit *IfcRelAssignsToProcess::getQuantityInProcess() {
    if (Step::BaseObject::inited()) {
        return m_quantityInProcess.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureWithUnit *IfcRelAssignsToProcess::getQuantityInProcess() const {
    IfcRelAssignsToProcess * deConstObject = const_cast< IfcRelAssignsToProcess * > (this);
    return deConstObject->getQuantityInProcess();
}

void IfcRelAssignsToProcess::setQuantityInProcess(const Step::RefPtr< IfcMeasureWithUnit > &value) {
    m_quantityInProcess = value;
}

void IfcRelAssignsToProcess::unsetQuantityInProcess() {
    m_quantityInProcess = Step::getUnset(getQuantityInProcess());
}

bool IfcRelAssignsToProcess::testQuantityInProcess() const {
    return !Step::isUnset(getQuantityInProcess());
}

bool IfcRelAssignsToProcess::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingProcess = NULL;
    }
    else {
        m_relatingProcess = static_cast< IfcProcess * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quantityInProcess = NULL;
    }
    else {
        m_quantityInProcess = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssignsToProcess::copy(const IfcRelAssignsToProcess &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingProcess((IfcProcess*)copyop(obj.m_relatingProcess.get()));
    setQuantityInProcess((IfcMeasureWithUnit*)copyop(obj.m_quantityInProcess.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProcess::s_type("IfcRelAssignsToProcess");
