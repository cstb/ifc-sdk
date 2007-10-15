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

#include "ifc2x3/IfcRelDefinesByType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/IfcTypeObject.h"
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

IfcRelDefinesByType::IfcRelDefinesByType(Step::Id id, Step::SPFData *args) : IfcRelDefines(id, args) {
    m_relatingType = NULL;
}

IfcRelDefinesByType::~IfcRelDefinesByType() {
}

bool IfcRelDefinesByType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelDefinesByType(this);
}

const std::string &IfcRelDefinesByType::type() {
    return IfcRelDefinesByType::s_type.getName();
}

Step::ClassType IfcRelDefinesByType::getClassType() {
    return IfcRelDefinesByType::s_type;
}

Step::ClassType IfcRelDefinesByType::getType() const {
    return IfcRelDefinesByType::s_type;
}

bool IfcRelDefinesByType::isOfType(Step::ClassType t) {
    return IfcRelDefinesByType::s_type == t ? true : IfcRelDefines::isOfType(t);
}

IfcTypeObject *IfcRelDefinesByType::getRelatingType() {
    if (Step::BaseObject::inited()) {
        return m_relatingType.get();
    }
    else {
        return NULL;
    }
}

void IfcRelDefinesByType::setRelatingType(const Step::RefPtr< IfcTypeObject > &value) {
    m_relatingType = value;
    m_relatingType->m_objectTypeOf.insert(this);
}

void IfcRelDefinesByType::release() {
    IfcRelDefines::release();
    m_relatingType.release();
}

bool IfcRelDefinesByType::init() {
    bool status = IfcRelDefines::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingType = NULL;
    }
    else {
        m_relatingType = static_cast< IfcTypeObject * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelDefinesByType::copy(const IfcRelDefinesByType &obj, const CopyOp &copyop) {
    IfcRelDefines::copy(obj, copyop);
    setRelatingType(copyop(obj.m_relatingType.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefinesByType::s_type("IfcRelDefinesByType");
