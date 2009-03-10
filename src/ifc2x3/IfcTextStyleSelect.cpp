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

#include "ifc2x3/IfcTextStyleSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTextStyleTextModel.h"
#include "ifc2x3/IfcTextStyleWithBoxCharacteristics.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTextStyleSelect::IfcTextStyleSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcTextStyleSelect::IfcTextStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcTextStyleSelect::~IfcTextStyleSelect() {
    deleteUnion();
}

bool IfcTextStyleSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextStyleSelect(this);
}

bool IfcTextStyleSelect::init() {
    return false;
}

const std::string &IfcTextStyleSelect::type() const {
    return IfcTextStyleSelect::s_type.getName();
}

const Step::ClassType &IfcTextStyleSelect::getClassType() {
    return IfcTextStyleSelect::s_type;
}

const Step::ClassType &IfcTextStyleSelect::getType() const {
    return IfcTextStyleSelect::s_type;
}

bool IfcTextStyleSelect::isOfType(const Step::ClassType &t) const {
    return IfcTextStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcTextStyleSelect::copy(const IfcTextStyleSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCTEXTSTYLEWITHBOXCHARACTERISTICS:
        setIfcTextStyleWithBoxCharacteristics((IfcTextStyleWithBoxCharacteristics *) (copyop(obj.m_IfcTextStyleSelect_union.m_IfcTextStyleWithBoxCharacteristics)));
        break;
    case IFCTEXTSTYLETEXTMODEL:
        setIfcTextStyleTextModel((IfcTextStyleTextModel *) (copyop(obj.m_IfcTextStyleSelect_union.m_IfcTextStyleTextModel)));
        break;
        }
}

std::string IfcTextStyleSelect::currentTypeName() const {
    switch(m_type) {
    case IFCTEXTSTYLEWITHBOXCHARACTERISTICS:
        return "IfcTextStyleWithBoxCharacteristics";
        break;
    case IFCTEXTSTYLETEXTMODEL:
        return "IfcTextStyleTextModel";
        break;
    default:
        return "UNSET";
    }
}

IfcTextStyleSelect::IfcTextStyleSelect_select IfcTextStyleSelect::currentType() const {
    return m_type;
}

void IfcTextStyleSelect::deleteUnion() {
    switch(m_type) {
    case IFCTEXTSTYLEWITHBOXCHARACTERISTICS:
        m_IfcTextStyleSelect_union.m_IfcTextStyleWithBoxCharacteristics->unref();
        break;
    case IFCTEXTSTYLETEXTMODEL:
        m_IfcTextStyleSelect_union.m_IfcTextStyleTextModel->unref();
        break;
        }
    m_type = UNSET;
}

IfcTextStyleWithBoxCharacteristics *IfcTextStyleSelect::getIfcTextStyleWithBoxCharacteristics() const {
    if (m_type == IFCTEXTSTYLEWITHBOXCHARACTERISTICS) {
        return m_IfcTextStyleSelect_union.m_IfcTextStyleWithBoxCharacteristics;
    }
    else {
        return NULL;
    }
}

void IfcTextStyleSelect::setIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcTextStyleSelect_union.m_IfcTextStyleWithBoxCharacteristics = value;
    if (value) {
        value->ref();
        m_type = IFCTEXTSTYLEWITHBOXCHARACTERISTICS;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCTEXTSTYLEWITHBOXCHARACTERISTICS;
}

IfcTextStyleTextModel *IfcTextStyleSelect::getIfcTextStyleTextModel() const {
    if (m_type == IFCTEXTSTYLETEXTMODEL) {
        return m_IfcTextStyleSelect_union.m_IfcTextStyleTextModel;
    }
    else {
        return NULL;
    }
}

void IfcTextStyleSelect::setIfcTextStyleTextModel(IfcTextStyleTextModel *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcTextStyleSelect_union.m_IfcTextStyleTextModel = value;
    if (value) {
        value->ref();
        m_type = IFCTEXTSTYLETEXTMODEL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCTEXTSTYLETEXTMODEL;
}

void IfcTextStyleSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcTextStyleWithBoxCharacteristics::getClassType())) {
        setIfcTextStyleWithBoxCharacteristics(static_cast< IfcTextStyleWithBoxCharacteristics* > (v));
    }
    else if (v->isOfType(IfcTextStyleTextModel::getClassType())) {
        setIfcTextStyleTextModel(static_cast< IfcTextStyleTextModel* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleSelect::s_type("IfcTextStyleSelect");
