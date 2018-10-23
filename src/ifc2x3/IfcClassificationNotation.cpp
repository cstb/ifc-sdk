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


#include <ifc2x3/IfcClassificationNotation.h>

#include <ifc2x3/IfcClassificationNotationFacet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcClassificationNotation::IfcClassificationNotation(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_NotationFacets.setUnset(true);
}

IfcClassificationNotation::~IfcClassificationNotation()
{}

bool IfcClassificationNotation::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcClassificationNotation(this);
}


Set_IfcClassificationNotationFacet_1_n &IfcClassificationNotation::getNotationFacets()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NotationFacets;
    }
    else 
    {
        m_NotationFacets.setUnset(true);
        return m_NotationFacets;
    }    
}

const Set_IfcClassificationNotationFacet_1_n &IfcClassificationNotation::getNotationFacets() const
{
    return const_cast<IfcClassificationNotation *>(this)->getNotationFacets();
}

void IfcClassificationNotation::setNotationFacets(const Set_IfcClassificationNotationFacet_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NotationFacets = value;
}

void IfcClassificationNotation::unsetNotationFacets()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NotationFacets.clear();
    m_NotationFacets.setUnset(true);
}

bool IfcClassificationNotation::testNotationFacets() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_NotationFacets.isUnset() == false;
}

bool IfcClassificationNotation::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NotationFacets.setUnset(true);
    }
    else
    {
        m_NotationFacets.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_NotationFacets.insert(static_cast< IfcClassificationNotationFacet * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcClassificationNotation::copy(const IfcClassificationNotation &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcClassificationNotationFacet_1_n::const_iterator it_m_NotationFacets;
    for (it_m_NotationFacets = obj.m_NotationFacets.begin(); it_m_NotationFacets != obj.m_NotationFacets.end(); ++it_m_NotationFacets)
    {
        Step::RefPtr< IfcClassificationNotationFacet > copyTarget = (IfcClassificationNotationFacet *) (copyop((*it_m_NotationFacets).get()));
        m_NotationFacets.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcClassificationNotation, Step::BaseEntity)
