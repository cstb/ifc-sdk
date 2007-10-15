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

#include "ifc2x3/IfcCompositeProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProfileDef.h"
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

IfcCompositeProfileDef::IfcCompositeProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_profiles.setUnset(true);
    m_label = Step::getUnset(m_label);
}

IfcCompositeProfileDef::~IfcCompositeProfileDef() {
}

bool IfcCompositeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCompositeProfileDef(this);
}

const std::string &IfcCompositeProfileDef::type() {
    return IfcCompositeProfileDef::s_type.getName();
}

Step::ClassType IfcCompositeProfileDef::getClassType() {
    return IfcCompositeProfileDef::s_type;
}

Step::ClassType IfcCompositeProfileDef::getType() const {
    return IfcCompositeProfileDef::s_type;
}

bool IfcCompositeProfileDef::isOfType(Step::ClassType t) {
    return IfcCompositeProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

Step::Set< Step::RefPtr< IfcProfileDef > > &IfcCompositeProfileDef::getProfiles() {
    if (Step::BaseObject::inited()) {
        return m_profiles;
    }
    else {
        m_profiles.setUnset(true);
        return m_profiles;
    }
}

void IfcCompositeProfileDef::setProfiles(const Step::Set< Step::RefPtr< IfcProfileDef > > &value) {
    m_profiles = value;
}

IfcLabel IfcCompositeProfileDef::getLabel() {
    if (Step::BaseObject::inited()) {
        return m_label;
    }
    else {
        return Step::getUnset(m_label);
    }
}

void IfcCompositeProfileDef::setLabel(const IfcLabel &value) {
    m_label = value;
}

void IfcCompositeProfileDef::release() {
    IfcProfileDef::release();
    m_profiles.clear();
}

bool IfcCompositeProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profiles.setUnset(true);
    }
    else {
        m_profiles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProfileDef > attr2;
                attr2 = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_profiles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_label = Step::getUnset(m_label);
    }
    else {
        m_label = Step::spfToString(arg);
    }
    return true;
}

void IfcCompositeProfileDef::copy(const IfcCompositeProfileDef &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProfileDef > >::const_iterator it_m_profiles;
    IfcProfileDef::copy(obj, copyop);
    for (it_m_profiles = obj.m_profiles.begin(); it_m_profiles != obj.m_profiles.end(); ++it_m_profiles) {
        Step::RefPtr< IfcProfileDef > copyTarget = copyop((*it_m_profiles).get());
        m_profiles.insert(copyTarget.get());
    }
    setLabel(obj.m_label);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCompositeProfileDef::s_type("IfcCompositeProfileDef");
