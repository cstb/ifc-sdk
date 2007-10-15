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

#include "ifc2x3/IfcDuctSegmentType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowSegmentType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDuctSegmentType::IfcDuctSegmentType(Step::Id id, Step::SPFData *args) : IfcFlowSegmentType(id, args) {
    m_predefinedType = IfcDuctSegmentTypeEnum_UNSET;
}

IfcDuctSegmentType::~IfcDuctSegmentType() {
}

bool IfcDuctSegmentType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDuctSegmentType(this);
}

const std::string &IfcDuctSegmentType::type() {
    return IfcDuctSegmentType::s_type.getName();
}

Step::ClassType IfcDuctSegmentType::getClassType() {
    return IfcDuctSegmentType::s_type;
}

Step::ClassType IfcDuctSegmentType::getType() const {
    return IfcDuctSegmentType::s_type;
}

bool IfcDuctSegmentType::isOfType(Step::ClassType t) {
    return IfcDuctSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcDuctSegmentTypeEnum IfcDuctSegmentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcDuctSegmentTypeEnum_UNSET;
    }
}

void IfcDuctSegmentType::setPredefinedType(IfcDuctSegmentTypeEnum value) {
    m_predefinedType = value;
}

void IfcDuctSegmentType::release() {
    IfcFlowSegmentType::release();
}

bool IfcDuctSegmentType::init() {
    bool status = IfcFlowSegmentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcDuctSegmentTypeEnum_UNSET;
    }
    else {
        if (arg == ".RIGIDSEGMENT.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_RIGIDSEGMENT;
        }
        else if (arg == ".FLEXIBLESEGMENT.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_FLEXIBLESEGMENT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDuctSegmentType::copy(const IfcDuctSegmentType &obj, const CopyOp &copyop) {
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDuctSegmentType::s_type("IfcDuctSegmentType");
