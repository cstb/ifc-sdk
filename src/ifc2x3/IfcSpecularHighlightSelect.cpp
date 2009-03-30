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

#include "ifc2x3/IfcSpecularHighlightSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

using namespace ifc2x3;

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcSpecularHighlightSelect::~IfcSpecularHighlightSelect() {
    deleteUnion();
}

bool IfcSpecularHighlightSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpecularHighlightSelect(this);
}

bool IfcSpecularHighlightSelect::init() {
    return false;
}

const std::string &IfcSpecularHighlightSelect::type() const {
    return IfcSpecularHighlightSelect::s_type.getName();
}

const Step::ClassType &IfcSpecularHighlightSelect::getClassType() {
    return IfcSpecularHighlightSelect::s_type;
}

const Step::ClassType &IfcSpecularHighlightSelect::getType() const {
    return IfcSpecularHighlightSelect::s_type;
}

bool IfcSpecularHighlightSelect::isOfType(const Step::ClassType &t) const {
    return IfcSpecularHighlightSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSpecularHighlightSelect::copy(const IfcSpecularHighlightSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCSPECULAREXPONENT:
        setIfcSpecularExponent(obj.m_IfcSpecularHighlightSelect_union.m_IfcSpecularExponent);
        break;
    case IFCSPECULARROUGHNESS:
        setIfcSpecularRoughness(obj.m_IfcSpecularHighlightSelect_union.m_IfcSpecularRoughness);
        break;
        }
}

std::string IfcSpecularHighlightSelect::currentTypeName() const {
    switch(m_type) {
    case IFCSPECULAREXPONENT:
        return "IfcSpecularExponent";
        break;
    case IFCSPECULARROUGHNESS:
        return "IfcSpecularRoughness";
        break;
    default:
        return "UNSET";
    }
}

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect_select IfcSpecularHighlightSelect::currentType() const {
    return m_type;
}

void IfcSpecularHighlightSelect::deleteUnion() {
    m_type = UNSET;
}

IfcSpecularExponent IfcSpecularHighlightSelect::getIfcSpecularExponent() const {
    if (m_type == IFCSPECULAREXPONENT) {
        return m_IfcSpecularHighlightSelect_union.m_IfcSpecularExponent;
    }
    else {
        return Step::getUnset(m_IfcSpecularHighlightSelect_union.m_IfcSpecularExponent);
    }
}

void IfcSpecularHighlightSelect::setIfcSpecularExponent(IfcSpecularExponent value) {
    m_IfcSpecularHighlightSelect_union.m_IfcSpecularExponent = value;
    m_type = IFCSPECULAREXPONENT;
}

IfcSpecularRoughness IfcSpecularHighlightSelect::getIfcSpecularRoughness() const {
    if (m_type == IFCSPECULARROUGHNESS) {
        return m_IfcSpecularHighlightSelect_union.m_IfcSpecularRoughness;
    }
    else {
        return Step::getUnset(m_IfcSpecularHighlightSelect_union.m_IfcSpecularRoughness);
    }
}

void IfcSpecularHighlightSelect::setIfcSpecularRoughness(IfcSpecularRoughness value) {
    m_IfcSpecularHighlightSelect_union.m_IfcSpecularRoughness = value;
    m_type = IFCSPECULARROUGHNESS;
}

void IfcSpecularHighlightSelect::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcSpecularHighlightSelect::s_type("IfcSpecularHighlightSelect");
