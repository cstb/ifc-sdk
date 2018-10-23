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


#include <ifc2x3/IfcSpaceProgram.h>

#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcRelInteractionRequirements.h>
#include <ifc2x3/IfcRelInteractionRequirements.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSpaceProgram::IfcSpaceProgram(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_SpaceProgramIdentifier = Step::getUnset(m_SpaceProgramIdentifier);
    m_MaxRequiredArea = Step::getUnset(m_MaxRequiredArea);
    m_MinRequiredArea = Step::getUnset(m_MinRequiredArea);
    m_RequestedLocation = NULL;
    m_StandardRequiredArea = Step::getUnset(m_StandardRequiredArea);
}

IfcSpaceProgram::~IfcSpaceProgram()
{}

bool IfcSpaceProgram::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSpaceProgram(this);
}


IfcIdentifier IfcSpaceProgram::getSpaceProgramIdentifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SpaceProgramIdentifier;
    }
    else 
    {
        return Step::getUnset(m_SpaceProgramIdentifier);
    }    
}

const IfcIdentifier IfcSpaceProgram::getSpaceProgramIdentifier() const
{
    return const_cast<IfcSpaceProgram *>(this)->getSpaceProgramIdentifier();
}

void IfcSpaceProgram::setSpaceProgramIdentifier(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpaceProgramIdentifier = value;
}

void IfcSpaceProgram::unsetSpaceProgramIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpaceProgramIdentifier = Step::getUnset(getSpaceProgramIdentifier());
}

bool IfcSpaceProgram::testSpaceProgramIdentifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSpaceProgramIdentifier()) == false;
}


IfcAreaMeasure IfcSpaceProgram::getMaxRequiredArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaxRequiredArea;
    }
    else 
    {
        return Step::getUnset(m_MaxRequiredArea);
    }    
}

IfcAreaMeasure IfcSpaceProgram::getMaxRequiredArea() const
{
    return const_cast<IfcSpaceProgram *>(this)->getMaxRequiredArea();
}

void IfcSpaceProgram::setMaxRequiredArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaxRequiredArea = value;
}

void IfcSpaceProgram::unsetMaxRequiredArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaxRequiredArea = Step::getUnset(getMaxRequiredArea());
}

bool IfcSpaceProgram::testMaxRequiredArea() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMaxRequiredArea()) == false;
}


IfcAreaMeasure IfcSpaceProgram::getMinRequiredArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinRequiredArea;
    }
    else 
    {
        return Step::getUnset(m_MinRequiredArea);
    }    
}

IfcAreaMeasure IfcSpaceProgram::getMinRequiredArea() const
{
    return const_cast<IfcSpaceProgram *>(this)->getMinRequiredArea();
}

void IfcSpaceProgram::setMinRequiredArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinRequiredArea = value;
}

void IfcSpaceProgram::unsetMinRequiredArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinRequiredArea = Step::getUnset(getMinRequiredArea());
}

bool IfcSpaceProgram::testMinRequiredArea() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMinRequiredArea()) == false;
}


IfcSpatialStructureElement *IfcSpaceProgram::getRequestedLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RequestedLocation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSpatialStructureElement *IfcSpaceProgram::getRequestedLocation() const
{
    return const_cast<IfcSpaceProgram *>(this)->getRequestedLocation();
}

void IfcSpaceProgram::setRequestedLocation(const Step::RefPtr< IfcSpatialStructureElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RequestedLocation = value;
}

void IfcSpaceProgram::unsetRequestedLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RequestedLocation = Step::getUnset(getRequestedLocation());
}

bool IfcSpaceProgram::testRequestedLocation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRequestedLocation()) == false;
}


IfcAreaMeasure IfcSpaceProgram::getStandardRequiredArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StandardRequiredArea;
    }
    else 
    {
        return Step::getUnset(m_StandardRequiredArea);
    }    
}

IfcAreaMeasure IfcSpaceProgram::getStandardRequiredArea() const
{
    return const_cast<IfcSpaceProgram *>(this)->getStandardRequiredArea();
}

void IfcSpaceProgram::setStandardRequiredArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StandardRequiredArea = value;
}

void IfcSpaceProgram::unsetStandardRequiredArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StandardRequiredArea = Step::getUnset(getStandardRequiredArea());
}

bool IfcSpaceProgram::testStandardRequiredArea() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStandardRequiredArea()) == false;
}

Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsFrom()
{
    if (Step::BaseObject::inited())
    {
        return m_HasInteractionReqsFrom;
    }
 
    m_HasInteractionReqsFrom.setUnset(true);
    return m_HasInteractionReqsFrom;
}

const Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsFrom() const
{
    return  const_cast< IfcSpaceProgram * > (this)->getHasInteractionReqsFrom();
}

bool IfcSpaceProgram::testHasInteractionReqsFrom() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasInteractionReqsFrom.isUnset() == false;
}

Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsTo()
{
    if (Step::BaseObject::inited())
    {
        return m_HasInteractionReqsTo;
    }
 
    m_HasInteractionReqsTo.setUnset(true);
    return m_HasInteractionReqsTo;
}

const Inverse_Set_IfcRelInteractionRequirements_0_n &IfcSpaceProgram::getHasInteractionReqsTo() const
{
    return  const_cast< IfcSpaceProgram * > (this)->getHasInteractionReqsTo();
}

bool IfcSpaceProgram::testHasInteractionReqsTo() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasInteractionReqsTo.isUnset() == false;
}

bool IfcSpaceProgram::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SpaceProgramIdentifier = Step::getUnset(m_SpaceProgramIdentifier);
    }
    else
    {
        m_SpaceProgramIdentifier = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaxRequiredArea = Step::getUnset(m_MaxRequiredArea);
    }
    else
    {
        m_MaxRequiredArea = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinRequiredArea = Step::getUnset(m_MinRequiredArea);
    }
    else
    {
        m_MinRequiredArea = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RequestedLocation = NULL;
    }
    else
    {
        m_RequestedLocation = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StandardRequiredArea = Step::getUnset(m_StandardRequiredArea);
    }
    else
    {
        m_StandardRequiredArea = Step::spfToReal(arg)

;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelInteractionRequirements::getClassType(), 7);
    if (inverses)
    {
        unsigned int i;
        m_HasInteractionReqsFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasInteractionReqsFrom.insert(static_cast< IfcRelInteractionRequirements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelInteractionRequirements::getClassType(), 8);
    if (inverses)
    {
        unsigned int i;
        m_HasInteractionReqsTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasInteractionReqsTo.insert(static_cast< IfcRelInteractionRequirements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSpaceProgram::copy(const IfcSpaceProgram &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setSpaceProgramIdentifier(obj.m_SpaceProgramIdentifier);
    setMaxRequiredArea(obj.m_MaxRequiredArea);
    setMinRequiredArea(obj.m_MinRequiredArea);
    setRequestedLocation((IfcSpatialStructureElement*)copyop(obj.m_RequestedLocation.get()));
    setStandardRequiredArea(obj.m_StandardRequiredArea);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSpaceProgram, IfcControl)
