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

#include "ifc2x3/IfcVertexPoint.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPoint.h"
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

IfcVertexPoint::IfcVertexPoint(Step::Id id, Step::SPFData *args) : IfcVertex(id, args) {
    m_vertexGeometry = NULL;
}

IfcVertexPoint::~IfcVertexPoint() {
}

bool IfcVertexPoint::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVertexPoint(this);
}

const std::string &IfcVertexPoint::type() {
    return IfcVertexPoint::s_type.getName();
}

Step::ClassType IfcVertexPoint::getClassType() {
    return IfcVertexPoint::s_type;
}

Step::ClassType IfcVertexPoint::getType() const {
    return IfcVertexPoint::s_type;
}

bool IfcVertexPoint::isOfType(Step::ClassType t) {
    return IfcVertexPoint::s_type == t ? true : IfcVertex::isOfType(t);
}

IfcPoint *IfcVertexPoint::getVertexGeometry() {
    if (Step::BaseObject::inited()) {
        return m_vertexGeometry.get();
    }
    else {
        return NULL;
    }
}

void IfcVertexPoint::setVertexGeometry(const Step::RefPtr< IfcPoint > &value) {
    m_vertexGeometry = value;
}

void IfcVertexPoint::release() {
    IfcVertex::release();
    m_vertexGeometry.release();
}

bool IfcVertexPoint::init() {
    bool status = IfcVertex::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_vertexGeometry = NULL;
    }
    else {
        m_vertexGeometry = static_cast< IfcPoint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcVertexPoint::copy(const IfcVertexPoint &obj, const CopyOp &copyop) {
    IfcVertex::copy(obj, copyop);
    setVertexGeometry(copyop(obj.m_vertexGeometry.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertexPoint::s_type("IfcVertexPoint");
