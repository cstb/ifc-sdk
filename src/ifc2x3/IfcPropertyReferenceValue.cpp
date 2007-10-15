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

#include "ifc2x3/IfcPropertyReferenceValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectReferenceSelect.h"
#include "ifc2x3/IfcSimpleProperty.h"
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

IfcPropertyReferenceValue::IfcPropertyReferenceValue(Step::Id id, Step::SPFData *args) : IfcSimpleProperty(id, args) {
    m_usageName = Step::getUnset(m_usageName);
    m_propertyReference = NULL;
}

IfcPropertyReferenceValue::~IfcPropertyReferenceValue() {
}

bool IfcPropertyReferenceValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPropertyReferenceValue(this);
}

const std::string &IfcPropertyReferenceValue::type() {
    return IfcPropertyReferenceValue::s_type.getName();
}

Step::ClassType IfcPropertyReferenceValue::getClassType() {
    return IfcPropertyReferenceValue::s_type;
}

Step::ClassType IfcPropertyReferenceValue::getType() const {
    return IfcPropertyReferenceValue::s_type;
}

bool IfcPropertyReferenceValue::isOfType(Step::ClassType t) {
    return IfcPropertyReferenceValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

IfcLabel IfcPropertyReferenceValue::getUsageName() {
    if (Step::BaseObject::inited()) {
        return m_usageName;
    }
    else {
        return Step::getUnset(m_usageName);
    }
}

void IfcPropertyReferenceValue::setUsageName(const IfcLabel &value) {
    m_usageName = value;
}

IfcObjectReferenceSelect *IfcPropertyReferenceValue::getPropertyReference() {
    if (Step::BaseObject::inited()) {
        return m_propertyReference.get();
    }
    else {
        return NULL;
    }
}

void IfcPropertyReferenceValue::setPropertyReference(const Step::RefPtr< IfcObjectReferenceSelect > &value) {
    m_propertyReference = value;
}

void IfcPropertyReferenceValue::release() {
    IfcSimpleProperty::release();
}

bool IfcPropertyReferenceValue::init() {
    bool status = IfcSimpleProperty::init();
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
        m_propertyReference = NULL;
    }
    else {
        m_propertyReference = new IfcObjectReferenceSelect;
        if (arg[0] == '#') {
            m_propertyReference->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcPropertyReferenceValue::copy(const IfcPropertyReferenceValue &obj, const CopyOp &copyop) {
    IfcSimpleProperty::copy(obj, copyop);
    setUsageName(obj.m_usageName);
    m_propertyReference = new IfcObjectReferenceSelect;
    m_propertyReference->copy(*(obj.m_propertyReference.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyReferenceValue::s_type("IfcPropertyReferenceValue");
