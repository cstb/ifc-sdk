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

#include "ifc2x3/IfcClassification.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcClassificationItem.h"
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

IfcClassification::IfcClassification(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_source = Step::getUnset(m_source);
    m_edition = Step::getUnset(m_edition);
    m_editionDate = NULL;
    m_name = Step::getUnset(m_name);
    m_contains.setUnset(true);
}

IfcClassification::~IfcClassification() {
}

bool IfcClassification::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClassification(this);
}

const std::string &IfcClassification::type() {
    return IfcClassification::s_type.getName();
}

Step::ClassType IfcClassification::getClassType() {
    return IfcClassification::s_type;
}

Step::ClassType IfcClassification::getType() const {
    return IfcClassification::s_type;
}

bool IfcClassification::isOfType(Step::ClassType t) {
    return IfcClassification::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcClassification::getSource() {
    if (Step::BaseObject::inited()) {
        return m_source;
    }
    else {
        return Step::getUnset(m_source);
    }
}

void IfcClassification::setSource(const IfcLabel &value) {
    m_source = value;
}

IfcLabel IfcClassification::getEdition() {
    if (Step::BaseObject::inited()) {
        return m_edition;
    }
    else {
        return Step::getUnset(m_edition);
    }
}

void IfcClassification::setEdition(const IfcLabel &value) {
    m_edition = value;
}

IfcCalendarDate *IfcClassification::getEditionDate() {
    if (Step::BaseObject::inited()) {
        return m_editionDate.get();
    }
    else {
        return NULL;
    }
}

void IfcClassification::setEditionDate(const Step::RefPtr< IfcCalendarDate > &value) {
    m_editionDate = value;
}

IfcLabel IfcClassification::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcClassification::setName(const IfcLabel &value) {
    m_name = value;
}

Step::Set< Step::ObsPtr< IfcClassificationItem > > &IfcClassification::getContains() {
    if (Step::BaseObject::inited()) {
        return m_contains;
    }
    else {
        m_contains.setUnset(true);
        return m_contains;
    }
}

void IfcClassification::release() {
    m_editionDate.release();
}

bool IfcClassification::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_source = Step::getUnset(m_source);
    }
    else {
        m_source = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edition = Step::getUnset(m_edition);
    }
    else {
        m_edition = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_editionDate = NULL;
    }
    else {
        m_editionDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcClassificationItem::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_contains.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_contains.insert(static_cast< IfcClassificationItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcClassification::copy(const IfcClassification &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setSource(obj.m_source);
    setEdition(obj.m_edition);
    setEditionDate(copyop(obj.m_editionDate.get()));
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassification::s_type("IfcClassification");
