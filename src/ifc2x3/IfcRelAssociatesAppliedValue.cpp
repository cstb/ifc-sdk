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

#include "ifc2x3/IfcRelAssociatesAppliedValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/IfcRelAssociates.h"
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

IfcRelAssociatesAppliedValue::IfcRelAssociatesAppliedValue(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingAppliedValue = NULL;
}

IfcRelAssociatesAppliedValue::~IfcRelAssociatesAppliedValue() {
}

bool IfcRelAssociatesAppliedValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssociatesAppliedValue(this);
}

const std::string &IfcRelAssociatesAppliedValue::type() {
    return IfcRelAssociatesAppliedValue::s_type.getName();
}

Step::ClassType IfcRelAssociatesAppliedValue::getClassType() {
    return IfcRelAssociatesAppliedValue::s_type;
}

Step::ClassType IfcRelAssociatesAppliedValue::getType() const {
    return IfcRelAssociatesAppliedValue::s_type;
}

bool IfcRelAssociatesAppliedValue::isOfType(Step::ClassType t) {
    return IfcRelAssociatesAppliedValue::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcAppliedValue *IfcRelAssociatesAppliedValue::getRelatingAppliedValue() {
    if (Step::BaseObject::inited()) {
        return m_relatingAppliedValue.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssociatesAppliedValue::setRelatingAppliedValue(const Step::RefPtr< IfcAppliedValue > &value) {
    m_relatingAppliedValue = value;
}

void IfcRelAssociatesAppliedValue::release() {
    IfcRelAssociates::release();
    m_relatingAppliedValue.release();
}

bool IfcRelAssociatesAppliedValue::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingAppliedValue = NULL;
    }
    else {
        m_relatingAppliedValue = static_cast< IfcAppliedValue * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssociatesAppliedValue::copy(const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setRelatingAppliedValue(copyop(obj.m_relatingAppliedValue.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesAppliedValue::s_type("IfcRelAssociatesAppliedValue");
