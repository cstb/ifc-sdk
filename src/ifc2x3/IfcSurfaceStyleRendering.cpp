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

#include "ifc2x3/IfcSurfaceStyleRendering.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourOrFactor.h"
#include "ifc2x3/IfcSpecularHighlightSelect.h"
#include "ifc2x3/IfcSurfaceStyleShading.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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
            m_diffuseColour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
            m_transmissionColour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
            m_diffuseTransmissionColour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
            m_reflectionColour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
            m_specularColour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
            m_specularHighlight->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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

void IfcSurfaceStyleRendering::copy(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop) {
    IfcSurfaceStyleShading::copy(obj, copyop);
    setTransparency(obj.m_transparency);
    m_diffuseColour = new IfcColourOrFactor;
    m_diffuseColour->copy(*(obj.m_diffuseColour.get()), copyop);
    m_transmissionColour = new IfcColourOrFactor;
    m_transmissionColour->copy(*(obj.m_transmissionColour.get()), copyop);
    m_diffuseTransmissionColour = new IfcColourOrFactor;
    m_diffuseTransmissionColour->copy(*(obj.m_diffuseTransmissionColour.get()), copyop);
    m_reflectionColour = new IfcColourOrFactor;
    m_reflectionColour->copy(*(obj.m_reflectionColour.get()), copyop);
    m_specularColour = new IfcColourOrFactor;
    m_specularColour->copy(*(obj.m_specularColour.get()), copyop);
    m_specularHighlight = new IfcSpecularHighlightSelect;
    m_specularHighlight->copy(*(obj.m_specularHighlight.get()), copyop);
    setReflectanceMethod(obj.m_reflectanceMethod);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleRendering::s_type("IfcSurfaceStyleRendering");
