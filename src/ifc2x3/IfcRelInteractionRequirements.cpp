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



#include <ifc2x3/IfcRelInteractionRequirements.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/IfcSpaceProgram.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelInteractionRequirements::IfcRelInteractionRequirements(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_dailyInteraction = Step::getUnset(m_dailyInteraction);
    m_importanceRating = Step::getUnset(m_importanceRating);
    m_locationOfInteraction = NULL;
    m_relatedSpaceProgram = NULL;
    m_relatingSpaceProgram = NULL;
}

IfcRelInteractionRequirements::~IfcRelInteractionRequirements() {
}

bool IfcRelInteractionRequirements::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelInteractionRequirements(this);
}

const std::string &IfcRelInteractionRequirements::type() const {
    return IfcRelInteractionRequirements::s_type.getName();
}

const Step::ClassType &IfcRelInteractionRequirements::getClassType() {
    return IfcRelInteractionRequirements::s_type;
}

const Step::ClassType &IfcRelInteractionRequirements::getType() const {
    return IfcRelInteractionRequirements::s_type;
}

bool IfcRelInteractionRequirements::isOfType(const Step::ClassType &t) const {
    return IfcRelInteractionRequirements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcCountMeasure IfcRelInteractionRequirements::getDailyInteraction() {
    if (Step::BaseObject::inited()) {
        return m_dailyInteraction;
    }
    else {
        return Step::getUnset(m_dailyInteraction);
    }
}

const IfcCountMeasure IfcRelInteractionRequirements::getDailyInteraction() const {
    IfcRelInteractionRequirements * deConstObject = const_cast< IfcRelInteractionRequirements * > (this);
    return deConstObject->getDailyInteraction();
}

void IfcRelInteractionRequirements::setDailyInteraction(IfcCountMeasure value) {
    m_dailyInteraction = value;
}

void IfcRelInteractionRequirements::unsetDailyInteraction() {
    m_dailyInteraction = Step::getUnset(getDailyInteraction());
}

bool IfcRelInteractionRequirements::testDailyInteraction() const {
    return !Step::isUnset(getDailyInteraction());
}

IfcNormalisedRatioMeasure IfcRelInteractionRequirements::getImportanceRating() {
    if (Step::BaseObject::inited()) {
        return m_importanceRating;
    }
    else {
        return Step::getUnset(m_importanceRating);
    }
}

const IfcNormalisedRatioMeasure IfcRelInteractionRequirements::getImportanceRating() const {
    IfcRelInteractionRequirements * deConstObject = const_cast< IfcRelInteractionRequirements * > (this);
    return deConstObject->getImportanceRating();
}

void IfcRelInteractionRequirements::setImportanceRating(IfcNormalisedRatioMeasure value) {
    m_importanceRating = value;
}

void IfcRelInteractionRequirements::unsetImportanceRating() {
    m_importanceRating = Step::getUnset(getImportanceRating());
}

bool IfcRelInteractionRequirements::testImportanceRating() const {
    return !Step::isUnset(getImportanceRating());
}

IfcSpatialStructureElement *IfcRelInteractionRequirements::getLocationOfInteraction() {
    if (Step::BaseObject::inited()) {
        return m_locationOfInteraction.get();
    }
    else {
        return NULL;
    }
}

const IfcSpatialStructureElement *IfcRelInteractionRequirements::getLocationOfInteraction() const {
    IfcRelInteractionRequirements * deConstObject = const_cast< IfcRelInteractionRequirements * > (this);
    return deConstObject->getLocationOfInteraction();
}

void IfcRelInteractionRequirements::setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    m_locationOfInteraction = value;
}

void IfcRelInteractionRequirements::unsetLocationOfInteraction() {
    m_locationOfInteraction = Step::getUnset(getLocationOfInteraction());
}

bool IfcRelInteractionRequirements::testLocationOfInteraction() const {
    return !Step::isUnset(getLocationOfInteraction());
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatedSpaceProgram() {
    if (Step::BaseObject::inited()) {
        return m_relatedSpaceProgram.get();
    }
    else {
        return NULL;
    }
}

const IfcSpaceProgram *IfcRelInteractionRequirements::getRelatedSpaceProgram() const {
    IfcRelInteractionRequirements * deConstObject = const_cast< IfcRelInteractionRequirements * > (this);
    return deConstObject->getRelatedSpaceProgram();
}

void IfcRelInteractionRequirements::setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value) {
    if (m_relatedSpaceProgram.valid()) {
        m_relatedSpaceProgram->m_hasInteractionReqsFrom.erase(this);
    }
    if (value.valid()) {
        value->m_hasInteractionReqsFrom.insert(this);
    }
    m_relatedSpaceProgram = value;
}

void IfcRelInteractionRequirements::unsetRelatedSpaceProgram() {
    m_relatedSpaceProgram = Step::getUnset(getRelatedSpaceProgram());
}

bool IfcRelInteractionRequirements::testRelatedSpaceProgram() const {
    return !Step::isUnset(getRelatedSpaceProgram());
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatingSpaceProgram() {
    if (Step::BaseObject::inited()) {
        return m_relatingSpaceProgram.get();
    }
    else {
        return NULL;
    }
}

const IfcSpaceProgram *IfcRelInteractionRequirements::getRelatingSpaceProgram() const {
    IfcRelInteractionRequirements * deConstObject = const_cast< IfcRelInteractionRequirements * > (this);
    return deConstObject->getRelatingSpaceProgram();
}

void IfcRelInteractionRequirements::setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value) {
    if (m_relatingSpaceProgram.valid()) {
        m_relatingSpaceProgram->m_hasInteractionReqsTo.erase(this);
    }
    if (value.valid()) {
        value->m_hasInteractionReqsTo.insert(this);
    }
    m_relatingSpaceProgram = value;
}

void IfcRelInteractionRequirements::unsetRelatingSpaceProgram() {
    m_relatingSpaceProgram = Step::getUnset(getRelatingSpaceProgram());
}

bool IfcRelInteractionRequirements::testRelatingSpaceProgram() const {
    return !Step::isUnset(getRelatingSpaceProgram());
}

bool IfcRelInteractionRequirements::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dailyInteraction = Step::getUnset(m_dailyInteraction);
    }
    else {
        m_dailyInteraction = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_importanceRating = Step::getUnset(m_importanceRating);
    }
    else {
        m_importanceRating = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_locationOfInteraction = NULL;
    }
    else {
        m_locationOfInteraction = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedSpaceProgram = NULL;
    }
    else {
        m_relatedSpaceProgram = static_cast< IfcSpaceProgram * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingSpaceProgram = NULL;
    }
    else {
        m_relatingSpaceProgram = static_cast< IfcSpaceProgram * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelInteractionRequirements::copy(const IfcRelInteractionRequirements &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setDailyInteraction(obj.m_dailyInteraction);
    setImportanceRating(obj.m_importanceRating);
    setLocationOfInteraction((IfcSpatialStructureElement*)copyop(obj.m_locationOfInteraction.get()));
    setRelatedSpaceProgram((IfcSpaceProgram*)copyop(obj.m_relatedSpaceProgram.get()));
    setRelatingSpaceProgram((IfcSpaceProgram*)copyop(obj.m_relatingSpaceProgram.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelInteractionRequirements::s_type("IfcRelInteractionRequirements");
