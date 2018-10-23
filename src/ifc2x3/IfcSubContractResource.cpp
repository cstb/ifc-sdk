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


#include <ifc2x3/IfcSubContractResource.h>

#include <ifc2x3/IfcActorSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSubContractResource::IfcSubContractResource(Step::Id id, Step::SPFData *args) : 
    IfcConstructionResource(id, args)
{
    m_SubContractor = NULL;
    m_JobDescription = Step::getUnset(m_JobDescription);
}

IfcSubContractResource::~IfcSubContractResource()
{}

bool IfcSubContractResource::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSubContractResource(this);
}


IfcActorSelect *IfcSubContractResource::getSubContractor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SubContractor.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcSubContractResource::getSubContractor() const
{
    return const_cast<IfcSubContractResource *>(this)->getSubContractor();
}

void IfcSubContractResource::setSubContractor(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubContractor = value;
}

void IfcSubContractResource::unsetSubContractor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubContractor = Step::getUnset(getSubContractor());
}

bool IfcSubContractResource::testSubContractor() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSubContractor()) == false;
}


IfcText IfcSubContractResource::getJobDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_JobDescription;
    }
    else 
    {
        return Step::getUnset(m_JobDescription);
    }    
}

const IfcText IfcSubContractResource::getJobDescription() const
{
    return const_cast<IfcSubContractResource *>(this)->getJobDescription();
}

void IfcSubContractResource::setJobDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_JobDescription = value;
}

void IfcSubContractResource::unsetJobDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_JobDescription = Step::getUnset(getJobDescription());
}

bool IfcSubContractResource::testJobDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getJobDescription()) == false;
}

bool IfcSubContractResource::init()
{
    if (IfcConstructionResource::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SubContractor = NULL;
    }
    else
    {
        m_SubContractor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_SubContractor->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_JobDescription = Step::getUnset(m_JobDescription);
    }
    else
    {
        m_JobDescription = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcSubContractResource::copy(const IfcSubContractResource &obj, const CopyOp &copyop)
{
    IfcConstructionResource::copy(obj, copyop);
    setSubContractor((IfcActorSelect*)copyop(obj.m_SubContractor.get()));
    setJobDescription(obj.m_JobDescription);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSubContractResource, IfcConstructionResource)
