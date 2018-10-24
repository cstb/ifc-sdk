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


#include <ifc2x3/IfcStyledItem.h>

#include <ifc2x3/IfcPresentationStyleAssignment.h>
#include <ifc2x3/IfcRepresentationItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStyledItem::IfcStyledItem(Step::Id id, Step::SPFData *args) : 
    IfcRepresentationItem(id, args)
{
    m_Styles.setUnset(true);
    m_Name = Step::getUnset(m_Name);
    m_Item = NULL;
}

IfcStyledItem::~IfcStyledItem()
{}

bool IfcStyledItem::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStyledItem(this);
}


Set_IfcPresentationStyleAssignment_1_n &IfcStyledItem::getStyles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Styles;
    }
    else 
    {
        m_Styles.setUnset(true);
        return m_Styles;
    }    
}

const Set_IfcPresentationStyleAssignment_1_n &IfcStyledItem::getStyles() const
{
    return const_cast<IfcStyledItem *>(this)->getStyles();
}

void IfcStyledItem::setStyles(const Set_IfcPresentationStyleAssignment_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Styles = value;
}

void IfcStyledItem::unsetStyles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Styles.clear();
    m_Styles.setUnset(true);
}

bool IfcStyledItem::testStyles() const
{
    return m_Styles.isUnset() == false;
}


IfcLabel IfcStyledItem::getName()
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

const IfcLabel IfcStyledItem::getName() const
{
    return const_cast<IfcStyledItem *>(this)->getName();
}

void IfcStyledItem::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcStyledItem::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcStyledItem::testName() const
{
    return Step::isUnset(getName()) == false;
}

IfcRepresentationItem *IfcStyledItem::getItem()
{
    if (Step::BaseObject::inited())
    {
        return m_Item.get();
    }
    else
    {
        return NULL;
    }
}

const IfcRepresentationItem *IfcStyledItem::getItem() const
{
    return const_cast< IfcStyledItem * > (this)->getItem();
}

void IfcStyledItem::setItem(const Step::RefPtr< IfcRepresentationItem > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_Item.valid())
    {
        m_Item->m_StyledByItem.erase(this);
    }
    if (value.valid() )
    {
       value->m_StyledByItem.insert(this);
    }
    m_Item = value;
}

void IfcStyledItem::unsetItem()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Item = Step::getUnset(getItem());
}

bool IfcStyledItem::testItem() const
{
    return Step::isUnset(getItem()) == false;
}

bool IfcStyledItem::init()
{
    if (IfcRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Styles.setUnset(true);
    }
    else
    {
        m_Styles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Styles.insert(static_cast< IfcPresentationStyleAssignment * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_Item = NULL;
    }
    else
    {
        m_Item = static_cast< IfcRepresentationItem * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcStyledItem::copy(const IfcStyledItem &obj, const CopyOp &copyop)
{
    IfcRepresentationItem::copy(obj, copyop);
    Set_IfcPresentationStyleAssignment_1_n::const_iterator it_m_Styles;
    for (it_m_Styles = obj.m_Styles.begin(); it_m_Styles != obj.m_Styles.end(); ++it_m_Styles)
    {
        Step::RefPtr< IfcPresentationStyleAssignment > copyTarget = (IfcPresentationStyleAssignment *) (copyop((*it_m_Styles).get()));
        m_Styles.insert(copyTarget);
    }
    
    setName(obj.m_Name);
    setItem((IfcRepresentationItem*)copyop(obj.m_Item.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStyledItem, IfcRepresentationItem)
