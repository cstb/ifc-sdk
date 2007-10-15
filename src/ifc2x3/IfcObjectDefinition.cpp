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

#include "ifc2x3/IfcObjectDefinition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/IfcRelDecomposes.h"
#include "ifc2x3/IfcRoot.h"
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

IfcObjectDefinition::IfcObjectDefinition(Step::Id id, Step::SPFData *args) : IfcRoot(id, args) {
    m_hasAssignments.setUnset(true);
    m_isDecomposedBy.setUnset(true);
    m_decomposes.setUnset(true);
    m_hasAssociations.setUnset(true);
}

IfcObjectDefinition::~IfcObjectDefinition() {
}

bool IfcObjectDefinition::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcObjectDefinition(this);
}

const std::string &IfcObjectDefinition::type() {
    return IfcObjectDefinition::s_type.getName();
}

Step::ClassType IfcObjectDefinition::getClassType() {
    return IfcObjectDefinition::s_type;
}

Step::ClassType IfcObjectDefinition::getType() const {
    return IfcObjectDefinition::s_type;
}

bool IfcObjectDefinition::isOfType(Step::ClassType t) {
    return IfcObjectDefinition::s_type == t ? true : IfcRoot::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelAssigns > > &IfcObjectDefinition::getHasAssignments() {
    if (Step::BaseObject::inited()) {
        return m_hasAssignments;
    }
    else {
        m_hasAssignments.setUnset(true);
        return m_hasAssignments;
    }
}

Step::Set< Step::ObsPtr< IfcRelDecomposes > > &IfcObjectDefinition::getIsDecomposedBy() {
    if (Step::BaseObject::inited()) {
        return m_isDecomposedBy;
    }
    else {
        m_isDecomposedBy.setUnset(true);
        return m_isDecomposedBy;
    }
}

Step::Set< Step::ObsPtr< IfcRelDecomposes > > &IfcObjectDefinition::getDecomposes() {
    if (Step::BaseObject::inited()) {
        return m_decomposes;
    }
    else {
        m_decomposes.setUnset(true);
        return m_decomposes;
    }
}

Step::Set< Step::ObsPtr< IfcRelAssociates > > &IfcObjectDefinition::getHasAssociations() {
    if (Step::BaseObject::inited()) {
        return m_hasAssociations;
    }
    else {
        m_hasAssociations.setUnset(true);
        return m_hasAssociations;
    }
}

void IfcObjectDefinition::release() {
    IfcRoot::release();
}

bool IfcObjectDefinition::init() {
    bool status = IfcRoot::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssigns::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasAssignments.insert(static_cast< IfcRelAssigns * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_isDecomposedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isDecomposedBy.insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_decomposes.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_decomposes.insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelAssociates::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasAssociations.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasAssociations.insert(static_cast< IfcRelAssociates * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObjectDefinition::copy(const IfcObjectDefinition &obj, const CopyOp &copyop) {
    IfcRoot::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcObjectDefinition::s_type("IfcObjectDefinition");
