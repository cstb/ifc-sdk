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


#include <ifc2x3/IfcStructuralActivity.h>

#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/IfcRelConnectsStructuralActivity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralActivity::IfcStructuralActivity(Step::Id id, Step::SPFData *args) : 
    IfcProduct(id, args)
{
    m_AppliedLoad = NULL;
    m_GlobalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

IfcStructuralActivity::~IfcStructuralActivity()
{}

bool IfcStructuralActivity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralActivity(this);
}


IfcStructuralLoad *IfcStructuralActivity::getAppliedLoad()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AppliedLoad.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcStructuralLoad *IfcStructuralActivity::getAppliedLoad() const
{
    return const_cast<IfcStructuralActivity *>(this)->getAppliedLoad();
}

void IfcStructuralActivity::setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedLoad = value;
}

void IfcStructuralActivity::unsetAppliedLoad()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedLoad = Step::getUnset(getAppliedLoad());
}

bool IfcStructuralActivity::testAppliedLoad() const
{
    return Step::isUnset(getAppliedLoad()) == false;
}


IfcGlobalOrLocalEnum IfcStructuralActivity::getGlobalOrLocal()
{
    if (Step::BaseObject::inited()) 
    {
        return m_GlobalOrLocal;
    }
    else 
    {
        return IfcGlobalOrLocalEnum_UNSET;
    }    
}

IfcGlobalOrLocalEnum IfcStructuralActivity::getGlobalOrLocal() const
{
    return const_cast<IfcStructuralActivity *>(this)->getGlobalOrLocal();
}

void IfcStructuralActivity::setGlobalOrLocal(IfcGlobalOrLocalEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GlobalOrLocal = value;
}

void IfcStructuralActivity::unsetGlobalOrLocal()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GlobalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

bool IfcStructuralActivity::testGlobalOrLocal() const
{
    return Step::isUnset(getGlobalOrLocal()) == false;
}

IfcRelConnectsStructuralActivity *IfcStructuralActivity::getAssignedToStructuralItem()
{
    if (Step::BaseObject::inited())
    {
        return m_AssignedToStructuralItem.get();
    }
 
    return NULL;
}

const IfcRelConnectsStructuralActivity *IfcStructuralActivity::getAssignedToStructuralItem() const
{
    return  const_cast< IfcStructuralActivity * > (this)->getAssignedToStructuralItem();
}

bool IfcStructuralActivity::testAssignedToStructuralItem() const
{
    return Step::isUnset(getAssignedToStructuralItem()) == false;
}

bool IfcStructuralActivity::init()
{
    if (IfcProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AppliedLoad = NULL;
    }
    else
    {
        m_AppliedLoad = static_cast< IfcStructuralLoad * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_GlobalOrLocal = IfcGlobalOrLocalEnum_UNSET;
    }
    else
    {
        if (arg == ".GLOBAL_COORDS.")
        {
            m_GlobalOrLocal = IfcGlobalOrLocalEnum_GLOBAL_COORDS;
        }
        else if (arg == ".LOCAL_COORDS.")
        {
            m_GlobalOrLocal = IfcGlobalOrLocalEnum_LOCAL_COORDS;
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 5);
    if (inverses)
    {
        m_AssignedToStructuralItem = static_cast< IfcRelConnectsStructuralActivity * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcStructuralActivity::copy(const IfcStructuralActivity &obj, const CopyOp &copyop)
{
    IfcProduct::copy(obj, copyop);
    setAppliedLoad((IfcStructuralLoad*)copyop(obj.m_AppliedLoad.get()));
    setGlobalOrLocal(obj.m_GlobalOrLocal);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralActivity, IfcProduct)
