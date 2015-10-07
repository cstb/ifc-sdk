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



#include <ifc2x3/IfcProjectOrderRecord.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/IfcRelAssignsToProjectOrder.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcProjectOrderRecord::IfcProjectOrderRecord(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_predefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
}

IfcProjectOrderRecord::~IfcProjectOrderRecord() {
}

bool IfcProjectOrderRecord::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProjectOrderRecord(this);
}

const std::string &IfcProjectOrderRecord::type() const {
    return IfcProjectOrderRecord::s_type.getName();
}

const Step::ClassType &IfcProjectOrderRecord::getClassType() {
    return IfcProjectOrderRecord::s_type;
}

const Step::ClassType &IfcProjectOrderRecord::getType() const {
    return IfcProjectOrderRecord::s_type;
}

bool IfcProjectOrderRecord::isOfType(const Step::ClassType &t) const {
    return IfcProjectOrderRecord::s_type == t ? true : IfcControl::isOfType(t);
}

List_IfcRelAssignsToProjectOrder_1_n &IfcProjectOrderRecord::getRecords() {
    if (Step::BaseObject::inited()) {
        return m_records;
    }
    else {
        m_records.setUnset(true);
        return m_records;
    }
}

const List_IfcRelAssignsToProjectOrder_1_n &IfcProjectOrderRecord::getRecords() const {
    IfcProjectOrderRecord * deConstObject = const_cast< IfcProjectOrderRecord * > (this);
    return deConstObject->getRecords();
}

void IfcProjectOrderRecord::setRecords(const List_IfcRelAssignsToProjectOrder_1_n &value) {
    m_records = value;
}

void IfcProjectOrderRecord::unsetRecords() {
    m_records.clear();
    m_records.setUnset(true);
}

bool IfcProjectOrderRecord::testRecords() const {
    return !m_records.isUnset();
}

IfcProjectOrderRecordTypeEnum IfcProjectOrderRecord::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcProjectOrderRecordTypeEnum_UNSET;
    }
}

const IfcProjectOrderRecordTypeEnum IfcProjectOrderRecord::getPredefinedType() const {
    IfcProjectOrderRecord * deConstObject = const_cast< IfcProjectOrderRecord * > (this);
    return deConstObject->getPredefinedType();
}

void IfcProjectOrderRecord::setPredefinedType(IfcProjectOrderRecordTypeEnum value) {
    m_predefinedType = value;
}

void IfcProjectOrderRecord::unsetPredefinedType() {
    m_predefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
}

bool IfcProjectOrderRecord::testPredefinedType() const {
    return getPredefinedType() != IfcProjectOrderRecordTypeEnum_UNSET;
}

bool IfcProjectOrderRecord::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_records.setUnset(true);
    }
    else {
        m_records.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRelAssignsToProjectOrder > attr2;
                attr2 = static_cast< IfcRelAssignsToProjectOrder * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_records.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
    }
    else {
        if (arg == ".CHANGE.") {
            m_predefinedType = IfcProjectOrderRecordTypeEnum_CHANGE;
        }
        else if (arg == ".MAINTENANCE.") {
            m_predefinedType = IfcProjectOrderRecordTypeEnum_MAINTENANCE;
        }
        else if (arg == ".MOVE.") {
            m_predefinedType = IfcProjectOrderRecordTypeEnum_MOVE;
        }
        else if (arg == ".PURCHASE.") {
            m_predefinedType = IfcProjectOrderRecordTypeEnum_PURCHASE;
        }
        else if (arg == ".WORK.") {
            m_predefinedType = IfcProjectOrderRecordTypeEnum_WORK;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcProjectOrderRecordTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcProjectOrderRecordTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcProjectOrderRecord::copy(const IfcProjectOrderRecord &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcRelAssignsToProjectOrder >, 1 >::const_iterator it_m_records;
    IfcControl::copy(obj, copyop);
    for (it_m_records = obj.m_records.begin(); it_m_records != obj.m_records.end(); ++it_m_records) {
        Step::RefPtr< IfcRelAssignsToProjectOrder > copyTarget = (IfcRelAssignsToProjectOrder *) (copyop((*it_m_records).get()));
        m_records.push_back(copyTarget.get());
    }
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcProjectOrderRecord::s_type("IfcProjectOrderRecord");
