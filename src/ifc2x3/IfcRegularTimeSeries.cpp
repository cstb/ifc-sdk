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

#include "ifc2x3/IfcRegularTimeSeries.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/IfcTimeSeriesValue.h"
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

IfcRegularTimeSeries::IfcRegularTimeSeries(Step::Id id, Step::SPFData *args) : IfcTimeSeries(id, args) {
    m_timeStep = Step::getUnset(m_timeStep);
    m_values.setUnset(true);
}

IfcRegularTimeSeries::~IfcRegularTimeSeries() {
}

bool IfcRegularTimeSeries::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRegularTimeSeries(this);
}

const std::string &IfcRegularTimeSeries::type() {
    return IfcRegularTimeSeries::s_type.getName();
}

Step::ClassType IfcRegularTimeSeries::getClassType() {
    return IfcRegularTimeSeries::s_type;
}

Step::ClassType IfcRegularTimeSeries::getType() const {
    return IfcRegularTimeSeries::s_type;
}

bool IfcRegularTimeSeries::isOfType(Step::ClassType t) {
    return IfcRegularTimeSeries::s_type == t ? true : IfcTimeSeries::isOfType(t);
}

IfcTimeMeasure IfcRegularTimeSeries::getTimeStep() {
    if (Step::BaseObject::inited()) {
        return m_timeStep;
    }
    else {
        return Step::getUnset(m_timeStep);
    }
}

void IfcRegularTimeSeries::setTimeStep(IfcTimeMeasure value) {
    m_timeStep = value;
}

Step::List< Step::RefPtr< IfcTimeSeriesValue > > &IfcRegularTimeSeries::getValues() {
    if (Step::BaseObject::inited()) {
        return m_values;
    }
    else {
        m_values.setUnset(true);
        return m_values;
    }
}

void IfcRegularTimeSeries::setValues(const Step::List< Step::RefPtr< IfcTimeSeriesValue > > &value) {
    m_values = value;
}

void IfcRegularTimeSeries::release() {
    IfcTimeSeries::release();
    m_values.clear();
}

bool IfcRegularTimeSeries::init() {
    bool status = IfcTimeSeries::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeStep = Step::getUnset(m_timeStep);
    }
    else {
        m_timeStep = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_values.setUnset(true);
    }
    else {
        m_values.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcTimeSeriesValue > attr2;
                attr2 = static_cast< IfcTimeSeriesValue * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_values.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRegularTimeSeries::copy(const IfcRegularTimeSeries &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcTimeSeriesValue > >::const_iterator it_m_values;
    IfcTimeSeries::copy(obj, copyop);
    setTimeStep(obj.m_timeStep);
    for (it_m_values = obj.m_values.begin(); it_m_values != obj.m_values.end(); ++it_m_values) {
        Step::RefPtr< IfcTimeSeriesValue > copyTarget = copyop((*it_m_values).get());
        m_values.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRegularTimeSeries::s_type("IfcRegularTimeSeries");
