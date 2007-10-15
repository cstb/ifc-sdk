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

#include "ifc2x3/IfcRelInteractionRequirements.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcSpaceProgram.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcRelInteractionRequirements::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelInteractionRequirements(this);
}

const std::string &IfcRelInteractionRequirements::type() {
    return IfcRelInteractionRequirements::s_type.getName();
}

Step::ClassType IfcRelInteractionRequirements::getClassType() {
    return IfcRelInteractionRequirements::s_type;
}

Step::ClassType IfcRelInteractionRequirements::getType() const {
    return IfcRelInteractionRequirements::s_type;
}

bool IfcRelInteractionRequirements::isOfType(Step::ClassType t) {
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

void IfcRelInteractionRequirements::setDailyInteraction(IfcCountMeasure value) {
    m_dailyInteraction = value;
}

IfcNormalisedRatioMeasure IfcRelInteractionRequirements::getImportanceRating() {
    if (Step::BaseObject::inited()) {
        return m_importanceRating;
    }
    else {
        return Step::getUnset(m_importanceRating);
    }
}

void IfcRelInteractionRequirements::setImportanceRating(IfcNormalisedRatioMeasure value) {
    m_importanceRating = value;
}

IfcSpatialStructureElement *IfcRelInteractionRequirements::getLocationOfInteraction() {
    if (Step::BaseObject::inited()) {
        return m_locationOfInteraction.get();
    }
    else {
        return NULL;
    }
}

void IfcRelInteractionRequirements::setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    m_locationOfInteraction = value;
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatedSpaceProgram() {
    if (Step::BaseObject::inited()) {
        return m_relatedSpaceProgram.get();
    }
    else {
        return NULL;
    }
}

void IfcRelInteractionRequirements::setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value) {
    m_relatedSpaceProgram = value;
    m_relatedSpaceProgram->m_hasInteractionReqsFrom.insert(this);
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatingSpaceProgram() {
    if (Step::BaseObject::inited()) {
        return m_relatingSpaceProgram.get();
    }
    else {
        return NULL;
    }
}

void IfcRelInteractionRequirements::setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value) {
    m_relatingSpaceProgram = value;
    m_relatingSpaceProgram->m_hasInteractionReqsTo.insert(this);
}

void IfcRelInteractionRequirements::release() {
    IfcRelConnects::release();
    m_locationOfInteraction.release();
    m_relatedSpaceProgram.release();
    m_relatingSpaceProgram.release();
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
        m_locationOfInteraction = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedSpaceProgram = NULL;
    }
    else {
        m_relatedSpaceProgram = static_cast< IfcSpaceProgram * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingSpaceProgram = NULL;
    }
    else {
        m_relatingSpaceProgram = static_cast< IfcSpaceProgram * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelInteractionRequirements::copy(const IfcRelInteractionRequirements &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setDailyInteraction(obj.m_dailyInteraction);
    setImportanceRating(obj.m_importanceRating);
    setLocationOfInteraction(copyop(obj.m_locationOfInteraction.get()));
    setRelatedSpaceProgram(copyop(obj.m_relatedSpaceProgram.get()));
    setRelatingSpaceProgram(copyop(obj.m_relatingSpaceProgram.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelInteractionRequirements::s_type("IfcRelInteractionRequirements");
