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

#include "ifc2x3/IfcSurfaceStyleRefraction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSurfaceStyleRefraction::IfcSurfaceStyleRefraction(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_refractionIndex = Step::getUnset(m_refractionIndex);
    m_dispersionFactor = Step::getUnset(m_dispersionFactor);
}

IfcSurfaceStyleRefraction::~IfcSurfaceStyleRefraction() {
}

bool IfcSurfaceStyleRefraction::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceStyleRefraction(this);
}

const std::string &IfcSurfaceStyleRefraction::type() {
    return IfcSurfaceStyleRefraction::s_type.getName();
}

Step::ClassType IfcSurfaceStyleRefraction::getClassType() {
    return IfcSurfaceStyleRefraction::s_type;
}

Step::ClassType IfcSurfaceStyleRefraction::getType() const {
    return IfcSurfaceStyleRefraction::s_type;
}

bool IfcSurfaceStyleRefraction::isOfType(Step::ClassType t) {
    return IfcSurfaceStyleRefraction::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcReal IfcSurfaceStyleRefraction::getRefractionIndex() {
    if (Step::BaseObject::inited()) {
        return m_refractionIndex;
    }
    else {
        return Step::getUnset(m_refractionIndex);
    }
}

void IfcSurfaceStyleRefraction::setRefractionIndex(IfcReal value) {
    m_refractionIndex = value;
}

IfcReal IfcSurfaceStyleRefraction::getDispersionFactor() {
    if (Step::BaseObject::inited()) {
        return m_dispersionFactor;
    }
    else {
        return Step::getUnset(m_dispersionFactor);
    }
}

void IfcSurfaceStyleRefraction::setDispersionFactor(IfcReal value) {
    m_dispersionFactor = value;
}

void IfcSurfaceStyleRefraction::release() {
}

bool IfcSurfaceStyleRefraction::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refractionIndex = Step::getUnset(m_refractionIndex);
    }
    else {
        m_refractionIndex = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dispersionFactor = Step::getUnset(m_dispersionFactor);
    }
    else {
        m_dispersionFactor = Step::spfToReal(arg);
    }
    return true;
}

void IfcSurfaceStyleRefraction::copy(const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRefractionIndex(obj.m_refractionIndex);
    setDispersionFactor(obj.m_dispersionFactor);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleRefraction::s_type("IfcSurfaceStyleRefraction");
