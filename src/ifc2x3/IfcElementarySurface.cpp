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

#include "ifc2x3/IfcElementarySurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcSurface.h"
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

IfcElementarySurface::IfcElementarySurface(Step::Id id, Step::SPFData *args) : IfcSurface(id, args) {
    m_position = NULL;
}

IfcElementarySurface::~IfcElementarySurface() {
}

bool IfcElementarySurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElementarySurface(this);
}

const std::string &IfcElementarySurface::type() const {
    return IfcElementarySurface::s_type.getName();
}

const Step::ClassType &IfcElementarySurface::getClassType() {
    return IfcElementarySurface::s_type;
}

const Step::ClassType &IfcElementarySurface::getType() const {
    return IfcElementarySurface::s_type;
}

bool IfcElementarySurface::isOfType(const Step::ClassType &t) const {
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

const IfcAxis2Placement3D *IfcElementarySurface::getPosition() const {
    IfcElementarySurface * deConstObject = const_cast< IfcElementarySurface * > (this);
    return deConstObject->getPosition();
}

void IfcElementarySurface::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
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
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcElementarySurface::copy(const IfcElementarySurface &obj, const CopyOp &copyop) {
    IfcSurface::copy(obj, copyop);
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_position.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementarySurface::s_type("IfcElementarySurface");
