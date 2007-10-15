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

#include "ifc2x3/IfcSweptDiskSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcSolidModel.h"
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

IfcSweptDiskSolid::IfcSweptDiskSolid(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_directrix = NULL;
    m_radius = Step::getUnset(m_radius);
    m_innerRadius = Step::getUnset(m_innerRadius);
    m_startParam = Step::getUnset(m_startParam);
    m_endParam = Step::getUnset(m_endParam);
}

IfcSweptDiskSolid::~IfcSweptDiskSolid() {
}

bool IfcSweptDiskSolid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSweptDiskSolid(this);
}

const std::string &IfcSweptDiskSolid::type() {
    return IfcSweptDiskSolid::s_type.getName();
}

Step::ClassType IfcSweptDiskSolid::getClassType() {
    return IfcSweptDiskSolid::s_type;
}

Step::ClassType IfcSweptDiskSolid::getType() const {
    return IfcSweptDiskSolid::s_type;
}

bool IfcSweptDiskSolid::isOfType(Step::ClassType t) {
    return IfcSweptDiskSolid::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcCurve *IfcSweptDiskSolid::getDirectrix() {
    if (Step::BaseObject::inited()) {
        return m_directrix.get();
    }
    else {
        return NULL;
    }
}

void IfcSweptDiskSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value) {
    m_directrix = value;
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

void IfcSweptDiskSolid::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getInnerRadius() {
    if (Step::BaseObject::inited()) {
        return m_innerRadius;
    }
    else {
        return Step::getUnset(m_innerRadius);
    }
}

void IfcSweptDiskSolid::setInnerRadius(IfcPositiveLengthMeasure value) {
    m_innerRadius = value;
}

IfcParameterValue IfcSweptDiskSolid::getStartParam() {
    if (Step::BaseObject::inited()) {
        return m_startParam;
    }
    else {
        return Step::getUnset(m_startParam);
    }
}

void IfcSweptDiskSolid::setStartParam(IfcParameterValue value) {
    m_startParam = value;
}

IfcParameterValue IfcSweptDiskSolid::getEndParam() {
    if (Step::BaseObject::inited()) {
        return m_endParam;
    }
    else {
        return Step::getUnset(m_endParam);
    }
}

void IfcSweptDiskSolid::setEndParam(IfcParameterValue value) {
    m_endParam = value;
}

void IfcSweptDiskSolid::release() {
    IfcSolidModel::release();
    m_directrix.release();
}

bool IfcSweptDiskSolid::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_directrix = NULL;
    }
    else {
        m_directrix = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_radius = Step::getUnset(m_radius);
    }
    else {
        m_radius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_innerRadius = Step::getUnset(m_innerRadius);
    }
    else {
        m_innerRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startParam = Step::getUnset(m_startParam);
    }
    else {
        m_startParam = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_endParam = Step::getUnset(m_endParam);
    }
    else {
        m_endParam = Step::spfToReal(arg);
    }
    return true;
}

void IfcSweptDiskSolid::copy(const IfcSweptDiskSolid &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setDirectrix(copyop(obj.m_directrix.get()));
    setRadius(obj.m_radius);
    setInnerRadius(obj.m_innerRadius);
    setStartParam(obj.m_startParam);
    setEndParam(obj.m_endParam);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSweptDiskSolid::s_type("IfcSweptDiskSolid");
