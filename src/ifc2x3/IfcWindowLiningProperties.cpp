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

#include "ifc2x3/IfcWindowLiningProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcShapeAspect.h"
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

IfcWindowLiningProperties::IfcWindowLiningProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_liningDepth = Step::getUnset(m_liningDepth);
    m_liningThickness = Step::getUnset(m_liningThickness);
    m_transomThickness = Step::getUnset(m_transomThickness);
    m_mullionThickness = Step::getUnset(m_mullionThickness);
    m_firstTransomOffset = Step::getUnset(m_firstTransomOffset);
    m_secondTransomOffset = Step::getUnset(m_secondTransomOffset);
    m_firstMullionOffset = Step::getUnset(m_firstMullionOffset);
    m_secondMullionOffset = Step::getUnset(m_secondMullionOffset);
    m_shapeAspectStyle = NULL;
}

IfcWindowLiningProperties::~IfcWindowLiningProperties() {
}

bool IfcWindowLiningProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWindowLiningProperties(this);
}

const std::string &IfcWindowLiningProperties::type() {
    return IfcWindowLiningProperties::s_type.getName();
}

Step::ClassType IfcWindowLiningProperties::getClassType() {
    return IfcWindowLiningProperties::s_type;
}

Step::ClassType IfcWindowLiningProperties::getType() const {
    return IfcWindowLiningProperties::s_type;
}

bool IfcWindowLiningProperties::isOfType(Step::ClassType t) {
    return IfcWindowLiningProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningDepth() {
    if (Step::BaseObject::inited()) {
        return m_liningDepth;
    }
    else {
        return Step::getUnset(m_liningDepth);
    }
}

void IfcWindowLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value) {
    m_liningDepth = value;
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningThickness() {
    if (Step::BaseObject::inited()) {
        return m_liningThickness;
    }
    else {
        return Step::getUnset(m_liningThickness);
    }
}

void IfcWindowLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value) {
    m_liningThickness = value;
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getTransomThickness() {
    if (Step::BaseObject::inited()) {
        return m_transomThickness;
    }
    else {
        return Step::getUnset(m_transomThickness);
    }
}

void IfcWindowLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value) {
    m_transomThickness = value;
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getMullionThickness() {
    if (Step::BaseObject::inited()) {
        return m_mullionThickness;
    }
    else {
        return Step::getUnset(m_mullionThickness);
    }
}

void IfcWindowLiningProperties::setMullionThickness(IfcPositiveLengthMeasure value) {
    m_mullionThickness = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstTransomOffset() {
    if (Step::BaseObject::inited()) {
        return m_firstTransomOffset;
    }
    else {
        return Step::getUnset(m_firstTransomOffset);
    }
}

void IfcWindowLiningProperties::setFirstTransomOffset(IfcNormalisedRatioMeasure value) {
    m_firstTransomOffset = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondTransomOffset() {
    if (Step::BaseObject::inited()) {
        return m_secondTransomOffset;
    }
    else {
        return Step::getUnset(m_secondTransomOffset);
    }
}

void IfcWindowLiningProperties::setSecondTransomOffset(IfcNormalisedRatioMeasure value) {
    m_secondTransomOffset = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstMullionOffset() {
    if (Step::BaseObject::inited()) {
        return m_firstMullionOffset;
    }
    else {
        return Step::getUnset(m_firstMullionOffset);
    }
}

void IfcWindowLiningProperties::setFirstMullionOffset(IfcNormalisedRatioMeasure value) {
    m_firstMullionOffset = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondMullionOffset() {
    if (Step::BaseObject::inited()) {
        return m_secondMullionOffset;
    }
    else {
        return Step::getUnset(m_secondMullionOffset);
    }
}

void IfcWindowLiningProperties::setSecondMullionOffset(IfcNormalisedRatioMeasure value) {
    m_secondMullionOffset = value;
}

IfcShapeAspect *IfcWindowLiningProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

void IfcWindowLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcWindowLiningProperties::release() {
    IfcPropertySetDefinition::release();
    m_shapeAspectStyle.release();
}

bool IfcWindowLiningProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_liningDepth = Step::getUnset(m_liningDepth);
    }
    else {
        m_liningDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_liningThickness = Step::getUnset(m_liningThickness);
    }
    else {
        m_liningThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transomThickness = Step::getUnset(m_transomThickness);
    }
    else {
        m_transomThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mullionThickness = Step::getUnset(m_mullionThickness);
    }
    else {
        m_mullionThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_firstTransomOffset = Step::getUnset(m_firstTransomOffset);
    }
    else {
        m_firstTransomOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondTransomOffset = Step::getUnset(m_secondTransomOffset);
    }
    else {
        m_secondTransomOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_firstMullionOffset = Step::getUnset(m_firstMullionOffset);
    }
    else {
        m_firstMullionOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondMullionOffset = Step::getUnset(m_secondMullionOffset);
    }
    else {
        m_secondMullionOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeAspectStyle = NULL;
    }
    else {
        m_shapeAspectStyle = static_cast< IfcShapeAspect * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcWindowLiningProperties::copy(const IfcWindowLiningProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setLiningDepth(obj.m_liningDepth);
    setLiningThickness(obj.m_liningThickness);
    setTransomThickness(obj.m_transomThickness);
    setMullionThickness(obj.m_mullionThickness);
    setFirstTransomOffset(obj.m_firstTransomOffset);
    setSecondTransomOffset(obj.m_secondTransomOffset);
    setFirstMullionOffset(obj.m_firstMullionOffset);
    setSecondMullionOffset(obj.m_secondMullionOffset);
    setShapeAspectStyle(copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWindowLiningProperties::s_type("IfcWindowLiningProperties");
