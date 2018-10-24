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


#include <ifc2x3/IfcOneDirectionRepeatFactor.h>

#include <ifc2x3/IfcVector.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOneDirectionRepeatFactor::IfcOneDirectionRepeatFactor(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_RepeatFactor = NULL;
}

IfcOneDirectionRepeatFactor::~IfcOneDirectionRepeatFactor()
{}

bool IfcOneDirectionRepeatFactor::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOneDirectionRepeatFactor(this);
}


IfcVector *IfcOneDirectionRepeatFactor::getRepeatFactor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RepeatFactor.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVector *IfcOneDirectionRepeatFactor::getRepeatFactor() const
{
    return const_cast<IfcOneDirectionRepeatFactor *>(this)->getRepeatFactor();
}

void IfcOneDirectionRepeatFactor::setRepeatFactor(const Step::RefPtr< IfcVector > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepeatFactor = value;
}

void IfcOneDirectionRepeatFactor::unsetRepeatFactor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepeatFactor = Step::getUnset(getRepeatFactor());
}

bool IfcOneDirectionRepeatFactor::testRepeatFactor() const
{
    return Step::isUnset(getRepeatFactor()) == false;
}

bool IfcOneDirectionRepeatFactor::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepeatFactor = NULL;
    }
    else
    {
        m_RepeatFactor = static_cast< IfcVector * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcOneDirectionRepeatFactor::copy(const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setRepeatFactor((IfcVector*)copyop(obj.m_RepeatFactor.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOneDirectionRepeatFactor, IfcGeometricRepresentationItem)
