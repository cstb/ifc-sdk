/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

Inverted_IfcComplexProperty_HasProperties_type::Inverted_IfcComplexProperty_HasProperties_type() {
}

void Inverted_IfcComplexProperty_HasProperties_type::setOwner(IfcComplexProperty *owner) {
    mOwner = owner;
}

void Inverted_IfcComplexProperty_HasProperties_type::insert(const Step::RefPtr< IfcProperty > &value) throw(std::out_of_range) {
    IfcProperty *inverse = const_cast< IfcProperty * > (value.get());
    Set_IfcProperty_1_n::insert(value);
    inverse->m_partOfComplex.insert(mOwner);
}

Inverted_IfcComplexProperty_HasProperties_type::size_type Inverted_IfcComplexProperty_HasProperties_type::erase(const Step::RefPtr< IfcProperty > &value) {
    IfcProperty *inverse = const_cast< IfcProperty * > (value.get());
    inverse->m_partOfComplex.erase(mOwner);
    return Set_IfcProperty_1_n::erase(value);
}

IfcComplexProperty::IfcComplexProperty(Step::Id id, Step::SPFData *args) : IfcProperty(id, args) {
    m_usageName = Step::getUnset(m_usageName);
    m_hasProperties.setUnset(true);
    m_hasProperties.setOwner(this);
}

IfcComplexProperty::~IfcComplexProperty() {
}

bool IfcComplexProperty::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcComplexProperty(this);
}

const std::string &IfcComplexProperty::type() const {
    return IfcComplexProperty::s_type.getName();
}

const Step::ClassType &IfcComplexProperty::getClassType() {
    return IfcComplexProperty::s_type;
}

const Step::ClassType &IfcComplexProperty::getType() const {
    return IfcComplexProperty::s_type;
}

bool IfcComplexProperty::isOfType(const Step::ClassType &t) const {
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

const IfcIdentifier IfcComplexProperty::getUsageName() const {
    IfcComplexProperty * deConstObject = const_cast< IfcComplexProperty * > (this);
    return deConstObject->getUsageName();
}

void IfcComplexProperty::setUsageName(const IfcIdentifier &value) {
    m_usageName = value;
}

Set_IfcProperty_1_n &IfcComplexProperty::getHasProperties() {
    if (Step::BaseObject::inited()) {
        return m_hasProperties;
    }
    else {
        m_hasProperties.setUnset(true);
        return m_hasProperties;
    }
}

const Set_IfcProperty_1_n &IfcComplexProperty::getHasProperties() const {
    IfcComplexProperty * deConstObject = const_cast< IfcComplexProperty * > (this);
    return deConstObject->getHasProperties();
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
        m_usageName = Step::String::fromSPF(arg);
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
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)));
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
    Step::Set< Step::RefPtr< IfcProperty >, 1 >::const_iterator it_m_hasProperties;
    IfcProperty::copy(obj, copyop);
    setUsageName(obj.m_usageName);
    for (it_m_hasProperties = obj.m_hasProperties.begin(); it_m_hasProperties != obj.m_hasProperties.end(); ++it_m_hasProperties) {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_hasProperties).get()));
        m_hasProperties.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcComplexProperty::s_type("IfcComplexProperty");
