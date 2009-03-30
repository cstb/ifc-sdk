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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcActionRequest.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcActionRequest::IfcActionRequest(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_requestID = Step::getUnset(m_requestID);
}

IfcActionRequest::~IfcActionRequest() {
}

bool IfcActionRequest::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcActionRequest(this);
}

const std::string &IfcActionRequest::type() const {
    return IfcActionRequest::s_type.getName();
}

const Step::ClassType &IfcActionRequest::getClassType() {
    return IfcActionRequest::s_type;
}

const Step::ClassType &IfcActionRequest::getType() const {
    return IfcActionRequest::s_type;
}

bool IfcActionRequest::isOfType(const Step::ClassType &t) const {
    return IfcActionRequest::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcActionRequest::getRequestID() {
    if (Step::BaseObject::inited()) {
        return m_requestID;
    }
    else {
        return Step::getUnset(m_requestID);
    }
}

const IfcIdentifier IfcActionRequest::getRequestID() const {
    IfcActionRequest * deConstObject = const_cast< IfcActionRequest * > (this);
    return deConstObject->getRequestID();
}

void IfcActionRequest::setRequestID(const IfcIdentifier &value) {
    m_requestID = value;
}

void IfcActionRequest::unsetRequestID() {
    m_requestID = Step::getUnset(getRequestID());
}

bool IfcActionRequest::testRequestID() const {
    return !Step::isUnset(getRequestID());
}

bool IfcActionRequest::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_requestID = Step::getUnset(m_requestID);
    }
    else {
        m_requestID = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcActionRequest::copy(const IfcActionRequest &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setRequestID(obj.m_requestID);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcActionRequest::s_type("IfcActionRequest");
