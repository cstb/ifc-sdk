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

#include "ifc2x3/IfcMechanicalFastener.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFastener.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMechanicalFastener::IfcMechanicalFastener(Step::Id id, Step::SPFData *args) : IfcFastener(id, args) {
    m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    m_nominalLength = Step::getUnset(m_nominalLength);
}

IfcMechanicalFastener::~IfcMechanicalFastener() {
}

bool IfcMechanicalFastener::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMechanicalFastener(this);
}

const std::string &IfcMechanicalFastener::type() const {
    return IfcMechanicalFastener::s_type.getName();
}

const Step::ClassType &IfcMechanicalFastener::getClassType() {
    return IfcMechanicalFastener::s_type;
}

const Step::ClassType &IfcMechanicalFastener::getType() const {
    return IfcMechanicalFastener::s_type;
}

bool IfcMechanicalFastener::isOfType(const Step::ClassType &t) const {
    return IfcMechanicalFastener::s_type == t ? true : IfcFastener::isOfType(t);
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalDiameter() {
    if (Step::BaseObject::inited()) {
        return m_nominalDiameter;
    }
    else {
        return Step::getUnset(m_nominalDiameter);
    }
}

const IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalDiameter() const {
    IfcMechanicalFastener * deConstObject = const_cast< IfcMechanicalFastener * > (this);
    return deConstObject->getNominalDiameter();
}

void IfcMechanicalFastener::setNominalDiameter(IfcPositiveLengthMeasure value) {
    m_nominalDiameter = value;
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalLength() {
    if (Step::BaseObject::inited()) {
        return m_nominalLength;
    }
    else {
        return Step::getUnset(m_nominalLength);
    }
}

const IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalLength() const {
    IfcMechanicalFastener * deConstObject = const_cast< IfcMechanicalFastener * > (this);
    return deConstObject->getNominalLength();
}

void IfcMechanicalFastener::setNominalLength(IfcPositiveLengthMeasure value) {
    m_nominalLength = value;
}

bool IfcMechanicalFastener::init() {
    bool status = IfcFastener::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    }
    else {
        m_nominalDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalLength = Step::getUnset(m_nominalLength);
    }
    else {
        m_nominalLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcMechanicalFastener::copy(const IfcMechanicalFastener &obj, const CopyOp &copyop) {
    IfcFastener::copy(obj, copyop);
    setNominalDiameter(obj.m_nominalDiameter);
    setNominalLength(obj.m_nominalLength);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalFastener::s_type("IfcMechanicalFastener");
