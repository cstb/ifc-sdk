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

#include "ifc2x3/IfcElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTypeProduct.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElementType::IfcElementType(Step::Id id, Step::SPFData *args) : IfcTypeProduct(id, args) {
    m_elementType = Step::getUnset(m_elementType);
}

IfcElementType::~IfcElementType() {
}

bool IfcElementType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElementType(this);
}

const std::string &IfcElementType::type() {
    return IfcElementType::s_type.getName();
}

Step::ClassType IfcElementType::getClassType() {
    return IfcElementType::s_type;
}

Step::ClassType IfcElementType::getType() const {
    return IfcElementType::s_type;
}

bool IfcElementType::isOfType(Step::ClassType t) {
    return IfcElementType::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcLabel IfcElementType::getElementType() {
    if (Step::BaseObject::inited()) {
        return m_elementType;
    }
    else {
        return Step::getUnset(m_elementType);
    }
}

void IfcElementType::setElementType(const IfcLabel &value) {
    m_elementType = value;
}

void IfcElementType::release() {
    IfcTypeProduct::release();
}

bool IfcElementType::init() {
    bool status = IfcTypeProduct::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elementType = Step::getUnset(m_elementType);
    }
    else {
        m_elementType = Step::spfToString(arg);
    }
    return true;
}

void IfcElementType::copy(const IfcElementType &obj, const CopyOp &copyop) {
    IfcTypeProduct::copy(obj, copyop);
    setElementType(obj.m_elementType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementType::s_type("IfcElementType");
