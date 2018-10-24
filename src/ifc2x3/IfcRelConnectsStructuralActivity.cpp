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


#include <ifc2x3/IfcRelConnectsStructuralActivity.h>

#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/IfcStructuralActivityAssignmentSelect.h>
#include <ifc2x3/IfcStructuralItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelConnectsStructuralActivity::IfcRelConnectsStructuralActivity(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatedStructuralActivity = NULL;
    m_RelatingElement = NULL;
}

IfcRelConnectsStructuralActivity::~IfcRelConnectsStructuralActivity()
{}

bool IfcRelConnectsStructuralActivity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsStructuralActivity(this);
}

IfcStructuralActivity *IfcRelConnectsStructuralActivity::getRelatedStructuralActivity()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedStructuralActivity.get();
    }
    else
    {
        return NULL;
    }
}

const IfcStructuralActivity *IfcRelConnectsStructuralActivity::getRelatedStructuralActivity() const
{
    return const_cast< IfcRelConnectsStructuralActivity * > (this)->getRelatedStructuralActivity();
}

void IfcRelConnectsStructuralActivity::setRelatedStructuralActivity(const Step::RefPtr< IfcStructuralActivity > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedStructuralActivity.valid())
    {
        m_RelatedStructuralActivity->m_AssignedToStructuralItem = NULL;
    }
    if (value.valid() )
    {
        value->m_AssignedToStructuralItem = this;
    }
    m_RelatedStructuralActivity = value;
}

void IfcRelConnectsStructuralActivity::unsetRelatedStructuralActivity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedStructuralActivity = Step::getUnset(getRelatedStructuralActivity());
}

bool IfcRelConnectsStructuralActivity::testRelatedStructuralActivity() const
{
    return Step::isUnset(getRelatedStructuralActivity()) == false;
}

IfcStructuralActivityAssignmentSelect *IfcRelConnectsStructuralActivity::getRelatingElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcStructuralActivityAssignmentSelect *IfcRelConnectsStructuralActivity::getRelatingElement() const
{
    return const_cast< IfcRelConnectsStructuralActivity * > (this)->getRelatingElement();
}

void IfcRelConnectsStructuralActivity::setRelatingElement(const Step::RefPtr< IfcStructuralActivityAssignmentSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingElement->getIfcStructuralItem() != NULL) 
    {
        IfcStructuralItem * object = m_RelatingElement->getIfcStructuralItem();
        object->m_AssignedStructuralActivity.insert(this);
    }
    m_RelatingElement = value;
}

void IfcRelConnectsStructuralActivity::unsetRelatingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingElement = Step::getUnset(getRelatingElement());
}

bool IfcRelConnectsStructuralActivity::testRelatingElement() const
{
    return Step::isUnset(getRelatingElement()) == false;
}

bool IfcRelConnectsStructuralActivity::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedStructuralActivity = NULL;
    }
    else
    {
        m_RelatedStructuralActivity = static_cast< IfcStructuralActivity * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingElement = NULL;
    }
    else
    {
        m_RelatingElement = new IfcStructuralActivityAssignmentSelect;
        if (arg[0] == '#') {
            m_RelatingElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcRelConnectsStructuralActivity::copy(const IfcRelConnectsStructuralActivity &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatedStructuralActivity((IfcStructuralActivity*)copyop(obj.m_RelatedStructuralActivity.get()));
    setRelatingElement((IfcStructuralActivityAssignmentSelect*)copyop(obj.m_RelatingElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsStructuralActivity, IfcRelConnects)
