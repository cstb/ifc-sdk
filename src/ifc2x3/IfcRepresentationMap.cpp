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
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcRepresentationMap::IfcRepresentationMap(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_mappingOrigin = NULL;
    m_mappedRepresentation = NULL;
}

IfcRepresentationMap::~IfcRepresentationMap() {
}

bool IfcRepresentationMap::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRepresentationMap(this);
}

const std::string &IfcRepresentationMap::type() const {
    return IfcRepresentationMap::s_type.getName();
}

const Step::ClassType &IfcRepresentationMap::getClassType() {
    return IfcRepresentationMap::s_type;
}

const Step::ClassType &IfcRepresentationMap::getType() const {
    return IfcRepresentationMap::s_type;
}

bool IfcRepresentationMap::isOfType(const Step::ClassType &t) const {
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

const IfcAxis2Placement *IfcRepresentationMap::getMappingOrigin() const {
    IfcRepresentationMap * deConstObject = const_cast< IfcRepresentationMap * > (this);
    return deConstObject->getMappingOrigin();
}

void IfcRepresentationMap::setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_mappingOrigin = value;
}

void IfcRepresentationMap::unsetMappingOrigin() {
    m_mappingOrigin = Step::getUnset(getMappingOrigin());
}

bool IfcRepresentationMap::testMappingOrigin() const {
    return !Step::isUnset(getMappingOrigin());
}

IfcRepresentation *IfcRepresentationMap::getMappedRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_mappedRepresentation.get();
    }
    else {
        return NULL;
    }
}

const IfcRepresentation *IfcRepresentationMap::getMappedRepresentation() const {
    IfcRepresentationMap * deConstObject = const_cast< IfcRepresentationMap * > (this);
    return deConstObject->getMappedRepresentation();
}

void IfcRepresentationMap::setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value) {
    if (m_mappedRepresentation.valid()) {
        m_mappedRepresentation->m_representationMap.erase(this);
    }
    if (value.valid()) {
        value->m_representationMap.insert(this);
    }
    m_mappedRepresentation = value;
}

void IfcRepresentationMap::unsetMappedRepresentation() {
    m_mappedRepresentation = Step::getUnset(getMappedRepresentation());
}

bool IfcRepresentationMap::testMappedRepresentation() const {
    return !Step::isUnset(getMappedRepresentation());
}

Inverse_Set_IfcMappedItem_0_n &IfcRepresentationMap::getMapUsage() {
    if (Step::BaseObject::inited()) {
        return m_mapUsage;
    }
    else {
        m_mapUsage.setUnset(true);
        return m_mapUsage;
    }
}

const Inverse_Set_IfcMappedItem_0_n &IfcRepresentationMap::getMapUsage() const {
    IfcRepresentationMap * deConstObject = const_cast< IfcRepresentationMap * > (this);
    return deConstObject->getMapUsage();
}

bool IfcRepresentationMap::testMapUsage() const {
    return !Step::isUnset(getMapUsage());
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
        m_mappedRepresentation = static_cast< IfcRepresentation * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
    setMappedRepresentation((IfcRepresentation*)copyop(obj.m_mappedRepresentation.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentationMap::s_type("IfcRepresentationMap");
