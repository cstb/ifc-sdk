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


#include <ifc2x3/IfcDraughtingCallout.h>

#include <ifc2x3/IfcDraughtingCalloutElement.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDraughtingCallout::IfcDraughtingCallout(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Contents.setUnset(true);
}

IfcDraughtingCallout::~IfcDraughtingCallout()
{}

bool IfcDraughtingCallout::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDraughtingCallout(this);
}


Set_IfcDraughtingCalloutElement_1_n &IfcDraughtingCallout::getContents()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Contents;
    }
    else 
    {
        m_Contents.setUnset(true);
        return m_Contents;
    }    
}

const Set_IfcDraughtingCalloutElement_1_n &IfcDraughtingCallout::getContents() const
{
    return const_cast<IfcDraughtingCallout *>(this)->getContents();
}

void IfcDraughtingCallout::setContents(const Set_IfcDraughtingCalloutElement_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Contents = value;
}

void IfcDraughtingCallout::unsetContents()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Contents.clear();
    m_Contents.setUnset(true);
}

bool IfcDraughtingCallout::testContents() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Contents.isUnset() == false;
}

Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedFromCallout()
{
    if (Step::BaseObject::inited())
    {
        return m_IsRelatedFromCallout;
    }
 
    m_IsRelatedFromCallout.setUnset(true);
    return m_IsRelatedFromCallout;
}

const Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedFromCallout() const
{
    return  const_cast< IfcDraughtingCallout * > (this)->getIsRelatedFromCallout();
}

bool IfcDraughtingCallout::testIsRelatedFromCallout() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsRelatedFromCallout.isUnset() == false;
}

Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedToCallout()
{
    if (Step::BaseObject::inited())
    {
        return m_IsRelatedToCallout;
    }
 
    m_IsRelatedToCallout.setUnset(true);
    return m_IsRelatedToCallout;
}

const Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedToCallout() const
{
    return  const_cast< IfcDraughtingCallout * > (this)->getIsRelatedToCallout();
}

bool IfcDraughtingCallout::testIsRelatedToCallout() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsRelatedToCallout.isUnset() == false;
}

bool IfcDraughtingCallout::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Contents.setUnset(true);
    }
    else
    {
        m_Contents.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcDraughtingCalloutElement > attr2 = new IfcDraughtingCalloutElement();
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
                    m_Contents.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 3);
    if (inverses)
    {
        unsigned int i;
        m_IsRelatedFromCallout.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsRelatedFromCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_IsRelatedToCallout.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsRelatedToCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDraughtingCallout::copy(const IfcDraughtingCallout &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    Set_IfcDraughtingCalloutElement_1_n::const_iterator it_m_Contents;
    for (it_m_Contents = obj.m_Contents.begin(); it_m_Contents != obj.m_Contents.end(); ++it_m_Contents)
    {
        Step::RefPtr< IfcDraughtingCalloutElement > copyTarget = new IfcDraughtingCalloutElement;
        copyTarget->copy(*((*it_m_Contents).get()), copyop);
        m_Contents.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDraughtingCallout, IfcGeometricRepresentationItem)
