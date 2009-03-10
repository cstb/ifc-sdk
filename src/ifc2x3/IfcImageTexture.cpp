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

#include "ifc2x3/IfcImageTexture.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurfaceTexture.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcImageTexture::IfcImageTexture(Step::Id id, Step::SPFData *args) : IfcSurfaceTexture(id, args) {
    m_urlReference = Step::getUnset(m_urlReference);
}

IfcImageTexture::~IfcImageTexture() {
}

bool IfcImageTexture::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcImageTexture(this);
}

const std::string &IfcImageTexture::type() const {
    return IfcImageTexture::s_type.getName();
}

const Step::ClassType &IfcImageTexture::getClassType() {
    return IfcImageTexture::s_type;
}

const Step::ClassType &IfcImageTexture::getType() const {
    return IfcImageTexture::s_type;
}

bool IfcImageTexture::isOfType(const Step::ClassType &t) const {
    return IfcImageTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcIdentifier IfcImageTexture::getUrlReference() {
    if (Step::BaseObject::inited()) {
        return m_urlReference;
    }
    else {
        return Step::getUnset(m_urlReference);
    }
}

const IfcIdentifier IfcImageTexture::getUrlReference() const {
    IfcImageTexture * deConstObject = const_cast< IfcImageTexture * > (this);
    return deConstObject->getUrlReference();
}

void IfcImageTexture::setUrlReference(const IfcIdentifier &value) {
    m_urlReference = value;
}

bool IfcImageTexture::init() {
    bool status = IfcSurfaceTexture::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_urlReference = Step::getUnset(m_urlReference);
    }
    else {
        m_urlReference = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcImageTexture::copy(const IfcImageTexture &obj, const CopyOp &copyop) {
    IfcSurfaceTexture::copy(obj, copyop);
    setUrlReference(obj.m_urlReference);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcImageTexture::s_type("IfcImageTexture");
