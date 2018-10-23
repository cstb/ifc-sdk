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


#include <ifc2x3/IfcRelAssignsToControl.h>

#include <ifc2x3/IfcControl.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssignsToControl::IfcRelAssignsToControl(Step::Id id, Step::SPFData *args) : 
    IfcRelAssigns(id, args)
{
    m_RelatingControl = NULL;
}

IfcRelAssignsToControl::~IfcRelAssignsToControl()
{}

bool IfcRelAssignsToControl::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssignsToControl(this);
}

IfcControl *IfcRelAssignsToControl::getRelatingControl()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingControl.get();
    }
    else
    {
        return NULL;
    }
}

const IfcControl *IfcRelAssignsToControl::getRelatingControl() const
{
    return const_cast< IfcRelAssignsToControl * > (this)->getRelatingControl();
}

void IfcRelAssignsToControl::setRelatingControl(const Step::RefPtr< IfcControl > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingControl.valid())
    {
        m_RelatingControl->m_Controls.erase(this);
    }
    if (value.valid() )
    {
       value->m_Controls.insert(this);
    }
    m_RelatingControl = value;
}

void IfcRelAssignsToControl::unsetRelatingControl()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingControl = Step::getUnset(getRelatingControl());
}

bool IfcRelAssignsToControl::testRelatingControl() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingControl()) == false;
}

bool IfcRelAssignsToControl::init()
{
    if (IfcRelAssigns::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingControl = NULL;
    }
    else
    {
        m_RelatingControl = static_cast< IfcControl * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelAssignsToControl::copy(const IfcRelAssignsToControl &obj, const CopyOp &copyop)
{
    IfcRelAssigns::copy(obj, copyop);
    setRelatingControl((IfcControl*)copyop(obj.m_RelatingControl.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssignsToControl, IfcRelAssigns)
