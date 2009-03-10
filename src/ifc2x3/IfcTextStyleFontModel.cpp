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

#include "ifc2x3/IfcTextStyleFontModel.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedTextFont.h"
#include "ifc2x3/IfcSizeSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTextStyleFontModel::IfcTextStyleFontModel(Step::Id id, Step::SPFData *args) : IfcPreDefinedTextFont(id, args) {
    m_fontFamily.setUnset(true);
    m_fontStyle = Step::getUnset(m_fontStyle);
    m_fontVariant = Step::getUnset(m_fontVariant);
    m_fontWeight = Step::getUnset(m_fontWeight);
    m_fontSize = NULL;
}

IfcTextStyleFontModel::~IfcTextStyleFontModel() {
}

bool IfcTextStyleFontModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextStyleFontModel(this);
}

const std::string &IfcTextStyleFontModel::type() const {
    return IfcTextStyleFontModel::s_type.getName();
}

const Step::ClassType &IfcTextStyleFontModel::getClassType() {
    return IfcTextStyleFontModel::s_type;
}

const Step::ClassType &IfcTextStyleFontModel::getType() const {
    return IfcTextStyleFontModel::s_type;
}

bool IfcTextStyleFontModel::isOfType(const Step::ClassType &t) const {
    return IfcTextStyleFontModel::s_type == t ? true : IfcPreDefinedTextFont::isOfType(t);
}

List_IfcTextFontName_1_n &IfcTextStyleFontModel::getFontFamily() {
    if (Step::BaseObject::inited()) {
        return m_fontFamily;
    }
    else {
        m_fontFamily.setUnset(true);
        return m_fontFamily;
    }
}

const List_IfcTextFontName_1_n &IfcTextStyleFontModel::getFontFamily() const {
    IfcTextStyleFontModel * deConstObject = const_cast< IfcTextStyleFontModel * > (this);
    return deConstObject->getFontFamily();
}

void IfcTextStyleFontModel::setFontFamily(const List_IfcTextFontName_1_n &value) {
    m_fontFamily = value;
}

IfcFontStyle IfcTextStyleFontModel::getFontStyle() {
    if (Step::BaseObject::inited()) {
        return m_fontStyle;
    }
    else {
        return Step::getUnset(m_fontStyle);
    }
}

const IfcFontStyle IfcTextStyleFontModel::getFontStyle() const {
    IfcTextStyleFontModel * deConstObject = const_cast< IfcTextStyleFontModel * > (this);
    return deConstObject->getFontStyle();
}

void IfcTextStyleFontModel::setFontStyle(const IfcFontStyle &value) {
    m_fontStyle = value;
}

IfcFontVariant IfcTextStyleFontModel::getFontVariant() {
    if (Step::BaseObject::inited()) {
        return m_fontVariant;
    }
    else {
        return Step::getUnset(m_fontVariant);
    }
}

const IfcFontVariant IfcTextStyleFontModel::getFontVariant() const {
    IfcTextStyleFontModel * deConstObject = const_cast< IfcTextStyleFontModel * > (this);
    return deConstObject->getFontVariant();
}

void IfcTextStyleFontModel::setFontVariant(const IfcFontVariant &value) {
    m_fontVariant = value;
}

IfcFontWeight IfcTextStyleFontModel::getFontWeight() {
    if (Step::BaseObject::inited()) {
        return m_fontWeight;
    }
    else {
        return Step::getUnset(m_fontWeight);
    }
}

const IfcFontWeight IfcTextStyleFontModel::getFontWeight() const {
    IfcTextStyleFontModel * deConstObject = const_cast< IfcTextStyleFontModel * > (this);
    return deConstObject->getFontWeight();
}

void IfcTextStyleFontModel::setFontWeight(const IfcFontWeight &value) {
    m_fontWeight = value;
}

IfcSizeSelect *IfcTextStyleFontModel::getFontSize() {
    if (Step::BaseObject::inited()) {
        return m_fontSize.get();
    }
    else {
        return NULL;
    }
}

const IfcSizeSelect *IfcTextStyleFontModel::getFontSize() const {
    IfcTextStyleFontModel * deConstObject = const_cast< IfcTextStyleFontModel * > (this);
    return deConstObject->getFontSize();
}

void IfcTextStyleFontModel::setFontSize(const Step::RefPtr< IfcSizeSelect > &value) {
    m_fontSize = value;
}

bool IfcTextStyleFontModel::init() {
    bool status = IfcPreDefinedTextFont::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fontFamily.setUnset(true);
    }
    else {
        m_fontFamily.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcTextFontName attr2;
                attr2 = Step::String::fromSPF(str1);
                m_fontFamily.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fontStyle = Step::getUnset(m_fontStyle);
    }
    else {
        m_fontStyle = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fontVariant = Step::getUnset(m_fontVariant);
    }
    else {
        m_fontVariant = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fontWeight = Step::getUnset(m_fontWeight);
    }
    else {
        m_fontWeight = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fontSize = NULL;
    }
    else {
        m_fontSize = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_fontSize->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                    m_fontSize->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_fontSize->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_fontSize->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_fontSize->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_fontSize->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_fontSize->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcTextStyleFontModel::copy(const IfcTextStyleFontModel &obj, const CopyOp &copyop) {
    Step::List< IfcTextFontName, 1 >::const_iterator it_m_fontFamily;
    IfcPreDefinedTextFont::copy(obj, copyop);
    for (it_m_fontFamily = obj.m_fontFamily.begin(); it_m_fontFamily != obj.m_fontFamily.end(); ++it_m_fontFamily) {
        IfcTextFontName copyTarget = (*it_m_fontFamily);
        m_fontFamily.push_back(copyTarget);
    }
    setFontStyle(obj.m_fontStyle);
    setFontVariant(obj.m_fontVariant);
    setFontWeight(obj.m_fontWeight);
    m_fontSize = new IfcSizeSelect;
    m_fontSize->copy(*(obj.m_fontSize.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyleFontModel::s_type("IfcTextStyleFontModel");
