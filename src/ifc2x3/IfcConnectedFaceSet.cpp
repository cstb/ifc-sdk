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


#include <ifc2x3/IfcConnectedFaceSet.h>

#include <ifc2x3/IfcFace.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConnectedFaceSet::IfcConnectedFaceSet(Step::Id id, Step::SPFData *args) : 
    IfcTopologicalRepresentationItem(id, args)
{
    m_CfsFaces.setUnset(true);
}

IfcConnectedFaceSet::~IfcConnectedFaceSet()
{}

bool IfcConnectedFaceSet::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConnectedFaceSet(this);
}


Set_IfcFace_1_n &IfcConnectedFaceSet::getCfsFaces()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CfsFaces;
    }
    else 
    {
        m_CfsFaces.setUnset(true);
        return m_CfsFaces;
    }    
}

const Set_IfcFace_1_n &IfcConnectedFaceSet::getCfsFaces() const
{
    return const_cast<IfcConnectedFaceSet *>(this)->getCfsFaces();
}

void IfcConnectedFaceSet::setCfsFaces(const Set_IfcFace_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CfsFaces = value;
}

void IfcConnectedFaceSet::unsetCfsFaces()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CfsFaces.clear();
    m_CfsFaces.setUnset(true);
}

bool IfcConnectedFaceSet::testCfsFaces() const
{
    return m_CfsFaces.isUnset() == false;
}

bool IfcConnectedFaceSet::init()
{
    if (IfcTopologicalRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CfsFaces.setUnset(true);
    }
    else
    {
        m_CfsFaces.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_CfsFaces.insert(static_cast< IfcFace * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcConnectedFaceSet::copy(const IfcConnectedFaceSet &obj, const CopyOp &copyop)
{
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    Set_IfcFace_1_n::const_iterator it_m_CfsFaces;
    for (it_m_CfsFaces = obj.m_CfsFaces.begin(); it_m_CfsFaces != obj.m_CfsFaces.end(); ++it_m_CfsFaces)
    {
        Step::RefPtr< IfcFace > copyTarget = (IfcFace *) (copyop((*it_m_CfsFaces).get()));
        m_CfsFaces.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConnectedFaceSet, IfcTopologicalRepresentationItem)
