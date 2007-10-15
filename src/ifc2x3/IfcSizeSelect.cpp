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

#include "ifc2x3/IfcSizeSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSizeSelect::IfcSizeSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcSizeSelect::IfcSizeSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcSizeSelect::~IfcSizeSelect() {
    deleteUnion();
}

bool IfcSizeSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSizeSelect(this);
}

bool IfcSizeSelect::init() {
    return false;
}

const std::string &IfcSizeSelect::type() {
    return IfcSizeSelect::s_type.getName();
}

Step::ClassType IfcSizeSelect::getClassType() {
    return IfcSizeSelect::s_type;
}

Step::ClassType IfcSizeSelect::getType() const {
    return IfcSizeSelect::s_type;
}

bool IfcSizeSelect::isOfType(Step::ClassType t) {
    return IfcSizeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSizeSelect::copy(const IfcSizeSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCRATIOMEASURE:
        setIfcRatioMeasure(obj.m_IfcSizeSelect_union.m_IfcRatioMeasure);
        break;
    case IFCLENGTHMEASURE:
        setIfcLengthMeasure(obj.m_IfcSizeSelect_union.m_IfcLengthMeasure);
        break;
    case IFCDESCRIPTIVEMEASURE:
        setIfcDescriptiveMeasure(*obj.m_IfcSizeSelect_union.m_IfcDescriptiveMeasure);
        break;
    case IFCPOSITIVELENGTHMEASURE:
        setIfcPositiveLengthMeasure(obj.m_IfcSizeSelect_union.m_IfcPositiveLengthMeasure);
        break;
    case IFCNORMALISEDRATIOMEASURE:
        setIfcNormalisedRatioMeasure(obj.m_IfcSizeSelect_union.m_IfcNormalisedRatioMeasure);
        break;
    case IFCPOSITIVERATIOMEASURE:
        setIfcPositiveRatioMeasure(obj.m_IfcSizeSelect_union.m_IfcPositiveRatioMeasure);
        break;
        }
}

char *IfcSizeSelect::currentTypeName() {
    switch(m_type) {
    case IFCRATIOMEASURE:
        return "IfcRatioMeasure";
        break;
    case IFCLENGTHMEASURE:
        return "IfcLengthMeasure";
        break;
    case IFCDESCRIPTIVEMEASURE:
        return "IfcDescriptiveMeasure";
        break;
    case IFCPOSITIVELENGTHMEASURE:
        return "IfcPositiveLengthMeasure";
        break;
    case IFCNORMALISEDRATIOMEASURE:
        return "IfcNormalisedRatioMeasure";
        break;
    case IFCPOSITIVERATIOMEASURE:
        return "IfcPositiveRatioMeasure";
        break;
    default:
        return "UNSET";
    }
}

IfcSizeSelect::IfcSizeSelect_select IfcSizeSelect::currentType() {
    return m_type;
}

void IfcSizeSelect::deleteUnion() {
    switch(m_type) {
    case IFCDESCRIPTIVEMEASURE:
        delete m_IfcSizeSelect_union.m_IfcDescriptiveMeasure;
        break;
        }
    m_type = UNSET;
}

IfcRatioMeasure IfcSizeSelect::getIfcRatioMeasure() {
    return m_IfcSizeSelect_union.m_IfcRatioMeasure;
}

void IfcSizeSelect::setIfcRatioMeasure(IfcRatioMeasure value) {
    deleteUnion();
    m_IfcSizeSelect_union.m_IfcRatioMeasure = value;
    m_type = IFCRATIOMEASURE;
}

IfcLengthMeasure IfcSizeSelect::getIfcLengthMeasure() {
    return m_IfcSizeSelect_union.m_IfcLengthMeasure;
}

void IfcSizeSelect::setIfcLengthMeasure(IfcLengthMeasure value) {
    deleteUnion();
    m_IfcSizeSelect_union.m_IfcLengthMeasure = value;
    m_type = IFCLENGTHMEASURE;
}

IfcDescriptiveMeasure IfcSizeSelect::getIfcDescriptiveMeasure() {
    return *m_IfcSizeSelect_union.m_IfcDescriptiveMeasure;
}

void IfcSizeSelect::setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value) {
    deleteUnion();
    m_IfcSizeSelect_union.m_IfcDescriptiveMeasure = new IfcDescriptiveMeasure(value);
    m_type = IFCDESCRIPTIVEMEASURE;
}

IfcPositiveLengthMeasure IfcSizeSelect::getIfcPositiveLengthMeasure() {
    return m_IfcSizeSelect_union.m_IfcPositiveLengthMeasure;
}

void IfcSizeSelect::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
    deleteUnion();
    m_IfcSizeSelect_union.m_IfcPositiveLengthMeasure = value;
    m_type = IFCPOSITIVELENGTHMEASURE;
}

IfcNormalisedRatioMeasure IfcSizeSelect::getIfcNormalisedRatioMeasure() {
    return m_IfcSizeSelect_union.m_IfcNormalisedRatioMeasure;
}

void IfcSizeSelect::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value) {
    deleteUnion();
    m_IfcSizeSelect_union.m_IfcNormalisedRatioMeasure = value;
    m_type = IFCNORMALISEDRATIOMEASURE;
}

IfcPositiveRatioMeasure IfcSizeSelect::getIfcPositiveRatioMeasure() {
    return m_IfcSizeSelect_union.m_IfcPositiveRatioMeasure;
}

void IfcSizeSelect::setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value) {
    deleteUnion();
    m_IfcSizeSelect_union.m_IfcPositiveRatioMeasure = value;
    m_type = IFCPOSITIVERATIOMEASURE;
}

void IfcSizeSelect::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcSizeSelect::s_type("IfcSizeSelect");
