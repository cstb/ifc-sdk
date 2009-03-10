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

#include "ifc2x3/IfcEdge.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/IfcVertex.h"
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

IfcEdge::IfcEdge(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_edgeStart = NULL;
    m_edgeEnd = NULL;
}

IfcEdge::~IfcEdge() {
}

bool IfcEdge::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEdge(this);
}

const std::string &IfcEdge::type() const {
    return IfcEdge::s_type.getName();
}

const Step::ClassType &IfcEdge::getClassType() {
    return IfcEdge::s_type;
}

const Step::ClassType &IfcEdge::getType() const {
    return IfcEdge::s_type;
}

bool IfcEdge::isOfType(const Step::ClassType &t) const {
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

const IfcVertex *IfcEdge::getEdgeStart() const {
    IfcEdge * deConstObject = const_cast< IfcEdge * > (this);
    return deConstObject->getEdgeStart();
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

const IfcVertex *IfcEdge::getEdgeEnd() const {
    IfcEdge * deConstObject = const_cast< IfcEdge * > (this);
    return deConstObject->getEdgeEnd();
}

void IfcEdge::setEdgeEnd(const Step::RefPtr< IfcVertex > &value) {
    m_edgeEnd = value;
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
        m_edgeStart = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeEnd = NULL;
    }
    else {
        m_edgeEnd = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcEdge::copy(const IfcEdge &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    setEdgeStart((IfcVertex*)copyop(obj.m_edgeStart.get()));
    setEdgeEnd((IfcVertex*)copyop(obj.m_edgeEnd.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdge::s_type("IfcEdge");
