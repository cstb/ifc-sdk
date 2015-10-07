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



#include <ifc2x3/IfcAnnotationSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/IfcTextureCoordinate.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcAnnotationSurface::IfcAnnotationSurface(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_item = NULL;
    m_textureCoordinates = NULL;
}

IfcAnnotationSurface::~IfcAnnotationSurface() {
}

bool IfcAnnotationSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotationSurface(this);
}

const std::string &IfcAnnotationSurface::type() const {
    return IfcAnnotationSurface::s_type.getName();
}

const Step::ClassType &IfcAnnotationSurface::getClassType() {
    return IfcAnnotationSurface::s_type;
}

const Step::ClassType &IfcAnnotationSurface::getType() const {
    return IfcAnnotationSurface::s_type;
}

bool IfcAnnotationSurface::isOfType(const Step::ClassType &t) const {
    return IfcAnnotationSurface::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcGeometricRepresentationItem *IfcAnnotationSurface::getItem() {
    if (Step::BaseObject::inited()) {
        return m_item.get();
    }
    else {
        return NULL;
    }
}

const IfcGeometricRepresentationItem *IfcAnnotationSurface::getItem() const {
    IfcAnnotationSurface * deConstObject = const_cast< IfcAnnotationSurface * > (this);
    return deConstObject->getItem();
}

void IfcAnnotationSurface::setItem(const Step::RefPtr< IfcGeometricRepresentationItem > &value) {
    m_item = value;
}

void IfcAnnotationSurface::unsetItem() {
    m_item = Step::getUnset(getItem());
}

bool IfcAnnotationSurface::testItem() const {
    return !Step::isUnset(getItem());
}

IfcTextureCoordinate *IfcAnnotationSurface::getTextureCoordinates() {
    if (Step::BaseObject::inited()) {
        return m_textureCoordinates.get();
    }
    else {
        return NULL;
    }
}

const IfcTextureCoordinate *IfcAnnotationSurface::getTextureCoordinates() const {
    IfcAnnotationSurface * deConstObject = const_cast< IfcAnnotationSurface * > (this);
    return deConstObject->getTextureCoordinates();
}

void IfcAnnotationSurface::setTextureCoordinates(const Step::RefPtr< IfcTextureCoordinate > &value) {
    if (m_textureCoordinates.valid()) {
        m_textureCoordinates->m_annotatedSurface.erase(this);
    }
    if (value.valid()) {
        value->m_annotatedSurface.insert(this);
    }
    m_textureCoordinates = value;
}

void IfcAnnotationSurface::unsetTextureCoordinates() {
    m_textureCoordinates = Step::getUnset(getTextureCoordinates());
}

bool IfcAnnotationSurface::testTextureCoordinates() const {
    return !Step::isUnset(getTextureCoordinates());
}

bool IfcAnnotationSurface::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_item = NULL;
    }
    else {
        m_item = static_cast< IfcGeometricRepresentationItem * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textureCoordinates = NULL;
    }
    else {
        m_textureCoordinates = static_cast< IfcTextureCoordinate * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcAnnotationSurface::copy(const IfcAnnotationSurface &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setItem((IfcGeometricRepresentationItem*)copyop(obj.m_item.get()));
    setTextureCoordinates((IfcTextureCoordinate*)copyop(obj.m_textureCoordinates.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAnnotationSurface::s_type("IfcAnnotationSurface");
