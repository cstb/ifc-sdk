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

#include "ifc2x3/IfcLightSourceSpot.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcLightSourcePositional.h"
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

IfcLightSourceSpot::IfcLightSourceSpot(Step::Id id, Step::SPFData *args) : IfcLightSourcePositional(id, args) {
    m_orientation = NULL;
    m_concentrationExponent = Step::getUnset(m_concentrationExponent);
    m_spreadAngle = Step::getUnset(m_spreadAngle);
    m_beamWidthAngle = Step::getUnset(m_beamWidthAngle);
}

IfcLightSourceSpot::~IfcLightSourceSpot() {
}

bool IfcLightSourceSpot::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLightSourceSpot(this);
}

const std::string &IfcLightSourceSpot::type() {
    return IfcLightSourceSpot::s_type.getName();
}

Step::ClassType IfcLightSourceSpot::getClassType() {
    return IfcLightSourceSpot::s_type;
}

Step::ClassType IfcLightSourceSpot::getType() const {
    return IfcLightSourceSpot::s_type;
}

bool IfcLightSourceSpot::isOfType(Step::ClassType t) {
    return IfcLightSourceSpot::s_type == t ? true : IfcLightSourcePositional::isOfType(t);
}

IfcDirection *IfcLightSourceSpot::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation.get();
    }
    else {
        return NULL;
    }
}

void IfcLightSourceSpot::setOrientation(const Step::RefPtr< IfcDirection > &value) {
    m_orientation = value;
}

IfcReal IfcLightSourceSpot::getConcentrationExponent() {
    if (Step::BaseObject::inited()) {
        return m_concentrationExponent;
    }
    else {
        return Step::getUnset(m_concentrationExponent);
    }
}

void IfcLightSourceSpot::setConcentrationExponent(IfcReal value) {
    m_concentrationExponent = value;
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getSpreadAngle() {
    if (Step::BaseObject::inited()) {
        return m_spreadAngle;
    }
    else {
        return Step::getUnset(m_spreadAngle);
    }
}

void IfcLightSourceSpot::setSpreadAngle(IfcPositivePlaneAngleMeasure value) {
    m_spreadAngle = value;
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getBeamWidthAngle() {
    if (Step::BaseObject::inited()) {
        return m_beamWidthAngle;
    }
    else {
        return Step::getUnset(m_beamWidthAngle);
    }
}

void IfcLightSourceSpot::setBeamWidthAngle(IfcPositivePlaneAngleMeasure value) {
    m_beamWidthAngle = value;
}

void IfcLightSourceSpot::release() {
    IfcLightSourcePositional::release();
    m_orientation.release();
}

bool IfcLightSourceSpot::init() {
    bool status = IfcLightSourcePositional::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = NULL;
    }
    else {
        m_orientation = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_concentrationExponent = Step::getUnset(m_concentrationExponent);
    }
    else {
        m_concentrationExponent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_spreadAngle = Step::getUnset(m_spreadAngle);
    }
    else {
        m_spreadAngle = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_beamWidthAngle = Step::getUnset(m_beamWidthAngle);
    }
    else {
        m_beamWidthAngle = Step::spfToReal(arg);
    }
    return true;
}

void IfcLightSourceSpot::copy(const IfcLightSourceSpot &obj, const CopyOp &copyop) {
    IfcLightSourcePositional::copy(obj, copyop);
    setOrientation(copyop(obj.m_orientation.get()));
    setConcentrationExponent(obj.m_concentrationExponent);
    setSpreadAngle(obj.m_spreadAngle);
    setBeamWidthAngle(obj.m_beamWidthAngle);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourceSpot::s_type("IfcLightSourceSpot");
