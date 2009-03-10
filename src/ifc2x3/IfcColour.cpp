/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcColour.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourSpecification.h"
#include "ifc2x3/IfcPreDefinedColour.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcColour::IfcColour() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcColour::IfcColour(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcColour::~IfcColour() {
    deleteUnion();
}

bool IfcColour::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcColour(this);
}

bool IfcColour::init() {
    return false;
}

const std::string &IfcColour::type() const {
    return IfcColour::s_type.getName();
}

const Step::ClassType &IfcColour::getClassType() {
    return IfcColour::s_type;
}

const Step::ClassType &IfcColour::getType() const {
    return IfcColour::s_type;
}

bool IfcColour::isOfType(const Step::ClassType &t) const {
    return IfcColour::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcColour::copy(const IfcColour &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCOLOURSPECIFICATION:
        setIfcColourSpecification((IfcColourSpecification *) (copyop(obj.m_IfcColour_union.m_IfcColourSpecification)));
        break;
    case IFCPREDEFINEDCOLOUR:
        setIfcPreDefinedColour((IfcPreDefinedColour *) (copyop(obj.m_IfcColour_union.m_IfcPreDefinedColour)));
        break;
        }
}

std::string IfcColour::currentTypeName() const {
    switch(m_type) {
    case IFCCOLOURSPECIFICATION:
        return "IfcColourSpecification";
        break;
    case IFCPREDEFINEDCOLOUR:
        return "IfcPreDefinedColour";
        break;
    default:
        return "UNSET";
    }
}

IfcColour::IfcColour_select IfcColour::currentType() const {
    return m_type;
}

void IfcColour::deleteUnion() {
    switch(m_type) {
    case IFCCOLOURSPECIFICATION:
        m_IfcColour_union.m_IfcColourSpecification->unref();
        break;
    case IFCPREDEFINEDCOLOUR:
        m_IfcColour_union.m_IfcPreDefinedColour->unref();
        break;
        }
    m_type = UNSET;
}

IfcColourSpecification *IfcColour::getIfcColourSpecification() const {
    if (m_type == IFCCOLOURSPECIFICATION) {
        return m_IfcColour_union.m_IfcColourSpecification;
    }
    else {
        return NULL;
    }
}

void IfcColour::setIfcColourSpecification(IfcColourSpecification *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcColour_union.m_IfcColourSpecification = value;
    if (value) {
        value->ref();
        m_type = IFCCOLOURSPECIFICATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcColour::getIfcPreDefinedColour() const {
    if (m_type == IFCPREDEFINEDCOLOUR) {
        return m_IfcColour_union.m_IfcPreDefinedColour;
    }
    else {
        return NULL;
    }
}

void IfcColour::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcColour_union.m_IfcPreDefinedColour = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDCOLOUR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDCOLOUR;
}

void IfcColour::set(Step::BaseObject *v) {
    if (v->isOfType(IfcColourSpecification::getClassType())) {
        setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
    }
    else if (v->isOfType(IfcPreDefinedColour::getClassType())) {
        setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcColour::s_type("IfcColour");
