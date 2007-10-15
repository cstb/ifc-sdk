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

#include "ifc2x3/IfcLightSourceAmbient.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcLightSource.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLightSourceAmbient::IfcLightSourceAmbient(Step::Id id, Step::SPFData *args) : IfcLightSource(id, args) {
}

IfcLightSourceAmbient::~IfcLightSourceAmbient() {
}

bool IfcLightSourceAmbient::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLightSourceAmbient(this);
}

const std::string &IfcLightSourceAmbient::type() {
    return IfcLightSourceAmbient::s_type.getName();
}

Step::ClassType IfcLightSourceAmbient::getClassType() {
    return IfcLightSourceAmbient::s_type;
}

Step::ClassType IfcLightSourceAmbient::getType() const {
    return IfcLightSourceAmbient::s_type;
}

bool IfcLightSourceAmbient::isOfType(Step::ClassType t) {
    return IfcLightSourceAmbient::s_type == t ? true : IfcLightSource::isOfType(t);
}

void IfcLightSourceAmbient::release() {
    IfcLightSource::release();
}

bool IfcLightSourceAmbient::init() {
    bool status = IfcLightSource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcLightSourceAmbient::copy(const IfcLightSourceAmbient &obj, const CopyOp &copyop) {
    IfcLightSource::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightSourceAmbient::s_type("IfcLightSourceAmbient");
