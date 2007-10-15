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

#include "ifc2x3/IfcRelSequence.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProcess.h"
#include "ifc2x3/IfcRelConnects.h"
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

IfcRelSequence::IfcRelSequence(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingProcess = NULL;
    m_relatedProcess = NULL;
    m_timeLag = Step::getUnset(m_timeLag);
    m_sequenceType = IfcSequenceEnum_UNSET;
}

IfcRelSequence::~IfcRelSequence() {
}

bool IfcRelSequence::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelSequence(this);
}

const std::string &IfcRelSequence::type() {
    return IfcRelSequence::s_type.getName();
}

Step::ClassType IfcRelSequence::getClassType() {
    return IfcRelSequence::s_type;
}

Step::ClassType IfcRelSequence::getType() const {
    return IfcRelSequence::s_type;
}

bool IfcRelSequence::isOfType(Step::ClassType t) {
    return IfcRelSequence::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcProcess *IfcRelSequence::getRelatingProcess() {
    if (Step::BaseObject::inited()) {
        return m_relatingProcess.get();
    }
    else {
        return NULL;
    }
}

void IfcRelSequence::setRelatingProcess(const Step::RefPtr< IfcProcess > &value) {
    m_relatingProcess = value;
    m_relatingProcess->m_isPredecessorTo.insert(this);
}

IfcProcess *IfcRelSequence::getRelatedProcess() {
    if (Step::BaseObject::inited()) {
        return m_relatedProcess.get();
    }
    else {
        return NULL;
    }
}

void IfcRelSequence::setRelatedProcess(const Step::RefPtr< IfcProcess > &value) {
    m_relatedProcess = value;
    m_relatedProcess->m_isSuccessorFrom.insert(this);
}

IfcTimeMeasure IfcRelSequence::getTimeLag() {
    if (Step::BaseObject::inited()) {
        return m_timeLag;
    }
    else {
        return Step::getUnset(m_timeLag);
    }
}

void IfcRelSequence::setTimeLag(IfcTimeMeasure value) {
    m_timeLag = value;
}

IfcSequenceEnum IfcRelSequence::getSequenceType() {
    if (Step::BaseObject::inited()) {
        return m_sequenceType;
    }
    else {
        return IfcSequenceEnum_UNSET;
    }
}

void IfcRelSequence::setSequenceType(IfcSequenceEnum value) {
    m_sequenceType = value;
}

void IfcRelSequence::release() {
    IfcRelConnects::release();
    m_relatingProcess.release();
    m_relatedProcess.release();
}

bool IfcRelSequence::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingProcess = NULL;
    }
    else {
        m_relatingProcess = static_cast< IfcProcess * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedProcess = NULL;
    }
    else {
        m_relatedProcess = static_cast< IfcProcess * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeLag = Step::getUnset(m_timeLag);
    }
    else {
        m_timeLag = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sequenceType = IfcSequenceEnum_UNSET;
    }
    else {
        if (arg == ".START_START.") {
            m_sequenceType = IfcSequenceEnum_START_START;
        }
        else if (arg == ".START_FINISH.") {
            m_sequenceType = IfcSequenceEnum_START_FINISH;
        }
        else if (arg == ".FINISH_START.") {
            m_sequenceType = IfcSequenceEnum_FINISH_START;
        }
        else if (arg == ".FINISH_FINISH.") {
            m_sequenceType = IfcSequenceEnum_FINISH_FINISH;
        }
        else if (arg == ".NOTDEFINED.") {
            m_sequenceType = IfcSequenceEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelSequence::copy(const IfcRelSequence &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingProcess(copyop(obj.m_relatingProcess.get()));
    setRelatedProcess(copyop(obj.m_relatedProcess.get()));
    setTimeLag(obj.m_timeLag);
    setSequenceType(obj.m_sequenceType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelSequence::s_type("IfcRelSequence");
