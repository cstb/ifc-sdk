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

#include "ifc2x3/IfcSurfaceStyleShading.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSurfaceStyleShading::IfcSurfaceStyleShading(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_surfaceColour = NULL;
}

IfcSurfaceStyleShading::~IfcSurfaceStyleShading() {
}

bool IfcSurfaceStyleShading::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleShading(this);
}

const std::string &IfcSurfaceStyleShading::type() const {
    return IfcSurfaceStyleShading::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleShading::getClassType() {
    return IfcSurfaceStyleShading::s_type;
}

const Step::ClassType &IfcSurfaceStyleShading::getType() const {
    return IfcSurfaceStyleShading::s_type;
}

bool IfcSurfaceStyleShading::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleShading::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour() {
    if (Step::BaseObject::inited()) {
        return m_surfaceColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour() const {
    IfcSurfaceStyleShading * deConstObject = const_cast< IfcSurfaceStyleShading * > (this);
    return deConstObject->getSurfaceColour();
}

void IfcSurfaceStyleShading::setSurfaceColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_surfaceColour = value;
}

bool IfcSurfaceStyleShading::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_surfaceColour = NULL;
    }
    else {
        m_surfaceColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSurfaceStyleShading::copy(const IfcSurfaceStyleShading &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setSurfaceColour((IfcColourRgb*)copyop(obj.m_surfaceColour.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleShading::s_type("IfcSurfaceStyleShading");
