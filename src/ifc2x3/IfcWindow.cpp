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

#include "ifc2x3/IfcWindow.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcWindow::IfcWindow(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_overallHeight = Step::getUnset(m_overallHeight);
    m_overallWidth = Step::getUnset(m_overallWidth);
}

IfcWindow::~IfcWindow() {
}

bool IfcWindow::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWindow(this);
}

const std::string &IfcWindow::type() const {
    return IfcWindow::s_type.getName();
}

const Step::ClassType &IfcWindow::getClassType() {
    return IfcWindow::s_type;
}

const Step::ClassType &IfcWindow::getType() const {
    return IfcWindow::s_type;
}

bool IfcWindow::isOfType(const Step::ClassType &t) const {
    return IfcWindow::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcWindow::getOverallHeight() {
    if (Step::BaseObject::inited()) {
        return m_overallHeight;
    }
    else {
        return Step::getUnset(m_overallHeight);
    }
}

const IfcPositiveLengthMeasure IfcWindow::getOverallHeight() const {
    IfcWindow * deConstObject = const_cast< IfcWindow * > (this);
    return deConstObject->getOverallHeight();
}

void IfcWindow::setOverallHeight(IfcPositiveLengthMeasure value) {
    m_overallHeight = value;
}

IfcPositiveLengthMeasure IfcWindow::getOverallWidth() {
    if (Step::BaseObject::inited()) {
        return m_overallWidth;
    }
    else {
        return Step::getUnset(m_overallWidth);
    }
}

const IfcPositiveLengthMeasure IfcWindow::getOverallWidth() const {
    IfcWindow * deConstObject = const_cast< IfcWindow * > (this);
    return deConstObject->getOverallWidth();
}

void IfcWindow::setOverallWidth(IfcPositiveLengthMeasure value) {
    m_overallWidth = value;
}

bool IfcWindow::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallHeight = Step::getUnset(m_overallHeight);
    }
    else {
        m_overallHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallWidth = Step::getUnset(m_overallWidth);
    }
    else {
        m_overallWidth = Step::spfToReal(arg);
    }
    return true;
}

void IfcWindow::copy(const IfcWindow &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setOverallHeight(obj.m_overallHeight);
    setOverallWidth(obj.m_overallWidth);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWindow::s_type("IfcWindow");
