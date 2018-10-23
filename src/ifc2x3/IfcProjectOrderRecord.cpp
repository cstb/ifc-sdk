// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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

#include <ifc2x3/IfcRelAssignsToProjectOrder.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProjectOrderRecord::IfcProjectOrderRecord(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_Records.setUnset(true);
    m_PredefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
}

IfcProjectOrderRecord::~IfcProjectOrderRecord()
{}

bool IfcProjectOrderRecord::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProjectOrderRecord(this);
}


List_IfcRelAssignsToProjectOrder_1_n &IfcProjectOrderRecord::getRecords()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Records;
    }
    else 
    {
        m_Records.setUnset(true);
        return m_Records;
    }    
}

const List_IfcRelAssignsToProjectOrder_1_n &IfcProjectOrderRecord::getRecords() const
{
    return const_cast<IfcProjectOrderRecord *>(this)->getRecords();
}

void IfcProjectOrderRecord::setRecords(const List_IfcRelAssignsToProjectOrder_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Records = value;
}

void IfcProjectOrderRecord::unsetRecords()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Records.clear();
    m_Records.setUnset(true);
}

bool IfcProjectOrderRecord::testRecords() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Records.isUnset() == false;
}


IfcProjectOrderRecordTypeEnum IfcProjectOrderRecord::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcProjectOrderRecordTypeEnum_UNSET;
    }    
}

IfcProjectOrderRecordTypeEnum IfcProjectOrderRecord::getPredefinedType() const
{
    return const_cast<IfcProjectOrderRecord *>(this)->getPredefinedType();
}

void IfcProjectOrderRecord::setPredefinedType(IfcProjectOrderRecordTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcProjectOrderRecord::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
}

bool IfcProjectOrderRecord::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcProjectOrderRecord::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Records.setUnset(true);
    }
    else
    {
        m_Records.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Records.push_back(static_cast< IfcRelAssignsToProjectOrder * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcProjectOrderRecordTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CHANGE.")
        {
            m_PredefinedType = IfcProjectOrderRecordTypeEnum_CHANGE;
        }
        else if (arg == ".MAINTENANCE.")
        {
            m_PredefinedType = IfcProjectOrderRecordTypeEnum_MAINTENANCE;
        }
        else if (arg == ".MOVE.")
        {
            m_PredefinedType = IfcProjectOrderRecordTypeEnum_MOVE;
        }
        else if (arg == ".PURCHASE.")
        {
            m_PredefinedType = IfcProjectOrderRecordTypeEnum_PURCHASE;
        }
        else if (arg == ".WORK.")
        {
            m_PredefinedType = IfcProjectOrderRecordTypeEnum_WORK;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcProjectOrderRecordTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcProjectOrderRecordTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcProjectOrderRecord::copy(const IfcProjectOrderRecord &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    List_IfcRelAssignsToProjectOrder_1_n::const_iterator it_m_Records;
    for (it_m_Records = obj.m_Records.begin(); it_m_Records != obj.m_Records.end(); ++it_m_Records)
    {
        Step::RefPtr< IfcRelAssignsToProjectOrder > copyTarget = (IfcRelAssignsToProjectOrder *) (copyop((*it_m_Records).get()));
        m_Records.push_back(copyTarget);
    }
    
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProjectOrderRecord, IfcControl)
