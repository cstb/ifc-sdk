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


#include <ifc2x3/IfcTypeProduct.h>

#include <ifc2x3/IfcRepresentationMap.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTypeProduct::IfcTypeProduct(Step::Id id, Step::SPFData *args) : 
    IfcTypeObject(id, args)
{
    m_RepresentationMaps.setUnset(true);
    m_Tag = Step::getUnset(m_Tag);
}

IfcTypeProduct::~IfcTypeProduct()
{}

bool IfcTypeProduct::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTypeProduct(this);
}


List_IfcRepresentationMap_1_n &IfcTypeProduct::getRepresentationMaps()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RepresentationMaps;
    }
    else 
    {
        m_RepresentationMaps.setUnset(true);
        return m_RepresentationMaps;
    }    
}

const List_IfcRepresentationMap_1_n &IfcTypeProduct::getRepresentationMaps() const
{
    return const_cast<IfcTypeProduct *>(this)->getRepresentationMaps();
}

void IfcTypeProduct::setRepresentationMaps(const List_IfcRepresentationMap_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationMaps = value;
}

void IfcTypeProduct::unsetRepresentationMaps()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationMaps.clear();
    m_RepresentationMaps.setUnset(true);
}

bool IfcTypeProduct::testRepresentationMaps() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RepresentationMaps.isUnset() == false;
}


IfcLabel IfcTypeProduct::getTag()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Tag;
    }
    else 
    {
        return Step::getUnset(m_Tag);
    }    
}

const IfcLabel IfcTypeProduct::getTag() const
{
    return const_cast<IfcTypeProduct *>(this)->getTag();
}

void IfcTypeProduct::setTag(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tag = value;
}

void IfcTypeProduct::unsetTag()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tag = Step::getUnset(getTag());
}

bool IfcTypeProduct::testTag() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTag()) == false;
}

bool IfcTypeProduct::init()
{
    if (IfcTypeObject::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepresentationMaps.setUnset(true);
    }
    else
    {
        m_RepresentationMaps.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RepresentationMaps.push_back(static_cast< IfcRepresentationMap * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Tag = Step::getUnset(m_Tag);
    }
    else
    {
        m_Tag = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcTypeProduct::copy(const IfcTypeProduct &obj, const CopyOp &copyop)
{
    IfcTypeObject::copy(obj, copyop);
    List_IfcRepresentationMap_1_n::const_iterator it_m_RepresentationMaps;
    for (it_m_RepresentationMaps = obj.m_RepresentationMaps.begin(); it_m_RepresentationMaps != obj.m_RepresentationMaps.end(); ++it_m_RepresentationMaps)
    {
        Step::RefPtr< IfcRepresentationMap > copyTarget = (IfcRepresentationMap *) (copyop((*it_m_RepresentationMaps).get()));
        m_RepresentationMaps.push_back(copyTarget);
    }
    
    setTag(obj.m_Tag);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTypeProduct, IfcTypeObject)
