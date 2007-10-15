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

#include "ifc2x3/IfcWallType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcWallType::IfcWallType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcWallTypeEnum_UNSET;
}

IfcWallType::~IfcWallType() {
}

bool IfcWallType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWallType(this);
}

const std::string &IfcWallType::type() {
    return IfcWallType::s_type.getName();
}

Step::ClassType IfcWallType::getClassType() {
    return IfcWallType::s_type;
}

Step::ClassType IfcWallType::getType() const {
    return IfcWallType::s_type;
}

bool IfcWallType::isOfType(Step::ClassType t) {
    return IfcWallType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcWallTypeEnum IfcWallType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcWallTypeEnum_UNSET;
    }
}

void IfcWallType::setPredefinedType(IfcWallTypeEnum value) {
    m_predefinedType = value;
}

void IfcWallType::release() {
    IfcBuildingElementType::release();
}

bool IfcWallType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcWallTypeEnum_UNSET;
    }
    else {
        if (arg == ".STANDARD.") {
            m_predefinedType = IfcWallTypeEnum_STANDARD;
        }
        else if (arg == ".POLYGONAL.") {
            m_predefinedType = IfcWallTypeEnum_POLYGONAL;
        }
        else if (arg == ".SHEAR.") {
            m_predefinedType = IfcWallTypeEnum_SHEAR;
        }
        else if (arg == ".ELEMENTEDWALL.") {
            m_predefinedType = IfcWallTypeEnum_ELEMENTEDWALL;
        }
        else if (arg == ".PLUMBINGWALL.") {
            m_predefinedType = IfcWallTypeEnum_PLUMBINGWALL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcWallTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcWallTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcWallType::copy(const IfcWallType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWallType::s_type("IfcWallType");
