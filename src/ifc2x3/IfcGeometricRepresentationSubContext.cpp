// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcGeometricRepresentationSubContext.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricRepresentationContext.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcGeometricRepresentationSubContext::IfcGeometricRepresentationSubContext(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationContext(id, args) {
    m_parentContext = NULL;
    m_targetScale = Step::getUnset(m_targetScale);
    m_targetView = IfcGeometricProjectionEnum_UNSET;
    m_userDefinedTargetView = Step::getUnset(m_userDefinedTargetView);
}

IfcGeometricRepresentationSubContext::~IfcGeometricRepresentationSubContext() {
}

bool IfcGeometricRepresentationSubContext::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricRepresentationSubContext(this);
}

const std::string &IfcGeometricRepresentationSubContext::type() const {
    return IfcGeometricRepresentationSubContext::s_type.getName();
}

const Step::ClassType &IfcGeometricRepresentationSubContext::getClassType() {
    return IfcGeometricRepresentationSubContext::s_type;
}

const Step::ClassType &IfcGeometricRepresentationSubContext::getType() const {
    return IfcGeometricRepresentationSubContext::s_type;
}

bool IfcGeometricRepresentationSubContext::isOfType(const Step::ClassType &t) const {
    return IfcGeometricRepresentationSubContext::s_type == t ? true : IfcGeometricRepresentationContext::isOfType(t);
}

IfcGeometricRepresentationContext *IfcGeometricRepresentationSubContext::getParentContext() {
    if (Step::BaseObject::inited()) {
        return m_parentContext.get();
    }
    else {
        return NULL;
    }
}

const IfcGeometricRepresentationContext *IfcGeometricRepresentationSubContext::getParentContext() const {
    IfcGeometricRepresentationSubContext * deConstObject = const_cast< IfcGeometricRepresentationSubContext * > (this);
    return deConstObject->getParentContext();
}

void IfcGeometricRepresentationSubContext::setParentContext(const Step::RefPtr< IfcGeometricRepresentationContext > &value) {
    if (m_parentContext.valid()) {
        m_parentContext->m_hasSubContexts.erase(this);
    }
    if (value.valid()) {
        value->m_hasSubContexts.insert(this);
    }
    m_parentContext = value;
}

void IfcGeometricRepresentationSubContext::unsetParentContext() {
    m_parentContext = Step::getUnset(getParentContext());
}

bool IfcGeometricRepresentationSubContext::testParentContext() const {
    return !Step::isUnset(getParentContext());
}

IfcPositiveRatioMeasure IfcGeometricRepresentationSubContext::getTargetScale() {
    if (Step::BaseObject::inited()) {
        return m_targetScale;
    }
    else {
        return Step::getUnset(m_targetScale);
    }
}

const IfcPositiveRatioMeasure IfcGeometricRepresentationSubContext::getTargetScale() const {
    IfcGeometricRepresentationSubContext * deConstObject = const_cast< IfcGeometricRepresentationSubContext * > (this);
    return deConstObject->getTargetScale();
}

void IfcGeometricRepresentationSubContext::setTargetScale(IfcPositiveRatioMeasure value) {
    m_targetScale = value;
}

void IfcGeometricRepresentationSubContext::unsetTargetScale() {
    m_targetScale = Step::getUnset(getTargetScale());
}

bool IfcGeometricRepresentationSubContext::testTargetScale() const {
    return !Step::isUnset(getTargetScale());
}

IfcGeometricProjectionEnum IfcGeometricRepresentationSubContext::getTargetView() {
    if (Step::BaseObject::inited()) {
        return m_targetView;
    }
    else {
        return IfcGeometricProjectionEnum_UNSET;
    }
}

const IfcGeometricProjectionEnum IfcGeometricRepresentationSubContext::getTargetView() const {
    IfcGeometricRepresentationSubContext * deConstObject = const_cast< IfcGeometricRepresentationSubContext * > (this);
    return deConstObject->getTargetView();
}

void IfcGeometricRepresentationSubContext::setTargetView(IfcGeometricProjectionEnum value) {
    m_targetView = value;
}

void IfcGeometricRepresentationSubContext::unsetTargetView() {
    m_targetView = IfcGeometricProjectionEnum_UNSET;
}

bool IfcGeometricRepresentationSubContext::testTargetView() const {
    return getTargetView() != IfcGeometricProjectionEnum_UNSET;
}

IfcLabel IfcGeometricRepresentationSubContext::getUserDefinedTargetView() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedTargetView;
    }
    else {
        return Step::getUnset(m_userDefinedTargetView);
    }
}

const IfcLabel IfcGeometricRepresentationSubContext::getUserDefinedTargetView() const {
    IfcGeometricRepresentationSubContext * deConstObject = const_cast< IfcGeometricRepresentationSubContext * > (this);
    return deConstObject->getUserDefinedTargetView();
}

void IfcGeometricRepresentationSubContext::setUserDefinedTargetView(const IfcLabel &value) {
    m_userDefinedTargetView = value;
}

void IfcGeometricRepresentationSubContext::unsetUserDefinedTargetView() {
    m_userDefinedTargetView = Step::getUnset(getUserDefinedTargetView());
}

bool IfcGeometricRepresentationSubContext::testUserDefinedTargetView() const {
    return !Step::isUnset(getUserDefinedTargetView());
}

bool IfcGeometricRepresentationSubContext::init() {
    bool status = IfcGeometricRepresentationContext::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parentContext = NULL;
    }
    else {
        m_parentContext = static_cast< IfcGeometricRepresentationContext * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_targetScale = Step::getUnset(m_targetScale);
    }
    else {
        m_targetScale = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_targetView = IfcGeometricProjectionEnum_UNSET;
    }
    else {
        if (arg == ".GRAPH_VIEW.") {
            m_targetView = IfcGeometricProjectionEnum_GRAPH_VIEW;
        }
        else if (arg == ".SKETCH_VIEW.") {
            m_targetView = IfcGeometricProjectionEnum_SKETCH_VIEW;
        }
        else if (arg == ".MODEL_VIEW.") {
            m_targetView = IfcGeometricProjectionEnum_MODEL_VIEW;
        }
        else if (arg == ".PLAN_VIEW.") {
            m_targetView = IfcGeometricProjectionEnum_PLAN_VIEW;
        }
        else if (arg == ".REFLECTED_PLAN_VIEW.") {
            m_targetView = IfcGeometricProjectionEnum_REFLECTED_PLAN_VIEW;
        }
        else if (arg == ".SECTION_VIEW.") {
            m_targetView = IfcGeometricProjectionEnum_SECTION_VIEW;
        }
        else if (arg == ".ELEVATION_VIEW.") {
            m_targetView = IfcGeometricProjectionEnum_ELEVATION_VIEW;
        }
        else if (arg == ".USERDEFINED.") {
            m_targetView = IfcGeometricProjectionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_targetView = IfcGeometricProjectionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedTargetView = Step::getUnset(m_userDefinedTargetView);
    }
    else {
        m_userDefinedTargetView = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcGeometricRepresentationSubContext::copy(const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationContext::copy(obj, copyop);
    setParentContext((IfcGeometricRepresentationContext*)copyop(obj.m_parentContext.get()));
    setTargetScale(obj.m_targetScale);
    setTargetView(obj.m_targetView);
    setUserDefinedTargetView(obj.m_userDefinedTargetView);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGeometricRepresentationSubContext::s_type("IfcGeometricRepresentationSubContext");
