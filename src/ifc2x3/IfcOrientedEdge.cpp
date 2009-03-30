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

#include "ifc2x3/IfcOrientedEdge.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEdge.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcOrientedEdge::IfcOrientedEdge(Step::Id id, Step::SPFData *args) : IfcEdge(id, args) {
    m_edgeElement = NULL;
    m_orientation = Step::getUnset(m_orientation);
}

IfcOrientedEdge::~IfcOrientedEdge() {
}

bool IfcOrientedEdge::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOrientedEdge(this);
}

const std::string &IfcOrientedEdge::type() const {
    return IfcOrientedEdge::s_type.getName();
}

const Step::ClassType &IfcOrientedEdge::getClassType() {
    return IfcOrientedEdge::s_type;
}

const Step::ClassType &IfcOrientedEdge::getType() const {
    return IfcOrientedEdge::s_type;
}

bool IfcOrientedEdge::isOfType(const Step::ClassType &t) const {
    return IfcOrientedEdge::s_type == t ? true : IfcEdge::isOfType(t);
}

IfcEdge *IfcOrientedEdge::getEdgeElement() {
    if (Step::BaseObject::inited()) {
        return m_edgeElement.get();
    }
    else {
        return NULL;
    }
}

const IfcEdge *IfcOrientedEdge::getEdgeElement() const {
    IfcOrientedEdge * deConstObject = const_cast< IfcOrientedEdge * > (this);
    return deConstObject->getEdgeElement();
}

void IfcOrientedEdge::setEdgeElement(const Step::RefPtr< IfcEdge > &value) {
    m_edgeElement = value;
}

void IfcOrientedEdge::unsetEdgeElement() {
    m_edgeElement = Step::getUnset(getEdgeElement());
}

bool IfcOrientedEdge::testEdgeElement() const {
    return !Step::isUnset(getEdgeElement());
}

Step::Boolean IfcOrientedEdge::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation;
    }
    else {
        return Step::getUnset(m_orientation);
    }
}

const Step::Boolean IfcOrientedEdge::getOrientation() const {
    IfcOrientedEdge * deConstObject = const_cast< IfcOrientedEdge * > (this);
    return deConstObject->getOrientation();
}

void IfcOrientedEdge::setOrientation(Step::Boolean value) {
    m_orientation = value;
}

void IfcOrientedEdge::unsetOrientation() {
    m_orientation = Step::getUnset(getOrientation());
}

bool IfcOrientedEdge::testOrientation() const {
    return !Step::isUnset(getOrientation());
}

bool IfcOrientedEdge::init() {
    bool status = IfcEdge::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeElement = NULL;
    }
    else {
        m_edgeElement = static_cast< IfcEdge * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = Step::getUnset(m_orientation);
    }
    else {
        m_orientation = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcOrientedEdge::copy(const IfcOrientedEdge &obj, const CopyOp &copyop) {
    IfcEdge::copy(obj, copyop);
    setEdgeElement((IfcEdge*)copyop(obj.m_edgeElement.get()));
    setOrientation(obj.m_orientation);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOrientedEdge::s_type("IfcOrientedEdge");
