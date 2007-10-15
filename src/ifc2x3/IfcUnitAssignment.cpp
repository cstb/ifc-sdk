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

#include "ifc2x3/IfcUnitAssignment.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcUnitAssignment::IfcUnitAssignment(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_units.setUnset(true);
}

IfcUnitAssignment::~IfcUnitAssignment() {
}

bool IfcUnitAssignment::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcUnitAssignment(this);
}

const std::string &IfcUnitAssignment::type() {
    return IfcUnitAssignment::s_type.getName();
}

Step::ClassType IfcUnitAssignment::getClassType() {
    return IfcUnitAssignment::s_type;
}

Step::ClassType IfcUnitAssignment::getType() const {
    return IfcUnitAssignment::s_type;
}

bool IfcUnitAssignment::isOfType(Step::ClassType t) {
    return IfcUnitAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::RefPtr< IfcUnit > > &IfcUnitAssignment::getUnits() {
    if (Step::BaseObject::inited()) {
        return m_units;
    }
    else {
        m_units.setUnset(true);
        return m_units;
    }
}

void IfcUnitAssignment::setUnits(const Step::Set< Step::RefPtr< IfcUnit > > &value) {
    m_units = value;
}

void IfcUnitAssignment::release() {
    m_units.clear();
}

bool IfcUnitAssignment::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_units.setUnset(true);
    }
    else {
        m_units.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcUnit > attr2;
                attr2 = new IfcUnit;
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
                    }
                }
                m_units.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcUnitAssignment::copy(const IfcUnitAssignment &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcUnit > >::const_iterator it_m_units;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_units = obj.m_units.begin(); it_m_units != obj.m_units.end(); ++it_m_units) {
        Step::RefPtr< IfcUnit > copyTarget = new IfcUnit;
        copyTarget->copy(*((*it_m_units).get()), copyop);
        m_units.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcUnitAssignment::s_type("IfcUnitAssignment");
