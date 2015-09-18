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



#include <ifc2x3/IfcTextureCoordinateGenerator.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSimpleValue.h>
#include <ifc2x3/IfcTextureCoordinate.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTextureCoordinateGenerator::IfcTextureCoordinateGenerator(Step::Id id, Step::SPFData *args) : IfcTextureCoordinate(id, args) {
    m_mode = Step::getUnset(m_mode);
}

IfcTextureCoordinateGenerator::~IfcTextureCoordinateGenerator() {
}

bool IfcTextureCoordinateGenerator::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextureCoordinateGenerator(this);
}

const std::string &IfcTextureCoordinateGenerator::type() const {
    return IfcTextureCoordinateGenerator::s_type.getName();
}

const Step::ClassType &IfcTextureCoordinateGenerator::getClassType() {
    return IfcTextureCoordinateGenerator::s_type;
}

const Step::ClassType &IfcTextureCoordinateGenerator::getType() const {
    return IfcTextureCoordinateGenerator::s_type;
}

bool IfcTextureCoordinateGenerator::isOfType(const Step::ClassType &t) const {
    return IfcTextureCoordinateGenerator::s_type == t ? true : IfcTextureCoordinate::isOfType(t);
}

IfcLabel IfcTextureCoordinateGenerator::getMode() {
    if (Step::BaseObject::inited()) {
        return m_mode;
    }
    else {
        return Step::getUnset(m_mode);
    }
}

const IfcLabel IfcTextureCoordinateGenerator::getMode() const {
    IfcTextureCoordinateGenerator * deConstObject = const_cast< IfcTextureCoordinateGenerator * > (this);
    return deConstObject->getMode();
}

void IfcTextureCoordinateGenerator::setMode(const IfcLabel &value) {
    m_mode = value;
}

void IfcTextureCoordinateGenerator::unsetMode() {
    m_mode = Step::getUnset(getMode());
}

bool IfcTextureCoordinateGenerator::testMode() const {
    return !Step::isUnset(getMode());
}

List_IfcSimpleValue_1_n &IfcTextureCoordinateGenerator::getParameter() {
    if (Step::BaseObject::inited()) {
        return m_parameter;
    }
    else {
        m_parameter.setUnset(true);
        return m_parameter;
    }
}

const List_IfcSimpleValue_1_n &IfcTextureCoordinateGenerator::getParameter() const {
    IfcTextureCoordinateGenerator * deConstObject = const_cast< IfcTextureCoordinateGenerator * > (this);
    return deConstObject->getParameter();
}

void IfcTextureCoordinateGenerator::setParameter(const List_IfcSimpleValue_1_n &value) {
    m_parameter = value;
}

void IfcTextureCoordinateGenerator::unsetParameter() {
    m_parameter.clear();
    m_parameter.setUnset(true);
}

bool IfcTextureCoordinateGenerator::testParameter() const {
    return !m_parameter.isUnset();
}

bool IfcTextureCoordinateGenerator::init() {
    bool status = IfcTextureCoordinate::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mode = Step::getUnset(m_mode);
    }
    else {
        m_mode = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parameter.setUnset(true);
    }
    else {
        m_parameter.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSimpleValue > attr2;
                attr2 = new IfcSimpleValue;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCINTEGER") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcInteger(tmp_attr2);
                        }
                        if (type2 == "IFCREAL") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcReal(tmp_attr2);
                        }
                        if (type2 == "IFCBOOLEAN") {
                            Step::Boolean tmp_attr2;
                            tmp_attr2 = Step::spfToBoolean(str1);
                            attr2->setIfcBoolean(tmp_attr2);
                        }
                        if (type2 == "IFCIDENTIFIER") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcIdentifier(tmp_attr2);
                        }
                        if (type2 == "IFCTEXT") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcText(tmp_attr2);
                        }
                        if (type2 == "IFCLABEL") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcLabel(tmp_attr2);
                        }
                        if (type2 == "IFCLOGICAL") {
                            Step::Logical tmp_attr2;
                            tmp_attr2 = Step::spfToLogical(str1);
                            attr2->setIfcLogical(tmp_attr2);
                        }
                    }
                }
                m_parameter.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTextureCoordinateGenerator::copy(const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcSimpleValue >, 1 >::const_iterator it_m_parameter;
    IfcTextureCoordinate::copy(obj, copyop);
    setMode(obj.m_mode);
    for (it_m_parameter = obj.m_parameter.begin(); it_m_parameter != obj.m_parameter.end(); ++it_m_parameter) {
        Step::RefPtr< IfcSimpleValue > copyTarget = new IfcSimpleValue;
        copyTarget->copy(*((*it_m_parameter).get()), copyop);
        m_parameter.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTextureCoordinateGenerator::s_type("IfcTextureCoordinateGenerator");
