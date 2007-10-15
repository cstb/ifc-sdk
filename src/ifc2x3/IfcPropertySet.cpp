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

#include "ifc2x3/IfcPropertySet.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
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

IfcPropertySet::IfcPropertySet(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_hasProperties.setUnset(true);
}

IfcPropertySet::~IfcPropertySet() {
}

bool IfcPropertySet::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPropertySet(this);
}

const std::string &IfcPropertySet::type() {
    return IfcPropertySet::s_type.getName();
}

Step::ClassType IfcPropertySet::getClassType() {
    return IfcPropertySet::s_type;
}

Step::ClassType IfcPropertySet::getType() const {
    return IfcPropertySet::s_type;
}

bool IfcPropertySet::isOfType(Step::ClassType t) {
    return IfcPropertySet::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

Step::Set< Step::RefPtr< IfcProperty > > &IfcPropertySet::getHasProperties() {
    if (Step::BaseObject::inited()) {
        return m_hasProperties;
    }
    else {
        m_hasProperties.setUnset(true);
        return m_hasProperties;
    }
}

void IfcPropertySet::setHasProperties(const Step::Set< Step::RefPtr< IfcProperty > > &value) {
    m_hasProperties = value;
}

void IfcPropertySet::release() {
    IfcPropertySetDefinition::release();
    m_hasProperties.clear();
}

bool IfcPropertySet::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasProperties.setUnset(true);
    }
    else {
        m_hasProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_hasProperties.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPropertySet::copy(const IfcPropertySet &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty > >::const_iterator it_m_hasProperties;
    IfcPropertySetDefinition::copy(obj, copyop);
    for (it_m_hasProperties = obj.m_hasProperties.begin(); it_m_hasProperties != obj.m_hasProperties.end(); ++it_m_hasProperties) {
        Step::RefPtr< IfcProperty > copyTarget = copyop((*it_m_hasProperties).get());
        m_hasProperties.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertySet::s_type("IfcPropertySet");
