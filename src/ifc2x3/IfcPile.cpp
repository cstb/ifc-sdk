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

#include "ifc2x3/IfcPile.h"

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

IfcPile::IfcPile(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_predefinedType = IfcPileTypeEnum_UNSET;
    m_constructionType = IfcPileConstructionEnum_UNSET;
}

IfcPile::~IfcPile() {
}

bool IfcPile::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPile(this);
}

const std::string &IfcPile::type() {
    return IfcPile::s_type.getName();
}

Step::ClassType IfcPile::getClassType() {
    return IfcPile::s_type;
}

Step::ClassType IfcPile::getType() const {
    return IfcPile::s_type;
}

bool IfcPile::isOfType(Step::ClassType t) {
    return IfcPile::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPileTypeEnum IfcPile::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPileTypeEnum_UNSET;
    }
}

void IfcPile::setPredefinedType(IfcPileTypeEnum value) {
    m_predefinedType = value;
}

IfcPileConstructionEnum IfcPile::getConstructionType() {
    if (Step::BaseObject::inited()) {
        return m_constructionType;
    }
    else {
        return IfcPileConstructionEnum_UNSET;
    }
}

void IfcPile::setConstructionType(IfcPileConstructionEnum value) {
    m_constructionType = value;
}

void IfcPile::release() {
    IfcBuildingElement::release();
}

bool IfcPile::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPileTypeEnum_UNSET;
    }
    else {
        if (arg == ".COHESION.") {
            m_predefinedType = IfcPileTypeEnum_COHESION;
        }
        else if (arg == ".FRICTION.") {
            m_predefinedType = IfcPileTypeEnum_FRICTION;
        }
        else if (arg == ".SUPPORT.") {
            m_predefinedType = IfcPileTypeEnum_SUPPORT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPileTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPileTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_constructionType = IfcPileConstructionEnum_UNSET;
    }
    else {
        if (arg == ".CAST_IN_PLACE.") {
            m_constructionType = IfcPileConstructionEnum_CAST_IN_PLACE;
        }
        else if (arg == ".COMPOSITE.") {
            m_constructionType = IfcPileConstructionEnum_COMPOSITE;
        }
        else if (arg == ".PRECAST_CONCRETE.") {
            m_constructionType = IfcPileConstructionEnum_PRECAST_CONCRETE;
        }
        else if (arg == ".PREFAB_STEEL.") {
            m_constructionType = IfcPileConstructionEnum_PREFAB_STEEL;
        }
        else if (arg == ".USERDEFINED.") {
            m_constructionType = IfcPileConstructionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_constructionType = IfcPileConstructionEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPile::copy(const IfcPile &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setConstructionType(obj.m_constructionType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPile::s_type("IfcPile");
