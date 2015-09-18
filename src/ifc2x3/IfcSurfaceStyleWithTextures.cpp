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



#include <ifc2x3/IfcSurfaceStyleWithTextures.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSurfaceTexture.h>
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

IfcSurfaceStyleWithTextures::IfcSurfaceStyleWithTextures(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcSurfaceStyleWithTextures::~IfcSurfaceStyleWithTextures() {
}

bool IfcSurfaceStyleWithTextures::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleWithTextures(this);
}

const std::string &IfcSurfaceStyleWithTextures::type() const {
    return IfcSurfaceStyleWithTextures::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleWithTextures::getClassType() {
    return IfcSurfaceStyleWithTextures::s_type;
}

const Step::ClassType &IfcSurfaceStyleWithTextures::getType() const {
    return IfcSurfaceStyleWithTextures::s_type;
}

bool IfcSurfaceStyleWithTextures::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleWithTextures::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcSurfaceTexture_1_n &IfcSurfaceStyleWithTextures::getTextures() {
    if (Step::BaseObject::inited()) {
        return m_textures;
    }
    else {
        m_textures.setUnset(true);
        return m_textures;
    }
}

const List_IfcSurfaceTexture_1_n &IfcSurfaceStyleWithTextures::getTextures() const {
    IfcSurfaceStyleWithTextures * deConstObject = const_cast< IfcSurfaceStyleWithTextures * > (this);
    return deConstObject->getTextures();
}

void IfcSurfaceStyleWithTextures::setTextures(const List_IfcSurfaceTexture_1_n &value) {
    m_textures = value;
}

void IfcSurfaceStyleWithTextures::unsetTextures() {
    m_textures.clear();
    m_textures.setUnset(true);
}

bool IfcSurfaceStyleWithTextures::testTextures() const {
    return !m_textures.isUnset();
}

bool IfcSurfaceStyleWithTextures::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textures.setUnset(true);
    }
    else {
        m_textures.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSurfaceTexture > attr2;
                attr2 = static_cast< IfcSurfaceTexture * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_textures.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSurfaceStyleWithTextures::copy(const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcSurfaceTexture >, 1 >::const_iterator it_m_textures;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_textures = obj.m_textures.begin(); it_m_textures != obj.m_textures.end(); ++it_m_textures) {
        Step::RefPtr< IfcSurfaceTexture > copyTarget = (IfcSurfaceTexture *) (copyop((*it_m_textures).get()));
        m_textures.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceStyleWithTextures::s_type("IfcSurfaceStyleWithTextures");
