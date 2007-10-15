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

#include "ifc2x3/IfcArbitraryProfileDefWithVoids.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcArbitraryClosedProfileDef.h"
#include "ifc2x3/IfcCurve.h"
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

IfcArbitraryProfileDefWithVoids::IfcArbitraryProfileDefWithVoids(Step::Id id, Step::SPFData *args) : IfcArbitraryClosedProfileDef(id, args) {
    m_innerCurves.setUnset(true);
}

IfcArbitraryProfileDefWithVoids::~IfcArbitraryProfileDefWithVoids() {
}

bool IfcArbitraryProfileDefWithVoids::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcArbitraryProfileDefWithVoids(this);
}

const std::string &IfcArbitraryProfileDefWithVoids::type() {
    return IfcArbitraryProfileDefWithVoids::s_type.getName();
}

Step::ClassType IfcArbitraryProfileDefWithVoids::getClassType() {
    return IfcArbitraryProfileDefWithVoids::s_type;
}

Step::ClassType IfcArbitraryProfileDefWithVoids::getType() const {
    return IfcArbitraryProfileDefWithVoids::s_type;
}

bool IfcArbitraryProfileDefWithVoids::isOfType(Step::ClassType t) {
    return IfcArbitraryProfileDefWithVoids::s_type == t ? true : IfcArbitraryClosedProfileDef::isOfType(t);
}

Step::Set< Step::RefPtr< IfcCurve > > &IfcArbitraryProfileDefWithVoids::getInnerCurves() {
    if (Step::BaseObject::inited()) {
        return m_innerCurves;
    }
    else {
        m_innerCurves.setUnset(true);
        return m_innerCurves;
    }
}

void IfcArbitraryProfileDefWithVoids::setInnerCurves(const Step::Set< Step::RefPtr< IfcCurve > > &value) {
    m_innerCurves = value;
}

void IfcArbitraryProfileDefWithVoids::release() {
    IfcArbitraryClosedProfileDef::release();
    m_innerCurves.clear();
}

bool IfcArbitraryProfileDefWithVoids::init() {
    bool status = IfcArbitraryClosedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_innerCurves.setUnset(true);
    }
    else {
        m_innerCurves.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCurve > attr2;
                attr2 = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_innerCurves.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcArbitraryProfileDefWithVoids::copy(const IfcArbitraryProfileDefWithVoids &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCurve > >::const_iterator it_m_innerCurves;
    IfcArbitraryClosedProfileDef::copy(obj, copyop);
    for (it_m_innerCurves = obj.m_innerCurves.begin(); it_m_innerCurves != obj.m_innerCurves.end(); ++it_m_innerCurves) {
        Step::RefPtr< IfcCurve > copyTarget = copyop((*it_m_innerCurves).get());
        m_innerCurves.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryProfileDefWithVoids::s_type("IfcArbitraryProfileDefWithVoids");
