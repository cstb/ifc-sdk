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

#include "ifc2x3/IfcWindowStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTypeProduct.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcWindowStyle::IfcWindowStyle(Step::Id id, Step::SPFData *args) : IfcTypeProduct(id, args) {
    m_constructionType = IfcWindowStyleConstructionEnum_UNSET;
    m_operationType = IfcWindowStyleOperationEnum_UNSET;
    m_parameterTakesPrecedence = Step::getUnset(m_parameterTakesPrecedence);
    m_sizeable = Step::getUnset(m_sizeable);
}

IfcWindowStyle::~IfcWindowStyle() {
}

bool IfcWindowStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWindowStyle(this);
}

const std::string &IfcWindowStyle::type() {
    return IfcWindowStyle::s_type.getName();
}

Step::ClassType IfcWindowStyle::getClassType() {
    return IfcWindowStyle::s_type;
}

Step::ClassType IfcWindowStyle::getType() const {
    return IfcWindowStyle::s_type;
}

bool IfcWindowStyle::isOfType(Step::ClassType t) {
    return IfcWindowStyle::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcWindowStyleConstructionEnum IfcWindowStyle::getConstructionType() {
    if (Step::BaseObject::inited()) {
        return m_constructionType;
    }
    else {
        return IfcWindowStyleConstructionEnum_UNSET;
    }
}

void IfcWindowStyle::setConstructionType(IfcWindowStyleConstructionEnum value) {
    m_constructionType = value;
}

IfcWindowStyleOperationEnum IfcWindowStyle::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcWindowStyleOperationEnum_UNSET;
    }
}

void IfcWindowStyle::setOperationType(IfcWindowStyleOperationEnum value) {
    m_operationType = value;
}

Step::Bool IfcWindowStyle::getParameterTakesPrecedence() {
    if (Step::BaseObject::inited()) {
        return m_parameterTakesPrecedence;
    }
    else {
        return Step::getUnset(m_parameterTakesPrecedence);
    }
}

void IfcWindowStyle::setParameterTakesPrecedence(Step::Bool value) {
    m_parameterTakesPrecedence = value;
}

Step::Bool IfcWindowStyle::getSizeable() {
    if (Step::BaseObject::inited()) {
        return m_sizeable;
    }
    else {
        return Step::getUnset(m_sizeable);
    }
}

void IfcWindowStyle::setSizeable(Step::Bool value) {
    m_sizeable = value;
}

void IfcWindowStyle::release() {
    IfcTypeProduct::release();
}

bool IfcWindowStyle::init() {
    bool status = IfcTypeProduct::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_constructionType = IfcWindowStyleConstructionEnum_UNSET;
    }
    else {
        if (arg == ".ALUMINIUM.") {
            m_constructionType = IfcWindowStyleConstructionEnum_ALUMINIUM;
        }
        else if (arg == ".HIGH_GRADE_STEEL.") {
            m_constructionType = IfcWindowStyleConstructionEnum_HIGH_GRADE_STEEL;
        }
        else if (arg == ".STEEL.") {
            m_constructionType = IfcWindowStyleConstructionEnum_STEEL;
        }
        else if (arg == ".WOOD.") {
            m_constructionType = IfcWindowStyleConstructionEnum_WOOD;
        }
        else if (arg == ".ALUMINIUM_WOOD.") {
            m_constructionType = IfcWindowStyleConstructionEnum_ALUMINIUM_WOOD;
        }
        else if (arg == ".PLASTIC.") {
            m_constructionType = IfcWindowStyleConstructionEnum_PLASTIC;
        }
        else if (arg == ".OTHER_CONSTRUCTION.") {
            m_constructionType = IfcWindowStyleConstructionEnum_OTHER_CONSTRUCTION;
        }
        else if (arg == ".NOTDEFINED.") {
            m_constructionType = IfcWindowStyleConstructionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcWindowStyleOperationEnum_UNSET;
    }
    else {
        if (arg == ".SINGLE_PANEL.") {
            m_operationType = IfcWindowStyleOperationEnum_SINGLE_PANEL;
        }
        else if (arg == ".DOUBLE_PANEL_VERTICAL.") {
            m_operationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_VERTICAL;
        }
        else if (arg == ".DOUBLE_PANEL_HORIZONTAL.") {
            m_operationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_HORIZONTAL;
        }
        else if (arg == ".TRIPLE_PANEL_VERTICAL.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_VERTICAL;
        }
        else if (arg == ".TRIPLE_PANEL_BOTTOM.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_BOTTOM;
        }
        else if (arg == ".TRIPLE_PANEL_TOP.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_TOP;
        }
        else if (arg == ".TRIPLE_PANEL_LEFT.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_LEFT;
        }
        else if (arg == ".TRIPLE_PANEL_RIGHT.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_RIGHT;
        }
        else if (arg == ".TRIPLE_PANEL_HORIZONTAL.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_HORIZONTAL;
        }
        else if (arg == ".USERDEFINED.") {
            m_operationType = IfcWindowStyleOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcWindowStyleOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parameterTakesPrecedence = Step::getUnset(m_parameterTakesPrecedence);
    }
    else {
        m_parameterTakesPrecedence = Step::spfToBool(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sizeable = Step::getUnset(m_sizeable);
    }
    else {
        m_sizeable = Step::spfToBool(arg);
    }
    return true;
}

void IfcWindowStyle::copy(const IfcWindowStyle &obj, const CopyOp &copyop) {
    IfcTypeProduct::copy(obj, copyop);
    setConstructionType(obj.m_constructionType);
    setOperationType(obj.m_operationType);
    setParameterTakesPrecedence(obj.m_parameterTakesPrecedence);
    setSizeable(obj.m_sizeable);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWindowStyle::s_type("IfcWindowStyle");
