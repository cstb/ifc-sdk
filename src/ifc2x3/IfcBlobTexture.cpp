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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcBlobTexture.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurfaceTexture.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBlobTexture::IfcBlobTexture(Step::Id id, Step::SPFData *args) : IfcSurfaceTexture(id, args) {
    m_rasterFormat = Step::getUnset(m_rasterFormat);
    m_rasterCode = Step::getUnset(m_rasterCode);
}

IfcBlobTexture::~IfcBlobTexture() {
}

bool IfcBlobTexture::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBlobTexture(this);
}

const std::string &IfcBlobTexture::type() const {
    return IfcBlobTexture::s_type.getName();
}

const Step::ClassType &IfcBlobTexture::getClassType() {
    return IfcBlobTexture::s_type;
}

const Step::ClassType &IfcBlobTexture::getType() const {
    return IfcBlobTexture::s_type;
}

bool IfcBlobTexture::isOfType(const Step::ClassType &t) const {
    return IfcBlobTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcIdentifier IfcBlobTexture::getRasterFormat() {
    if (Step::BaseObject::inited()) {
        return m_rasterFormat;
    }
    else {
        return Step::getUnset(m_rasterFormat);
    }
}

const IfcIdentifier IfcBlobTexture::getRasterFormat() const {
    IfcBlobTexture * deConstObject = const_cast< IfcBlobTexture * > (this);
    return deConstObject->getRasterFormat();
}

void IfcBlobTexture::setRasterFormat(const IfcIdentifier &value) {
    m_rasterFormat = value;
}

void IfcBlobTexture::unsetRasterFormat() {
    m_rasterFormat = Step::getUnset(getRasterFormat());
}

bool IfcBlobTexture::testRasterFormat() const {
    return !Step::isUnset(getRasterFormat());
}

Step::Boolean IfcBlobTexture::getRasterCode() {
    if (Step::BaseObject::inited()) {
        return m_rasterCode;
    }
    else {
        return Step::getUnset(m_rasterCode);
    }
}

const Step::Boolean IfcBlobTexture::getRasterCode() const {
    IfcBlobTexture * deConstObject = const_cast< IfcBlobTexture * > (this);
    return deConstObject->getRasterCode();
}

void IfcBlobTexture::setRasterCode(Step::Boolean value) {
    m_rasterCode = value;
}

void IfcBlobTexture::unsetRasterCode() {
    m_rasterCode = Step::getUnset(getRasterCode());
}

bool IfcBlobTexture::testRasterCode() const {
    return !Step::isUnset(getRasterCode());
}

bool IfcBlobTexture::init() {
    bool status = IfcSurfaceTexture::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rasterFormat = Step::getUnset(m_rasterFormat);
    }
    else {
        m_rasterFormat = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rasterCode = Step::getUnset(m_rasterCode);
    }
    else {
        m_rasterCode = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcBlobTexture::copy(const IfcBlobTexture &obj, const CopyOp &copyop) {
    IfcSurfaceTexture::copy(obj, copyop);
    setRasterFormat(obj.m_rasterFormat);
    setRasterCode(obj.m_rasterCode);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBlobTexture::s_type("IfcBlobTexture");
