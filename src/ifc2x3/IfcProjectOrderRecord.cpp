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

#include "ifc2x3/IfcProjectOrderRecord.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcRelAssignsToProjectOrder.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProjectOrderRecord::IfcProjectOrderRecord(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_records.setUnset(true);
    m_predefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
}

IfcProjectOrderRecord::~IfcProjectOrderRecord() {
}

bool IfcProjectOrderRecord::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProjectOrderRecord(this);
}

const std::string &IfcProjectOrderRecord::type() {
    return IfcProjectOrderRecord::s_type.getName();
}

Step::ClassType IfcProjectOrderRecord::getClassType() {
    return IfcProjectOrderRecord::s_type;
}

Step::ClassType IfcProjectOrderRecord::getType() const {
    return IfcProjectOrderRecord::s_type;
}

bool IfcProjectOrderRecord::isOfType(Step::ClassType t) {
    return IfcProjectOrderRecord::s_type == t ? true : IfcControl::isOfType(t);
}

Step::List< Step::RefPtr< IfcRelAssignsToProjectOrder > > &IfcProjectOrderRecord::getRecords() {
    if (Step::BaseObject::inited()) {
        return m_records;
    }
    else {
        m_records.setUnset(true);
        return m_records;
    }
}

void IfcProjectOrderRecord::setRecords(const Step::List< Step::RefPtr< IfcRelAssignsToProjectOrder > > &value) {
    m_records = value;
}

IfcProjectOrderRecordTypeEnum IfcProjectOrderRecord::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcProjectOrderRecordTypeEnum_UNSET;
    }
}

void IfcProjectOrderRecord::setPredefinedType(IfcProjectOrderRecordTypeEnum value) {
    m_predefinedType = value;
}

void IfcProjectOrderRecord::release() {
    IfcControl::release();
    m_records.clear();
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
                attr2 = static_cast< IfcRelAssignsToProjectOrder * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
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
    Step::List< Step::RefPtr< IfcRelAssignsToProjectOrder > >::const_iterator it_m_records;
    IfcControl::copy(obj, copyop);
    for (it_m_records = obj.m_records.begin(); it_m_records != obj.m_records.end(); ++it_m_records) {
        Step::RefPtr< IfcRelAssignsToProjectOrder > copyTarget = copyop((*it_m_records).get());
        m_records.push_back(copyTarget.get());
    }
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectOrderRecord::s_type("IfcProjectOrderRecord");
