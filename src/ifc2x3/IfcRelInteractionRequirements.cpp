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


#include <ifc2x3/IfcRelInteractionRequirements.h>

#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcSpaceProgram.h>
#include <ifc2x3/IfcSpaceProgram.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelInteractionRequirements::IfcRelInteractionRequirements(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_DailyInteraction = Step::getUnset(m_DailyInteraction);
    m_ImportanceRating = Step::getUnset(m_ImportanceRating);
    m_LocationOfInteraction = NULL;
    m_RelatedSpaceProgram = NULL;
    m_RelatingSpaceProgram = NULL;
}

IfcRelInteractionRequirements::~IfcRelInteractionRequirements()
{}

bool IfcRelInteractionRequirements::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelInteractionRequirements(this);
}


IfcCountMeasure IfcRelInteractionRequirements::getDailyInteraction()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DailyInteraction;
    }
    else 
    {
        return Step::getUnset(m_DailyInteraction);
    }    
}

IfcCountMeasure IfcRelInteractionRequirements::getDailyInteraction() const
{
    return const_cast<IfcRelInteractionRequirements *>(this)->getDailyInteraction();
}

void IfcRelInteractionRequirements::setDailyInteraction(IfcCountMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DailyInteraction = value;
}

void IfcRelInteractionRequirements::unsetDailyInteraction()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DailyInteraction = Step::getUnset(getDailyInteraction());
}

bool IfcRelInteractionRequirements::testDailyInteraction() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDailyInteraction()) == false;
}


IfcNormalisedRatioMeasure IfcRelInteractionRequirements::getImportanceRating()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ImportanceRating;
    }
    else 
    {
        return Step::getUnset(m_ImportanceRating);
    }    
}

IfcNormalisedRatioMeasure IfcRelInteractionRequirements::getImportanceRating() const
{
    return const_cast<IfcRelInteractionRequirements *>(this)->getImportanceRating();
}

void IfcRelInteractionRequirements::setImportanceRating(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ImportanceRating = value;
}

void IfcRelInteractionRequirements::unsetImportanceRating()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ImportanceRating = Step::getUnset(getImportanceRating());
}

bool IfcRelInteractionRequirements::testImportanceRating() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getImportanceRating()) == false;
}


IfcSpatialStructureElement *IfcRelInteractionRequirements::getLocationOfInteraction()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LocationOfInteraction.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSpatialStructureElement *IfcRelInteractionRequirements::getLocationOfInteraction() const
{
    return const_cast<IfcRelInteractionRequirements *>(this)->getLocationOfInteraction();
}

void IfcRelInteractionRequirements::setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocationOfInteraction = value;
}

void IfcRelInteractionRequirements::unsetLocationOfInteraction()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocationOfInteraction = Step::getUnset(getLocationOfInteraction());
}

bool IfcRelInteractionRequirements::testLocationOfInteraction() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLocationOfInteraction()) == false;
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatedSpaceProgram()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedSpaceProgram.get();
    }
    else
    {
        return NULL;
    }
}

const IfcSpaceProgram *IfcRelInteractionRequirements::getRelatedSpaceProgram() const
{
    return const_cast< IfcRelInteractionRequirements * > (this)->getRelatedSpaceProgram();
}

void IfcRelInteractionRequirements::setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedSpaceProgram.valid())
    {
        m_RelatedSpaceProgram->m_HasInteractionReqsFrom.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasInteractionReqsFrom.insert(this);
    }
    m_RelatedSpaceProgram = value;
}

void IfcRelInteractionRequirements::unsetRelatedSpaceProgram()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedSpaceProgram = Step::getUnset(getRelatedSpaceProgram());
}

bool IfcRelInteractionRequirements::testRelatedSpaceProgram() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatedSpaceProgram()) == false;
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatingSpaceProgram()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingSpaceProgram.get();
    }
    else
    {
        return NULL;
    }
}

const IfcSpaceProgram *IfcRelInteractionRequirements::getRelatingSpaceProgram() const
{
    return const_cast< IfcRelInteractionRequirements * > (this)->getRelatingSpaceProgram();
}

void IfcRelInteractionRequirements::setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingSpaceProgram.valid())
    {
        m_RelatingSpaceProgram->m_HasInteractionReqsTo.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasInteractionReqsTo.insert(this);
    }
    m_RelatingSpaceProgram = value;
}

void IfcRelInteractionRequirements::unsetRelatingSpaceProgram()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingSpaceProgram = Step::getUnset(getRelatingSpaceProgram());
}

bool IfcRelInteractionRequirements::testRelatingSpaceProgram() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingSpaceProgram()) == false;
}

bool IfcRelInteractionRequirements::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DailyInteraction = Step::getUnset(m_DailyInteraction);
    }
    else
    {
        m_DailyInteraction = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ImportanceRating = Step::getUnset(m_ImportanceRating);
    }
    else
    {
        m_ImportanceRating = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LocationOfInteraction = NULL;
    }
    else
    {
        m_LocationOfInteraction = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedSpaceProgram = NULL;
    }
    else
    {
        m_RelatedSpaceProgram = static_cast< IfcSpaceProgram * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingSpaceProgram = NULL;
    }
    else
    {
        m_RelatingSpaceProgram = static_cast< IfcSpaceProgram * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelInteractionRequirements::copy(const IfcRelInteractionRequirements &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setDailyInteraction(obj.m_DailyInteraction);
    setImportanceRating(obj.m_ImportanceRating);
    setLocationOfInteraction((IfcSpatialStructureElement*)copyop(obj.m_LocationOfInteraction.get()));
    setRelatedSpaceProgram((IfcSpaceProgram*)copyop(obj.m_RelatedSpaceProgram.get()));
    setRelatingSpaceProgram((IfcSpaceProgram*)copyop(obj.m_RelatingSpaceProgram.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelInteractionRequirements, IfcRelConnects)
