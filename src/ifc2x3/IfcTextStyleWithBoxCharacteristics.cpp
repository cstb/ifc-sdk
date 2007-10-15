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

#include "ifc2x3/IfcTextStyleWithBoxCharacteristics.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSizeSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTextStyleWithBoxCharacteristics::IfcTextStyleWithBoxCharacteristics(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_boxHeight = Step::getUnset(m_boxHeight);
    m_boxWidth = Step::getUnset(m_boxWidth);
    m_boxSlantAngle = Step::getUnset(m_boxSlantAngle);
    m_boxRotateAngle = Step::getUnset(m_boxRotateAngle);
    m_characterSpacing = NULL;
}

IfcTextStyleWithBoxCharacteristics::~IfcTextStyleWithBoxCharacteristics() {
}

bool IfcTextStyleWithBoxCharacteristics::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTextStyleWithBoxCharacteristics(this);
}

const std::string &IfcTextStyleWithBoxCharacteristics::type() {
    return IfcTextStyleWithBoxCharacteristics::s_type.getName();
}

Step::ClassType IfcTextStyleWithBoxCharacteristics::getClassType() {
    return IfcTextStyleWithBoxCharacteristics::s_type;
}

Step::ClassType IfcTextStyleWithBoxCharacteristics::getType() const {
    return IfcTextStyleWithBoxCharacteristics::s_type;
}

bool IfcTextStyleWithBoxCharacteristics::isOfType(Step::ClassType t) {
    return IfcTextStyleWithBoxCharacteristics::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxHeight() {
    if (Step::BaseObject::inited()) {
        return m_boxHeight;
    }
    else {
        return Step::getUnset(m_boxHeight);
    }
}

void IfcTextStyleWithBoxCharacteristics::setBoxHeight(IfcPositiveLengthMeasure value) {
    m_boxHeight = value;
}

IfcPositiveLengthMeasure IfcTextStyleWithBoxCharacteristics::getBoxWidth() {
    if (Step::BaseObject::inited()) {
        return m_boxWidth;
    }
    else {
        return Step::getUnset(m_boxWidth);
    }
}

void IfcTextStyleWithBoxCharacteristics::setBoxWidth(IfcPositiveLengthMeasure value) {
    m_boxWidth = value;
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxSlantAngle() {
    if (Step::BaseObject::inited()) {
        return m_boxSlantAngle;
    }
    else {
        return Step::getUnset(m_boxSlantAngle);
    }
}

void IfcTextStyleWithBoxCharacteristics::setBoxSlantAngle(IfcPlaneAngleMeasure value) {
    m_boxSlantAngle = value;
}

IfcPlaneAngleMeasure IfcTextStyleWithBoxCharacteristics::getBoxRotateAngle() {
    if (Step::BaseObject::inited()) {
        return m_boxRotateAngle;
    }
    else {
        return Step::getUnset(m_boxRotateAngle);
    }
}

void IfcTextStyleWithBoxCharacteristics::setBoxRotateAngle(IfcPlaneAngleMeasure value) {
    m_boxRotateAngle = value;
}

IfcSizeSelect *IfcTextStyleWithBoxCharacteristics::getCharacterSpacing() {
    if (Step::BaseObject::inited()) {
        return m_characterSpacing.get();
    }
    else {
        return NULL;
    }
}

void IfcTextStyleWithBoxCharacteristics::setCharacterSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
    m_characterSpacing = value;
}

void IfcTextStyleWithBoxCharacteristics::release() {
}

bool IfcTextStyleWithBoxCharacteristics::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxHeight = Step::getUnset(m_boxHeight);
    }
    else {
        m_boxHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxWidth = Step::getUnset(m_boxWidth);
    }
    else {
        m_boxWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxSlantAngle = Step::getUnset(m_boxSlantAngle);
    }
    else {
        m_boxSlantAngle = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boxRotateAngle = Step::getUnset(m_boxRotateAngle);
    }
    else {
        m_boxRotateAngle = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_characterSpacing = NULL;
    }
    else {
        m_characterSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_characterSpacing->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_characterSpacing->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_characterSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcTextStyleWithBoxCharacteristics::copy(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setBoxHeight(obj.m_boxHeight);
    setBoxWidth(obj.m_boxWidth);
    setBoxSlantAngle(obj.m_boxSlantAngle);
    setBoxRotateAngle(obj.m_boxRotateAngle);
    m_characterSpacing = new IfcSizeSelect;
    m_characterSpacing->copy(*(obj.m_characterSpacing.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleWithBoxCharacteristics::s_type("IfcTextStyleWithBoxCharacteristics");
