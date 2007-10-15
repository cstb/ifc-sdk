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

#include "ifc2x3/IfcReinforcingElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementPart.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReinforcingElement::IfcReinforcingElement(Step::Id id, Step::SPFData *args) : IfcElementPart(id, args) {
    m_steelGrade = Step::getUnset(m_steelGrade);
}

IfcReinforcingElement::~IfcReinforcingElement() {
}

bool IfcReinforcingElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReinforcingElement(this);
}

const std::string &IfcReinforcingElement::type() {
    return IfcReinforcingElement::s_type.getName();
}

Step::ClassType IfcReinforcingElement::getClassType() {
    return IfcReinforcingElement::s_type;
}

Step::ClassType IfcReinforcingElement::getType() const {
    return IfcReinforcingElement::s_type;
}

bool IfcReinforcingElement::isOfType(Step::ClassType t) {
    return IfcReinforcingElement::s_type == t ? true : IfcElementPart::isOfType(t);
}

IfcLabel IfcReinforcingElement::getSteelGrade() {
    if (Step::BaseObject::inited()) {
        return m_steelGrade;
    }
    else {
        return Step::getUnset(m_steelGrade);
    }
}

void IfcReinforcingElement::setSteelGrade(const IfcLabel &value) {
    m_steelGrade = value;
}

void IfcReinforcingElement::release() {
    IfcElementPart::release();
}

bool IfcReinforcingElement::init() {
    bool status = IfcElementPart::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_steelGrade = Step::getUnset(m_steelGrade);
    }
    else {
        m_steelGrade = Step::spfToString(arg);
    }
    return true;
}

void IfcReinforcingElement::copy(const IfcReinforcingElement &obj, const CopyOp &copyop) {
    IfcElementPart::copy(obj, copyop);
    setSteelGrade(obj.m_steelGrade);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcingElement::s_type("IfcReinforcingElement");
