// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcTextStyleTextModel.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

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

bool IfcTextStyleTextModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextStyleTextModel(this);
}

const std::string &IfcTextStyleTextModel::type() const {
    return IfcTextStyleTextModel::s_type.getName();
}

const Step::ClassType &IfcTextStyleTextModel::getClassType() {
    return IfcTextStyleTextModel::s_type;
}

const Step::ClassType &IfcTextStyleTextModel::getType() const {
    return IfcTextStyleTextModel::s_type;
}

bool IfcTextStyleTextModel::isOfType(const Step::ClassType &t) const {
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

const IfcSizeSelect *IfcTextStyleTextModel::getTextIndent() const {
    IfcTextStyleTextModel * deConstObject = const_cast< IfcTextStyleTextModel * > (this);
    return deConstObject->getTextIndent();
}

void IfcTextStyleTextModel::setTextIndent(const Step::RefPtr< IfcSizeSelect > &value) {
    m_textIndent = value;
}

void IfcTextStyleTextModel::unsetTextIndent() {
    m_textIndent = Step::getUnset(getTextIndent());
}

bool IfcTextStyleTextModel::testTextIndent() const {
    return !Step::isUnset(getTextIndent());
}

IfcTextAlignment IfcTextStyleTextModel::getTextAlign() {
    if (Step::BaseObject::inited()) {
        return m_textAlign;
    }
    else {
        return Step::getUnset(m_textAlign);
    }
}

const IfcTextAlignment IfcTextStyleTextModel::getTextAlign() const {
    IfcTextStyleTextModel * deConstObject = const_cast< IfcTextStyleTextModel * > (this);
    return deConstObject->getTextAlign();
}

void IfcTextStyleTextModel::setTextAlign(const IfcTextAlignment &value) {
    m_textAlign = value;
}

void IfcTextStyleTextModel::unsetTextAlign() {
    m_textAlign = Step::getUnset(getTextAlign());
}

bool IfcTextStyleTextModel::testTextAlign() const {
    return !Step::isUnset(getTextAlign());
}

IfcTextDecoration IfcTextStyleTextModel::getTextDecoration() {
    if (Step::BaseObject::inited()) {
        return m_textDecoration;
    }
    else {
        return Step::getUnset(m_textDecoration);
    }
}

const IfcTextDecoration IfcTextStyleTextModel::getTextDecoration() const {
    IfcTextStyleTextModel * deConstObject = const_cast< IfcTextStyleTextModel * > (this);
    return deConstObject->getTextDecoration();
}

void IfcTextStyleTextModel::setTextDecoration(const IfcTextDecoration &value) {
    m_textDecoration = value;
}

void IfcTextStyleTextModel::unsetTextDecoration() {
    m_textDecoration = Step::getUnset(getTextDecoration());
}

bool IfcTextStyleTextModel::testTextDecoration() const {
    return !Step::isUnset(getTextDecoration());
}

IfcSizeSelect *IfcTextStyleTextModel::getLetterSpacing() {
    if (Step::BaseObject::inited()) {
        return m_letterSpacing.get();
    }
    else {
        return NULL;
    }
}

const IfcSizeSelect *IfcTextStyleTextModel::getLetterSpacing() const {
    IfcTextStyleTextModel * deConstObject = const_cast< IfcTextStyleTextModel * > (this);
    return deConstObject->getLetterSpacing();
}

void IfcTextStyleTextModel::setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
    m_letterSpacing = value;
}

void IfcTextStyleTextModel::unsetLetterSpacing() {
    m_letterSpacing = Step::getUnset(getLetterSpacing());
}

bool IfcTextStyleTextModel::testLetterSpacing() const {
    return !Step::isUnset(getLetterSpacing());
}

IfcSizeSelect *IfcTextStyleTextModel::getWordSpacing() {
    if (Step::BaseObject::inited()) {
        return m_wordSpacing.get();
    }
    else {
        return NULL;
    }
}

const IfcSizeSelect *IfcTextStyleTextModel::getWordSpacing() const {
    IfcTextStyleTextModel * deConstObject = const_cast< IfcTextStyleTextModel * > (this);
    return deConstObject->getWordSpacing();
}

void IfcTextStyleTextModel::setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value) {
    m_wordSpacing = value;
}

void IfcTextStyleTextModel::unsetWordSpacing() {
    m_wordSpacing = Step::getUnset(getWordSpacing());
}

bool IfcTextStyleTextModel::testWordSpacing() const {
    return !Step::isUnset(getWordSpacing());
}

IfcTextTransformation IfcTextStyleTextModel::getTextTransform() {
    if (Step::BaseObject::inited()) {
        return m_textTransform;
    }
    else {
        return Step::getUnset(m_textTransform);
    }
}

const IfcTextTransformation IfcTextStyleTextModel::getTextTransform() const {
    IfcTextStyleTextModel * deConstObject = const_cast< IfcTextStyleTextModel * > (this);
    return deConstObject->getTextTransform();
}

void IfcTextStyleTextModel::setTextTransform(const IfcTextTransformation &value) {
    m_textTransform = value;
}

void IfcTextStyleTextModel::unsetTextTransform() {
    m_textTransform = Step::getUnset(getTextTransform());
}

bool IfcTextStyleTextModel::testTextTransform() const {
    return !Step::isUnset(getTextTransform());
}

IfcSizeSelect *IfcTextStyleTextModel::getLineHeight() {
    if (Step::BaseObject::inited()) {
        return m_lineHeight.get();
    }
    else {
        return NULL;
    }
}

const IfcSizeSelect *IfcTextStyleTextModel::getLineHeight() const {
    IfcTextStyleTextModel * deConstObject = const_cast< IfcTextStyleTextModel * > (this);
    return deConstObject->getLineHeight();
}

void IfcTextStyleTextModel::setLineHeight(const Step::RefPtr< IfcSizeSelect > &value) {
    m_lineHeight = value;
}

void IfcTextStyleTextModel::unsetLineHeight() {
    m_lineHeight = Step::getUnset(getLineHeight());
}

bool IfcTextStyleTextModel::testLineHeight() const {
    return !Step::isUnset(getLineHeight());
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
            m_textIndent->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
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
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
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
        m_textAlign = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textDecoration = Step::getUnset(m_textDecoration);
    }
    else {
        m_textDecoration = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_letterSpacing = NULL;
    }
    else {
        m_letterSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_letterSpacing->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
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
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
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
            m_wordSpacing->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
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
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
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
        m_textTransform = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lineHeight = NULL;
    }
    else {
        m_lineHeight = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_lineHeight->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
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
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
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

IFC2X3_EXPORT Step::ClassType IfcTextStyleTextModel::s_type("IfcTextStyleTextModel");
