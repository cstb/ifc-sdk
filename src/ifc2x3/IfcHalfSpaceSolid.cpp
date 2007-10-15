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

#include "ifc2x3/IfcHalfSpaceSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcHalfSpaceSolid::IfcHalfSpaceSolid(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_baseSurface = NULL;
    m_agreementFlag = Step::getUnset(m_agreementFlag);
}

IfcHalfSpaceSolid::~IfcHalfSpaceSolid() {
}

bool IfcHalfSpaceSolid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcHalfSpaceSolid(this);
}

const std::string &IfcHalfSpaceSolid::type() {
    return IfcHalfSpaceSolid::s_type.getName();
}

Step::ClassType IfcHalfSpaceSolid::getClassType() {
    return IfcHalfSpaceSolid::s_type;
}

Step::ClassType IfcHalfSpaceSolid::getType() const {
    return IfcHalfSpaceSolid::s_type;
}

bool IfcHalfSpaceSolid::isOfType(Step::ClassType t) {
    return IfcHalfSpaceSolid::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcSurface *IfcHalfSpaceSolid::getBaseSurface() {
    if (Step::BaseObject::inited()) {
        return m_baseSurface.get();
    }
    else {
        return NULL;
    }
}

void IfcHalfSpaceSolid::setBaseSurface(const Step::RefPtr< IfcSurface > &value) {
    m_baseSurface = value;
}

Step::Bool IfcHalfSpaceSolid::getAgreementFlag() {
    if (Step::BaseObject::inited()) {
        return m_agreementFlag;
    }
    else {
        return Step::getUnset(m_agreementFlag);
    }
}

void IfcHalfSpaceSolid::setAgreementFlag(Step::Bool value) {
    m_agreementFlag = value;
}

void IfcHalfSpaceSolid::release() {
    IfcGeometricRepresentationItem::release();
    m_baseSurface.release();
}

bool IfcHalfSpaceSolid::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_baseSurface = NULL;
    }
    else {
        m_baseSurface = static_cast< IfcSurface * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_agreementFlag = Step::getUnset(m_agreementFlag);
    }
    else {
        m_agreementFlag = Step::spfToBool(arg);
    }
    return true;
}

void IfcHalfSpaceSolid::copy(const IfcHalfSpaceSolid &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setBaseSurface(copyop(obj.m_baseSurface.get()));
    setAgreementFlag(obj.m_agreementFlag);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcHalfSpaceSolid::s_type("IfcHalfSpaceSolid");
