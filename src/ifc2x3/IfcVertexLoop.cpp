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

#include "ifc2x3/IfcVertexLoop.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLoop.h"
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

IfcVertexLoop::IfcVertexLoop(Step::Id id, Step::SPFData *args) : IfcLoop(id, args) {
    m_loopVertex = NULL;
}

IfcVertexLoop::~IfcVertexLoop() {
}

bool IfcVertexLoop::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVertexLoop(this);
}

const std::string &IfcVertexLoop::type() {
    return IfcVertexLoop::s_type.getName();
}

Step::ClassType IfcVertexLoop::getClassType() {
    return IfcVertexLoop::s_type;
}

Step::ClassType IfcVertexLoop::getType() const {
    return IfcVertexLoop::s_type;
}

bool IfcVertexLoop::isOfType(Step::ClassType t) {
    return IfcVertexLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

IfcVertex *IfcVertexLoop::getLoopVertex() {
    if (Step::BaseObject::inited()) {
        return m_loopVertex.get();
    }
    else {
        return NULL;
    }
}

void IfcVertexLoop::setLoopVertex(const Step::RefPtr< IfcVertex > &value) {
    m_loopVertex = value;
}

void IfcVertexLoop::release() {
    IfcLoop::release();
    m_loopVertex.release();
}

bool IfcVertexLoop::init() {
    bool status = IfcLoop::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_loopVertex = NULL;
    }
    else {
        m_loopVertex = static_cast< IfcVertex * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcVertexLoop::copy(const IfcVertexLoop &obj, const CopyOp &copyop) {
    IfcLoop::copy(obj, copyop);
    setLoopVertex(copyop(obj.m_loopVertex.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertexLoop::s_type("IfcVertexLoop");
