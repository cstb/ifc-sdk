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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcTextStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCharacterStyleSelect.h"
#include "ifc2x3/IfcPresentationStyle.h"
#include "ifc2x3/IfcTextFontSelect.h"
#include "ifc2x3/IfcTextStyleSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcTextStyle::IfcTextStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_textCharacterAppearance = NULL;
    m_textStyle = NULL;
    m_textFontStyle = NULL;
}

IfcTextStyle::~IfcTextStyle() {
}

bool IfcTextStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextStyle(this);
}

const std::string &IfcTextStyle::type() const {
    return IfcTextStyle::s_type.getName();
}

const Step::ClassType &IfcTextStyle::getClassType() {
    return IfcTextStyle::s_type;
}

const Step::ClassType &IfcTextStyle::getType() const {
    return IfcTextStyle::s_type;
}

bool IfcTextStyle::isOfType(const Step::ClassType &t) const {
    return IfcTextStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcCharacterStyleSelect *IfcTextStyle::getTextCharacterAppearance() {
    if (Step::BaseObject::inited()) {
        return m_textCharacterAppearance.get();
    }
    else {
        return NULL;
    }
}

const IfcCharacterStyleSelect *IfcTextStyle::getTextCharacterAppearance() const {
    IfcTextStyle * deConstObject = const_cast< IfcTextStyle * > (this);
    return deConstObject->getTextCharacterAppearance();
}

void IfcTextStyle::setTextCharacterAppearance(const Step::RefPtr< IfcCharacterStyleSelect > &value) {
    m_textCharacterAppearance = value;
}

void IfcTextStyle::unsetTextCharacterAppearance() {
    m_textCharacterAppearance = Step::getUnset(getTextCharacterAppearance());
}

bool IfcTextStyle::testTextCharacterAppearance() const {
    return !Step::isUnset(getTextCharacterAppearance());
}

IfcTextStyleSelect *IfcTextStyle::getTextStyle() {
    if (Step::BaseObject::inited()) {
        return m_textStyle.get();
    }
    else {
        return NULL;
    }
}

const IfcTextStyleSelect *IfcTextStyle::getTextStyle() const {
    IfcTextStyle * deConstObject = const_cast< IfcTextStyle * > (this);
    return deConstObject->getTextStyle();
}

void IfcTextStyle::setTextStyle(const Step::RefPtr< IfcTextStyleSelect > &value) {
    m_textStyle = value;
}

void IfcTextStyle::unsetTextStyle() {
    m_textStyle = Step::getUnset(getTextStyle());
}

bool IfcTextStyle::testTextStyle() const {
    return !Step::isUnset(getTextStyle());
}

IfcTextFontSelect *IfcTextStyle::getTextFontStyle() {
    if (Step::BaseObject::inited()) {
        return m_textFontStyle.get();
    }
    else {
        return NULL;
    }
}

const IfcTextFontSelect *IfcTextStyle::getTextFontStyle() const {
    IfcTextStyle * deConstObject = const_cast< IfcTextStyle * > (this);
    return deConstObject->getTextFontStyle();
}

void IfcTextStyle::setTextFontStyle(const Step::RefPtr< IfcTextFontSelect > &value) {
    m_textFontStyle = value;
}

void IfcTextStyle::unsetTextFontStyle() {
    m_textFontStyle = Step::getUnset(getTextFontStyle());
}

bool IfcTextStyle::testTextFontStyle() const {
    return !Step::isUnset(getTextFontStyle());
}

bool IfcTextStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textCharacterAppearance = NULL;
    }
    else {
        m_textCharacterAppearance = new IfcCharacterStyleSelect;
        if (arg[0] == '#') {
            m_textCharacterAppearance->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textStyle = NULL;
    }
    else {
        m_textStyle = new IfcTextStyleSelect;
        if (arg[0] == '#') {
            m_textStyle->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textFontStyle = NULL;
    }
    else {
        m_textFontStyle = new IfcTextFontSelect;
        if (arg[0] == '#') {
            m_textFontStyle->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcTextStyle::copy(const IfcTextStyle &obj, const CopyOp &copyop) {
    IfcPresentationStyle::copy(obj, copyop);
    m_textCharacterAppearance = new IfcCharacterStyleSelect;
    m_textCharacterAppearance->copy(*(obj.m_textCharacterAppearance.get()), copyop);
    m_textStyle = new IfcTextStyleSelect;
    m_textStyle->copy(*(obj.m_textStyle.get()), copyop);
    m_textFontStyle = new IfcTextFontSelect;
    m_textFontStyle->copy(*(obj.m_textFontStyle.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextStyle::s_type("IfcTextStyle");
