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

#include "ifc2x3/IfcLightSourcePositional.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcLightSource.h"
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

IfcLightSourcePositional::IfcLightSourcePositional(Step::Id id, Step::SPFData *args) : IfcLightSource(id, args) {
    m_position = NULL;
    m_radius = Step::getUnset(m_radius);
    m_constantAttenuation = Step::getUnset(m_constantAttenuation);
    m_distanceAttenuation = Step::getUnset(m_distanceAttenuation);
    m_quadricAttenuation = Step::getUnset(m_quadricAttenuation);
}

IfcLightSourcePositional::~IfcLightSourcePositional() {
}

bool IfcLightSourcePositional::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightSourcePositional(this);
}

const std::string &IfcLightSourcePositional::type() const {
    return IfcLightSourcePositional::s_type.getName();
}

const Step::ClassType &IfcLightSourcePositional::getClassType() {
    return IfcLightSourcePositional::s_type;
}

const Step::ClassType &IfcLightSourcePositional::getType() const {
    return IfcLightSourcePositional::s_type;
}

bool IfcLightSourcePositional::isOfType(const Step::ClassType &t) const {
    return IfcLightSourcePositional::s_type == t ? true : IfcLightSource::isOfType(t);
}

IfcCartesianPoint *IfcLightSourcePositional::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcLightSourcePositional::getPosition() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getPosition();
}

void IfcLightSourcePositional::setPosition(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_position = value;
}

IfcPositiveLengthMeasure IfcLightSourcePositional::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcLightSourcePositional::getRadius() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getRadius();
}

void IfcLightSourcePositional::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

IfcReal IfcLightSourcePositional::getConstantAttenuation() {
    if (Step::BaseObject::inited()) {
        return m_constantAttenuation;
    }
    else {
        return Step::getUnset(m_constantAttenuation);
    }
}

const IfcReal IfcLightSourcePositional::getConstantAttenuation() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getConstantAttenuation();
}

void IfcLightSourcePositional::setConstantAttenuation(IfcReal value) {
    m_constantAttenuation = value;
}

IfcReal IfcLightSourcePositional::getDistanceAttenuation() {
    if (Step::BaseObject::inited()) {
        return m_distanceAttenuation;
    }
    else {
        return Step::getUnset(m_distanceAttenuation);
    }
}

const IfcReal IfcLightSourcePositional::getDistanceAttenuation() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getDistanceAttenuation();
}

void IfcLightSourcePositional::setDistanceAttenuation(IfcReal value) {
    m_distanceAttenuation = value;
}

IfcReal IfcLightSourcePositional::getQuadricAttenuation() {
    if (Step::BaseObject::inited()) {
        return m_quadricAttenuation;
    }
    else {
        return Step::getUnset(m_quadricAttenuation);
    }
}

const IfcReal IfcLightSourcePositional::getQuadricAttenuation() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getQuadricAttenuation();
}

void IfcLightSourcePositional::setQuadricAttenuation(IfcReal value) {
    m_quadricAttenuation = value;
}

bool IfcLightSourcePositional::init() {
    bool status = IfcLightSource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
        m_constantAttenuation = Step::getUnset(m_constantAttenuation);
    }
    else {
        m_constantAttenuation = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_distanceAttenuation = Step::getUnset(m_distanceAttenuation);
    }
    else {
        m_distanceAttenuation = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quadricAttenuation = Step::getUnset(m_quadricAttenuation);
    }
    else {
        m_quadricAttenuation = Step::spfToReal(arg);
    }
    return true;
}

void IfcLightSourcePositional::copy(const IfcLightSourcePositional &obj, const CopyOp &copyop) {
    IfcLightSource::copy(obj, copyop);
    setPosition((IfcCartesianPoint*)copyop(obj.m_position.get()));
    setRadius(obj.m_radius);
    setConstantAttenuation(obj.m_constantAttenuation);
    setDistanceAttenuation(obj.m_distanceAttenuation);
    setQuadricAttenuation(obj.m_quadricAttenuation);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourcePositional::s_type("IfcLightSourcePositional");
