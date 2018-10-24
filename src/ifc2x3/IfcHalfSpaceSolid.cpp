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


#include <ifc2x3/IfcHalfSpaceSolid.h>

#include <ifc2x3/IfcSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcHalfSpaceSolid::IfcHalfSpaceSolid(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_BaseSurface = NULL;
    m_AgreementFlag = Step::getUnset(m_AgreementFlag);
}

IfcHalfSpaceSolid::~IfcHalfSpaceSolid()
{}

bool IfcHalfSpaceSolid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcHalfSpaceSolid(this);
}


IfcSurface *IfcHalfSpaceSolid::getBaseSurface()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BaseSurface.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSurface *IfcHalfSpaceSolid::getBaseSurface() const
{
    return const_cast<IfcHalfSpaceSolid *>(this)->getBaseSurface();
}

void IfcHalfSpaceSolid::setBaseSurface(const Step::RefPtr< IfcSurface > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseSurface = value;
}

void IfcHalfSpaceSolid::unsetBaseSurface()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseSurface = Step::getUnset(getBaseSurface());
}

bool IfcHalfSpaceSolid::testBaseSurface() const
{
    return Step::isUnset(getBaseSurface()) == false;
}


Step::Boolean IfcHalfSpaceSolid::getAgreementFlag()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AgreementFlag;
    }
    else 
    {
        return Step::getUnset(m_AgreementFlag);
    }    
}

Step::Boolean IfcHalfSpaceSolid::getAgreementFlag() const
{
    return const_cast<IfcHalfSpaceSolid *>(this)->getAgreementFlag();
}

void IfcHalfSpaceSolid::setAgreementFlag(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AgreementFlag = value;
}

void IfcHalfSpaceSolid::unsetAgreementFlag()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AgreementFlag = Step::getUnset(getAgreementFlag());
}

bool IfcHalfSpaceSolid::testAgreementFlag() const
{
    return Step::isUnset(getAgreementFlag()) == false;
}

bool IfcHalfSpaceSolid::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BaseSurface = NULL;
    }
    else
    {
        m_BaseSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AgreementFlag = Step::getUnset(m_AgreementFlag);
    }
    else
    {
        m_AgreementFlag = Step::spfToBoolean(arg)
;
    }
    return true;
}

void IfcHalfSpaceSolid::copy(const IfcHalfSpaceSolid &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setBaseSurface((IfcSurface*)copyop(obj.m_BaseSurface.get()));
    setAgreementFlag(obj.m_AgreementFlag);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcHalfSpaceSolid, IfcGeometricRepresentationItem)
