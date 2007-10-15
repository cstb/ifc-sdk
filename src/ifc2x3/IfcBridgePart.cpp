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

#include "ifc2x3/IfcBridgePart.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBridgeStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBridgePart::IfcBridgePart(Step::Id id, Step::SPFData *args) : IfcBridgeStructureElement(id, args) {
    m_strutureElementType = IfcBridgeStructureElementType_UNSET;
    m_technoElementType = IfcBridgeTechnologicalElementType_UNSET;
}

IfcBridgePart::~IfcBridgePart() {
}

bool IfcBridgePart::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridgePart(this);
}

const std::string &IfcBridgePart::type() {
    return IfcBridgePart::s_type.getName();
}

Step::ClassType IfcBridgePart::getClassType() {
    return IfcBridgePart::s_type;
}

Step::ClassType IfcBridgePart::getType() const {
    return IfcBridgePart::s_type;
}

bool IfcBridgePart::isOfType(Step::ClassType t) {
    return IfcBridgePart::s_type == t ? true : IfcBridgeStructureElement::isOfType(t);
}

IfcBridgeStructureElementType IfcBridgePart::getStrutureElementType() {
    if (Step::BaseObject::inited()) {
        return m_strutureElementType;
    }
    else {
        return IfcBridgeStructureElementType_UNSET;
    }
}

void IfcBridgePart::setStrutureElementType(IfcBridgeStructureElementType value) {
    m_strutureElementType = value;
}

IfcBridgeTechnologicalElementType IfcBridgePart::getTechnoElementType() {
    if (Step::BaseObject::inited()) {
        return m_technoElementType;
    }
    else {
        return IfcBridgeTechnologicalElementType_UNSET;
    }
}

void IfcBridgePart::setTechnoElementType(IfcBridgeTechnologicalElementType value) {
    m_technoElementType = value;
}

void IfcBridgePart::release() {
    IfcBridgeStructureElement::release();
}

bool IfcBridgePart::init() {
    bool status = IfcBridgeStructureElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_strutureElementType = IfcBridgeStructureElementType_UNSET;
    }
    else {
        if (arg == ".DECK.") {
            m_strutureElementType = IfcBridgeStructureElementType_DECK;
        }
        else if (arg == ".PIER.") {
            m_strutureElementType = IfcBridgeStructureElementType_PIER;
        }
        else if (arg == ".SMALL_PIER.") {
            m_strutureElementType = IfcBridgeStructureElementType_SMALL_PIER;
        }
        else if (arg == ".PYLON.") {
            m_strutureElementType = IfcBridgeStructureElementType_PYLON;
        }
        else if (arg == ".ARCH.") {
            m_strutureElementType = IfcBridgeStructureElementType_ARCH;
        }
        else if (arg == ".LAUNCHING_NOSE.") {
            m_strutureElementType = IfcBridgeStructureElementType_LAUNCHING_NOSE;
        }
        else if (arg == ".TEMPORARY_BENT.") {
            m_strutureElementType = IfcBridgeStructureElementType_TEMPORARY_BENT;
        }
        else if (arg == ".TRANSVERSE_GIRDER.") {
            m_strutureElementType = IfcBridgeStructureElementType_TRANSVERSE_GIRDER;
        }
        else if (arg == ".STRUT.") {
            m_strutureElementType = IfcBridgeStructureElementType_STRUT;
        }
        else if (arg == ".COUNTER_STRUT.") {
            m_strutureElementType = IfcBridgeStructureElementType_COUNTER_STRUT;
        }
        else if (arg == ".CABLE.") {
            m_strutureElementType = IfcBridgeStructureElementType_CABLE;
        }
        else if (arg == ".SUSPENDED_TENDON.") {
            m_strutureElementType = IfcBridgeStructureElementType_SUSPENDED_TENDON;
        }
        else if (arg == ".SUSPENDER.") {
            m_strutureElementType = IfcBridgeStructureElementType_SUSPENDER;
        }
        else if (arg == ".MOBILE_FALSEWORK.") {
            m_strutureElementType = IfcBridgeStructureElementType_MOBILE_FALSEWORK;
        }
        else if (arg == ".STAYING_MAST.") {
            m_strutureElementType = IfcBridgeStructureElementType_STAYING_MAST;
        }
        else if (arg == ".LAUNCHING_BEAM.") {
            m_strutureElementType = IfcBridgeStructureElementType_LAUNCHING_BEAM;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_technoElementType = IfcBridgeTechnologicalElementType_UNSET;
    }
    else {
        if (arg == ".UNICELLULAR_MONO_BOX_GIRDER.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_UNICELLULAR_MONO_BOX_GIRDER;
        }
        else if (arg == ".MULTICELLULAR_MONO_BOX_GIRDER.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_MULTICELLULAR_MONO_BOX_GIRDER;
        }
        else if (arg == ".UNICELLULAR_MULTI_BOX_GIRDER.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_UNICELLULAR_MULTI_BOX_GIRDER;
        }
        else if (arg == ".MULTICELLULAR_MULTI_BOX_GIRDER.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_MULTICELLULAR_MULTI_BOX_GIRDER;
        }
        else if (arg == ".SOLID_SLAB.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_SOLID_SLAB;
        }
        else if (arg == ".HOLLOW_SLAB.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_HOLLOW_SLAB;
        }
        else if (arg == ".SLAB_WITH_BROAD_CANTILEVER.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_SLAB_WITH_BROAD_CANTILEVER;
        }
        else if (arg == ".DOUBLE_BEAM_RIBBED_SLAB.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_DOUBLE_BEAM_RIBBED_SLAB;
        }
        else if (arg == ".MULTI_BEAM_RIBBED_SLAB.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_MULTI_BEAM_RIBBED_SLAB;
        }
        else if (arg == ".MASSIVE_SECTION_ELEMENT.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_MASSIVE_SECTION_ELEMENT;
        }
        else if (arg == ".HOLLOW_SECTION_ELEMENT.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_HOLLOW_SECTION_ELEMENT;
        }
        else if (arg == ".MARKETED_SECTION_GIRDER.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_MARKETED_SECTION_GIRDER;
        }
        else if (arg == ".RE_ASSEMBLED_SECTION_GIRDER.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_RE_ASSEMBLED_SECTION_GIRDER;
        }
        else if (arg == ".TRUSS.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_TRUSS;
        }
        else if (arg == ".LADDER_OR_VIERENDEEL.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_LADDER_OR_VIERENDEEL;
        }
        else if (arg == ".BOW_STRING.") {
            m_technoElementType = IfcBridgeTechnologicalElementType_BOW_STRING;
        }
    }
    return true;
}

void IfcBridgePart::copy(const IfcBridgePart &obj, const CopyOp &copyop) {
    IfcBridgeStructureElement::copy(obj, copyop);
    setStrutureElementType(obj.m_strutureElementType);
    setTechnoElementType(obj.m_technoElementType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridgePart::s_type("IfcBridgePart");
