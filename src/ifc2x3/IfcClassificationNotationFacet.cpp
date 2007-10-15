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

#include "ifc2x3/IfcClassificationNotationFacet.h"

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

IfcClassificationNotationFacet::IfcClassificationNotationFacet(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_notationValue = Step::getUnset(m_notationValue);
}

IfcClassificationNotationFacet::~IfcClassificationNotationFacet() {
}

bool IfcClassificationNotationFacet::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClassificationNotationFacet(this);
}

const std::string &IfcClassificationNotationFacet::type() {
    return IfcClassificationNotationFacet::s_type.getName();
}

Step::ClassType IfcClassificationNotationFacet::getClassType() {
    return IfcClassificationNotationFacet::s_type;
}

Step::ClassType IfcClassificationNotationFacet::getType() const {
    return IfcClassificationNotationFacet::s_type;
}

bool IfcClassificationNotationFacet::isOfType(Step::ClassType t) {
    return IfcClassificationNotationFacet::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcClassificationNotationFacet::getNotationValue() {
    if (Step::BaseObject::inited()) {
        return m_notationValue;
    }
    else {
        return Step::getUnset(m_notationValue);
    }
}

void IfcClassificationNotationFacet::setNotationValue(const IfcLabel &value) {
    m_notationValue = value;
}

void IfcClassificationNotationFacet::release() {
}

bool IfcClassificationNotationFacet::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_notationValue = Step::getUnset(m_notationValue);
    }
    else {
        m_notationValue = Step::spfToString(arg);
    }
    return true;
}

void IfcClassificationNotationFacet::copy(const IfcClassificationNotationFacet &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setNotationValue(obj.m_notationValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationNotationFacet::s_type("IfcClassificationNotationFacet");
