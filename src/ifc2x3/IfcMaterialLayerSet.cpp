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


#include <ifc2x3/IfcMaterialLayerSet.h>

#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/IfcMaterialLayer.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcMaterialLayerSet_MaterialLayers_type::Inverted_IfcMaterialLayerSet_MaterialLayers_type()
{

}

void Inverted_IfcMaterialLayerSet_MaterialLayers_type::setOwner(IfcMaterialLayerSet *owner)
{
    mOwner = owner;
}

void Inverted_IfcMaterialLayerSet_MaterialLayers_type::push_back(const Step::RefPtr< IfcMaterialLayer > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcMaterialLayer *inverse = const_cast< IfcMaterialLayer * > (value.get());
    List_IfcMaterialLayer_1_n::push_back(value);
    inverse->m_ToMaterialLayerSet = mOwner;
}


Inverted_IfcMaterialLayerSet_MaterialLayers_type::iterator Inverted_IfcMaterialLayerSet_MaterialLayers_type::erase(const Step::RefPtr< IfcMaterialLayer > &value)
{
    IfcMaterialLayer *inverse = const_cast< IfcMaterialLayer * > (value.get());
    inverse->m_ToMaterialLayerSet = NULL;
    return List_IfcMaterialLayer_1_n::erase(value);
}

void Inverted_IfcMaterialLayerSet_MaterialLayers_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcMaterialLayerSet::IfcMaterialLayerSet(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_LayerSetName = Step::getUnset(m_LayerSetName);
    m_MaterialLayers.setUnset(true);
    m_MaterialLayers.setOwner(this);
}

IfcMaterialLayerSet::~IfcMaterialLayerSet()
{}

bool IfcMaterialLayerSet::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterialLayerSet(this);
}


IfcLabel IfcMaterialLayerSet::getLayerSetName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LayerSetName;
    }
    else 
    {
        return Step::getUnset(m_LayerSetName);
    }    
}

const IfcLabel IfcMaterialLayerSet::getLayerSetName() const
{
    return const_cast<IfcMaterialLayerSet *>(this)->getLayerSetName();
}

void IfcMaterialLayerSet::setLayerSetName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerSetName = value;
}

void IfcMaterialLayerSet::unsetLayerSetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LayerSetName = Step::getUnset(getLayerSetName());
}

bool IfcMaterialLayerSet::testLayerSetName() const
{
    return Step::isUnset(getLayerSetName()) == false;
}

List_IfcMaterialLayer_1_n &IfcMaterialLayerSet::getMaterialLayers()
{
    if (Step::BaseObject::inited())
    {
        return m_MaterialLayers;
    }
    else
    {
        m_MaterialLayers.setUnset(true);
        return m_MaterialLayers;
    }
}

const List_IfcMaterialLayer_1_n &IfcMaterialLayerSet::getMaterialLayers() const
{
    return const_cast< IfcMaterialLayerSet * > (this)->getMaterialLayers();
}

void IfcMaterialLayerSet::unsetMaterialLayers()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaterialLayers.clear();
    m_MaterialLayers.setUnset(true);
}

bool IfcMaterialLayerSet::testMaterialLayers() const
{
    return m_MaterialLayers.isUnset() == false;
}

bool IfcMaterialLayerSet::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LayerSetName = Step::getUnset(m_LayerSetName);
    }
    else
    {
        m_LayerSetName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaterialLayers.setUnset(true);
    }
    else
    {
        m_MaterialLayers.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_MaterialLayers.push_back(static_cast< IfcMaterialLayer * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcMaterialLayerSet::copy(const IfcMaterialLayerSet &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setLayerSetName(obj.m_LayerSetName);
    List_IfcMaterialLayer_1_n::const_iterator it_m_MaterialLayers;
    for (it_m_MaterialLayers = obj.m_MaterialLayers.begin(); it_m_MaterialLayers != obj.m_MaterialLayers.end(); ++it_m_MaterialLayers)
    {
        Step::RefPtr< IfcMaterialLayer > copyTarget = (IfcMaterialLayer *) (copyop((*it_m_MaterialLayers).get()));
        m_MaterialLayers.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterialLayerSet, Step::BaseEntity)
