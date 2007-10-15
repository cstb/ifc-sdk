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

#include "ifc2x3/IfcRepresentationMap.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
#include "ifc2x3/IfcMappedItem.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRepresentationMap::IfcRepresentationMap(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_mappingOrigin = NULL;
    m_mappedRepresentation = NULL;
    m_mapUsage.setUnset(true);
}

IfcRepresentationMap::~IfcRepresentationMap() {
}

bool IfcRepresentationMap::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRepresentationMap(this);
}

const std::string &IfcRepresentationMap::type() {
    return IfcRepresentationMap::s_type.getName();
}

Step::ClassType IfcRepresentationMap::getClassType() {
    return IfcRepresentationMap::s_type;
}

Step::ClassType IfcRepresentationMap::getType() const {
    return IfcRepresentationMap::s_type;
}

bool IfcRepresentationMap::isOfType(Step::ClassType t) {
    return IfcRepresentationMap::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAxis2Placement *IfcRepresentationMap::getMappingOrigin() {
    if (Step::BaseObject::inited()) {
        return m_mappingOrigin.get();
    }
    else {
        return NULL;
    }
}

void IfcRepresentationMap::setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_mappingOrigin = value;
}

IfcRepresentation *IfcRepresentationMap::getMappedRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_mappedRepresentation.get();
    }
    else {
        return NULL;
    }
}

void IfcRepresentationMap::setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value) {
    m_mappedRepresentation = value;
    m_mappedRepresentation->m_representationMap.insert(this);
}

Step::Set< Step::ObsPtr< IfcMappedItem > > &IfcRepresentationMap::getMapUsage() {
    if (Step::BaseObject::inited()) {
        return m_mapUsage;
    }
    else {
        m_mapUsage.setUnset(true);
        return m_mapUsage;
    }
}

void IfcRepresentationMap::release() {
    m_mappedRepresentation.release();
}

bool IfcRepresentationMap::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mappingOrigin = NULL;
    }
    else {
        m_mappingOrigin = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_mappingOrigin->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mappedRepresentation = NULL;
    }
    else {
        m_mappedRepresentation = static_cast< IfcRepresentation * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    inverses = m_args->getInverses(IfcMappedItem::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_mapUsage.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_mapUsage.insert(static_cast< IfcMappedItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationMap::copy(const IfcRepresentationMap &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    m_mappingOrigin = new IfcAxis2Placement;
    m_mappingOrigin->copy(*(obj.m_mappingOrigin.get()), copyop);
    setMappedRepresentation(copyop(obj.m_mappedRepresentation.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentationMap::s_type("IfcRepresentationMap");
