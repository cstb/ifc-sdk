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

#include "ifc2x3/IfcSurfaceStyleLighting.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSurfaceStyleLighting::IfcSurfaceStyleLighting(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_diffuseTransmissionColour = NULL;
    m_diffuseReflectionColour = NULL;
    m_transmissionColour = NULL;
    m_reflectanceColour = NULL;
}

IfcSurfaceStyleLighting::~IfcSurfaceStyleLighting() {
}

bool IfcSurfaceStyleLighting::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleLighting(this);
}

const std::string &IfcSurfaceStyleLighting::type() const {
    return IfcSurfaceStyleLighting::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleLighting::getClassType() {
    return IfcSurfaceStyleLighting::s_type;
}

const Step::ClassType &IfcSurfaceStyleLighting::getType() const {
    return IfcSurfaceStyleLighting::s_type;
}

bool IfcSurfaceStyleLighting::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleLighting::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseTransmissionColour() {
    if (Step::BaseObject::inited()) {
        return m_diffuseTransmissionColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseTransmissionColour() const {
    IfcSurfaceStyleLighting * deConstObject = const_cast< IfcSurfaceStyleLighting * > (this);
    return deConstObject->getDiffuseTransmissionColour();
}

void IfcSurfaceStyleLighting::setDiffuseTransmissionColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_diffuseTransmissionColour = value;
}

IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseReflectionColour() {
    if (Step::BaseObject::inited()) {
        return m_diffuseReflectionColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcSurfaceStyleLighting::getDiffuseReflectionColour() const {
    IfcSurfaceStyleLighting * deConstObject = const_cast< IfcSurfaceStyleLighting * > (this);
    return deConstObject->getDiffuseReflectionColour();
}

void IfcSurfaceStyleLighting::setDiffuseReflectionColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_diffuseReflectionColour = value;
}

IfcColourRgb *IfcSurfaceStyleLighting::getTransmissionColour() {
    if (Step::BaseObject::inited()) {
        return m_transmissionColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcSurfaceStyleLighting::getTransmissionColour() const {
    IfcSurfaceStyleLighting * deConstObject = const_cast< IfcSurfaceStyleLighting * > (this);
    return deConstObject->getTransmissionColour();
}

void IfcSurfaceStyleLighting::setTransmissionColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_transmissionColour = value;
}

IfcColourRgb *IfcSurfaceStyleLighting::getReflectanceColour() {
    if (Step::BaseObject::inited()) {
        return m_reflectanceColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcSurfaceStyleLighting::getReflectanceColour() const {
    IfcSurfaceStyleLighting * deConstObject = const_cast< IfcSurfaceStyleLighting * > (this);
    return deConstObject->getReflectanceColour();
}

void IfcSurfaceStyleLighting::setReflectanceColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_reflectanceColour = value;
}

bool IfcSurfaceStyleLighting::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_diffuseTransmissionColour = NULL;
    }
    else {
        m_diffuseTransmissionColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_diffuseReflectionColour = NULL;
    }
    else {
        m_diffuseReflectionColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transmissionColour = NULL;
    }
    else {
        m_transmissionColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_reflectanceColour = NULL;
    }
    else {
        m_reflectanceColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSurfaceStyleLighting::copy(const IfcSurfaceStyleLighting &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDiffuseTransmissionColour((IfcColourRgb*)copyop(obj.m_diffuseTransmissionColour.get()));
    setDiffuseReflectionColour((IfcColourRgb*)copyop(obj.m_diffuseReflectionColour.get()));
    setTransmissionColour((IfcColourRgb*)copyop(obj.m_transmissionColour.get()));
    setReflectanceColour((IfcColourRgb*)copyop(obj.m_reflectanceColour.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleLighting::s_type("IfcSurfaceStyleLighting");
