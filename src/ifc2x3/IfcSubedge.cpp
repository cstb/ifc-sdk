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

#include "ifc2x3/IfcSubedge.h"

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

IfcSubedge::IfcSubedge(Step::Id id, Step::SPFData *args) : IfcEdge(id, args) {
    m_parentEdge = NULL;
}

IfcSubedge::~IfcSubedge() {
}

bool IfcSubedge::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSubedge(this);
}

const std::string &IfcSubedge::type() {
    return IfcSubedge::s_type.getName();
}

Step::ClassType IfcSubedge::getClassType() {
    return IfcSubedge::s_type;
}

Step::ClassType IfcSubedge::getType() const {
    return IfcSubedge::s_type;
}

bool IfcSubedge::isOfType(Step::ClassType t) {
    return IfcSubedge::s_type == t ? true : IfcEdge::isOfType(t);
}

IfcEdge *IfcSubedge::getParentEdge() {
    if (Step::BaseObject::inited()) {
        return m_parentEdge.get();
    }
    else {
        return NULL;
    }
}

void IfcSubedge::setParentEdge(const Step::RefPtr< IfcEdge > &value) {
    m_parentEdge = value;
}

void IfcSubedge::release() {
    IfcEdge::release();
    m_parentEdge.release();
}

bool IfcSubedge::init() {
    bool status = IfcEdge::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parentEdge = NULL;
    }
    else {
        m_parentEdge = static_cast< IfcEdge * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcSubedge::copy(const IfcSubedge &obj, const CopyOp &copyop) {
    IfcEdge::copy(obj, copyop);
    setParentEdge(copyop(obj.m_parentEdge.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSubedge::s_type("IfcSubedge");
