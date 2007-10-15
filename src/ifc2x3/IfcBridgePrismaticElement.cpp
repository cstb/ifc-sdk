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

#include "ifc2x3/IfcBridgePrismaticElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBridgeElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBridgePrismaticElement::IfcBridgePrismaticElement(Step::Id id, Step::SPFData *args) : IfcBridgeElement(id, args) {
    m_predefinedType = IfcBridgePrismaticElementType_UNSET;
}

IfcBridgePrismaticElement::~IfcBridgePrismaticElement() {
}

bool IfcBridgePrismaticElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBridgePrismaticElement(this);
}

const std::string &IfcBridgePrismaticElement::type() {
    return IfcBridgePrismaticElement::s_type.getName();
}

Step::ClassType IfcBridgePrismaticElement::getClassType() {
    return IfcBridgePrismaticElement::s_type;
}

Step::ClassType IfcBridgePrismaticElement::getType() const {
    return IfcBridgePrismaticElement::s_type;
}

bool IfcBridgePrismaticElement::isOfType(Step::ClassType t) {
    return IfcBridgePrismaticElement::s_type == t ? true : IfcBridgeElement::isOfType(t);
}

IfcBridgePrismaticElementType IfcBridgePrismaticElement::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcBridgePrismaticElementType_UNSET;
    }
}

void IfcBridgePrismaticElement::setPredefinedType(IfcBridgePrismaticElementType value) {
    m_predefinedType = value;
}

void IfcBridgePrismaticElement::release() {
    IfcBridgeElement::release();
}

bool IfcBridgePrismaticElement::init() {
    bool status = IfcBridgeElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcBridgePrismaticElementType_UNSET;
    }
    else {
        if (arg == ".UNICELLULAR_MONO_BOX_GIRDER.") {
            m_predefinedType = IfcBridgePrismaticElementType_UNICELLULAR_MONO_BOX_GIRDER;
        }
        else if (arg == ".MULTICELLULAR_MONO_BOX_GIRDER.") {
            m_predefinedType = IfcBridgePrismaticElementType_MULTICELLULAR_MONO_BOX_GIRDER;
        }
        else if (arg == ".UNICELLULAR_MULTI_BOX_GIRDER.") {
            m_predefinedType = IfcBridgePrismaticElementType_UNICELLULAR_MULTI_BOX_GIRDER;
        }
        else if (arg == ".MULTICELLULAR_MULTI_BOX_GIRDER.") {
            m_predefinedType = IfcBridgePrismaticElementType_MULTICELLULAR_MULTI_BOX_GIRDER;
        }
        else if (arg == ".DOUBLE_BEAM_RIBBED_SLAB.") {
            m_predefinedType = IfcBridgePrismaticElementType_DOUBLE_BEAM_RIBBED_SLAB;
        }
        else if (arg == ".MULTI_BEAM_RIBBED_SLAB.") {
            m_predefinedType = IfcBridgePrismaticElementType_MULTI_BEAM_RIBBED_SLAB;
        }
        else if (arg == ".MASSIVE_SECTION_ELEMENT.") {
            m_predefinedType = IfcBridgePrismaticElementType_MASSIVE_SECTION_ELEMENT;
        }
        else if (arg == ".HOLLOW_SECTION_ELEMENT.") {
            m_predefinedType = IfcBridgePrismaticElementType_HOLLOW_SECTION_ELEMENT;
        }
        else if (arg == ".SOLID_SLAB.") {
            m_predefinedType = IfcBridgePrismaticElementType_SOLID_SLAB;
        }
        else if (arg == ".HOLLOW_SLAB.") {
            m_predefinedType = IfcBridgePrismaticElementType_HOLLOW_SLAB;
        }
        else if (arg == ".SLAB_WITH_BROAD_CANTILEVER.") {
            m_predefinedType = IfcBridgePrismaticElementType_SLAB_WITH_BROAD_CANTILEVER;
        }
        else if (arg == ".MASTER_BEAM.") {
            m_predefinedType = IfcBridgePrismaticElementType_MASTER_BEAM;
        }
        else if (arg == ".LONGITUDINAL_GIRDER.") {
            m_predefinedType = IfcBridgePrismaticElementType_LONGITUDINAL_GIRDER;
        }
        else if (arg == ".RIGIDITY_BEAM.") {
            m_predefinedType = IfcBridgePrismaticElementType_RIGIDITY_BEAM;
        }
        else if (arg == ".BRACING.") {
            m_predefinedType = IfcBridgePrismaticElementType_BRACING;
        }
        else if (arg == ".UPPER_FLANGE.") {
            m_predefinedType = IfcBridgePrismaticElementType_UPPER_FLANGE;
        }
        else if (arg == ".LOWER_FLANGE.") {
            m_predefinedType = IfcBridgePrismaticElementType_LOWER_FLANGE;
        }
        else if (arg == ".UPPER_FOOTING.") {
            m_predefinedType = IfcBridgePrismaticElementType_UPPER_FOOTING;
        }
        else if (arg == ".LOWER_FOOTING.") {
            m_predefinedType = IfcBridgePrismaticElementType_LOWER_FOOTING;
        }
        else if (arg == ".WEB.") {
            m_predefinedType = IfcBridgePrismaticElementType_WEB;
        }
        else if (arg == ".FLOORING_SHEET.") {
            m_predefinedType = IfcBridgePrismaticElementType_FLOORING_SHEET;
        }
        else if (arg == ".BOTTOM_SHEET.") {
            m_predefinedType = IfcBridgePrismaticElementType_BOTTOM_SHEET;
        }
        else if (arg == ".KERB_SHEET.") {
            m_predefinedType = IfcBridgePrismaticElementType_KERB_SHEET;
        }
        else if (arg == ".CANTILEVER_SHEET.") {
            m_predefinedType = IfcBridgePrismaticElementType_CANTILEVER_SHEET;
        }
        else if (arg == ".PAVEMENT_SHEET.") {
            m_predefinedType = IfcBridgePrismaticElementType_PAVEMENT_SHEET;
        }
        else if (arg == ".AUGET.") {
            m_predefinedType = IfcBridgePrismaticElementType_AUGET;
        }
        else if (arg == ".LONGITUDINAL_WEB_STIFFENER.") {
            m_predefinedType = IfcBridgePrismaticElementType_LONGITUDINAL_WEB_STIFFENER;
        }
        else if (arg == ".RAKER.") {
            m_predefinedType = IfcBridgePrismaticElementType_RAKER;
        }
        else if (arg == ".TRANSVERSE_GIRDER.") {
            m_predefinedType = IfcBridgePrismaticElementType_TRANSVERSE_GIRDER;
        }
        else if (arg == ".DEFLECTER.") {
            m_predefinedType = IfcBridgePrismaticElementType_DEFLECTER;
        }
        else if (arg == ".TRANSVERSE_MEMBER.") {
            m_predefinedType = IfcBridgePrismaticElementType_TRANSVERSE_MEMBER;
        }
        else if (arg == ".TRANSVERSE.") {
            m_predefinedType = IfcBridgePrismaticElementType_TRANSVERSE;
        }
        else if (arg == ".DIAGONALE.") {
            m_predefinedType = IfcBridgePrismaticElementType_DIAGONALE;
        }
        else if (arg == ".JAMB.") {
            m_predefinedType = IfcBridgePrismaticElementType_JAMB;
        }
        else if (arg == ".TENSION_MEMBER.") {
            m_predefinedType = IfcBridgePrismaticElementType_TENSION_MEMBER;
        }
        else if (arg == ".BONDING_BAR.") {
            m_predefinedType = IfcBridgePrismaticElementType_BONDING_BAR;
        }
        else if (arg == ".TRANSVERSAL_STIFFENER.") {
            m_predefinedType = IfcBridgePrismaticElementType_TRANSVERSAL_STIFFENER;
        }
        else if (arg == ".STIFFENER_FOOTING.") {
            m_predefinedType = IfcBridgePrismaticElementType_STIFFENER_FOOTING;
        }
        else if (arg == ".TENDON.") {
            m_predefinedType = IfcBridgePrismaticElementType_TENDON;
        }
    }
    return true;
}

void IfcBridgePrismaticElement::copy(const IfcBridgePrismaticElement &obj, const CopyOp &copyop) {
    IfcBridgeElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBridgePrismaticElement::s_type("IfcBridgePrismaticElement");
