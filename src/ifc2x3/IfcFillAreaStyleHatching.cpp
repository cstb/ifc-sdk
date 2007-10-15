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

#include "ifc2x3/IfcFillAreaStyleHatching.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcCurveStyle.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcHatchLineDistanceSelect.h"
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

IfcFillAreaStyleHatching::IfcFillAreaStyleHatching(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_hatchLineAppearance = NULL;
    m_startOfNextHatchLine = NULL;
    m_pointOfReferenceHatchLine = NULL;
    m_patternStart = NULL;
    m_hatchLineAngle = Step::getUnset(m_hatchLineAngle);
}

IfcFillAreaStyleHatching::~IfcFillAreaStyleHatching() {
}

bool IfcFillAreaStyleHatching::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFillAreaStyleHatching(this);
}

const std::string &IfcFillAreaStyleHatching::type() {
    return IfcFillAreaStyleHatching::s_type.getName();
}

Step::ClassType IfcFillAreaStyleHatching::getClassType() {
    return IfcFillAreaStyleHatching::s_type;
}

Step::ClassType IfcFillAreaStyleHatching::getType() const {
    return IfcFillAreaStyleHatching::s_type;
}

bool IfcFillAreaStyleHatching::isOfType(Step::ClassType t) {
    return IfcFillAreaStyleHatching::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCurveStyle *IfcFillAreaStyleHatching::getHatchLineAppearance() {
    if (Step::BaseObject::inited()) {
        return m_hatchLineAppearance.get();
    }
    else {
        return NULL;
    }
}

void IfcFillAreaStyleHatching::setHatchLineAppearance(const Step::RefPtr< IfcCurveStyle > &value) {
    m_hatchLineAppearance = value;
}

IfcHatchLineDistanceSelect *IfcFillAreaStyleHatching::getStartOfNextHatchLine() {
    if (Step::BaseObject::inited()) {
        return m_startOfNextHatchLine.get();
    }
    else {
        return NULL;
    }
}

void IfcFillAreaStyleHatching::setStartOfNextHatchLine(const Step::RefPtr< IfcHatchLineDistanceSelect > &value) {
    m_startOfNextHatchLine = value;
}

IfcCartesianPoint *IfcFillAreaStyleHatching::getPointOfReferenceHatchLine() {
    if (Step::BaseObject::inited()) {
        return m_pointOfReferenceHatchLine.get();
    }
    else {
        return NULL;
    }
}

void IfcFillAreaStyleHatching::setPointOfReferenceHatchLine(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_pointOfReferenceHatchLine = value;
}

IfcCartesianPoint *IfcFillAreaStyleHatching::getPatternStart() {
    if (Step::BaseObject::inited()) {
        return m_patternStart.get();
    }
    else {
        return NULL;
    }
}

void IfcFillAreaStyleHatching::setPatternStart(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_patternStart = value;
}

IfcPlaneAngleMeasure IfcFillAreaStyleHatching::getHatchLineAngle() {
    if (Step::BaseObject::inited()) {
        return m_hatchLineAngle;
    }
    else {
        return Step::getUnset(m_hatchLineAngle);
    }
}

void IfcFillAreaStyleHatching::setHatchLineAngle(IfcPlaneAngleMeasure value) {
    m_hatchLineAngle = value;
}

void IfcFillAreaStyleHatching::release() {
    IfcGeometricRepresentationItem::release();
    m_hatchLineAppearance.release();
    m_pointOfReferenceHatchLine.release();
    m_patternStart.release();
}

bool IfcFillAreaStyleHatching::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hatchLineAppearance = NULL;
    }
    else {
        m_hatchLineAppearance = static_cast< IfcCurveStyle * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startOfNextHatchLine = NULL;
    }
    else {
        m_startOfNextHatchLine = new IfcHatchLineDistanceSelect;
        if (arg[0] == '#') {
            m_startOfNextHatchLine->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_startOfNextHatchLine->setIfcPositiveLengthMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointOfReferenceHatchLine = NULL;
    }
    else {
        m_pointOfReferenceHatchLine = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_patternStart = NULL;
    }
    else {
        m_patternStart = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hatchLineAngle = Step::getUnset(m_hatchLineAngle);
    }
    else {
        m_hatchLineAngle = Step::spfToReal(arg);
    }
    return true;
}

void IfcFillAreaStyleHatching::copy(const IfcFillAreaStyleHatching &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setHatchLineAppearance(copyop(obj.m_hatchLineAppearance.get()));
    m_startOfNextHatchLine = new IfcHatchLineDistanceSelect;
    m_startOfNextHatchLine->copy(*(obj.m_startOfNextHatchLine.get()), copyop);
    setPointOfReferenceHatchLine(copyop(obj.m_pointOfReferenceHatchLine.get()));
    setPatternStart(copyop(obj.m_patternStart.get()));
    setHatchLineAngle(obj.m_hatchLineAngle);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleHatching::s_type("IfcFillAreaStyleHatching");
