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


#include <ifc2x3/IfcProject.h>

#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcUnitAssignment.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProject::IfcProject(Step::Id id, Step::SPFData *args) : 
    IfcObject(id, args)
{
    m_LongName = Step::getUnset(m_LongName);
    m_Phase = Step::getUnset(m_Phase);
    m_RepresentationContexts.setUnset(true);
    m_UnitsInContext = NULL;
}

IfcProject::~IfcProject()
{}

bool IfcProject::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProject(this);
}


IfcLabel IfcProject::getLongName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LongName;
    }
    else 
    {
        return Step::getUnset(m_LongName);
    }    
}

const IfcLabel IfcProject::getLongName() const
{
    return const_cast<IfcProject *>(this)->getLongName();
}

void IfcProject::setLongName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongName = value;
}

void IfcProject::unsetLongName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LongName = Step::getUnset(getLongName());
}

bool IfcProject::testLongName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLongName()) == false;
}


IfcLabel IfcProject::getPhase()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Phase;
    }
    else 
    {
        return Step::getUnset(m_Phase);
    }    
}

const IfcLabel IfcProject::getPhase() const
{
    return const_cast<IfcProject *>(this)->getPhase();
}

void IfcProject::setPhase(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Phase = value;
}

void IfcProject::unsetPhase()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Phase = Step::getUnset(getPhase());
}

bool IfcProject::testPhase() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPhase()) == false;
}


Set_IfcRepresentationContext_1_n &IfcProject::getRepresentationContexts()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RepresentationContexts;
    }
    else 
    {
        m_RepresentationContexts.setUnset(true);
        return m_RepresentationContexts;
    }    
}

const Set_IfcRepresentationContext_1_n &IfcProject::getRepresentationContexts() const
{
    return const_cast<IfcProject *>(this)->getRepresentationContexts();
}

void IfcProject::setRepresentationContexts(const Set_IfcRepresentationContext_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationContexts = value;
}

void IfcProject::unsetRepresentationContexts()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationContexts.clear();
    m_RepresentationContexts.setUnset(true);
}

bool IfcProject::testRepresentationContexts() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RepresentationContexts.isUnset() == false;
}


IfcUnitAssignment *IfcProject::getUnitsInContext()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UnitsInContext.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcUnitAssignment *IfcProject::getUnitsInContext() const
{
    return const_cast<IfcProject *>(this)->getUnitsInContext();
}

void IfcProject::setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitsInContext = value;
}

void IfcProject::unsetUnitsInContext()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitsInContext = Step::getUnset(getUnitsInContext());
}

bool IfcProject::testUnitsInContext() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUnitsInContext()) == false;
}

bool IfcProject::init()
{
    if (IfcObject::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LongName = Step::getUnset(m_LongName);
    }
    else
    {
        m_LongName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Phase = Step::getUnset(m_Phase);
    }
    else
    {
        m_Phase = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepresentationContexts.setUnset(true);
    }
    else
    {
        m_RepresentationContexts.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RepresentationContexts.insert(static_cast< IfcRepresentationContext * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_UnitsInContext = NULL;
    }
    else
    {
        m_UnitsInContext = static_cast< IfcUnitAssignment * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcProject::copy(const IfcProject &obj, const CopyOp &copyop)
{
    IfcObject::copy(obj, copyop);
    setLongName(obj.m_LongName);
    setPhase(obj.m_Phase);
    Set_IfcRepresentationContext_1_n::const_iterator it_m_RepresentationContexts;
    for (it_m_RepresentationContexts = obj.m_RepresentationContexts.begin(); it_m_RepresentationContexts != obj.m_RepresentationContexts.end(); ++it_m_RepresentationContexts)
    {
        Step::RefPtr< IfcRepresentationContext > copyTarget = (IfcRepresentationContext *) (copyop((*it_m_RepresentationContexts).get()));
        m_RepresentationContexts.insert(copyTarget);
    }
    
    setUnitsInContext((IfcUnitAssignment*)copyop(obj.m_UnitsInContext.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProject, IfcObject)
