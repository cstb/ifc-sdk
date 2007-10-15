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

#include "ifc2x3/IfcDerivedUnitElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDerivedUnitElement::IfcDerivedUnitElement(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_unit = NULL;
    m_exponent = Step::getUnset(m_exponent);
}

IfcDerivedUnitElement::~IfcDerivedUnitElement() {
}

bool IfcDerivedUnitElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDerivedUnitElement(this);
}

const std::string &IfcDerivedUnitElement::type() {
    return IfcDerivedUnitElement::s_type.getName();
}

Step::ClassType IfcDerivedUnitElement::getClassType() {
    return IfcDerivedUnitElement::s_type;
}

Step::ClassType IfcDerivedUnitElement::getType() const {
    return IfcDerivedUnitElement::s_type;
}

bool IfcDerivedUnitElement::isOfType(Step::ClassType t) {
    return IfcDerivedUnitElement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcNamedUnit *IfcDerivedUnitElement::getUnit() {
    if (Step::BaseObject::inited()) {
        return m_unit.get();
    }
    else {
        return NULL;
    }
}

void IfcDerivedUnitElement::setUnit(const Step::RefPtr< IfcNamedUnit > &value) {
    m_unit = value;
}

Step::Integer IfcDerivedUnitElement::getExponent() {
    if (Step::BaseObject::inited()) {
        return m_exponent;
    }
    else {
        return Step::getUnset(m_exponent);
    }
}

void IfcDerivedUnitElement::setExponent(Step::Integer value) {
    m_exponent = value;
}

void IfcDerivedUnitElement::release() {
    m_unit.release();
}

bool IfcDerivedUnitElement::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unit = NULL;
    }
    else {
        m_unit = static_cast< IfcNamedUnit * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_exponent = Step::getUnset(m_exponent);
    }
    else {
        m_exponent = Step::spfToInteger(arg);
    }
    return true;
}

void IfcDerivedUnitElement::copy(const IfcDerivedUnitElement &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setUnit(copyop(obj.m_unit.get()));
    setExponent(obj.m_exponent);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDerivedUnitElement::s_type("IfcDerivedUnitElement");
