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

#include "ifc2x3/IfcTable.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTableRow.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTable::IfcTable(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_rows.setUnset(true);
    m_rows.setOwner(this);
}

IfcTable::~IfcTable() {
}

bool IfcTable::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTable(this);
}

const std::string &IfcTable::type() {
    return IfcTable::s_type.getName();
}

Step::ClassType IfcTable::getClassType() {
    return IfcTable::s_type;
}

Step::ClassType IfcTable::getType() const {
    return IfcTable::s_type;
}

bool IfcTable::isOfType(Step::ClassType t) {
    return IfcTable::s_type == t ? true : Step::BaseObject::isOfType(t);
}

std::string IfcTable::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcTable::setName(const std::string &value) {
    m_name = value;
}

Step::List< Step::RefPtr< IfcTableRow > > &IfcTable::getRows() {
    if (Step::BaseObject::inited()) {
        return m_rows;
    }
    else {
        m_rows.setUnset(true);
        return m_rows;
    }
}

void IfcTable::release() {
    m_rows.clear();
}

bool IfcTable::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rows.setUnset(true);
    }
    else {
        m_rows.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcTableRow > attr2;
                attr2 = static_cast< IfcTableRow * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_rows.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTable::copy(const IfcTable &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcTableRow > >::const_iterator it_m_rows;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    for (it_m_rows = obj.m_rows.begin(); it_m_rows != obj.m_rows.end(); ++it_m_rows) {
        Step::RefPtr< IfcTableRow > copyTarget = copyop((*it_m_rows).get());
        m_rows.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTable::s_type("IfcTable");
IfcTable::Inverted_Rows_type::Inverted_Rows_type() {
}

void IfcTable::Inverted_Rows_type::setOwner(IfcTable *owner) {
    mOwner = owner;
}

void IfcTable::Inverted_Rows_type::push_back(const Step::RefPtr< IfcTableRow > &value) {
    IfcTableRow *inverse = const_cast< IfcTableRow * > (value.get());
    Step::List< Step::RefPtr< IfcTableRow > >::push_back(value);
    inverse->m_ofTable = mOwner;
}

