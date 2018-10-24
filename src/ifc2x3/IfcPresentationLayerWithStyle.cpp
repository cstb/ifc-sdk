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


#include <ifc2x3/IfcPresentationLayerWithStyle.h>

#include <ifc2x3/IfcPresentationStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPresentationLayerWithStyle::IfcPresentationLayerWithStyle(Step::Id id, Step::SPFData *args) : 
    IfcPresentationLayerAssignment(id, args)
{
    m_LayerOn = Step::getUnset(m_LayerOn);
    m_LayerFrozen = Step::getUnset(m_LayerFrozen);
    m_LayerBlocked = Step::getUnset(m_LayerBlocked);
    m_LayerStyles.setUnset(true);
}

IfcPresentationLayerWithStyle::~IfcPresentationLayerWithStyle()
{}

bool IfcPresentationLayerWithStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPresentationLayerWithStyle(this);
}


Step::Logical IfcPresentationLayerWithStyle::getLayerOn()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LayerOn;
    }
    else 
    {
        return Step::getUnset(m_LayerOn);
    }    
}

Step::Logical IfcPresentationLayerWithStyle::getLayerOn() const
{
    return const_cast<IfcPresentationLayerWithStyle *>(this)->getLayerOn();
}

void IfcPresentationLayerWithStyle::setLayerOn(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerOn = value;
}

void IfcPresentationLayerWithStyle::unsetLayerOn()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerOn = Step::getUnset(getLayerOn());
}

bool IfcPresentationLayerWithStyle::testLayerOn() const
{
    return Step::isUnset(getLayerOn()) == false;
}


Step::Logical IfcPresentationLayerWithStyle::getLayerFrozen()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LayerFrozen;
    }
    else 
    {
        return Step::getUnset(m_LayerFrozen);
    }    
}

Step::Logical IfcPresentationLayerWithStyle::getLayerFrozen() const
{
    return const_cast<IfcPresentationLayerWithStyle *>(this)->getLayerFrozen();
}

void IfcPresentationLayerWithStyle::setLayerFrozen(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerFrozen = value;
}

void IfcPresentationLayerWithStyle::unsetLayerFrozen()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerFrozen = Step::getUnset(getLayerFrozen());
}

bool IfcPresentationLayerWithStyle::testLayerFrozen() const
{
    return Step::isUnset(getLayerFrozen()) == false;
}


Step::Logical IfcPresentationLayerWithStyle::getLayerBlocked()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LayerBlocked;
    }
    else 
    {
        return Step::getUnset(m_LayerBlocked);
    }    
}

Step::Logical IfcPresentationLayerWithStyle::getLayerBlocked() const
{
    return const_cast<IfcPresentationLayerWithStyle *>(this)->getLayerBlocked();
}

void IfcPresentationLayerWithStyle::setLayerBlocked(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerBlocked = value;
}

void IfcPresentationLayerWithStyle::unsetLayerBlocked()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerBlocked = Step::getUnset(getLayerBlocked());
}

bool IfcPresentationLayerWithStyle::testLayerBlocked() const
{
    return Step::isUnset(getLayerBlocked()) == false;
}


Set_IfcPresentationStyleSelect_0_n &IfcPresentationLayerWithStyle::getLayerStyles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LayerStyles;
    }
    else 
    {
        m_LayerStyles.setUnset(true);
        return m_LayerStyles;
    }    
}

const Set_IfcPresentationStyleSelect_0_n &IfcPresentationLayerWithStyle::getLayerStyles() const
{
    return const_cast<IfcPresentationLayerWithStyle *>(this)->getLayerStyles();
}

void IfcPresentationLayerWithStyle::setLayerStyles(const Set_IfcPresentationStyleSelect_0_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerStyles = value;
}

void IfcPresentationLayerWithStyle::unsetLayerStyles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerStyles.clear();
    m_LayerStyles.setUnset(true);
}

bool IfcPresentationLayerWithStyle::testLayerStyles() const
{
    return m_LayerStyles.isUnset() == false;
}

bool IfcPresentationLayerWithStyle::init()
{
    if (IfcPresentationLayerAssignment::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LayerOn = Step::getUnset(m_LayerOn);
    }
    else
    {
        m_LayerOn = Step::spfToLogical(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LayerFrozen = Step::getUnset(m_LayerFrozen);
    }
    else
    {
        m_LayerFrozen = Step::spfToLogical(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LayerBlocked = Step::getUnset(m_LayerBlocked);
    }
    else
    {
        m_LayerBlocked = Step::spfToLogical(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LayerStyles.setUnset(true);
    }
    else
    {
        m_LayerStyles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcPresentationStyleSelect > attr2 = new IfcPresentationStyleSelect();
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
                    m_LayerStyles.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcPresentationLayerWithStyle::copy(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop)
{
    IfcPresentationLayerAssignment::copy(obj, copyop);
    setLayerOn(obj.m_LayerOn);
    setLayerFrozen(obj.m_LayerFrozen);
    setLayerBlocked(obj.m_LayerBlocked);
    Set_IfcPresentationStyleSelect_0_n::const_iterator it_m_LayerStyles;
    for (it_m_LayerStyles = obj.m_LayerStyles.begin(); it_m_LayerStyles != obj.m_LayerStyles.end(); ++it_m_LayerStyles)
    {
        Step::RefPtr< IfcPresentationStyleSelect > copyTarget = new IfcPresentationStyleSelect;
        copyTarget->copy(*((*it_m_LayerStyles).get()), copyop);
        m_LayerStyles.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPresentationLayerWithStyle, IfcPresentationLayerAssignment)
