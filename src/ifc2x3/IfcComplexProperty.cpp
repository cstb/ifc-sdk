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

#include "ifc2x3/IfcComplexProperty.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
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

IfcComplexProperty::IfcComplexProperty(Step::Id id, Step::SPFData *args) : IfcProperty(id, args) {
    m_usageName = Step::getUnset(m_usageName);
    m_hasProperties.setUnset(true);
    m_hasProperties.setOwner(this);
}

IfcComplexProperty::~IfcComplexProperty() {
}

bool IfcComplexProperty::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcComplexProperty(this);
}

const std::string &IfcComplexProperty::type() {
    return IfcComplexProperty::s_type.getName();
}

Step::ClassType IfcComplexProperty::getClassType() {
    return IfcComplexProperty::s_type;
}

Step::ClassType IfcComplexProperty::getType() const {
    return IfcComplexProperty::s_type;
}

bool IfcComplexProperty::isOfType(Step::ClassType t) {
    return IfcComplexProperty::s_type == t ? true : IfcProperty::isOfType(t);
}

IfcIdentifier IfcComplexProperty::getUsageName() {
    if (Step::BaseObject::inited()) {
        return m_usageName;
    }
    else {
        return Step::getUnset(m_usageName);
    }
}

void IfcComplexProperty::setUsageName(const IfcIdentifier &value) {
    m_usageName = value;
}

Step::Set< Step::RefPtr< IfcProperty > > &IfcComplexProperty::getHasProperties() {
    if (Step::BaseObject::inited()) {
        return m_hasProperties;
    }
    else {
        m_hasProperties.setUnset(true);
        return m_hasProperties;
    }
}

void IfcComplexProperty::release() {
    IfcProperty::release();
    m_hasProperties.clear();
}

bool IfcComplexProperty::init() {
    bool status = IfcProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usageName = Step::getUnset(m_usageName);
    }
    else {
        m_usageName = Step::spfToString(arg);
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

void IfcComplexProperty::copy(const IfcComplexProperty &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty > >::const_iterator it_m_hasProperties;
    IfcProperty::copy(obj, copyop);
    setUsageName(obj.m_usageName);
    for (it_m_hasProperties = obj.m_hasProperties.begin(); it_m_hasProperties != obj.m_hasProperties.end(); ++it_m_hasProperties) {
        Step::RefPtr< IfcProperty > copyTarget = copyop((*it_m_hasProperties).get());
        m_hasProperties.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcComplexProperty::s_type("IfcComplexProperty");
IfcComplexProperty::Inverted_HasProperties_type::Inverted_HasProperties_type() {
}

void IfcComplexProperty::Inverted_HasProperties_type::setOwner(IfcComplexProperty *owner) {
    mOwner = owner;
}

void IfcComplexProperty::Inverted_HasProperties_type::insert(const Step::RefPtr< IfcProperty > &value) {
    IfcProperty *inverse = const_cast< IfcProperty * > (value.get());
    Step::Set< Step::RefPtr< IfcProperty > >::insert(value);
    inverse->m_partOfComplex.insert(mOwner);
}

