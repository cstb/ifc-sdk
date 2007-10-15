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

#include "ifc2x3/IfcTextureCoordinateGenerator.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSimpleValue.h"
#include "ifc2x3/IfcTextureCoordinate.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTextureCoordinateGenerator::IfcTextureCoordinateGenerator(Step::Id id, Step::SPFData *args) : IfcTextureCoordinate(id, args) {
    m_mode = Step::getUnset(m_mode);
    m_parameter.setUnset(true);
}

IfcTextureCoordinateGenerator::~IfcTextureCoordinateGenerator() {
}

bool IfcTextureCoordinateGenerator::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTextureCoordinateGenerator(this);
}

const std::string &IfcTextureCoordinateGenerator::type() {
    return IfcTextureCoordinateGenerator::s_type.getName();
}

Step::ClassType IfcTextureCoordinateGenerator::getClassType() {
    return IfcTextureCoordinateGenerator::s_type;
}

Step::ClassType IfcTextureCoordinateGenerator::getType() const {
    return IfcTextureCoordinateGenerator::s_type;
}

bool IfcTextureCoordinateGenerator::isOfType(Step::ClassType t) {
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

void IfcTextureCoordinateGenerator::setMode(const IfcLabel &value) {
    m_mode = value;
}

Step::List< Step::RefPtr< IfcSimpleValue > > &IfcTextureCoordinateGenerator::getParameter() {
    if (Step::BaseObject::inited()) {
        return m_parameter;
    }
    else {
        m_parameter.setUnset(true);
        return m_parameter;
    }
}

void IfcTextureCoordinateGenerator::setParameter(const Step::List< Step::RefPtr< IfcSimpleValue > > &value) {
    m_parameter = value;
}

void IfcTextureCoordinateGenerator::release() {
    IfcTextureCoordinate::release();
    m_parameter.clear();
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
        m_mode = Step::spfToString(arg);
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
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
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
                            Step::Bool tmp_attr2;
                            tmp_attr2 = Step::spfToBool(str1);
                            attr2->setIfcBoolean(tmp_attr2);
                        }
                        if (type2 == "IFCIDENTIFIER") {
                            std::string tmp_attr2;
                            tmp_attr2 = Step::spfToString(str1);
                            attr2->setIfcIdentifier(tmp_attr2);
                        }
                        if (type2 == "IFCTEXT") {
                            std::string tmp_attr2;
                            tmp_attr2 = Step::spfToString(str1);
                            attr2->setIfcText(tmp_attr2);
                        }
                        if (type2 == "IFCLABEL") {
                            std::string tmp_attr2;
                            tmp_attr2 = Step::spfToString(str1);
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
    Step::List< Step::RefPtr< IfcSimpleValue > >::const_iterator it_m_parameter;
    IfcTextureCoordinate::copy(obj, copyop);
    setMode(obj.m_mode);
    for (it_m_parameter = obj.m_parameter.begin(); it_m_parameter != obj.m_parameter.end(); ++it_m_parameter) {
        Step::RefPtr< IfcSimpleValue > copyTarget = new IfcSimpleValue;
        copyTarget->copy(*((*it_m_parameter).get()), copyop);
        m_parameter.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureCoordinateGenerator::s_type("IfcTextureCoordinateGenerator");
