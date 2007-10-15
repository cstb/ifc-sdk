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

#include "ifc2x3/IfcIrregularTimeSeries.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcIrregularTimeSeriesValue.h"
#include "ifc2x3/IfcTimeSeries.h"
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

IfcIrregularTimeSeries::IfcIrregularTimeSeries(Step::Id id, Step::SPFData *args) : IfcTimeSeries(id, args) {
    m_values.setUnset(true);
}

IfcIrregularTimeSeries::~IfcIrregularTimeSeries() {
}

bool IfcIrregularTimeSeries::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcIrregularTimeSeries(this);
}

const std::string &IfcIrregularTimeSeries::type() {
    return IfcIrregularTimeSeries::s_type.getName();
}

Step::ClassType IfcIrregularTimeSeries::getClassType() {
    return IfcIrregularTimeSeries::s_type;
}

Step::ClassType IfcIrregularTimeSeries::getType() const {
    return IfcIrregularTimeSeries::s_type;
}

bool IfcIrregularTimeSeries::isOfType(Step::ClassType t) {
    return IfcIrregularTimeSeries::s_type == t ? true : IfcTimeSeries::isOfType(t);
}

Step::List< Step::RefPtr< IfcIrregularTimeSeriesValue > > &IfcIrregularTimeSeries::getValues() {
    if (Step::BaseObject::inited()) {
        return m_values;
    }
    else {
        m_values.setUnset(true);
        return m_values;
    }
}

void IfcIrregularTimeSeries::setValues(const Step::List< Step::RefPtr< IfcIrregularTimeSeriesValue > > &value) {
    m_values = value;
}

void IfcIrregularTimeSeries::release() {
    IfcTimeSeries::release();
    m_values.clear();
}

bool IfcIrregularTimeSeries::init() {
    bool status = IfcTimeSeries::init();
    std::string arg;
    if (!status) {
        return false;
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
                Step::RefPtr< IfcIrregularTimeSeriesValue > attr2;
                attr2 = static_cast< IfcIrregularTimeSeriesValue * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_values.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcIrregularTimeSeries::copy(const IfcIrregularTimeSeries &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcIrregularTimeSeriesValue > >::const_iterator it_m_values;
    IfcTimeSeries::copy(obj, copyop);
    for (it_m_values = obj.m_values.begin(); it_m_values != obj.m_values.end(); ++it_m_values) {
        Step::RefPtr< IfcIrregularTimeSeriesValue > copyTarget = copyop((*it_m_values).get());
        m_values.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcIrregularTimeSeries::s_type("IfcIrregularTimeSeries");
