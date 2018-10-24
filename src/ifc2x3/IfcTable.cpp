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


#include <ifc2x3/IfcTable.h>

#include <ifc2x3/IfcTableRow.h>
#include <ifc2x3/IfcTableRow.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcTable_Rows_type::Inverted_IfcTable_Rows_type()
{

}

void Inverted_IfcTable_Rows_type::setOwner(IfcTable *owner)
{
    mOwner = owner;
}

void Inverted_IfcTable_Rows_type::push_back(const Step::RefPtr< IfcTableRow > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcTableRow *inverse = const_cast< IfcTableRow * > (value.get());
    List_IfcTableRow_1_n::push_back(value);
    inverse->m_OfTable = mOwner;
}


Inverted_IfcTable_Rows_type::iterator Inverted_IfcTable_Rows_type::erase(const Step::RefPtr< IfcTableRow > &value)
{
    IfcTableRow *inverse = const_cast< IfcTableRow * > (value.get());
    inverse->m_OfTable = NULL;
    return List_IfcTableRow_1_n::erase(value);
}

void Inverted_IfcTable_Rows_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcTable::IfcTable(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Rows.setUnset(true);
    m_Rows.setOwner(this);
}

IfcTable::~IfcTable()
{}

bool IfcTable::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTable(this);
}


Step::String IfcTable::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const Step::String IfcTable::getName() const
{
    return const_cast<IfcTable *>(this)->getName();
}

void IfcTable::setName(const Step::String &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcTable::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcTable::testName() const
{
    return Step::isUnset(getName()) == false;
}

List_IfcTableRow_1_n &IfcTable::getRows()
{
    if (Step::BaseObject::inited())
    {
        return m_Rows;
    }
    else
    {
        m_Rows.setUnset(true);
        return m_Rows;
    }
}

const List_IfcTableRow_1_n &IfcTable::getRows() const
{
    return const_cast< IfcTable * > (this)->getRows();
}

void IfcTable::unsetRows()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Rows.clear();
    m_Rows.setUnset(true);
}

bool IfcTable::testRows() const
{
    return m_Rows.isUnset() == false;
}

bool IfcTable::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Rows.setUnset(true);
    }
    else
    {
        m_Rows.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Rows.push_back(static_cast< IfcTableRow * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcTable::copy(const IfcTable &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    List_IfcTableRow_1_n::const_iterator it_m_Rows;
    for (it_m_Rows = obj.m_Rows.begin(); it_m_Rows != obj.m_Rows.end(); ++it_m_Rows)
    {
        Step::RefPtr< IfcTableRow > copyTarget = (IfcTableRow *) (copyop((*it_m_Rows).get()));
        m_Rows.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTable, Step::BaseEntity)
