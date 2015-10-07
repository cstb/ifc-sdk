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



#include <ifc2x3/IfcPixelTexture.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSurfaceTexture.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/Binary.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPixelTexture::IfcPixelTexture(Step::Id id, Step::SPFData *args) : IfcSurfaceTexture(id, args) {
    m_width = Step::getUnset(m_width);
    m_height = Step::getUnset(m_height);
    m_colourComponents = Step::getUnset(m_colourComponents);
}

IfcPixelTexture::~IfcPixelTexture() {
}

bool IfcPixelTexture::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPixelTexture(this);
}

const std::string &IfcPixelTexture::type() const {
    return IfcPixelTexture::s_type.getName();
}

const Step::ClassType &IfcPixelTexture::getClassType() {
    return IfcPixelTexture::s_type;
}

const Step::ClassType &IfcPixelTexture::getType() const {
    return IfcPixelTexture::s_type;
}

bool IfcPixelTexture::isOfType(const Step::ClassType &t) const {
    return IfcPixelTexture::s_type == t ? true : IfcSurfaceTexture::isOfType(t);
}

IfcInteger IfcPixelTexture::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

const IfcInteger IfcPixelTexture::getWidth() const {
    IfcPixelTexture * deConstObject = const_cast< IfcPixelTexture * > (this);
    return deConstObject->getWidth();
}

void IfcPixelTexture::setWidth(IfcInteger value) {
    m_width = value;
}

void IfcPixelTexture::unsetWidth() {
    m_width = Step::getUnset(getWidth());
}

bool IfcPixelTexture::testWidth() const {
    return !Step::isUnset(getWidth());
}

IfcInteger IfcPixelTexture::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

const IfcInteger IfcPixelTexture::getHeight() const {
    IfcPixelTexture * deConstObject = const_cast< IfcPixelTexture * > (this);
    return deConstObject->getHeight();
}

void IfcPixelTexture::setHeight(IfcInteger value) {
    m_height = value;
}

void IfcPixelTexture::unsetHeight() {
    m_height = Step::getUnset(getHeight());
}

bool IfcPixelTexture::testHeight() const {
    return !Step::isUnset(getHeight());
}

IfcInteger IfcPixelTexture::getColourComponents() {
    if (Step::BaseObject::inited()) {
        return m_colourComponents;
    }
    else {
        return Step::getUnset(m_colourComponents);
    }
}

const IfcInteger IfcPixelTexture::getColourComponents() const {
    IfcPixelTexture * deConstObject = const_cast< IfcPixelTexture * > (this);
    return deConstObject->getColourComponents();
}

void IfcPixelTexture::setColourComponents(IfcInteger value) {
    m_colourComponents = value;
}

void IfcPixelTexture::unsetColourComponents() {
    m_colourComponents = Step::getUnset(getColourComponents());
}

bool IfcPixelTexture::testColourComponents() const {
    return !Step::isUnset(getColourComponents());
}

List_32_1_n &IfcPixelTexture::getPixel() {
    if (Step::BaseObject::inited()) {
        return m_pixel;
    }
    else {
        m_pixel.setUnset(true);
        return m_pixel;
    }
}

const List_32_1_n &IfcPixelTexture::getPixel() const {
    IfcPixelTexture * deConstObject = const_cast< IfcPixelTexture * > (this);
    return deConstObject->getPixel();
}

void IfcPixelTexture::setPixel(const List_32_1_n &value) {
    m_pixel = value;
}

void IfcPixelTexture::unsetPixel() {
    m_pixel.clear();
    m_pixel.setUnset(true);
}

bool IfcPixelTexture::testPixel() const {
    return !m_pixel.isUnset();
}

bool IfcPixelTexture::init() {
    bool status = IfcSurfaceTexture::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_width = Step::getUnset(m_width);
    }
    else {
        m_width = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_height = Step::getUnset(m_height);
    }
    else {
        m_height = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_colourComponents = Step::getUnset(m_colourComponents);
    }
    else {
        m_colourComponents = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pixel.setUnset(true);
    }
    else {
        m_pixel.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Binary< 32 > attr2;
                attr2 = Step::spfToBinary<32>(str1);
                m_pixel.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPixelTexture::copy(const IfcPixelTexture &obj, const CopyOp &copyop) {
    Step::List< Step::Binary< 32 >, 1 >::const_iterator it_m_pixel;
    IfcSurfaceTexture::copy(obj, copyop);
    setWidth(obj.m_width);
    setHeight(obj.m_height);
    setColourComponents(obj.m_colourComponents);
    for (it_m_pixel = obj.m_pixel.begin(); it_m_pixel != obj.m_pixel.end(); ++it_m_pixel) {
        Step::Binary< 32 > copyTarget = (*it_m_pixel);
        m_pixel.push_back(copyTarget);
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPixelTexture::s_type("IfcPixelTexture");
