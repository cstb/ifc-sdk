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


#include <ifc2x3/IfcBoxedHalfSpace.h>

#include <ifc2x3/IfcBoundingBox.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBoxedHalfSpace::IfcBoxedHalfSpace(Step::Id id, Step::SPFData *args) : 
    IfcHalfSpaceSolid(id, args)
{
    m_Enclosure = NULL;
}

IfcBoxedHalfSpace::~IfcBoxedHalfSpace()
{}

bool IfcBoxedHalfSpace::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBoxedHalfSpace(this);
}


IfcBoundingBox *IfcBoxedHalfSpace::getEnclosure()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Enclosure.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcBoundingBox *IfcBoxedHalfSpace::getEnclosure() const
{
    return const_cast<IfcBoxedHalfSpace *>(this)->getEnclosure();
}

void IfcBoxedHalfSpace::setEnclosure(const Step::RefPtr< IfcBoundingBox > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Enclosure = value;
}

void IfcBoxedHalfSpace::unsetEnclosure()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Enclosure = Step::getUnset(getEnclosure());
}

bool IfcBoxedHalfSpace::testEnclosure() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEnclosure()) == false;
}

bool IfcBoxedHalfSpace::init()
{
    if (IfcHalfSpaceSolid::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Enclosure = NULL;
    }
    else
    {
        m_Enclosure = static_cast< IfcBoundingBox * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcBoxedHalfSpace::copy(const IfcBoxedHalfSpace &obj, const CopyOp &copyop)
{
    IfcHalfSpaceSolid::copy(obj, copyop);
    setEnclosure((IfcBoundingBox*)copyop(obj.m_Enclosure.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBoxedHalfSpace, IfcHalfSpaceSolid)
