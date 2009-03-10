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

#include "ifc2x3/IfcPreDefinedItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPreDefinedItem::IfcPreDefinedItem(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcPreDefinedItem::~IfcPreDefinedItem() {
}

bool IfcPreDefinedItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPreDefinedItem(this);
}

const std::string &IfcPreDefinedItem::type() const {
    return IfcPreDefinedItem::s_type.getName();
}

const Step::ClassType &IfcPreDefinedItem::getClassType() {
    return IfcPreDefinedItem::s_type;
}

const Step::ClassType &IfcPreDefinedItem::getType() const {
    return IfcPreDefinedItem::s_type;
}

bool IfcPreDefinedItem::isOfType(const Step::ClassType &t) const {
    return IfcPreDefinedItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPreDefinedItem::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcPreDefinedItem::getName() const {
    IfcPreDefinedItem * deConstObject = const_cast< IfcPreDefinedItem * > (this);
    return deConstObject->getName();
}

void IfcPreDefinedItem::setName(const IfcLabel &value) {
    m_name = value;
}

bool IfcPreDefinedItem::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcPreDefinedItem::copy(const IfcPreDefinedItem &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedItem::s_type("IfcPreDefinedItem");
