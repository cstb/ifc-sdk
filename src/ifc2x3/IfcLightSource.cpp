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

#include "ifc2x3/IfcLightSource.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcLightSource::IfcLightSource(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_name = Step::getUnset(m_name);
    m_lightColour = NULL;
    m_ambientIntensity = Step::getUnset(m_ambientIntensity);
    m_intensity = Step::getUnset(m_intensity);
}

IfcLightSource::~IfcLightSource() {
}

bool IfcLightSource::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLightSource(this);
}

const std::string &IfcLightSource::type() {
    return IfcLightSource::s_type.getName();
}

Step::ClassType IfcLightSource::getClassType() {
    return IfcLightSource::s_type;
}

Step::ClassType IfcLightSource::getType() const {
    return IfcLightSource::s_type;
}

bool IfcLightSource::isOfType(Step::ClassType t) {
    return IfcLightSource::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcLabel IfcLightSource::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcLightSource::setName(const IfcLabel &value) {
    m_name = value;
}

IfcColourRgb *IfcLightSource::getLightColour() {
    if (Step::BaseObject::inited()) {
        return m_lightColour.get();
    }
    else {
        return NULL;
    }
}

void IfcLightSource::setLightColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_lightColour = value;
}

IfcNormalisedRatioMeasure IfcLightSource::getAmbientIntensity() {
    if (Step::BaseObject::inited()) {
        return m_ambientIntensity;
    }
    else {
        return Step::getUnset(m_ambientIntensity);
    }
}

void IfcLightSource::setAmbientIntensity(IfcNormalisedRatioMeasure value) {
    m_ambientIntensity = value;
}

IfcNormalisedRatioMeasure IfcLightSource::getIntensity() {
    if (Step::BaseObject::inited()) {
        return m_intensity;
    }
    else {
        return Step::getUnset(m_intensity);
    }
}

void IfcLightSource::setIntensity(IfcNormalisedRatioMeasure value) {
    m_intensity = value;
}

void IfcLightSource::release() {
    IfcGeometricRepresentationItem::release();
    m_lightColour.release();
}

bool IfcLightSource::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lightColour = NULL;
    }
    else {
        m_lightColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ambientIntensity = Step::getUnset(m_ambientIntensity);
    }
    else {
        m_ambientIntensity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_intensity = Step::getUnset(m_intensity);
    }
    else {
        m_intensity = Step::spfToReal(arg);
    }
    return true;
}

void IfcLightSource::copy(const IfcLightSource &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setName(obj.m_name);
    setLightColour(copyop(obj.m_lightColour.get()));
    setAmbientIntensity(obj.m_ambientIntensity);
    setIntensity(obj.m_intensity);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSource::s_type("IfcLightSource");
