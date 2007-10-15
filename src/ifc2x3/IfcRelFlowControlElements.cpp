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

#include "ifc2x3/IfcRelFlowControlElements.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionControlElement.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/IfcRelConnects.h"
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

IfcRelFlowControlElements::IfcRelFlowControlElements(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatedControlElements.setUnset(true);
    m_relatedControlElements.setOwner(this);
    m_relatingFlowElement = NULL;
}

IfcRelFlowControlElements::~IfcRelFlowControlElements() {
}

bool IfcRelFlowControlElements::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelFlowControlElements(this);
}

const std::string &IfcRelFlowControlElements::type() {
    return IfcRelFlowControlElements::s_type.getName();
}

Step::ClassType IfcRelFlowControlElements::getClassType() {
    return IfcRelFlowControlElements::s_type;
}

Step::ClassType IfcRelFlowControlElements::getType() const {
    return IfcRelFlowControlElements::s_type;
}

bool IfcRelFlowControlElements::isOfType(Step::ClassType t) {
    return IfcRelFlowControlElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

Step::Set< Step::RefPtr< IfcDistributionControlElement > > &IfcRelFlowControlElements::getRelatedControlElements() {
    if (Step::BaseObject::inited()) {
        return m_relatedControlElements;
    }
    else {
        m_relatedControlElements.setUnset(true);
        return m_relatedControlElements;
    }
}

IfcDistributionFlowElement *IfcRelFlowControlElements::getRelatingFlowElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingFlowElement.get();
    }
    else {
        return NULL;
    }
}

void IfcRelFlowControlElements::setRelatingFlowElement(const Step::RefPtr< IfcDistributionFlowElement > &value) {
    m_relatingFlowElement = value;
    m_relatingFlowElement->m_hasControlElements.insert(this);
}

void IfcRelFlowControlElements::release() {
    IfcRelConnects::release();
    m_relatedControlElements.clear();
    m_relatingFlowElement.release();
}

bool IfcRelFlowControlElements::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedControlElements.setUnset(true);
    }
    else {
        m_relatedControlElements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDistributionControlElement > attr2;
                attr2 = static_cast< IfcDistributionControlElement * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedControlElements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingFlowElement = NULL;
    }
    else {
        m_relatingFlowElement = static_cast< IfcDistributionFlowElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelFlowControlElements::copy(const IfcRelFlowControlElements &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDistributionControlElement > >::const_iterator it_m_relatedControlElements;
    IfcRelConnects::copy(obj, copyop);
    for (it_m_relatedControlElements = obj.m_relatedControlElements.begin(); it_m_relatedControlElements != obj.m_relatedControlElements.end(); ++it_m_relatedControlElements) {
        Step::RefPtr< IfcDistributionControlElement > copyTarget = copyop((*it_m_relatedControlElements).get());
        m_relatedControlElements.insert(copyTarget.get());
    }
    setRelatingFlowElement(copyop(obj.m_relatingFlowElement.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelFlowControlElements::s_type("IfcRelFlowControlElements");
IfcRelFlowControlElements::Inverted_RelatedControlElements_type::Inverted_RelatedControlElements_type() {
}

void IfcRelFlowControlElements::Inverted_RelatedControlElements_type::setOwner(IfcRelFlowControlElements *owner) {
    mOwner = owner;
}

void IfcRelFlowControlElements::Inverted_RelatedControlElements_type::insert(const Step::RefPtr< IfcDistributionControlElement > &value) {
    IfcDistributionControlElement *inverse = const_cast< IfcDistributionControlElement * > (value.get());
    Step::Set< Step::RefPtr< IfcDistributionControlElement > >::insert(value);
    inverse->m_assignedToFlowElement.insert(mOwner);
}

