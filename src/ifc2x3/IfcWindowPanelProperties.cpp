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

#include "ifc2x3/IfcWindowPanelProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcShapeAspect.h"
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

IfcWindowPanelProperties::IfcWindowPanelProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_operationType = IfcWindowPanelOperationEnum_UNSET;
    m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
    m_frameDepth = Step::getUnset(m_frameDepth);
    m_frameThickness = Step::getUnset(m_frameThickness);
    m_shapeAspectStyle = NULL;
}

IfcWindowPanelProperties::~IfcWindowPanelProperties() {
}

bool IfcWindowPanelProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWindowPanelProperties(this);
}

const std::string &IfcWindowPanelProperties::type() {
    return IfcWindowPanelProperties::s_type.getName();
}

Step::ClassType IfcWindowPanelProperties::getClassType() {
    return IfcWindowPanelProperties::s_type;
}

Step::ClassType IfcWindowPanelProperties::getType() const {
    return IfcWindowPanelProperties::s_type;
}

bool IfcWindowPanelProperties::isOfType(Step::ClassType t) {
    return IfcWindowPanelProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcWindowPanelOperationEnum IfcWindowPanelProperties::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcWindowPanelOperationEnum_UNSET;
    }
}

void IfcWindowPanelProperties::setOperationType(IfcWindowPanelOperationEnum value) {
    m_operationType = value;
}

IfcWindowPanelPositionEnum IfcWindowPanelProperties::getPanelPosition() {
    if (Step::BaseObject::inited()) {
        return m_panelPosition;
    }
    else {
        return IfcWindowPanelPositionEnum_UNSET;
    }
}

void IfcWindowPanelProperties::setPanelPosition(IfcWindowPanelPositionEnum value) {
    m_panelPosition = value;
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameDepth() {
    if (Step::BaseObject::inited()) {
        return m_frameDepth;
    }
    else {
        return Step::getUnset(m_frameDepth);
    }
}

void IfcWindowPanelProperties::setFrameDepth(IfcPositiveLengthMeasure value) {
    m_frameDepth = value;
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameThickness() {
    if (Step::BaseObject::inited()) {
        return m_frameThickness;
    }
    else {
        return Step::getUnset(m_frameThickness);
    }
}

void IfcWindowPanelProperties::setFrameThickness(IfcPositiveLengthMeasure value) {
    m_frameThickness = value;
}

IfcShapeAspect *IfcWindowPanelProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

void IfcWindowPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcWindowPanelProperties::release() {
    IfcPropertySetDefinition::release();
    m_shapeAspectStyle.release();
}

bool IfcWindowPanelProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcWindowPanelOperationEnum_UNSET;
    }
    else {
        if (arg == ".SIDEHUNGRIGHTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_SIDEHUNGRIGHTHAND;
        }
        else if (arg == ".SIDEHUNGLEFTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_SIDEHUNGLEFTHAND;
        }
        else if (arg == ".TILTANDTURNRIGHTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_TILTANDTURNRIGHTHAND;
        }
        else if (arg == ".TILTANDTURNLEFTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_TILTANDTURNLEFTHAND;
        }
        else if (arg == ".TOPHUNG.") {
            m_operationType = IfcWindowPanelOperationEnum_TOPHUNG;
        }
        else if (arg == ".BOTTOMHUNG.") {
            m_operationType = IfcWindowPanelOperationEnum_BOTTOMHUNG;
        }
        else if (arg == ".PIVOTHORIZONTAL.") {
            m_operationType = IfcWindowPanelOperationEnum_PIVOTHORIZONTAL;
        }
        else if (arg == ".PIVOTVERTICAL.") {
            m_operationType = IfcWindowPanelOperationEnum_PIVOTVERTICAL;
        }
        else if (arg == ".SLIDINGHORIZONTAL.") {
            m_operationType = IfcWindowPanelOperationEnum_SLIDINGHORIZONTAL;
        }
        else if (arg == ".SLIDINGVERTICAL.") {
            m_operationType = IfcWindowPanelOperationEnum_SLIDINGVERTICAL;
        }
        else if (arg == ".REMOVABLECASEMENT.") {
            m_operationType = IfcWindowPanelOperationEnum_REMOVABLECASEMENT;
        }
        else if (arg == ".FIXEDCASEMENT.") {
            m_operationType = IfcWindowPanelOperationEnum_FIXEDCASEMENT;
        }
        else if (arg == ".OTHEROPERATION.") {
            m_operationType = IfcWindowPanelOperationEnum_OTHEROPERATION;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcWindowPanelOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
    }
    else {
        if (arg == ".LEFT.") {
            m_panelPosition = IfcWindowPanelPositionEnum_LEFT;
        }
        else if (arg == ".MIDDLE.") {
            m_panelPosition = IfcWindowPanelPositionEnum_MIDDLE;
        }
        else if (arg == ".RIGHT.") {
            m_panelPosition = IfcWindowPanelPositionEnum_RIGHT;
        }
        else if (arg == ".BOTTOM.") {
            m_panelPosition = IfcWindowPanelPositionEnum_BOTTOM;
        }
        else if (arg == ".TOP.") {
            m_panelPosition = IfcWindowPanelPositionEnum_TOP;
        }
        else if (arg == ".NOTDEFINED.") {
            m_panelPosition = IfcWindowPanelPositionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frameDepth = Step::getUnset(m_frameDepth);
    }
    else {
        m_frameDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frameThickness = Step::getUnset(m_frameThickness);
    }
    else {
        m_frameThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeAspectStyle = NULL;
    }
    else {
        m_shapeAspectStyle = static_cast< IfcShapeAspect * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcWindowPanelProperties::copy(const IfcWindowPanelProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setOperationType(obj.m_operationType);
    setPanelPosition(obj.m_panelPosition);
    setFrameDepth(obj.m_frameDepth);
    setFrameThickness(obj.m_frameThickness);
    setShapeAspectStyle(copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWindowPanelProperties::s_type("IfcWindowPanelProperties");
