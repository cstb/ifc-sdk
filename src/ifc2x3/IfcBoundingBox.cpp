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

#include "ifc2x3/IfcBoundingBox.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcBoundingBox::IfcBoundingBox(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_corner = NULL;
    m_xDim = Step::getUnset(m_xDim);
    m_yDim = Step::getUnset(m_yDim);
    m_zDim = Step::getUnset(m_zDim);
}

IfcBoundingBox::~IfcBoundingBox() {
}

bool IfcBoundingBox::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundingBox(this);
}

const std::string &IfcBoundingBox::type() const {
    return IfcBoundingBox::s_type.getName();
}

const Step::ClassType &IfcBoundingBox::getClassType() {
    return IfcBoundingBox::s_type;
}

const Step::ClassType &IfcBoundingBox::getType() const {
    return IfcBoundingBox::s_type;
}

bool IfcBoundingBox::isOfType(const Step::ClassType &t) const {
    return IfcBoundingBox::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCartesianPoint *IfcBoundingBox::getCorner() {
    if (Step::BaseObject::inited()) {
        return m_corner.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcBoundingBox::getCorner() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getCorner();
}

void IfcBoundingBox::setCorner(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_corner = value;
}

IfcPositiveLengthMeasure IfcBoundingBox::getXDim() {
    if (Step::BaseObject::inited()) {
        return m_xDim;
    }
    else {
        return Step::getUnset(m_xDim);
    }
}

const IfcPositiveLengthMeasure IfcBoundingBox::getXDim() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getXDim();
}

void IfcBoundingBox::setXDim(IfcPositiveLengthMeasure value) {
    m_xDim = value;
}

IfcPositiveLengthMeasure IfcBoundingBox::getYDim() {
    if (Step::BaseObject::inited()) {
        return m_yDim;
    }
    else {
        return Step::getUnset(m_yDim);
    }
}

const IfcPositiveLengthMeasure IfcBoundingBox::getYDim() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getYDim();
}

void IfcBoundingBox::setYDim(IfcPositiveLengthMeasure value) {
    m_yDim = value;
}

IfcPositiveLengthMeasure IfcBoundingBox::getZDim() {
    if (Step::BaseObject::inited()) {
        return m_zDim;
    }
    else {
        return Step::getUnset(m_zDim);
    }
}

const IfcPositiveLengthMeasure IfcBoundingBox::getZDim() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getZDim();
}

void IfcBoundingBox::setZDim(IfcPositiveLengthMeasure value) {
    m_zDim = value;
}

bool IfcBoundingBox::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_corner = NULL;
    }
    else {
        m_corner = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_xDim = Step::getUnset(m_xDim);
    }
    else {
        m_xDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yDim = Step::getUnset(m_yDim);
    }
    else {
        m_yDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_zDim = Step::getUnset(m_zDim);
    }
    else {
        m_zDim = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundingBox::copy(const IfcBoundingBox &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setCorner((IfcCartesianPoint*)copyop(obj.m_corner.get()));
    setXDim(obj.m_xDim);
    setYDim(obj.m_yDim);
    setZDim(obj.m_zDim);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundingBox::s_type("IfcBoundingBox");
