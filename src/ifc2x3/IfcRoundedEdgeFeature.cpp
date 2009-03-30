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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcRoundedEdgeFeature.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEdgeFeature.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRoundedEdgeFeature::IfcRoundedEdgeFeature(Step::Id id, Step::SPFData *args) : IfcEdgeFeature(id, args) {
    m_radius = Step::getUnset(m_radius);
}

IfcRoundedEdgeFeature::~IfcRoundedEdgeFeature() {
}

bool IfcRoundedEdgeFeature::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRoundedEdgeFeature(this);
}

const std::string &IfcRoundedEdgeFeature::type() const {
    return IfcRoundedEdgeFeature::s_type.getName();
}

const Step::ClassType &IfcRoundedEdgeFeature::getClassType() {
    return IfcRoundedEdgeFeature::s_type;
}

const Step::ClassType &IfcRoundedEdgeFeature::getType() const {
    return IfcRoundedEdgeFeature::s_type;
}

bool IfcRoundedEdgeFeature::isOfType(const Step::ClassType &t) const {
    return IfcRoundedEdgeFeature::s_type == t ? true : IfcEdgeFeature::isOfType(t);
}

IfcPositiveLengthMeasure IfcRoundedEdgeFeature::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcRoundedEdgeFeature::getRadius() const {
    IfcRoundedEdgeFeature * deConstObject = const_cast< IfcRoundedEdgeFeature * > (this);
    return deConstObject->getRadius();
}

void IfcRoundedEdgeFeature::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcRoundedEdgeFeature::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcRoundedEdgeFeature::testRadius() const {
    return !Step::isUnset(getRadius());
}

bool IfcRoundedEdgeFeature::init() {
    bool status = IfcEdgeFeature::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_radius = Step::getUnset(m_radius);
    }
    else {
        m_radius = Step::spfToReal(arg);
    }
    return true;
}

void IfcRoundedEdgeFeature::copy(const IfcRoundedEdgeFeature &obj, const CopyOp &copyop) {
    IfcEdgeFeature::copy(obj, copyop);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoundedEdgeFeature::s_type("IfcRoundedEdgeFeature");
