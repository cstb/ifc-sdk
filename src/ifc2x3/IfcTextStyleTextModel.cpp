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

#include "ifc2x3/IfcTextStyleTextModel.h"

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

IfcTextStyleTextModel::IfcTextStyleTextModel(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_textIndent = NULL;
    m_textAlign = Step::getUnset(m_textAlign);
    m_textDecoration = Step::getUnset(m_textDecoration);
    m_letterSpacing = NULL;
    m_wordSpacing = NULL;
    m_textTransform = Step::getUnset(m_textTransform);
    m_lineHeight = NULL;
}

IfcTextStyleTextModel::~IfcTextStyleTextModel() {
}

bool IfcTextStyleTextModel::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTextStyleTextModel(this);
}

const std::string &IfcTextStyleTextModel::type() {
    return IfcTextStyleTextModel::s_type.getName();
}

Step::ClassType IfcTextStyleTextModel::getClassType() {
    return IfcTextStyleTextModel::s_type;
}

Step::ClassType IfcTextStyleTextModel::getType() const {
    return IfcTextStyleTextModel::s_type;
}

bool IfcTextStyleTextModel::isOfType(Step::ClassType t) {
    return IfcTextStyleTextModel::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcSizeSelect *IfcTextStyleTextModel::getTextIndent() {
    if (Step::BaseObject::inited()) {
        return m_textIndent.get();
    }
    else {
        return NULL;
    }
}

void IfcTextStyleTextModel::setTextIndent(const Step::RefPtr< IfcSizeSelect > &value) {
    m_textIndent = value;
}

IfcTextAlignment IfcTextStyleTextModel::getTextAlign() {
    if (Step::BaseObject::inited()) {
        return m_textAlign;
    }
    else {
        return Step::getUnset(m_textAlign);
    }
}

void IfcTextStyleTextModel::setTextAlign(const IfcTextAlignment &value) {
    m_textAlign = value;
}

IfcTextDecoration IfcTextStyleTextModel::getTextDecoration() {
    if (Step::BaseObject::inited()) {
        return m_textDecoration;
    }
    else {
        return Step::getUnset(m_textDecoration);
    }
}

void IfcTextStyleTextModel::setTextDecoration(const IfcTextDecoration &value) {
    m_textDecoration = value;
}

IfcSizeSelect *IfcTextStyleTextModel::getLetterSpacing() {
    if (Step::BaseObject::inited()) {
        return m_letterSpacing.get();
    }
    else {
        return NULL;
    }
}

void IfcTextStyleTextModel::setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
    m_letterSpacing = value;
}

IfcSizeSelect *IfcTextStyleTextModel::getWordSpacing() {
    if (Step::BaseObject::inited()) {
        return m_wordSpacing.get();
    }
    else {
        return NULL;
    }
}

void IfcTextStyleTextModel::setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
    m_wordSpacing = value;
}

IfcTextTransformation IfcTextStyleTextModel::getTextTransform() {
    if (Step::BaseObject::inited()) {
        return m_textTransform;
    }
    else {
        return Step::getUnset(m_textTransform);
    }
}

void IfcTextStyleTextModel::setTextTransform(const IfcTextTransformation &value) {
    m_textTransform = value;
}

IfcSizeSelect *IfcTextStyleTextModel::getLineHeight() {
    if (Step::BaseObject::inited()) {
        return m_lineHeight.get();
    }
    else {
        return NULL;
    }
}

void IfcTextStyleTextModel::setLineHeight(const Step::RefPtr< IfcSizeSelect > &value) {
    m_lineHeight = value;
}

void IfcTextStyleTextModel::release() {
}

bool IfcTextStyleTextModel::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textIndent = NULL;
    }
    else {
        m_textIndent = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_textIndent->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                    m_textIndent->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_textIndent->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_textIndent->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_textIndent->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_textIndent->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_textIndent->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textAlign = Step::getUnset(m_textAlign);
    }
    else {
        m_textAlign = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textDecoration = Step::getUnset(m_textDecoration);
    }
    else {
        m_textDecoration = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_letterSpacing = NULL;
    }
    else {
        m_letterSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_letterSpacing->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                    m_letterSpacing->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_letterSpacing->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_letterSpacing->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_letterSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_letterSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_letterSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wordSpacing = NULL;
    }
    else {
        m_wordSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_wordSpacing->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                    m_wordSpacing->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_wordSpacing->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_wordSpacing->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_wordSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_wordSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_wordSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textTransform = Step::getUnset(m_textTransform);
    }
    else {
        m_textTransform = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lineHeight = NULL;
    }
    else {
        m_lineHeight = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_lineHeight->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                    m_lineHeight->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lineHeight->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_lineHeight->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lineHeight->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lineHeight->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lineHeight->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcTextStyleTextModel::copy(const IfcTextStyleTextModel &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    m_textIndent = new IfcSizeSelect;
    m_textIndent->copy(*(obj.m_textIndent.get()), copyop);
    setTextAlign(obj.m_textAlign);
    setTextDecoration(obj.m_textDecoration);
    m_letterSpacing = new IfcSizeSelect;
    m_letterSpacing->copy(*(obj.m_letterSpacing.get()), copyop);
    m_wordSpacing = new IfcSizeSelect;
    m_wordSpacing->copy(*(obj.m_wordSpacing.get()), copyop);
    setTextTransform(obj.m_textTransform);
    m_lineHeight = new IfcSizeSelect;
    m_lineHeight->copy(*(obj.m_lineHeight.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleTextModel::s_type("IfcTextStyleTextModel");
