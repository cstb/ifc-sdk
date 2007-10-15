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

#include "ifc2x3/IfcImageTexture.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurfaceTexture.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
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

bool IfcImageTexture::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcImageTexture(this);
}

const std::string &IfcImageTexture::type() {
    return IfcImageTexture::s_type.getName();
}

Step::ClassType IfcImageTexture::getClassType() {
    return IfcImageTexture::s_type;
}

Step::ClassType IfcImageTexture::getType() const {
    return IfcImageTexture::s_type;
}

bool IfcImageTexture::isOfType(Step::ClassType t) {
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

void IfcImageTexture::setUrlReference(const IfcIdentifier &value) {
    m_urlReference = value;
}

void IfcImageTexture::release() {
    IfcSurfaceTexture::release();
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
        m_urlReference = Step::spfToString(arg);
    }
    return true;
}

void IfcImageTexture::copy(const IfcImageTexture &obj, const CopyOp &copyop) {
    IfcSurfaceTexture::copy(obj, copyop);
    setUrlReference(obj.m_urlReference);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcImageTexture::s_type("IfcImageTexture");
