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

#include "ifc2x3/IfcRelConnectsWithRealizingElements.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/IfcRelConnectsElements.h"
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

IfcRelConnectsWithRealizingElements::IfcRelConnectsWithRealizingElements(Step::Id id, Step::SPFData *args) : IfcRelConnectsElements(id, args) {
    m_realizingElements.setUnset(true);
    m_realizingElements.setOwner(this);
    m_connectionType = Step::getUnset(m_connectionType);
}

IfcRelConnectsWithRealizingElements::~IfcRelConnectsWithRealizingElements() {
}

bool IfcRelConnectsWithRealizingElements::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsWithRealizingElements(this);
}

const std::string &IfcRelConnectsWithRealizingElements::type() {
    return IfcRelConnectsWithRealizingElements::s_type.getName();
}

Step::ClassType IfcRelConnectsWithRealizingElements::getClassType() {
    return IfcRelConnectsWithRealizingElements::s_type;
}

Step::ClassType IfcRelConnectsWithRealizingElements::getType() const {
    return IfcRelConnectsWithRealizingElements::s_type;
}

bool IfcRelConnectsWithRealizingElements::isOfType(Step::ClassType t) {
    return IfcRelConnectsWithRealizingElements::s_type == t ? true : IfcRelConnectsElements::isOfType(t);
}

Step::Set< Step::RefPtr< IfcElement > > &IfcRelConnectsWithRealizingElements::getRealizingElements() {
    if (Step::BaseObject::inited()) {
        return m_realizingElements;
    }
    else {
        m_realizingElements.setUnset(true);
        return m_realizingElements;
    }
}

IfcLabel IfcRelConnectsWithRealizingElements::getConnectionType() {
    if (Step::BaseObject::inited()) {
        return m_connectionType;
    }
    else {
        return Step::getUnset(m_connectionType);
    }
}

void IfcRelConnectsWithRealizingElements::setConnectionType(const IfcLabel &value) {
    m_connectionType = value;
}

void IfcRelConnectsWithRealizingElements::release() {
    IfcRelConnectsElements::release();
    m_realizingElements.clear();
}

bool IfcRelConnectsWithRealizingElements::init() {
    bool status = IfcRelConnectsElements::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_realizingElements.setUnset(true);
    }
    else {
        m_realizingElements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcElement > attr2;
                attr2 = static_cast< IfcElement * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_realizingElements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_connectionType = Step::getUnset(m_connectionType);
    }
    else {
        m_connectionType = Step::spfToString(arg);
    }
    return true;
}

void IfcRelConnectsWithRealizingElements::copy(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcElement > >::const_iterator it_m_realizingElements;
    IfcRelConnectsElements::copy(obj, copyop);
    for (it_m_realizingElements = obj.m_realizingElements.begin(); it_m_realizingElements != obj.m_realizingElements.end(); ++it_m_realizingElements) {
        Step::RefPtr< IfcElement > copyTarget = copyop((*it_m_realizingElements).get());
        m_realizingElements.insert(copyTarget.get());
    }
    setConnectionType(obj.m_connectionType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsWithRealizingElements::s_type("IfcRelConnectsWithRealizingElements");
IfcRelConnectsWithRealizingElements::Inverted_RealizingElements_type::Inverted_RealizingElements_type() {
}

void IfcRelConnectsWithRealizingElements::Inverted_RealizingElements_type::setOwner(IfcRelConnectsWithRealizingElements *owner) {
    mOwner = owner;
}

void IfcRelConnectsWithRealizingElements::Inverted_RealizingElements_type::insert(const Step::RefPtr< IfcElement > &value) {
    IfcElement *inverse = const_cast< IfcElement * > (value.get());
    Step::Set< Step::RefPtr< IfcElement > >::insert(value);
    inverse->m_isConnectionRealization.insert(mOwner);
}

