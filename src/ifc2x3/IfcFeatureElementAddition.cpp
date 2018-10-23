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


#include <ifc2x3/IfcFeatureElementAddition.h>

#include <ifc2x3/IfcRelProjectsElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFeatureElementAddition::IfcFeatureElementAddition(Step::Id id, Step::SPFData *args) : 
    IfcFeatureElement(id, args)
{
}

IfcFeatureElementAddition::~IfcFeatureElementAddition()
{}

bool IfcFeatureElementAddition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFeatureElementAddition(this);
}

IfcRelProjectsElement *IfcFeatureElementAddition::getProjectsElements()
{
    if (Step::BaseObject::inited())
    {
        return m_ProjectsElements.get();
    }
 
    return NULL;
}

const IfcRelProjectsElement *IfcFeatureElementAddition::getProjectsElements() const
{
    return  const_cast< IfcFeatureElementAddition * > (this)->getProjectsElements();
}

bool IfcFeatureElementAddition::testProjectsElements() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProjectsElements()) == false;
}

bool IfcFeatureElementAddition::init()
{
    if (IfcFeatureElement::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelProjectsElement::getClassType(), 5);
    if (inverses)
    {
        m_ProjectsElements = static_cast< IfcRelProjectsElement * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcFeatureElementAddition::copy(const IfcFeatureElementAddition &obj, const CopyOp &copyop)
{
    IfcFeatureElement::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFeatureElementAddition, IfcFeatureElement)
