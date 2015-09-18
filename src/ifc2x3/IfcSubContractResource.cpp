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



#include <ifc2x3/IfcSubContractResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcConstructionResource.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSubContractResource::IfcSubContractResource(Step::Id id, Step::SPFData *args) : IfcConstructionResource(id, args) {
    m_subContractor = NULL;
    m_jobDescription = Step::getUnset(m_jobDescription);
}

IfcSubContractResource::~IfcSubContractResource() {
}

bool IfcSubContractResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSubContractResource(this);
}

const std::string &IfcSubContractResource::type() const {
    return IfcSubContractResource::s_type.getName();
}

const Step::ClassType &IfcSubContractResource::getClassType() {
    return IfcSubContractResource::s_type;
}

const Step::ClassType &IfcSubContractResource::getType() const {
    return IfcSubContractResource::s_type;
}

bool IfcSubContractResource::isOfType(const Step::ClassType &t) const {
    return IfcSubContractResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

IfcActorSelect *IfcSubContractResource::getSubContractor() {
    if (Step::BaseObject::inited()) {
        return m_subContractor.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcSubContractResource::getSubContractor() const {
    IfcSubContractResource * deConstObject = const_cast< IfcSubContractResource * > (this);
    return deConstObject->getSubContractor();
}

void IfcSubContractResource::setSubContractor(const Step::RefPtr< IfcActorSelect > &value) {
    m_subContractor = value;
}

void IfcSubContractResource::unsetSubContractor() {
    m_subContractor = Step::getUnset(getSubContractor());
}

bool IfcSubContractResource::testSubContractor() const {
    return !Step::isUnset(getSubContractor());
}

IfcText IfcSubContractResource::getJobDescription() {
    if (Step::BaseObject::inited()) {
        return m_jobDescription;
    }
    else {
        return Step::getUnset(m_jobDescription);
    }
}

const IfcText IfcSubContractResource::getJobDescription() const {
    IfcSubContractResource * deConstObject = const_cast< IfcSubContractResource * > (this);
    return deConstObject->getJobDescription();
}

void IfcSubContractResource::setJobDescription(const IfcText &value) {
    m_jobDescription = value;
}

void IfcSubContractResource::unsetJobDescription() {
    m_jobDescription = Step::getUnset(getJobDescription());
}

bool IfcSubContractResource::testJobDescription() const {
    return !Step::isUnset(getJobDescription());
}

bool IfcSubContractResource::init() {
    bool status = IfcConstructionResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_subContractor = NULL;
    }
    else {
        m_subContractor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_subContractor->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_jobDescription = Step::getUnset(m_jobDescription);
    }
    else {
        m_jobDescription = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcSubContractResource::copy(const IfcSubContractResource &obj, const CopyOp &copyop) {
    IfcConstructionResource::copy(obj, copyop);
    m_subContractor = new IfcActorSelect;
    m_subContractor->copy(*(obj.m_subContractor.get()), copyop);
    setJobDescription(obj.m_jobDescription);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSubContractResource::s_type("IfcSubContractResource");
