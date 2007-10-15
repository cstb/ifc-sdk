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

#include "ifc2x3/IfcRelOverridesProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/IfcRelDefinesByProperties.h"
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

IfcRelOverridesProperties::IfcRelOverridesProperties(Step::Id id, Step::SPFData *args) : IfcRelDefinesByProperties(id, args) {
    m_overridingProperties.setUnset(true);
}

IfcRelOverridesProperties::~IfcRelOverridesProperties() {
}

bool IfcRelOverridesProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelOverridesProperties(this);
}

const std::string &IfcRelOverridesProperties::type() {
    return IfcRelOverridesProperties::s_type.getName();
}

Step::ClassType IfcRelOverridesProperties::getClassType() {
    return IfcRelOverridesProperties::s_type;
}

Step::ClassType IfcRelOverridesProperties::getType() const {
    return IfcRelOverridesProperties::s_type;
}

bool IfcRelOverridesProperties::isOfType(Step::ClassType t) {
    return IfcRelOverridesProperties::s_type == t ? true : IfcRelDefinesByProperties::isOfType(t);
}

Step::Set< Step::RefPtr< IfcProperty > > &IfcRelOverridesProperties::getOverridingProperties() {
    if (Step::BaseObject::inited()) {
        return m_overridingProperties;
    }
    else {
        m_overridingProperties.setUnset(true);
        return m_overridingProperties;
    }
}

void IfcRelOverridesProperties::setOverridingProperties(const Step::Set< Step::RefPtr< IfcProperty > > &value) {
    m_overridingProperties = value;
}

void IfcRelOverridesProperties::release() {
    IfcRelDefinesByProperties::release();
    m_overridingProperties.clear();
}

bool IfcRelOverridesProperties::init() {
    bool status = IfcRelDefinesByProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overridingProperties.setUnset(true);
    }
    else {
        m_overridingProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_overridingProperties.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelOverridesProperties::copy(const IfcRelOverridesProperties &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty > >::const_iterator it_m_overridingProperties;
    IfcRelDefinesByProperties::copy(obj, copyop);
    for (it_m_overridingProperties = obj.m_overridingProperties.begin(); it_m_overridingProperties != obj.m_overridingProperties.end(); ++it_m_overridingProperties) {
        Step::RefPtr< IfcProperty > copyTarget = copyop((*it_m_overridingProperties).get());
        m_overridingProperties.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelOverridesProperties::s_type("IfcRelOverridesProperties");
