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


#include <ifc2x3/IfcRelConnectsWithEccentricity.h>

#include <ifc2x3/IfcConnectionGeometry.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelConnectsWithEccentricity::IfcRelConnectsWithEccentricity(Step::Id id, Step::SPFData *args) : 
    IfcRelConnectsStructuralMember(id, args)
{
    m_ConnectionConstraint = NULL;
}

IfcRelConnectsWithEccentricity::~IfcRelConnectsWithEccentricity()
{}

bool IfcRelConnectsWithEccentricity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsWithEccentricity(this);
}


IfcConnectionGeometry *IfcRelConnectsWithEccentricity::getConnectionConstraint()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConnectionConstraint.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcConnectionGeometry *IfcRelConnectsWithEccentricity::getConnectionConstraint() const
{
    return const_cast<IfcRelConnectsWithEccentricity *>(this)->getConnectionConstraint();
}

void IfcRelConnectsWithEccentricity::setConnectionConstraint(const Step::RefPtr< IfcConnectionGeometry > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionConstraint = value;
}

void IfcRelConnectsWithEccentricity::unsetConnectionConstraint()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionConstraint = Step::getUnset(getConnectionConstraint());
}

bool IfcRelConnectsWithEccentricity::testConnectionConstraint() const
{
    return Step::isUnset(getConnectionConstraint()) == false;
}

bool IfcRelConnectsWithEccentricity::init()
{
    if (IfcRelConnectsStructuralMember::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConnectionConstraint = NULL;
    }
    else
    {
        m_ConnectionConstraint = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelConnectsWithEccentricity::copy(const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop)
{
    IfcRelConnectsStructuralMember::copy(obj, copyop);
    setConnectionConstraint((IfcConnectionGeometry*)copyop(obj.m_ConnectionConstraint.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsWithEccentricity, IfcRelConnectsStructuralMember)
