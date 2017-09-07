// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcTable.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTableRow.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcTable_Rows_type::Inverted_IfcTable_Rows_type():
    mOwner(0)
{
}

void Inverted_IfcTable_Rows_type::setOwner(IfcTable *owner) {
    mOwner = owner;
}

void Inverted_IfcTable_Rows_type::push_back(const Step::RefPtr< IfcTableRow > &value) throw(std::out_of_range) {
    IfcTableRow *inverse = const_cast< IfcTableRow * > (value.get());
    List_IfcTableRow_1_n::push_back(value);
    inverse->m_ofTable = mOwner;
}

Inverted_IfcTable_Rows_type::iterator Inverted_IfcTable_Rows_type::erase(const Step::RefPtr< IfcTableRow > &value) {
    IfcTableRow *inverse = const_cast< IfcTableRow * > (value.get());
    inverse->m_ofTable = NULL;
    return List_IfcTableRow_1_n::erase(value);
}

void Inverted_IfcTable_Rows_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcTable::IfcTable(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_rows.setOwner(this);
}

IfcTable::~IfcTable() {
}

bool IfcTable::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTable(this);
}

const std::string &IfcTable::type() const {
    return IfcTable::s_type.getName();
}

const Step::ClassType &IfcTable::getClassType() {
    return IfcTable::s_type;
}

const Step::ClassType &IfcTable::getType() const {
    return IfcTable::s_type;
}

bool IfcTable::isOfType(const Step::ClassType &t) const {
    return IfcTable::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::String IfcTable::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const Step::String IfcTable::getName() const {
    IfcTable * deConstObject = const_cast< IfcTable * > (this);
    return deConstObject->getName();
}

void IfcTable::setName(const Step::String &value) {
    m_name = value;
}

void IfcTable::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcTable::testName() const {
    return !Step::isUnset(getName());
}

List_IfcTableRow_1_n &IfcTable::getRows() {
    if (Step::BaseObject::inited()) {
        return m_rows;
    }
    else {
        m_rows.setUnset(true);
        return m_rows;
    }
}

const List_IfcTableRow_1_n &IfcTable::getRows() const {
    IfcTable * deConstObject = const_cast< IfcTable * > (this);
    return deConstObject->getRows();
}

void IfcTable::unsetRows() {
    m_rows.clear();
    m_rows.setUnset(true);
}

bool IfcTable::testRows() const {
    return !m_rows.isUnset();
}

bool IfcTable::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
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
                attr2 = static_cast< IfcTableRow * > (m_expressDataSet->get(Step::getIdParam(str1)));
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
    Step::List< Step::RefPtr< IfcTableRow >, 1 >::const_iterator it_m_rows;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    for (it_m_rows = obj.m_rows.begin(); it_m_rows != obj.m_rows.end(); ++it_m_rows) {
        Step::RefPtr< IfcTableRow > copyTarget = (IfcTableRow *) (copyop((*it_m_rows).get()));
        m_rows.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTable::s_type("IfcTable");
