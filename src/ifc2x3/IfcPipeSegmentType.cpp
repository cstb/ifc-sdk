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

#include "ifc2x3/IfcPipeSegmentType.h"

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

IfcPipeSegmentType::IfcPipeSegmentType(Step::Id id, Step::SPFData *args) : IfcFlowSegmentType(id, args) {
    m_predefinedType = IfcPipeSegmentTypeEnum_UNSET;
}

IfcPipeSegmentType::~IfcPipeSegmentType() {
}

bool IfcPipeSegmentType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPipeSegmentType(this);
}

const std::string &IfcPipeSegmentType::type() {
    return IfcPipeSegmentType::s_type.getName();
}

Step::ClassType IfcPipeSegmentType::getClassType() {
    return IfcPipeSegmentType::s_type;
}

Step::ClassType IfcPipeSegmentType::getType() const {
    return IfcPipeSegmentType::s_type;
}

bool IfcPipeSegmentType::isOfType(Step::ClassType t) {
    return IfcPipeSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcPipeSegmentTypeEnum IfcPipeSegmentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPipeSegmentTypeEnum_UNSET;
    }
}

void IfcPipeSegmentType::setPredefinedType(IfcPipeSegmentTypeEnum value) {
    m_predefinedType = value;
}

void IfcPipeSegmentType::release() {
    IfcFlowSegmentType::release();
}

bool IfcPipeSegmentType::init() {
    bool status = IfcFlowSegmentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPipeSegmentTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLEXIBLESEGMENT.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_FLEXIBLESEGMENT;
        }
        else if (arg == ".RIGIDSEGMENT.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_RIGIDSEGMENT;
        }
        else if (arg == ".GUTTER.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_GUTTER;
        }
        else if (arg == ".SPOOL.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_SPOOL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPipeSegmentType::copy(const IfcPipeSegmentType &obj, const CopyOp &copyop) {
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPipeSegmentType::s_type("IfcPipeSegmentType");
