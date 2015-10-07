// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcSurfaceTexture.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSurfaceTexture::IfcSurfaceTexture(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_repeatS = Step::getUnset(m_repeatS);
    m_repeatT = Step::getUnset(m_repeatT);
    m_textureType = IfcSurfaceTextureEnum_UNSET;
    m_textureTransform = NULL;
}

IfcSurfaceTexture::~IfcSurfaceTexture() {
}

bool IfcSurfaceTexture::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceTexture(this);
}

const std::string &IfcSurfaceTexture::type() const {
    return IfcSurfaceTexture::s_type.getName();
}

const Step::ClassType &IfcSurfaceTexture::getClassType() {
    return IfcSurfaceTexture::s_type;
}

const Step::ClassType &IfcSurfaceTexture::getType() const {
    return IfcSurfaceTexture::s_type;
}

bool IfcSurfaceTexture::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceTexture::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Boolean IfcSurfaceTexture::getRepeatS() {
    if (Step::BaseObject::inited()) {
        return m_repeatS;
    }
    else {
        return Step::getUnset(m_repeatS);
    }
}

const Step::Boolean IfcSurfaceTexture::getRepeatS() const {
    IfcSurfaceTexture * deConstObject = const_cast< IfcSurfaceTexture * > (this);
    return deConstObject->getRepeatS();
}

void IfcSurfaceTexture::setRepeatS(Step::Boolean value) {
    m_repeatS = value;
}

void IfcSurfaceTexture::unsetRepeatS() {
    m_repeatS = Step::getUnset(getRepeatS());
}

bool IfcSurfaceTexture::testRepeatS() const {
    return !Step::isUnset(getRepeatS());
}

Step::Boolean IfcSurfaceTexture::getRepeatT() {
    if (Step::BaseObject::inited()) {
        return m_repeatT;
    }
    else {
        return Step::getUnset(m_repeatT);
    }
}

const Step::Boolean IfcSurfaceTexture::getRepeatT() const {
    IfcSurfaceTexture * deConstObject = const_cast< IfcSurfaceTexture * > (this);
    return deConstObject->getRepeatT();
}

void IfcSurfaceTexture::setRepeatT(Step::Boolean value) {
    m_repeatT = value;
}

void IfcSurfaceTexture::unsetRepeatT() {
    m_repeatT = Step::getUnset(getRepeatT());
}

bool IfcSurfaceTexture::testRepeatT() const {
    return !Step::isUnset(getRepeatT());
}

IfcSurfaceTextureEnum IfcSurfaceTexture::getTextureType() {
    if (Step::BaseObject::inited()) {
        return m_textureType;
    }
    else {
        return IfcSurfaceTextureEnum_UNSET;
    }
}

const IfcSurfaceTextureEnum IfcSurfaceTexture::getTextureType() const {
    IfcSurfaceTexture * deConstObject = const_cast< IfcSurfaceTexture * > (this);
    return deConstObject->getTextureType();
}

void IfcSurfaceTexture::setTextureType(IfcSurfaceTextureEnum value) {
    m_textureType = value;
}

void IfcSurfaceTexture::unsetTextureType() {
    m_textureType = IfcSurfaceTextureEnum_UNSET;
}

bool IfcSurfaceTexture::testTextureType() const {
    return getTextureType() != IfcSurfaceTextureEnum_UNSET;
}

IfcCartesianTransformationOperator2D *IfcSurfaceTexture::getTextureTransform() {
    if (Step::BaseObject::inited()) {
        return m_textureTransform.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianTransformationOperator2D *IfcSurfaceTexture::getTextureTransform() const {
    IfcSurfaceTexture * deConstObject = const_cast< IfcSurfaceTexture * > (this);
    return deConstObject->getTextureTransform();
}

void IfcSurfaceTexture::setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
    m_textureTransform = value;
}

void IfcSurfaceTexture::unsetTextureTransform() {
    m_textureTransform = Step::getUnset(getTextureTransform());
}

bool IfcSurfaceTexture::testTextureTransform() const {
    return !Step::isUnset(getTextureTransform());
}

bool IfcSurfaceTexture::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_repeatS = Step::getUnset(m_repeatS);
    }
    else {
        m_repeatS = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_repeatT = Step::getUnset(m_repeatT);
    }
    else {
        m_repeatT = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureType = IfcSurfaceTextureEnum_UNSET;
    }
    else {
        if (arg == ".BUMP.") {
            m_textureType = IfcSurfaceTextureEnum_BUMP;
        }
        else if (arg == ".OPACITY.") {
            m_textureType = IfcSurfaceTextureEnum_OPACITY;
        }
        else if (arg == ".REFLECTION.") {
            m_textureType = IfcSurfaceTextureEnum_REFLECTION;
        }
        else if (arg == ".SELFILLUMINATION.") {
            m_textureType = IfcSurfaceTextureEnum_SELFILLUMINATION;
        }
        else if (arg == ".SHININESS.") {
            m_textureType = IfcSurfaceTextureEnum_SHININESS;
        }
        else if (arg == ".SPECULAR.") {
            m_textureType = IfcSurfaceTextureEnum_SPECULAR;
        }
        else if (arg == ".TEXTURE.") {
            m_textureType = IfcSurfaceTextureEnum_TEXTURE;
        }
        else if (arg == ".TRANSPARENCYMAP.") {
            m_textureType = IfcSurfaceTextureEnum_TRANSPARENCYMAP;
        }
        else if (arg == ".NOTDEFINED.") {
            m_textureType = IfcSurfaceTextureEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureTransform = NULL;
    }
    else {
        m_textureTransform = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSurfaceTexture::copy(const IfcSurfaceTexture &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRepeatS(obj.m_repeatS);
    setRepeatT(obj.m_repeatT);
    setTextureType(obj.m_textureType);
    setTextureTransform((IfcCartesianTransformationOperator2D*)copyop(obj.m_textureTransform.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceTexture::s_type("IfcSurfaceTexture");
