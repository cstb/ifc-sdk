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

#include "ifc2x3/IfcBridgeStructureElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCivilStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBridgeStructureElement::IfcBridgeStructureElement(Step::Id id, Step::SPFData *args) : IfcCivilStructureElement(id, args) {
    m_structureIndicator = IfcBridgeStructureIndicator_UNSET;
}

IfcBridgeStructureElement::~IfcBridgeStructureElement() {
}

bool IfcBridgeStructureElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridgeStructureElement(this);
}

const std::string &IfcBridgeStructureElement::type() {
    return IfcBridgeStructureElement::s_type.getName();
}

Step::ClassType IfcBridgeStructureElement::getClassType() {
    return IfcBridgeStructureElement::s_type;
}

Step::ClassType IfcBridgeStructureElement::getType() const {
    return IfcBridgeStructureElement::s_type;
}

bool IfcBridgeStructureElement::isOfType(Step::ClassType t) {
    return IfcBridgeStructureElement::s_type == t ? true : IfcCivilStructureElement::isOfType(t);
}

IfcBridgeStructureIndicator IfcBridgeStructureElement::getStructureIndicator() {
    if (Step::BaseObject::inited()) {
        return m_structureIndicator;
    }
    else {
        return IfcBridgeStructureIndicator_UNSET;
    }
}

void IfcBridgeStructureElement::setStructureIndicator(IfcBridgeStructureIndicator value) {
    m_structureIndicator = value;
}

void IfcBridgeStructureElement::release() {
    IfcCivilStructureElement::release();
}

bool IfcBridgeStructureElement::init() {
    bool status = IfcCivilStructureElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_structureIndicator = IfcBridgeStructureIndicator_UNSET;
    }
    else {
        if (arg == ".COMPOSITE.") {
            m_structureIndicator = IfcBridgeStructureIndicator_COMPOSITE;
        }
        else if (arg == ".COATED.") {
            m_structureIndicator = IfcBridgeStructureIndicator_COATED;
        }
        else if (arg == ".HOMOGENEOUS.") {
            m_structureIndicator = IfcBridgeStructureIndicator_HOMOGENEOUS;
        }
        else if (arg == ".OTHER.") {
            m_structureIndicator = IfcBridgeStructureIndicator_OTHER;
        }
    }
    return true;
}

void IfcBridgeStructureElement::copy(const IfcBridgeStructureElement &obj, const CopyOp &copyop) {
    IfcCivilStructureElement::copy(obj, copyop);
    setStructureIndicator(obj.m_structureIndicator);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridgeStructureElement::s_type("IfcBridgeStructureElement");
