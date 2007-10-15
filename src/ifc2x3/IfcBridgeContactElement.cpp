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

#include "ifc2x3/IfcBridgeContactElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCivilElementPart.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBridgeContactElement::IfcBridgeContactElement(Step::Id id, Step::SPFData *args) : IfcCivilElementPart(id, args) {
    m_contactType = IfcBridgeContactType_UNSET;
}

IfcBridgeContactElement::~IfcBridgeContactElement() {
}

bool IfcBridgeContactElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridgeContactElement(this);
}

const std::string &IfcBridgeContactElement::type() {
    return IfcBridgeContactElement::s_type.getName();
}

Step::ClassType IfcBridgeContactElement::getClassType() {
    return IfcBridgeContactElement::s_type;
}

Step::ClassType IfcBridgeContactElement::getType() const {
    return IfcBridgeContactElement::s_type;
}

bool IfcBridgeContactElement::isOfType(Step::ClassType t) {
    return IfcBridgeContactElement::s_type == t ? true : IfcCivilElementPart::isOfType(t);
}

IfcBridgeContactType IfcBridgeContactElement::getContactType() {
    if (Step::BaseObject::inited()) {
        return m_contactType;
    }
    else {
        return IfcBridgeContactType_UNSET;
    }
}

void IfcBridgeContactElement::setContactType(IfcBridgeContactType value) {
    m_contactType = value;
}

void IfcBridgeContactElement::release() {
    IfcCivilElementPart::release();
}

bool IfcBridgeContactElement::init() {
    bool status = IfcCivilElementPart::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contactType = IfcBridgeContactType_UNSET;
    }
    else {
        if (arg == ".GLUE.") {
            m_contactType = IfcBridgeContactType_GLUE;
        }
        else if (arg == ".RIVET.") {
            m_contactType = IfcBridgeContactType_RIVET;
        }
        else if (arg == ".CONNECTOR.") {
            m_contactType = IfcBridgeContactType_CONNECTOR;
        }
        else if (arg == ".WELD.") {
            m_contactType = IfcBridgeContactType_WELD;
        }
        else if (arg == ".RESUMPTION_OF_CONCRETE.") {
            m_contactType = IfcBridgeContactType_RESUMPTION_OF_CONCRETE;
        }
        else if (arg == ".SLIDING.") {
            m_contactType = IfcBridgeContactType_SLIDING;
        }
    }
    return true;
}

void IfcBridgeContactElement::copy(const IfcBridgeContactElement &obj, const CopyOp &copyop) {
    IfcCivilElementPart::copy(obj, copyop);
    setContactType(obj.m_contactType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridgeContactElement::s_type("IfcBridgeContactElement");
