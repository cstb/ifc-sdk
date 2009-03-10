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

#include "ifc2x3/IfcRectangularTrimmedSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedSurface.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRectangularTrimmedSurface::IfcRectangularTrimmedSurface(Step::Id id, Step::SPFData *args) : IfcBoundedSurface(id, args) {
    m_basisSurface = NULL;
    m_u1 = Step::getUnset(m_u1);
    m_v1 = Step::getUnset(m_v1);
    m_u2 = Step::getUnset(m_u2);
    m_v2 = Step::getUnset(m_v2);
    m_usense = Step::getUnset(m_usense);
    m_vsense = Step::getUnset(m_vsense);
}

IfcRectangularTrimmedSurface::~IfcRectangularTrimmedSurface() {
}

bool IfcRectangularTrimmedSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRectangularTrimmedSurface(this);
}

const std::string &IfcRectangularTrimmedSurface::type() const {
    return IfcRectangularTrimmedSurface::s_type.getName();
}

const Step::ClassType &IfcRectangularTrimmedSurface::getClassType() {
    return IfcRectangularTrimmedSurface::s_type;
}

const Step::ClassType &IfcRectangularTrimmedSurface::getType() const {
    return IfcRectangularTrimmedSurface::s_type;
}

bool IfcRectangularTrimmedSurface::isOfType(const Step::ClassType &t) const {
    return IfcRectangularTrimmedSurface::s_type == t ? true : IfcBoundedSurface::isOfType(t);
}

IfcSurface *IfcRectangularTrimmedSurface::getBasisSurface() {
    if (Step::BaseObject::inited()) {
        return m_basisSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcRectangularTrimmedSurface::getBasisSurface() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getBasisSurface();
}

void IfcRectangularTrimmedSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value) {
    m_basisSurface = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getU1() {
    if (Step::BaseObject::inited()) {
        return m_u1;
    }
    else {
        return Step::getUnset(m_u1);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getU1() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getU1();
}

void IfcRectangularTrimmedSurface::setU1(IfcParameterValue value) {
    m_u1 = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getV1() {
    if (Step::BaseObject::inited()) {
        return m_v1;
    }
    else {
        return Step::getUnset(m_v1);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getV1() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getV1();
}

void IfcRectangularTrimmedSurface::setV1(IfcParameterValue value) {
    m_v1 = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getU2() {
    if (Step::BaseObject::inited()) {
        return m_u2;
    }
    else {
        return Step::getUnset(m_u2);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getU2() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getU2();
}

void IfcRectangularTrimmedSurface::setU2(IfcParameterValue value) {
    m_u2 = value;
}

IfcParameterValue IfcRectangularTrimmedSurface::getV2() {
    if (Step::BaseObject::inited()) {
        return m_v2;
    }
    else {
        return Step::getUnset(m_v2);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getV2() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getV2();
}

void IfcRectangularTrimmedSurface::setV2(IfcParameterValue value) {
    m_v2 = value;
}

Step::Boolean IfcRectangularTrimmedSurface::getUsense() {
    if (Step::BaseObject::inited()) {
        return m_usense;
    }
    else {
        return Step::getUnset(m_usense);
    }
}

const Step::Boolean IfcRectangularTrimmedSurface::getUsense() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getUsense();
}

void IfcRectangularTrimmedSurface::setUsense(Step::Boolean value) {
    m_usense = value;
}

Step::Boolean IfcRectangularTrimmedSurface::getVsense() {
    if (Step::BaseObject::inited()) {
        return m_vsense;
    }
    else {
        return Step::getUnset(m_vsense);
    }
}

const Step::Boolean IfcRectangularTrimmedSurface::getVsense() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getVsense();
}

void IfcRectangularTrimmedSurface::setVsense(Step::Boolean value) {
    m_vsense = value;
}

bool IfcRectangularTrimmedSurface::init() {
    bool status = IfcBoundedSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisSurface = NULL;
    }
    else {
        m_basisSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_u1 = Step::getUnset(m_u1);
    }
    else {
        m_u1 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_v1 = Step::getUnset(m_v1);
    }
    else {
        m_v1 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_u2 = Step::getUnset(m_u2);
    }
    else {
        m_u2 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_v2 = Step::getUnset(m_v2);
    }
    else {
        m_v2 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usense = Step::getUnset(m_usense);
    }
    else {
        m_usense = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_vsense = Step::getUnset(m_vsense);
    }
    else {
        m_vsense = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcRectangularTrimmedSurface::copy(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop) {
    IfcBoundedSurface::copy(obj, copyop);
    setBasisSurface((IfcSurface*)copyop(obj.m_basisSurface.get()));
    setU1(obj.m_u1);
    setV1(obj.m_v1);
    setU2(obj.m_u2);
    setV2(obj.m_v2);
    setUsense(obj.m_usense);
    setVsense(obj.m_vsense);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangularTrimmedSurface::s_type("IfcRectangularTrimmedSurface");
