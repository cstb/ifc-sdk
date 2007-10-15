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

#include "ifc2x3/IfcElementarySurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcSurface.h"
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

IfcElementarySurface::IfcElementarySurface(Step::Id id, Step::SPFData *args) : IfcSurface(id, args) {
    m_position = NULL;
}

IfcElementarySurface::~IfcElementarySurface() {
}

bool IfcElementarySurface::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElementarySurface(this);
}

const std::string &IfcElementarySurface::type() {
    return IfcElementarySurface::s_type.getName();
}

Step::ClassType IfcElementarySurface::getClassType() {
    return IfcElementarySurface::s_type;
}

Step::ClassType IfcElementarySurface::getType() const {
    return IfcElementarySurface::s_type;
}

bool IfcElementarySurface::isOfType(Step::ClassType t) {
    return IfcElementarySurface::s_type == t ? true : IfcSurface::isOfType(t);
}

IfcAxis2Placement3D *IfcElementarySurface::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

void IfcElementarySurface::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

void IfcElementarySurface::release() {
    IfcSurface::release();
    m_position.release();
}

bool IfcElementarySurface::init() {
    bool status = IfcSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcElementarySurface::copy(const IfcElementarySurface &obj, const CopyOp &copyop) {
    IfcSurface::copy(obj, copyop);
    setPosition(copyop(obj.m_position.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementarySurface::s_type("IfcElementarySurface");
