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

#include "ifc2x3/IfcLightSourceDirectional.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcLightSource.h"
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

IfcLightSourceDirectional::IfcLightSourceDirectional(Step::Id id, Step::SPFData *args) : IfcLightSource(id, args) {
    m_orientation = NULL;
}

IfcLightSourceDirectional::~IfcLightSourceDirectional() {
}

bool IfcLightSourceDirectional::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLightSourceDirectional(this);
}

const std::string &IfcLightSourceDirectional::type() {
    return IfcLightSourceDirectional::s_type.getName();
}

Step::ClassType IfcLightSourceDirectional::getClassType() {
    return IfcLightSourceDirectional::s_type;
}

Step::ClassType IfcLightSourceDirectional::getType() const {
    return IfcLightSourceDirectional::s_type;
}

bool IfcLightSourceDirectional::isOfType(Step::ClassType t) {
    return IfcLightSourceDirectional::s_type == t ? true : IfcLightSource::isOfType(t);
}

IfcDirection *IfcLightSourceDirectional::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation.get();
    }
    else {
        return NULL;
    }
}

void IfcLightSourceDirectional::setOrientation(const Step::RefPtr< IfcDirection > &value) {
    m_orientation = value;
}

void IfcLightSourceDirectional::release() {
    IfcLightSource::release();
    m_orientation.release();
}

bool IfcLightSourceDirectional::init() {
    bool status = IfcLightSource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = NULL;
    }
    else {
        m_orientation = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcLightSourceDirectional::copy(const IfcLightSourceDirectional &obj, const CopyOp &copyop) {
    IfcLightSource::copy(obj, copyop);
    setOrientation(copyop(obj.m_orientation.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourceDirectional::s_type("IfcLightSourceDirectional");
