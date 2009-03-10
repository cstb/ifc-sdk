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

#include "ifc2x3/IfcSpaceProgram.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcRelInteractionRequirements.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSpaceProgram::IfcSpaceProgram(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_spaceProgramIdentifier = Step::getUnset(m_spaceProgramIdentifier);
    m_maxRequiredArea = Step::getUnset(m_maxRequiredArea);
    m_minRequiredArea = Step::getUnset(m_minRequiredArea);
    m_requestedLocation = NULL;
    m_standardRequiredArea = Step::getUnset(m_standardRequiredArea);
}

IfcSpaceProgram::~IfcSpaceProgram() {
}

bool IfcSpaceProgram::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpaceProgram(this);
}

const std::string &IfcSpaceProgram::type() const {
    return IfcSpaceProgram::s_type.getName();
}

const Step::ClassType &IfcSpaceProgram::getClassType() {
    return IfcSpaceProgram::s_type;
}

const Step::ClassType &IfcSpaceProgram::getType() const {
    return IfcSpaceProgram::s_type;
}

bool IfcSpaceProgram::isOfType(const Step::ClassType &t) const {
    return IfcSpaceProgram::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcSpaceProgram::getSpaceProgramIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_spaceProgramIdentifier;
    }
    else {
        return Step::getUnset(m_spaceProgramIdentifier);
    }
}

const IfcIdentifier IfcSpaceProgram::getSpaceProgramIdentifier() const {
    IfcSpaceProgram * deConstObject = const_cast< IfcSpaceProgram * > (this);
    return deConstObject->getSpaceProgramIdentifier();
}

void IfcSpaceProgram::setSpaceProgramIdentifier(const IfcIdentifier &value) {
    m_spaceProgramIdentifier = value;
}

IfcAreaMeasure IfcSpaceProgram::getMaxRequiredArea() {
    if (Step::BaseObject::inited()) {
        return m_maxRequiredArea;
    }
    else {
        return Step::getUnset(m_maxRequiredArea);
    }
}

const IfcAreaMeasure IfcSpaceProgram::getMaxRequiredArea() const {
    IfcSpaceProgram * deConstObject = const_cast< IfcSpaceProgram * > (this);
    return deConstObject->getMaxRequiredArea();
}

void IfcSpaceProgram::setMaxRequiredArea(IfcAreaMeasure value) {
    m_maxRequiredArea = value;
}

IfcAreaMeasure IfcSpaceProgram::getMinRequiredArea() {
    if (Step::BaseObject::inited()) {
        return m_minRequiredArea;
    }
    else {
        return Step::getUnset(m_minRequiredArea);
    }
}

const IfcAreaMeasure IfcSpaceProgram::getMinRequiredArea() const {
    IfcSpaceProgram * deConstObject = const_cast< IfcSpaceProgram * > (this);
    return deConstObject->getMinRequiredArea();
}

void IfcSpaceProgram::setMinRequiredArea(IfcAreaMeasure value) {
    m_minRequiredArea = value;
}

IfcSpatialStructureElement *IfcSpaceProgram::getRequestedLocation() {
    if (Step::BaseObject::inited()) {
        return m_requestedLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcSpatialStructureElement *IfcSpaceProgram::getRequestedLocation() const {
    IfcSpaceProgram * deConstObject = const_cast< IfcSpaceProgram * > (this);
    return deConstObject->getRequestedLocation();
}

void IfcSpaceProgram::setRequestedLocation(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    m_requestedLocation = value;
}

IfcAreaMeasure IfcSpaceProgram::getStandardRequiredArea() {
    if (Step::BaseObject::inited()) {
        return m_standardRequiredArea;
    }
    else {
        return Step::getUnset(m_standardRequiredArea);
    }
}

const IfcAreaMeasure IfcSpaceProgram::getStandardRequiredArea() const {
    IfcSpaceProgram * deConstObject = const_cast< IfcSpaceProgram * > (this);
    return deConstObject->getStandardRequiredArea();
}

void IfcSpaceProgram::setStandardRequiredArea(IfcAreaMeasure value) {
    m_standardRequiredArea = value;
}

Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsFrom() {
    if (Step::BaseObject::inited()) {
        return m_hasInteractionReqsFrom;
    }
    else {
        m_hasInteractionReqsFrom.setUnset(true);
        return m_hasInteractionReqsFrom;
    }
}

const Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsFrom() const {
    IfcSpaceProgram * deConstObject = const_cast< IfcSpaceProgram * > (this);
    return deConstObject->getHasInteractionReqsFrom();
}

Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsTo() {
    if (Step::BaseObject::inited()) {
        return m_hasInteractionReqsTo;
    }
    else {
        m_hasInteractionReqsTo.setUnset(true);
        return m_hasInteractionReqsTo;
    }
}

const Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsTo() const {
    IfcSpaceProgram * deConstObject = const_cast< IfcSpaceProgram * > (this);
    return deConstObject->getHasInteractionReqsTo();
}

bool IfcSpaceProgram::init() {
    bool status = IfcControl::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_spaceProgramIdentifier = Step::getUnset(m_spaceProgramIdentifier);
    }
    else {
        m_spaceProgramIdentifier = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maxRequiredArea = Step::getUnset(m_maxRequiredArea);
    }
    else {
        m_maxRequiredArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minRequiredArea = Step::getUnset(m_minRequiredArea);
    }
    else {
        m_minRequiredArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_requestedLocation = NULL;
    }
    else {
        m_requestedLocation = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_standardRequiredArea = Step::getUnset(m_standardRequiredArea);
    }
    else {
        m_standardRequiredArea = Step::spfToReal(arg);
    }
    inverses = m_args->getInverses(IfcRelInteractionRequirements::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_hasInteractionReqsFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasInteractionReqsFrom.insert(static_cast< IfcRelInteractionRequirements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelInteractionRequirements::getClassType(), 8);
    if (inverses) {
        unsigned int i;
        m_hasInteractionReqsTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasInteractionReqsTo.insert(static_cast< IfcRelInteractionRequirements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSpaceProgram::copy(const IfcSpaceProgram &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setSpaceProgramIdentifier(obj.m_spaceProgramIdentifier);
    setMaxRequiredArea(obj.m_maxRequiredArea);
    setMinRequiredArea(obj.m_minRequiredArea);
    setRequestedLocation((IfcSpatialStructureElement*)copyop(obj.m_requestedLocation.get()));
    setStandardRequiredArea(obj.m_standardRequiredArea);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceProgram::s_type("IfcSpaceProgram");
