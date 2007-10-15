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

#include "ifc2x3/IfcProcess.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcRelAssignsToProcess.h"
#include "ifc2x3/IfcRelSequence.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProcess::IfcProcess(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
    m_operatesOn.setUnset(true);
    m_isSuccessorFrom.setUnset(true);
    m_isPredecessorTo.setUnset(true);
}

IfcProcess::~IfcProcess() {
}

bool IfcProcess::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProcess(this);
}

const std::string &IfcProcess::type() {
    return IfcProcess::s_type.getName();
}

Step::ClassType IfcProcess::getClassType() {
    return IfcProcess::s_type;
}

Step::ClassType IfcProcess::getType() const {
    return IfcProcess::s_type;
}

bool IfcProcess::isOfType(Step::ClassType t) {
    return IfcProcess::s_type == t ? true : IfcObject::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelAssignsToProcess > > &IfcProcess::getOperatesOn() {
    if (Step::BaseObject::inited()) {
        return m_operatesOn;
    }
    else {
        m_operatesOn.setUnset(true);
        return m_operatesOn;
    }
}

Step::Set< Step::ObsPtr< IfcRelSequence > > &IfcProcess::getIsSuccessorFrom() {
    if (Step::BaseObject::inited()) {
        return m_isSuccessorFrom;
    }
    else {
        m_isSuccessorFrom.setUnset(true);
        return m_isSuccessorFrom;
    }
}

Step::Set< Step::ObsPtr< IfcRelSequence > > &IfcProcess::getIsPredecessorTo() {
    if (Step::BaseObject::inited()) {
        return m_isPredecessorTo;
    }
    else {
        m_isPredecessorTo.setUnset(true);
        return m_isPredecessorTo;
    }
}

void IfcProcess::release() {
    IfcObject::release();
}

bool IfcProcess::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssignsToProcess::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_operatesOn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_operatesOn.insert(static_cast< IfcRelAssignsToProcess * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSequence::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_isSuccessorFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isSuccessorFrom.insert(static_cast< IfcRelSequence * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSequence::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_isPredecessorTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isPredecessorTo.insert(static_cast< IfcRelSequence * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProcess::copy(const IfcProcess &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProcess::s_type("IfcProcess");
