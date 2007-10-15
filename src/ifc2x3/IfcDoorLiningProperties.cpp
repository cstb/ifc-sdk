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

#include "ifc2x3/IfcDoorLiningProperties.h"

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

IfcDoorLiningProperties::IfcDoorLiningProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_liningDepth = Step::getUnset(m_liningDepth);
    m_liningThickness = Step::getUnset(m_liningThickness);
    m_thresholdDepth = Step::getUnset(m_thresholdDepth);
    m_thresholdThickness = Step::getUnset(m_thresholdThickness);
    m_transomThickness = Step::getUnset(m_transomThickness);
    m_transomOffset = Step::getUnset(m_transomOffset);
    m_liningOffset = Step::getUnset(m_liningOffset);
    m_thresholdOffset = Step::getUnset(m_thresholdOffset);
    m_casingThickness = Step::getUnset(m_casingThickness);
    m_casingDepth = Step::getUnset(m_casingDepth);
    m_shapeAspectStyle = NULL;
}

IfcDoorLiningProperties::~IfcDoorLiningProperties() {
}

bool IfcDoorLiningProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDoorLiningProperties(this);
}

const std::string &IfcDoorLiningProperties::type() {
    return IfcDoorLiningProperties::s_type.getName();
}

Step::ClassType IfcDoorLiningProperties::getClassType() {
    return IfcDoorLiningProperties::s_type;
}

Step::ClassType IfcDoorLiningProperties::getType() const {
    return IfcDoorLiningProperties::s_type;
}

bool IfcDoorLiningProperties::isOfType(Step::ClassType t) {
    return IfcDoorLiningProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningDepth() {
    if (Step::BaseObject::inited()) {
        return m_liningDepth;
    }
    else {
        return Step::getUnset(m_liningDepth);
    }
}

void IfcDoorLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value) {
    m_liningDepth = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningThickness() {
    if (Step::BaseObject::inited()) {
        return m_liningThickness;
    }
    else {
        return Step::getUnset(m_liningThickness);
    }
}

void IfcDoorLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value) {
    m_liningThickness = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdDepth() {
    if (Step::BaseObject::inited()) {
        return m_thresholdDepth;
    }
    else {
        return Step::getUnset(m_thresholdDepth);
    }
}

void IfcDoorLiningProperties::setThresholdDepth(IfcPositiveLengthMeasure value) {
    m_thresholdDepth = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdThickness() {
    if (Step::BaseObject::inited()) {
        return m_thresholdThickness;
    }
    else {
        return Step::getUnset(m_thresholdThickness);
    }
}

void IfcDoorLiningProperties::setThresholdThickness(IfcPositiveLengthMeasure value) {
    m_thresholdThickness = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getTransomThickness() {
    if (Step::BaseObject::inited()) {
        return m_transomThickness;
    }
    else {
        return Step::getUnset(m_transomThickness);
    }
}

void IfcDoorLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value) {
    m_transomThickness = value;
}

IfcLengthMeasure IfcDoorLiningProperties::getTransomOffset() {
    if (Step::BaseObject::inited()) {
        return m_transomOffset;
    }
    else {
        return Step::getUnset(m_transomOffset);
    }
}

void IfcDoorLiningProperties::setTransomOffset(IfcLengthMeasure value) {
    m_transomOffset = value;
}

IfcLengthMeasure IfcDoorLiningProperties::getLiningOffset() {
    if (Step::BaseObject::inited()) {
        return m_liningOffset;
    }
    else {
        return Step::getUnset(m_liningOffset);
    }
}

void IfcDoorLiningProperties::setLiningOffset(IfcLengthMeasure value) {
    m_liningOffset = value;
}

IfcLengthMeasure IfcDoorLiningProperties::getThresholdOffset() {
    if (Step::BaseObject::inited()) {
        return m_thresholdOffset;
    }
    else {
        return Step::getUnset(m_thresholdOffset);
    }
}

void IfcDoorLiningProperties::setThresholdOffset(IfcLengthMeasure value) {
    m_thresholdOffset = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingThickness() {
    if (Step::BaseObject::inited()) {
        return m_casingThickness;
    }
    else {
        return Step::getUnset(m_casingThickness);
    }
}

void IfcDoorLiningProperties::setCasingThickness(IfcPositiveLengthMeasure value) {
    m_casingThickness = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingDepth() {
    if (Step::BaseObject::inited()) {
        return m_casingDepth;
    }
    else {
        return Step::getUnset(m_casingDepth);
    }
}

void IfcDoorLiningProperties::setCasingDepth(IfcPositiveLengthMeasure value) {
    m_casingDepth = value;
}

IfcShapeAspect *IfcDoorLiningProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

void IfcDoorLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcDoorLiningProperties::release() {
    IfcPropertySetDefinition::release();
    m_shapeAspectStyle.release();
}

bool IfcDoorLiningProperties::init() {
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
        m_thresholdDepth = Step::getUnset(m_thresholdDepth);
    }
    else {
        m_thresholdDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thresholdThickness = Step::getUnset(m_thresholdThickness);
    }
    else {
        m_thresholdThickness = Step::spfToReal(arg);
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
        m_transomOffset = Step::getUnset(m_transomOffset);
    }
    else {
        m_transomOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_liningOffset = Step::getUnset(m_liningOffset);
    }
    else {
        m_liningOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thresholdOffset = Step::getUnset(m_thresholdOffset);
    }
    else {
        m_thresholdOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_casingThickness = Step::getUnset(m_casingThickness);
    }
    else {
        m_casingThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_casingDepth = Step::getUnset(m_casingDepth);
    }
    else {
        m_casingDepth = Step::spfToReal(arg);
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

void IfcDoorLiningProperties::copy(const IfcDoorLiningProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setLiningDepth(obj.m_liningDepth);
    setLiningThickness(obj.m_liningThickness);
    setThresholdDepth(obj.m_thresholdDepth);
    setThresholdThickness(obj.m_thresholdThickness);
    setTransomThickness(obj.m_transomThickness);
    setTransomOffset(obj.m_transomOffset);
    setLiningOffset(obj.m_liningOffset);
    setThresholdOffset(obj.m_thresholdOffset);
    setCasingThickness(obj.m_casingThickness);
    setCasingDepth(obj.m_casingDepth);
    setShapeAspectStyle(copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDoorLiningProperties::s_type("IfcDoorLiningProperties");
