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

#include "ifc2x3/IfcOrientedEdge.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEdge.h"
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

IfcOrientedEdge::IfcOrientedEdge(Step::Id id, Step::SPFData *args) : IfcEdge(id, args) {
    m_edgeElement = NULL;
    m_orientation = Step::getUnset(m_orientation);
}

IfcOrientedEdge::~IfcOrientedEdge() {
}

bool IfcOrientedEdge::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOrientedEdge(this);
}

const std::string &IfcOrientedEdge::type() {
    return IfcOrientedEdge::s_type.getName();
}

Step::ClassType IfcOrientedEdge::getClassType() {
    return IfcOrientedEdge::s_type;
}

Step::ClassType IfcOrientedEdge::getType() const {
    return IfcOrientedEdge::s_type;
}

bool IfcOrientedEdge::isOfType(Step::ClassType t) {
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

void IfcOrientedEdge::setEdgeElement(const Step::RefPtr< IfcEdge > &value) {
    m_edgeElement = value;
}

Step::Bool IfcOrientedEdge::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation;
    }
    else {
        return Step::getUnset(m_orientation);
    }
}

void IfcOrientedEdge::setOrientation(Step::Bool value) {
    m_orientation = value;
}

void IfcOrientedEdge::release() {
    IfcEdge::release();
    m_edgeElement.release();
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
        m_edgeElement = static_cast< IfcEdge * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = Step::getUnset(m_orientation);
    }
    else {
        m_orientation = Step::spfToBool(arg);
    }
    return true;
}

void IfcOrientedEdge::copy(const IfcOrientedEdge &obj, const CopyOp &copyop) {
    IfcEdge::copy(obj, copyop);
    setEdgeElement(copyop(obj.m_edgeElement.get()));
    setOrientation(obj.m_orientation);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOrientedEdge::s_type("IfcOrientedEdge");
