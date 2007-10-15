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

#include "ifc2x3/IfcEdge.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/IfcVertex.h"
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

IfcEdge::IfcEdge(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_edgeStart = NULL;
    m_edgeEnd = NULL;
}

IfcEdge::~IfcEdge() {
}

bool IfcEdge::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEdge(this);
}

const std::string &IfcEdge::type() {
    return IfcEdge::s_type.getName();
}

Step::ClassType IfcEdge::getClassType() {
    return IfcEdge::s_type;
}

Step::ClassType IfcEdge::getType() const {
    return IfcEdge::s_type;
}

bool IfcEdge::isOfType(Step::ClassType t) {
    return IfcEdge::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

IfcVertex *IfcEdge::getEdgeStart() {
    if (Step::BaseObject::inited()) {
        return m_edgeStart.get();
    }
    else {
        return NULL;
    }
}

void IfcEdge::setEdgeStart(const Step::RefPtr< IfcVertex > &value) {
    m_edgeStart = value;
}

IfcVertex *IfcEdge::getEdgeEnd() {
    if (Step::BaseObject::inited()) {
        return m_edgeEnd.get();
    }
    else {
        return NULL;
    }
}

void IfcEdge::setEdgeEnd(const Step::RefPtr< IfcVertex > &value) {
    m_edgeEnd = value;
}

void IfcEdge::release() {
    IfcTopologicalRepresentationItem::release();
    m_edgeStart.release();
    m_edgeEnd.release();
}

bool IfcEdge::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeStart = NULL;
    }
    else {
        m_edgeStart = static_cast< IfcVertex * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeEnd = NULL;
    }
    else {
        m_edgeEnd = static_cast< IfcVertex * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcEdge::copy(const IfcEdge &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    setEdgeStart(copyop(obj.m_edgeStart.get()));
    setEdgeEnd(copyop(obj.m_edgeEnd.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdge::s_type("IfcEdge");
