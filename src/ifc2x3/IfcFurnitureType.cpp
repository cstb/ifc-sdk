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

#include "ifc2x3/IfcFurnitureType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFurnishingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFurnitureType::IfcFurnitureType(Step::Id id, Step::SPFData *args) : IfcFurnishingElementType(id, args) {
    m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
}

IfcFurnitureType::~IfcFurnitureType() {
}

bool IfcFurnitureType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFurnitureType(this);
}

const std::string &IfcFurnitureType::type() {
    return IfcFurnitureType::s_type.getName();
}

Step::ClassType IfcFurnitureType::getClassType() {
    return IfcFurnitureType::s_type;
}

Step::ClassType IfcFurnitureType::getType() const {
    return IfcFurnitureType::s_type;
}

bool IfcFurnitureType::isOfType(Step::ClassType t) {
    return IfcFurnitureType::s_type == t ? true : IfcFurnishingElementType::isOfType(t);
}

IfcAssemblyPlaceEnum IfcFurnitureType::getAssemblyPlace() {
    if (Step::BaseObject::inited()) {
        return m_assemblyPlace;
    }
    else {
        return IfcAssemblyPlaceEnum_UNSET;
    }
}

void IfcFurnitureType::setAssemblyPlace(IfcAssemblyPlaceEnum value) {
    m_assemblyPlace = value;
}

void IfcFurnitureType::release() {
    IfcFurnishingElementType::release();
}

bool IfcFurnitureType::init() {
    bool status = IfcFurnishingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
    }
    else {
        if (arg == ".SITE.") {
            m_assemblyPlace = IfcAssemblyPlaceEnum_SITE;
        }
        else if (arg == ".FACTORY.") {
            m_assemblyPlace = IfcAssemblyPlaceEnum_FACTORY;
        }
        else if (arg == ".NOTDEFINED.") {
            m_assemblyPlace = IfcAssemblyPlaceEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFurnitureType::copy(const IfcFurnitureType &obj, const CopyOp &copyop) {
    IfcFurnishingElementType::copy(obj, copyop);
    setAssemblyPlace(obj.m_assemblyPlace);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFurnitureType::s_type("IfcFurnitureType");
