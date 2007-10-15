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

#include "ifc2x3/IfcMappedItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/IfcRepresentationMap.h"
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

IfcMappedItem::IfcMappedItem(Step::Id id, Step::SPFData *args) : IfcRepresentationItem(id, args) {
    m_mappingSource = NULL;
    m_mappingTarget = NULL;
}

IfcMappedItem::~IfcMappedItem() {
}

bool IfcMappedItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMappedItem(this);
}

const std::string &IfcMappedItem::type() {
    return IfcMappedItem::s_type.getName();
}

Step::ClassType IfcMappedItem::getClassType() {
    return IfcMappedItem::s_type;
}

Step::ClassType IfcMappedItem::getType() const {
    return IfcMappedItem::s_type;
}

bool IfcMappedItem::isOfType(Step::ClassType t) {
    return IfcMappedItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

IfcRepresentationMap *IfcMappedItem::getMappingSource() {
    if (Step::BaseObject::inited()) {
        return m_mappingSource.get();
    }
    else {
        return NULL;
    }
}

void IfcMappedItem::setMappingSource(const Step::RefPtr< IfcRepresentationMap > &value) {
    m_mappingSource = value;
    m_mappingSource->m_mapUsage.insert(this);
}

IfcCartesianTransformationOperator *IfcMappedItem::getMappingTarget() {
    if (Step::BaseObject::inited()) {
        return m_mappingTarget.get();
    }
    else {
        return NULL;
    }
}

void IfcMappedItem::setMappingTarget(const Step::RefPtr< IfcCartesianTransformationOperator > &value) {
    m_mappingTarget = value;
}

void IfcMappedItem::release() {
    IfcRepresentationItem::release();
    m_mappingSource.release();
    m_mappingTarget.release();
}

bool IfcMappedItem::init() {
    bool status = IfcRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mappingSource = NULL;
    }
    else {
        m_mappingSource = static_cast< IfcRepresentationMap * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mappingTarget = NULL;
    }
    else {
        m_mappingTarget = static_cast< IfcCartesianTransformationOperator * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcMappedItem::copy(const IfcMappedItem &obj, const CopyOp &copyop) {
    IfcRepresentationItem::copy(obj, copyop);
    setMappingSource(copyop(obj.m_mappingSource.get()));
    setMappingTarget(copyop(obj.m_mappingTarget.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMappedItem::s_type("IfcMappedItem");
