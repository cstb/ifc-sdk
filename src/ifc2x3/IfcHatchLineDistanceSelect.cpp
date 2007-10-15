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

#include "ifc2x3/IfcHatchLineDistanceSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOneDirectionRepeatFactor.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcHatchLineDistanceSelect::~IfcHatchLineDistanceSelect() {
    deleteUnion();
}

bool IfcHatchLineDistanceSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcHatchLineDistanceSelect(this);
}

bool IfcHatchLineDistanceSelect::init() {
    return false;
}

const std::string &IfcHatchLineDistanceSelect::type() {
    return IfcHatchLineDistanceSelect::s_type.getName();
}

Step::ClassType IfcHatchLineDistanceSelect::getClassType() {
    return IfcHatchLineDistanceSelect::s_type;
}

Step::ClassType IfcHatchLineDistanceSelect::getType() const {
    return IfcHatchLineDistanceSelect::s_type;
}

bool IfcHatchLineDistanceSelect::isOfType(Step::ClassType t) {
    return IfcHatchLineDistanceSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcHatchLineDistanceSelect::copy(const IfcHatchLineDistanceSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCONEDIRECTIONREPEATFACTOR:
        setIfcOneDirectionRepeatFactor(copyop(obj.m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor));
        break;
    case IFCPOSITIVELENGTHMEASURE:
        setIfcPositiveLengthMeasure(obj.m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure);
        break;
        }
}

char *IfcHatchLineDistanceSelect::currentTypeName() {
    switch(m_type) {
    case IFCONEDIRECTIONREPEATFACTOR:
        return "IfcOneDirectionRepeatFactor";
        break;
    case IFCPOSITIVELENGTHMEASURE:
        return "IfcPositiveLengthMeasure";
        break;
    default:
        return "UNSET";
    }
}

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect_select IfcHatchLineDistanceSelect::currentType() {
    return m_type;
}

void IfcHatchLineDistanceSelect::deleteUnion() {
    switch(m_type) {
    case IFCONEDIRECTIONREPEATFACTOR:
        m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor->unref();
        break;
        }
    m_type = UNSET;
}

IfcOneDirectionRepeatFactor *IfcHatchLineDistanceSelect::getIfcOneDirectionRepeatFactor() {
    return m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor;
}

void IfcHatchLineDistanceSelect::setIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor = value;
    if (value) {
        value->ref();
        m_type = IFCONEDIRECTIONREPEATFACTOR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCONEDIRECTIONREPEATFACTOR;
}

IfcPositiveLengthMeasure IfcHatchLineDistanceSelect::getIfcPositiveLengthMeasure() {
    return m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure;
}

void IfcHatchLineDistanceSelect::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
    deleteUnion();
    m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure = value;
    m_type = IFCPOSITIVELENGTHMEASURE;
}

void IfcHatchLineDistanceSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcOneDirectionRepeatFactor::getClassType())) {
        setIfcOneDirectionRepeatFactor(static_cast< IfcOneDirectionRepeatFactor* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcHatchLineDistanceSelect::s_type("IfcHatchLineDistanceSelect");
