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



#include <ifc2x3/IfcSurfaceStyleRendering.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColourOrFactor.h>
#include <ifc2x3/IfcSpecularHighlightSelect.h>
#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSurfaceStyleRendering::IfcSurfaceStyleRendering(Step::Id id, Step::SPFData *args) : IfcSurfaceStyleShading(id, args) {
    m_transparency = Step::getUnset(m_transparency);
    m_diffuseColour = NULL;
    m_transmissionColour = NULL;
    m_diffuseTransmissionColour = NULL;
    m_reflectionColour = NULL;
    m_specularColour = NULL;
    m_specularHighlight = NULL;
    m_reflectanceMethod = IfcReflectanceMethodEnum_UNSET;
}

IfcSurfaceStyleRendering::~IfcSurfaceStyleRendering() {
}

bool IfcSurfaceStyleRendering::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleRendering(this);
}

const std::string &IfcSurfaceStyleRendering::type() const {
    return IfcSurfaceStyleRendering::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleRendering::getClassType() {
    return IfcSurfaceStyleRendering::s_type;
}

const Step::ClassType &IfcSurfaceStyleRendering::getType() const {
    return IfcSurfaceStyleRendering::s_type;
}

bool IfcSurfaceStyleRendering::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleRendering::s_type == t ? true : IfcSurfaceStyleShading::isOfType(t);
}

IfcNormalisedRatioMeasure IfcSurfaceStyleRendering::getTransparency() {
    if (Step::BaseObject::inited()) {
        return m_transparency;
    }
    else {
        return Step::getUnset(m_transparency);
    }
}

const IfcNormalisedRatioMeasure IfcSurfaceStyleRendering::getTransparency() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getTransparency();
}

void IfcSurfaceStyleRendering::setTransparency(IfcNormalisedRatioMeasure value) {
    m_transparency = value;
}

void IfcSurfaceStyleRendering::unsetTransparency() {
    m_transparency = Step::getUnset(getTransparency());
}

bool IfcSurfaceStyleRendering::testTransparency() const {
    return !Step::isUnset(getTransparency());
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseColour() {
    if (Step::BaseObject::inited()) {
        return m_diffuseColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseColour() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getDiffuseColour();
}

void IfcSurfaceStyleRendering::setDiffuseColour(const Step::RefPtr< IfcColourOrFactor > &value) {
    m_diffuseColour = value;
}

void IfcSurfaceStyleRendering::unsetDiffuseColour() {
    m_diffuseColour = Step::getUnset(getDiffuseColour());
}

bool IfcSurfaceStyleRendering::testDiffuseColour() const {
    return !Step::isUnset(getDiffuseColour());
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getTransmissionColour() {
    if (Step::BaseObject::inited()) {
        return m_transmissionColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getTransmissionColour() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getTransmissionColour();
}

void IfcSurfaceStyleRendering::setTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value) {
    m_transmissionColour = value;
}

void IfcSurfaceStyleRendering::unsetTransmissionColour() {
    m_transmissionColour = Step::getUnset(getTransmissionColour());
}

bool IfcSurfaceStyleRendering::testTransmissionColour() const {
    return !Step::isUnset(getTransmissionColour());
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseTransmissionColour() {
    if (Step::BaseObject::inited()) {
        return m_diffuseTransmissionColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getDiffuseTransmissionColour() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getDiffuseTransmissionColour();
}

void IfcSurfaceStyleRendering::setDiffuseTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value) {
    m_diffuseTransmissionColour = value;
}

void IfcSurfaceStyleRendering::unsetDiffuseTransmissionColour() {
    m_diffuseTransmissionColour = Step::getUnset(getDiffuseTransmissionColour());
}

bool IfcSurfaceStyleRendering::testDiffuseTransmissionColour() const {
    return !Step::isUnset(getDiffuseTransmissionColour());
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getReflectionColour() {
    if (Step::BaseObject::inited()) {
        return m_reflectionColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getReflectionColour() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getReflectionColour();
}

void IfcSurfaceStyleRendering::setReflectionColour(const Step::RefPtr< IfcColourOrFactor > &value) {
    m_reflectionColour = value;
}

void IfcSurfaceStyleRendering::unsetReflectionColour() {
    m_reflectionColour = Step::getUnset(getReflectionColour());
}

bool IfcSurfaceStyleRendering::testReflectionColour() const {
    return !Step::isUnset(getReflectionColour());
}

IfcColourOrFactor *IfcSurfaceStyleRendering::getSpecularColour() {
    if (Step::BaseObject::inited()) {
        return m_specularColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourOrFactor *IfcSurfaceStyleRendering::getSpecularColour() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getSpecularColour();
}

void IfcSurfaceStyleRendering::setSpecularColour(const Step::RefPtr< IfcColourOrFactor > &value) {
    m_specularColour = value;
}

void IfcSurfaceStyleRendering::unsetSpecularColour() {
    m_specularColour = Step::getUnset(getSpecularColour());
}

bool IfcSurfaceStyleRendering::testSpecularColour() const {
    return !Step::isUnset(getSpecularColour());
}

IfcSpecularHighlightSelect *IfcSurfaceStyleRendering::getSpecularHighlight() {
    if (Step::BaseObject::inited()) {
        return m_specularHighlight.get();
    }
    else {
        return NULL;
    }
}

const IfcSpecularHighlightSelect *IfcSurfaceStyleRendering::getSpecularHighlight() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getSpecularHighlight();
}

void IfcSurfaceStyleRendering::setSpecularHighlight(const Step::RefPtr< IfcSpecularHighlightSelect > &value) {
    m_specularHighlight = value;
}

void IfcSurfaceStyleRendering::unsetSpecularHighlight() {
    m_specularHighlight = Step::getUnset(getSpecularHighlight());
}

bool IfcSurfaceStyleRendering::testSpecularHighlight() const {
    return !Step::isUnset(getSpecularHighlight());
}

IfcReflectanceMethodEnum IfcSurfaceStyleRendering::getReflectanceMethod() {
    if (Step::BaseObject::inited()) {
        return m_reflectanceMethod;
    }
    else {
        return IfcReflectanceMethodEnum_UNSET;
    }
}

const IfcReflectanceMethodEnum IfcSurfaceStyleRendering::getReflectanceMethod() const {
    IfcSurfaceStyleRendering * deConstObject = const_cast< IfcSurfaceStyleRendering * > (this);
    return deConstObject->getReflectanceMethod();
}

void IfcSurfaceStyleRendering::setReflectanceMethod(IfcReflectanceMethodEnum value) {
    m_reflectanceMethod = value;
}

void IfcSurfaceStyleRendering::unsetReflectanceMethod() {
    m_reflectanceMethod = IfcReflectanceMethodEnum_UNSET;
}

bool IfcSurfaceStyleRendering::testReflectanceMethod() const {
    return getReflectanceMethod() != IfcReflectanceMethodEnum_UNSET;
}

bool IfcSurfaceStyleRendering::init() {
    bool status = IfcSurfaceStyleShading::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transparency = Step::getUnset(m_transparency);
    }
    else {
        m_transparency = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_diffuseColour = NULL;
    }
    else {
        m_diffuseColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_diffuseColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_diffuseColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transmissionColour = NULL;
    }
    else {
        m_transmissionColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_transmissionColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_transmissionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_diffuseTransmissionColour = NULL;
    }
    else {
        m_diffuseTransmissionColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_diffuseTransmissionColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_diffuseTransmissionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_reflectionColour = NULL;
    }
    else {
        m_reflectionColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_reflectionColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_reflectionColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_specularColour = NULL;
    }
    else {
        m_specularColour = new IfcColourOrFactor;
        if (arg[0] == '#') {
            m_specularColour->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_specularColour->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_specularHighlight = NULL;
    }
    else {
        m_specularHighlight = new IfcSpecularHighlightSelect;
        if (arg[0] == '#') {
            m_specularHighlight->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCSPECULAREXPONENT") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_specularHighlight->setIfcSpecularExponent(tmp_attr1);
                }
                if (type1 == "IFCSPECULARROUGHNESS") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_specularHighlight->setIfcSpecularRoughness(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_reflectanceMethod = IfcReflectanceMethodEnum_UNSET;
    }
    else {
        if (arg == ".BLINN.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_BLINN;
        }
        else if (arg == ".FLAT.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_FLAT;
        }
        else if (arg == ".GLASS.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_GLASS;
        }
        else if (arg == ".MATT.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_MATT;
        }
        else if (arg == ".METAL.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_METAL;
        }
        else if (arg == ".MIRROR.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_MIRROR;
        }
        else if (arg == ".PHONG.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_PHONG;
        }
        else if (arg == ".PLASTIC.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_PLASTIC;
        }
        else if (arg == ".STRAUSS.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_STRAUSS;
        }
        else if (arg == ".NOTDEFINED.") {
            m_reflectanceMethod = IfcReflectanceMethodEnum_NOTDEFINED;
        }
    }
    return true;
}

#define T(v,t) v = new t; v->copy(*(obj.v.get()), copyop)

void IfcSurfaceStyleRendering::copy(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop)
{
    IfcSurfaceStyleShading::copy(obj, copyop);

    setTransparency(obj.m_transparency);

    if(obj.testDiffuseColour())
    {
        T(m_diffuseColour, IfcColourOrFactor);
    }

    if(obj.testTransmissionColour())
    {
        T(m_transmissionColour, IfcColourOrFactor);
    }

    if (obj.testDiffuseTransmissionColour())
    {
        T(m_diffuseTransmissionColour, IfcColourOrFactor);
    }

    if (obj.testReflectionColour())
    {
        T(m_reflectionColour, IfcColourOrFactor);
    }

    if (obj.testSpecularColour())
    {
        T(m_specularColour, IfcColourOrFactor);
    }

    if (obj.testSpecularHighlight())
    {
        T(m_specularHighlight, IfcSpecularHighlightSelect);
    }

    setReflectanceMethod(obj.m_reflectanceMethod);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceStyleRendering::s_type("IfcSurfaceStyleRendering");
