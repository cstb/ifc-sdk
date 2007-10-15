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

#include "ifc2x3/IfcMetric.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/IfcMetricValueSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMetric::IfcMetric(Step::Id id, Step::SPFData *args) : IfcConstraint(id, args) {
    m_benchmark = IfcBenchmarkEnum_UNSET;
    m_valueSource = Step::getUnset(m_valueSource);
    m_dataValue = NULL;
}

IfcMetric::~IfcMetric() {
}

bool IfcMetric::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMetric(this);
}

const std::string &IfcMetric::type() {
    return IfcMetric::s_type.getName();
}

Step::ClassType IfcMetric::getClassType() {
    return IfcMetric::s_type;
}

Step::ClassType IfcMetric::getType() const {
    return IfcMetric::s_type;
}

bool IfcMetric::isOfType(Step::ClassType t) {
    return IfcMetric::s_type == t ? true : IfcConstraint::isOfType(t);
}

IfcBenchmarkEnum IfcMetric::getBenchmark() {
    if (Step::BaseObject::inited()) {
        return m_benchmark;
    }
    else {
        return IfcBenchmarkEnum_UNSET;
    }
}

void IfcMetric::setBenchmark(IfcBenchmarkEnum value) {
    m_benchmark = value;
}

IfcLabel IfcMetric::getValueSource() {
    if (Step::BaseObject::inited()) {
        return m_valueSource;
    }
    else {
        return Step::getUnset(m_valueSource);
    }
}

void IfcMetric::setValueSource(const IfcLabel &value) {
    m_valueSource = value;
}

IfcMetricValueSelect *IfcMetric::getDataValue() {
    if (Step::BaseObject::inited()) {
        return m_dataValue.get();
    }
    else {
        return NULL;
    }
}

void IfcMetric::setDataValue(const Step::RefPtr< IfcMetricValueSelect > &value) {
    m_dataValue = value;
}

void IfcMetric::release() {
    IfcConstraint::release();
}

bool IfcMetric::init() {
    bool status = IfcConstraint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_benchmark = IfcBenchmarkEnum_UNSET;
    }
    else {
        if (arg == ".GREATERTHAN.") {
            m_benchmark = IfcBenchmarkEnum_GREATERTHAN;
        }
        else if (arg == ".GREATERTHANOREQUALTO.") {
            m_benchmark = IfcBenchmarkEnum_GREATERTHANOREQUALTO;
        }
        else if (arg == ".LESSTHAN.") {
            m_benchmark = IfcBenchmarkEnum_LESSTHAN;
        }
        else if (arg == ".LESSTHANOREQUALTO.") {
            m_benchmark = IfcBenchmarkEnum_LESSTHANOREQUALTO;
        }
        else if (arg == ".EQUALTO.") {
            m_benchmark = IfcBenchmarkEnum_EQUALTO;
        }
        else if (arg == ".NOTEQUALTO.") {
            m_benchmark = IfcBenchmarkEnum_NOTEQUALTO;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_valueSource = Step::getUnset(m_valueSource);
    }
    else {
        m_valueSource = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dataValue = NULL;
    }
    else {
        m_dataValue = new IfcMetricValueSelect;
        if (arg[0] == '#') {
            m_dataValue->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCTEXT") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_dataValue->setIfcText(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcMetric::copy(const IfcMetric &obj, const CopyOp &copyop) {
    IfcConstraint::copy(obj, copyop);
    setBenchmark(obj.m_benchmark);
    setValueSource(obj.m_valueSource);
    m_dataValue = new IfcMetricValueSelect;
    m_dataValue->copy(*(obj.m_dataValue.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMetric::s_type("IfcMetric");
