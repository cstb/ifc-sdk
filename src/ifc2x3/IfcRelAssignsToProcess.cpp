/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelAssignsToProcess::IfcRelAssignsToProcess(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingProcess = NULL;
    m_quantityInProcess = NULL;
}

IfcRelAssignsToProcess::~IfcRelAssignsToProcess() {
}

bool IfcRelAssignsToProcess::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsToProcess(this);
}

const std::string &IfcRelAssignsToProcess::type() {
    return IfcRelAssignsToProcess::s_type.getName();
}

Step::ClassType IfcRelAssignsToProcess::getClassType() {
    return IfcRelAssignsToProcess::s_type;
}

Step::ClassType IfcRelAssignsToProcess::getType() const {
    return IfcRelAssignsToProcess::s_type;
}

bool IfcRelAssignsToProcess::isOfType(Step::ClassType t) {
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

void IfcRelAssignsToProcess::setRelatingProcess(const Step::RefPtr< IfcProcess > &value) {
    m_relatingProcess = value;
    m_relatingProcess->m_operatesOn.insert(this);
}

IfcMeasureWithUnit *IfcRelAssignsToProcess::getQuantityInProcess() {
    if (Step::BaseObject::inited()) {
        return m_quantityInProcess.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssignsToProcess::setQuantityInProcess(const Step::RefPtr< IfcMeasureWithUnit > &value) {
    m_quantityInProcess = value;
}

void IfcRelAssignsToProcess::release() {
    IfcRelAssigns::release();
    m_relatingProcess.release();
    m_quantityInProcess.release();
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
        m_relatingProcess = static_cast< IfcProcess * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quantityInProcess = NULL;
    }
    else {
        m_quantityInProcess = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssignsToProcess::copy(const IfcRelAssignsToProcess &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingProcess(copyop(obj.m_relatingProcess.get()));
    setQuantityInProcess(copyop(obj.m_quantityInProcess.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProcess::s_type("IfcRelAssignsToProcess");
