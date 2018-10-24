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


#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>

#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/IfcTimeSeries.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTimeSeriesReferenceRelationship::IfcTimeSeriesReferenceRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_TimeSeriesReferences.setUnset(true);
    m_ReferencedTimeSeries = NULL;
}

IfcTimeSeriesReferenceRelationship::~IfcTimeSeriesReferenceRelationship()
{}

bool IfcTimeSeriesReferenceRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTimeSeriesReferenceRelationship(this);
}


Set_IfcDocumentSelect_1_n &IfcTimeSeriesReferenceRelationship::getTimeSeriesReferences()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeSeriesReferences;
    }
    else 
    {
        m_TimeSeriesReferences.setUnset(true);
        return m_TimeSeriesReferences;
    }    
}

const Set_IfcDocumentSelect_1_n &IfcTimeSeriesReferenceRelationship::getTimeSeriesReferences() const
{
    return const_cast<IfcTimeSeriesReferenceRelationship *>(this)->getTimeSeriesReferences();
}

void IfcTimeSeriesReferenceRelationship::setTimeSeriesReferences(const Set_IfcDocumentSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeriesReferences = value;
}

void IfcTimeSeriesReferenceRelationship::unsetTimeSeriesReferences()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeriesReferences.clear();
    m_TimeSeriesReferences.setUnset(true);
}

bool IfcTimeSeriesReferenceRelationship::testTimeSeriesReferences() const
{
    return m_TimeSeriesReferences.isUnset() == false;
}

IfcTimeSeries *IfcTimeSeriesReferenceRelationship::getReferencedTimeSeries()
{
    if (Step::BaseObject::inited())
    {
        return m_ReferencedTimeSeries.get();
    }
    else
    {
        return NULL;
    }
}

const IfcTimeSeries *IfcTimeSeriesReferenceRelationship::getReferencedTimeSeries() const
{
    return const_cast< IfcTimeSeriesReferenceRelationship * > (this)->getReferencedTimeSeries();
}

void IfcTimeSeriesReferenceRelationship::setReferencedTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ReferencedTimeSeries.valid())
    {
        m_ReferencedTimeSeries->m_DocumentedBy.erase(this);
    }
    if (value.valid() )
    {
       value->m_DocumentedBy.insert(this);
    }
    m_ReferencedTimeSeries = value;
}

void IfcTimeSeriesReferenceRelationship::unsetReferencedTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReferencedTimeSeries = Step::getUnset(getReferencedTimeSeries());
}

bool IfcTimeSeriesReferenceRelationship::testReferencedTimeSeries() const
{
    return Step::isUnset(getReferencedTimeSeries()) == false;
}

bool IfcTimeSeriesReferenceRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeSeriesReferences.setUnset(true);
    }
    else
    {
        m_TimeSeriesReferences.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcDocumentSelect > attr2 = new IfcDocumentSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_TimeSeriesReferences.insert(attr2);
                }
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
        m_ReferencedTimeSeries = NULL;
    }
    else
    {
        m_ReferencedTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcTimeSeriesReferenceRelationship::copy(const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcDocumentSelect_1_n::const_iterator it_m_TimeSeriesReferences;
    for (it_m_TimeSeriesReferences = obj.m_TimeSeriesReferences.begin(); it_m_TimeSeriesReferences != obj.m_TimeSeriesReferences.end(); ++it_m_TimeSeriesReferences)
    {
        Step::RefPtr< IfcDocumentSelect > copyTarget = new IfcDocumentSelect;
        copyTarget->copy(*((*it_m_TimeSeriesReferences).get()), copyop);
        m_TimeSeriesReferences.insert(copyTarget.get());
    }
    
    setReferencedTimeSeries((IfcTimeSeries*)copyop(obj.m_ReferencedTimeSeries.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTimeSeriesReferenceRelationship, Step::BaseEntity)
