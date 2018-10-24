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


#include <ifc2x3/IfcRelServicesBuildings.h>

#include <ifc2x3/IfcSystem.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcSpatialStructureElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelServicesBuildings_RelatedBuildings_type::Inverted_IfcRelServicesBuildings_RelatedBuildings_type()
{

}

void Inverted_IfcRelServicesBuildings_RelatedBuildings_type::setOwner(IfcRelServicesBuildings *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelServicesBuildings_RelatedBuildings_type::insert(const Step::RefPtr< IfcSpatialStructureElement > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcSpatialStructureElement *inverse = const_cast< IfcSpatialStructureElement * > (value.get());
    Set_IfcSpatialStructureElement_1_n::insert(value);
    inverse->m_ServicedBySystems.insert(mOwner);
}


Inverted_IfcRelServicesBuildings_RelatedBuildings_type::size_type Inverted_IfcRelServicesBuildings_RelatedBuildings_type::erase(const Step::RefPtr< IfcSpatialStructureElement > &value)
{
    IfcSpatialStructureElement *inverse = const_cast< IfcSpatialStructureElement * > (value.get());
    inverse->m_ServicedBySystems.erase(mOwner);
    return Set_IfcSpatialStructureElement_1_n::erase(value);
}

void Inverted_IfcRelServicesBuildings_RelatedBuildings_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelServicesBuildings::IfcRelServicesBuildings(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatingSystem = NULL;
    m_RelatedBuildings.setUnset(true);
    m_RelatedBuildings.setOwner(this);
}

IfcRelServicesBuildings::~IfcRelServicesBuildings()
{}

bool IfcRelServicesBuildings::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelServicesBuildings(this);
}

IfcSystem *IfcRelServicesBuildings::getRelatingSystem()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingSystem.get();
    }
    else
    {
        return NULL;
    }
}

const IfcSystem *IfcRelServicesBuildings::getRelatingSystem() const
{
    return const_cast< IfcRelServicesBuildings * > (this)->getRelatingSystem();
}

void IfcRelServicesBuildings::setRelatingSystem(const Step::RefPtr< IfcSystem > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingSystem.valid())
    {
        m_RelatingSystem->m_ServicesBuildings.erase(this);
    }
    if (value.valid() )
    {
       value->m_ServicesBuildings.insert(this);
    }
    m_RelatingSystem = value;
}

void IfcRelServicesBuildings::unsetRelatingSystem()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingSystem = Step::getUnset(getRelatingSystem());
}

bool IfcRelServicesBuildings::testRelatingSystem() const
{
    return Step::isUnset(getRelatingSystem()) == false;
}

Set_IfcSpatialStructureElement_1_n &IfcRelServicesBuildings::getRelatedBuildings()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedBuildings;
    }
    else
    {
        m_RelatedBuildings.setUnset(true);
        return m_RelatedBuildings;
    }
}

const Set_IfcSpatialStructureElement_1_n &IfcRelServicesBuildings::getRelatedBuildings() const
{
    return const_cast< IfcRelServicesBuildings * > (this)->getRelatedBuildings();
}

void IfcRelServicesBuildings::unsetRelatedBuildings()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedBuildings.clear();
    m_RelatedBuildings.setUnset(true);
}

bool IfcRelServicesBuildings::testRelatedBuildings() const
{
    return m_RelatedBuildings.isUnset() == false;
}

bool IfcRelServicesBuildings::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingSystem = NULL;
    }
    else
    {
        m_RelatingSystem = static_cast< IfcSystem * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedBuildings.setUnset(true);
    }
    else
    {
        m_RelatedBuildings.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedBuildings.insert(static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcRelServicesBuildings::copy(const IfcRelServicesBuildings &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatingSystem((IfcSystem*)copyop(obj.m_RelatingSystem.get()));
    Set_IfcSpatialStructureElement_1_n::const_iterator it_m_RelatedBuildings;
    for (it_m_RelatedBuildings = obj.m_RelatedBuildings.begin(); it_m_RelatedBuildings != obj.m_RelatedBuildings.end(); ++it_m_RelatedBuildings)
    {
        Step::RefPtr< IfcSpatialStructureElement > copyTarget = (IfcSpatialStructureElement *) (copyop((*it_m_RelatedBuildings).get()));
        m_RelatedBuildings.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelServicesBuildings, IfcRelConnects)
