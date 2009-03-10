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

#include "ifc2x3/IfcFaceSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFace.h"
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

IfcFaceSurface::IfcFaceSurface(Step::Id id, Step::SPFData *args) : IfcFace(id, args) {
    m_faceSurface = NULL;
    m_sameSense = Step::getUnset(m_sameSense);
}

IfcFaceSurface::~IfcFaceSurface() {
}

bool IfcFaceSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFaceSurface(this);
}

const std::string &IfcFaceSurface::type() const {
    return IfcFaceSurface::s_type.getName();
}

const Step::ClassType &IfcFaceSurface::getClassType() {
    return IfcFaceSurface::s_type;
}

const Step::ClassType &IfcFaceSurface::getType() const {
    return IfcFaceSurface::s_type;
}

bool IfcFaceSurface::isOfType(const Step::ClassType &t) const {
    return IfcFaceSurface::s_type == t ? true : IfcFace::isOfType(t);
}

IfcSurface *IfcFaceSurface::getFaceSurface() {
    if (Step::BaseObject::inited()) {
        return m_faceSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcFaceSurface::getFaceSurface() const {
    IfcFaceSurface * deConstObject = const_cast< IfcFaceSurface * > (this);
    return deConstObject->getFaceSurface();
}

void IfcFaceSurface::setFaceSurface(const Step::RefPtr< IfcSurface > &value) {
    m_faceSurface = value;
}

Step::Boolean IfcFaceSurface::getSameSense() {
    if (Step::BaseObject::inited()) {
        return m_sameSense;
    }
    else {
        return Step::getUnset(m_sameSense);
    }
}

const Step::Boolean IfcFaceSurface::getSameSense() const {
    IfcFaceSurface * deConstObject = const_cast< IfcFaceSurface * > (this);
    return deConstObject->getSameSense();
}

void IfcFaceSurface::setSameSense(Step::Boolean value) {
    m_sameSense = value;
}

bool IfcFaceSurface::init() {
    bool status = IfcFace::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_faceSurface = NULL;
    }
    else {
        m_faceSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sameSense = Step::getUnset(m_sameSense);
    }
    else {
        m_sameSense = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcFaceSurface::copy(const IfcFaceSurface &obj, const CopyOp &copyop) {
    IfcFace::copy(obj, copyop);
    setFaceSurface((IfcSurface*)copyop(obj.m_faceSurface.get()));
    setSameSense(obj.m_sameSense);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceSurface::s_type("IfcFaceSurface");
