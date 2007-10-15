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

#include "ifc2x3/IfcAppliedValueRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
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

IfcAppliedValueRelationship::IfcAppliedValueRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_componentOfTotal = NULL;
    m_components.setUnset(true);
    m_components.setOwner(this);
    m_arithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcAppliedValueRelationship::~IfcAppliedValueRelationship() {
}

bool IfcAppliedValueRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAppliedValueRelationship(this);
}

const std::string &IfcAppliedValueRelationship::type() {
    return IfcAppliedValueRelationship::s_type.getName();
}

Step::ClassType IfcAppliedValueRelationship::getClassType() {
    return IfcAppliedValueRelationship::s_type;
}

Step::ClassType IfcAppliedValueRelationship::getType() const {
    return IfcAppliedValueRelationship::s_type;
}

bool IfcAppliedValueRelationship::isOfType(Step::ClassType t) {
    return IfcAppliedValueRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAppliedValue *IfcAppliedValueRelationship::getComponentOfTotal() {
    if (Step::BaseObject::inited()) {
        return m_componentOfTotal.get();
    }
    else {
        return NULL;
    }
}

void IfcAppliedValueRelationship::setComponentOfTotal(const Step::RefPtr< IfcAppliedValue > &value) {
    m_componentOfTotal = value;
    m_componentOfTotal->m_valueOfComponents.insert(this);
}

Step::Set< Step::RefPtr< IfcAppliedValue > > &IfcAppliedValueRelationship::getComponents() {
    if (Step::BaseObject::inited()) {
        return m_components;
    }
    else {
        m_components.setUnset(true);
        return m_components;
    }
}

IfcArithmeticOperatorEnum IfcAppliedValueRelationship::getArithmeticOperator() {
    if (Step::BaseObject::inited()) {
        return m_arithmeticOperator;
    }
    else {
        return IfcArithmeticOperatorEnum_UNSET;
    }
}

void IfcAppliedValueRelationship::setArithmeticOperator(IfcArithmeticOperatorEnum value) {
    m_arithmeticOperator = value;
}

IfcLabel IfcAppliedValueRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcAppliedValueRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcAppliedValueRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcAppliedValueRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcAppliedValueRelationship::release() {
    m_componentOfTotal.release();
    m_components.clear();
}

bool IfcAppliedValueRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_componentOfTotal = NULL;
    }
    else {
        m_componentOfTotal = static_cast< IfcAppliedValue * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_components.setUnset(true);
    }
    else {
        m_components.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcAppliedValue > attr2;
                attr2 = static_cast< IfcAppliedValue * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_components.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_arithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
    }
    else {
        if (arg == ".ADD.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_ADD;
        }
        else if (arg == ".DIVIDE.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_DIVIDE;
        }
        else if (arg == ".MULTIPLY.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_MULTIPLY;
        }
        else if (arg == ".SUBTRACT.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_SUBTRACT;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    return true;
}

void IfcAppliedValueRelationship::copy(const IfcAppliedValueRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcAppliedValue > >::const_iterator it_m_components;
    Step::BaseEntity::copy(obj, copyop);
    setComponentOfTotal(copyop(obj.m_componentOfTotal.get()));
    for (it_m_components = obj.m_components.begin(); it_m_components != obj.m_components.end(); ++it_m_components) {
        Step::RefPtr< IfcAppliedValue > copyTarget = copyop((*it_m_components).get());
        m_components.insert(copyTarget.get());
    }
    setArithmeticOperator(obj.m_arithmeticOperator);
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAppliedValueRelationship::s_type("IfcAppliedValueRelationship");
IfcAppliedValueRelationship::Inverted_Components_type::Inverted_Components_type() {
}

void IfcAppliedValueRelationship::Inverted_Components_type::setOwner(IfcAppliedValueRelationship *owner) {
    mOwner = owner;
}

void IfcAppliedValueRelationship::Inverted_Components_type::insert(const Step::RefPtr< IfcAppliedValue > &value) {
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    Step::Set< Step::RefPtr< IfcAppliedValue > >::insert(value);
    inverse->m_isComponentIn.insert(mOwner);
}

