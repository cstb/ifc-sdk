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

#include "ifc2x3/IfcVector.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcVector::IfcVector(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_orientation = NULL;
    m_magnitude = Step::getUnset(m_magnitude);
}

IfcVector::~IfcVector() {
}

bool IfcVector::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVector(this);
}

const std::string &IfcVector::type() {
    return IfcVector::s_type.getName();
}

Step::ClassType IfcVector::getClassType() {
    return IfcVector::s_type;
}

Step::ClassType IfcVector::getType() const {
    return IfcVector::s_type;
}

bool IfcVector::isOfType(Step::ClassType t) {
    return IfcVector::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDirection *IfcVector::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation.get();
    }
    else {
        return NULL;
    }
}

void IfcVector::setOrientation(const Step::RefPtr< IfcDirection > &value) {
    m_orientation = value;
}

IfcLengthMeasure IfcVector::getMagnitude() {
    if (Step::BaseObject::inited()) {
        return m_magnitude;
    }
    else {
        return Step::getUnset(m_magnitude);
    }
}

void IfcVector::setMagnitude(IfcLengthMeasure value) {
    m_magnitude = value;
}

void IfcVector::release() {
    IfcGeometricRepresentationItem::release();
    m_orientation.release();
}

bool IfcVector::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = NULL;
    }
    else {
        m_orientation = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_magnitude = Step::getUnset(m_magnitude);
    }
    else {
        m_magnitude = Step::spfToReal(arg);
    }
    return true;
}

void IfcVector::copy(const IfcVector &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOrientation(copyop(obj.m_orientation.get()));
    setMagnitude(obj.m_magnitude);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVector::s_type("IfcVector");
