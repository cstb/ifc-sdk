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

#include "ifc2x3/IfcRelDefinesByType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelDefines.h"
#include "ifc2x3/IfcTypeObject.h"
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

IfcRelDefinesByType::IfcRelDefinesByType(Step::Id id, Step::SPFData *args) : IfcRelDefines(id, args) {
    m_relatingType = NULL;
}

IfcRelDefinesByType::~IfcRelDefinesByType() {
}

bool IfcRelDefinesByType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelDefinesByType(this);
}

const std::string &IfcRelDefinesByType::type() const {
    return IfcRelDefinesByType::s_type.getName();
}

const Step::ClassType &IfcRelDefinesByType::getClassType() {
    return IfcRelDefinesByType::s_type;
}

const Step::ClassType &IfcRelDefinesByType::getType() const {
    return IfcRelDefinesByType::s_type;
}

bool IfcRelDefinesByType::isOfType(const Step::ClassType &t) const {
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

const IfcTypeObject *IfcRelDefinesByType::getRelatingType() const {
    IfcRelDefinesByType * deConstObject = const_cast< IfcRelDefinesByType * > (this);
    return deConstObject->getRelatingType();
}

void IfcRelDefinesByType::setRelatingType(const Step::RefPtr< IfcTypeObject > &value) {
    if (m_relatingType.valid()) {
        m_relatingType->m_objectTypeOf.erase(this);
    }
    if (value.valid()) {
        value->m_objectTypeOf.insert(this);
    }
    m_relatingType = value;
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
        m_relatingType = static_cast< IfcTypeObject * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelDefinesByType::copy(const IfcRelDefinesByType &obj, const CopyOp &copyop) {
    IfcRelDefines::copy(obj, copyop);
    setRelatingType((IfcTypeObject*)copyop(obj.m_relatingType.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefinesByType::s_type("IfcRelDefinesByType");
