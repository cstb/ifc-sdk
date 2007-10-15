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

#include "ifc2x3/IfcFooting.h"

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

IfcFooting::IfcFooting(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_predefinedType = IfcFootingTypeEnum_UNSET;
}

IfcFooting::~IfcFooting() {
}

bool IfcFooting::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFooting(this);
}

const std::string &IfcFooting::type() {
    return IfcFooting::s_type.getName();
}

Step::ClassType IfcFooting::getClassType() {
    return IfcFooting::s_type;
}

Step::ClassType IfcFooting::getType() const {
    return IfcFooting::s_type;
}

bool IfcFooting::isOfType(Step::ClassType t) {
    return IfcFooting::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcFootingTypeEnum IfcFooting::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcFootingTypeEnum_UNSET;
    }
}

void IfcFooting::setPredefinedType(IfcFootingTypeEnum value) {
    m_predefinedType = value;
}

void IfcFooting::release() {
    IfcBuildingElement::release();
}

bool IfcFooting::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcFootingTypeEnum_UNSET;
    }
    else {
        if (arg == ".FOOTING_BEAM.") {
            m_predefinedType = IfcFootingTypeEnum_FOOTING_BEAM;
        }
        else if (arg == ".PAD_FOOTING.") {
            m_predefinedType = IfcFootingTypeEnum_PAD_FOOTING;
        }
        else if (arg == ".PILE_CAP.") {
            m_predefinedType = IfcFootingTypeEnum_PILE_CAP;
        }
        else if (arg == ".STRIP_FOOTING.") {
            m_predefinedType = IfcFootingTypeEnum_STRIP_FOOTING;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcFootingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcFootingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFooting::copy(const IfcFooting &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFooting::s_type("IfcFooting");
