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


#include <ifc2x3/IfcRelConnectsStructuralMember.h>

#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcStructuralMember.h>
#include <ifc2x3/IfcStructuralConnection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelConnectsStructuralMember::IfcRelConnectsStructuralMember(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_AppliedCondition = NULL;
    m_AdditionalConditions = NULL;
    m_SupportedLength = Step::getUnset(m_SupportedLength);
    m_ConditionCoordinateSystem = NULL;
    m_RelatingStructuralMember = NULL;
    m_RelatedStructuralConnection = NULL;
}

IfcRelConnectsStructuralMember::~IfcRelConnectsStructuralMember()
{}

bool IfcRelConnectsStructuralMember::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsStructuralMember(this);
}


IfcBoundaryCondition *IfcRelConnectsStructuralMember::getAppliedCondition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AppliedCondition.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcBoundaryCondition *IfcRelConnectsStructuralMember::getAppliedCondition() const
{
    return const_cast<IfcRelConnectsStructuralMember *>(this)->getAppliedCondition();
}

void IfcRelConnectsStructuralMember::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedCondition = value;
}

void IfcRelConnectsStructuralMember::unsetAppliedCondition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AppliedCondition = Step::getUnset(getAppliedCondition());
}

bool IfcRelConnectsStructuralMember::testAppliedCondition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAppliedCondition()) == false;
}


IfcStructuralConnectionCondition *IfcRelConnectsStructuralMember::getAdditionalConditions()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AdditionalConditions.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcStructuralConnectionCondition *IfcRelConnectsStructuralMember::getAdditionalConditions() const
{
    return const_cast<IfcRelConnectsStructuralMember *>(this)->getAdditionalConditions();
}

void IfcRelConnectsStructuralMember::setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AdditionalConditions = value;
}

void IfcRelConnectsStructuralMember::unsetAdditionalConditions()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AdditionalConditions = Step::getUnset(getAdditionalConditions());
}

bool IfcRelConnectsStructuralMember::testAdditionalConditions() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAdditionalConditions()) == false;
}


IfcLengthMeasure IfcRelConnectsStructuralMember::getSupportedLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SupportedLength;
    }
    else 
    {
        return Step::getUnset(m_SupportedLength);
    }    
}

IfcLengthMeasure IfcRelConnectsStructuralMember::getSupportedLength() const
{
    return const_cast<IfcRelConnectsStructuralMember *>(this)->getSupportedLength();
}

void IfcRelConnectsStructuralMember::setSupportedLength(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SupportedLength = value;
}

void IfcRelConnectsStructuralMember::unsetSupportedLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SupportedLength = Step::getUnset(getSupportedLength());
}

bool IfcRelConnectsStructuralMember::testSupportedLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSupportedLength()) == false;
}


IfcAxis2Placement3D *IfcRelConnectsStructuralMember::getConditionCoordinateSystem()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConditionCoordinateSystem.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement3D *IfcRelConnectsStructuralMember::getConditionCoordinateSystem() const
{
    return const_cast<IfcRelConnectsStructuralMember *>(this)->getConditionCoordinateSystem();
}

void IfcRelConnectsStructuralMember::setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConditionCoordinateSystem = value;
}

void IfcRelConnectsStructuralMember::unsetConditionCoordinateSystem()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConditionCoordinateSystem = Step::getUnset(getConditionCoordinateSystem());
}

bool IfcRelConnectsStructuralMember::testConditionCoordinateSystem() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConditionCoordinateSystem()) == false;
}

IfcStructuralMember *IfcRelConnectsStructuralMember::getRelatingStructuralMember()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingStructuralMember.get();
    }
    else
    {
        return NULL;
    }
}

const IfcStructuralMember *IfcRelConnectsStructuralMember::getRelatingStructuralMember() const
{
    return const_cast< IfcRelConnectsStructuralMember * > (this)->getRelatingStructuralMember();
}

void IfcRelConnectsStructuralMember::setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingStructuralMember.valid())
    {
        m_RelatingStructuralMember->m_ConnectedBy.erase(this);
    }
    if (value.valid() )
    {
       value->m_ConnectedBy.insert(this);
    }
    m_RelatingStructuralMember = value;
}

void IfcRelConnectsStructuralMember::unsetRelatingStructuralMember()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingStructuralMember = Step::getUnset(getRelatingStructuralMember());
}

bool IfcRelConnectsStructuralMember::testRelatingStructuralMember() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingStructuralMember()) == false;
}

IfcStructuralConnection *IfcRelConnectsStructuralMember::getRelatedStructuralConnection()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedStructuralConnection.get();
    }
    else
    {
        return NULL;
    }
}

const IfcStructuralConnection *IfcRelConnectsStructuralMember::getRelatedStructuralConnection() const
{
    return const_cast< IfcRelConnectsStructuralMember * > (this)->getRelatedStructuralConnection();
}

void IfcRelConnectsStructuralMember::setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedStructuralConnection.valid())
    {
        m_RelatedStructuralConnection->m_ConnectsStructuralMembers.erase(this);
    }
    if (value.valid() )
    {
       value->m_ConnectsStructuralMembers.insert(this);
    }
    m_RelatedStructuralConnection = value;
}

void IfcRelConnectsStructuralMember::unsetRelatedStructuralConnection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedStructuralConnection = Step::getUnset(getRelatedStructuralConnection());
}

bool IfcRelConnectsStructuralMember::testRelatedStructuralConnection() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatedStructuralConnection()) == false;
}

bool IfcRelConnectsStructuralMember::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AppliedCondition = NULL;
    }
    else
    {
        m_AppliedCondition = static_cast< IfcBoundaryCondition * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AdditionalConditions = NULL;
    }
    else
    {
        m_AdditionalConditions = static_cast< IfcStructuralConnectionCondition * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SupportedLength = Step::getUnset(m_SupportedLength);
    }
    else
    {
        m_SupportedLength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConditionCoordinateSystem = NULL;
    }
    else
    {
        m_ConditionCoordinateSystem = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingStructuralMember = NULL;
    }
    else
    {
        m_RelatingStructuralMember = static_cast< IfcStructuralMember * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedStructuralConnection = NULL;
    }
    else
    {
        m_RelatedStructuralConnection = static_cast< IfcStructuralConnection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelConnectsStructuralMember::copy(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setAppliedCondition((IfcBoundaryCondition*)copyop(obj.m_AppliedCondition.get()));
    setAdditionalConditions((IfcStructuralConnectionCondition*)copyop(obj.m_AdditionalConditions.get()));
    setSupportedLength(obj.m_SupportedLength);
    setConditionCoordinateSystem((IfcAxis2Placement3D*)copyop(obj.m_ConditionCoordinateSystem.get()));
    setRelatingStructuralMember((IfcStructuralMember*)copyop(obj.m_RelatingStructuralMember.get()));
    setRelatedStructuralConnection((IfcStructuralConnection*)copyop(obj.m_RelatedStructuralConnection.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsStructuralMember, IfcRelConnects)
