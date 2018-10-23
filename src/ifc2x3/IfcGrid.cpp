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


#include <ifc2x3/IfcGrid.h>

#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcGrid_VAxes_type::Inverted_IfcGrid_VAxes_type()
{

}

void Inverted_IfcGrid_VAxes_type::setOwner(IfcGrid *owner)
{
    mOwner = owner;
}

void Inverted_IfcGrid_VAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_1_n::push_back(value);
    inverse->m_PartOfV.insert(mOwner);
}


Inverted_IfcGrid_VAxes_type::iterator Inverted_IfcGrid_VAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value)
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_PartOfV.erase(mOwner);
    return List_IfcGridAxis_1_n::erase(value);
}

void Inverted_IfcGrid_VAxes_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


Inverted_IfcGrid_UAxes_type::Inverted_IfcGrid_UAxes_type()
{

}

void Inverted_IfcGrid_UAxes_type::setOwner(IfcGrid *owner)
{
    mOwner = owner;
}

void Inverted_IfcGrid_UAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_1_n::push_back(value);
    inverse->m_PartOfU.insert(mOwner);
}


Inverted_IfcGrid_UAxes_type::iterator Inverted_IfcGrid_UAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value)
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_PartOfU.erase(mOwner);
    return List_IfcGridAxis_1_n::erase(value);
}

void Inverted_IfcGrid_UAxes_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


Inverted_IfcGrid_WAxes_type::Inverted_IfcGrid_WAxes_type()
{

}

void Inverted_IfcGrid_WAxes_type::setOwner(IfcGrid *owner)
{
    mOwner = owner;
}

void Inverted_IfcGrid_WAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_1_n::push_back(value);
    inverse->m_PartOfW.insert(mOwner);
}


Inverted_IfcGrid_WAxes_type::iterator Inverted_IfcGrid_WAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value)
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_PartOfW.erase(mOwner);
    return List_IfcGridAxis_1_n::erase(value);
}

void Inverted_IfcGrid_WAxes_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcGrid::IfcGrid(Step::Id id, Step::SPFData *args) : 
    IfcProduct(id, args)
{
    m_VAxes.setUnset(true);
    m_VAxes.setOwner(this);
    m_UAxes.setUnset(true);
    m_UAxes.setOwner(this);
    m_WAxes.setUnset(true);
    m_WAxes.setOwner(this);
}

IfcGrid::~IfcGrid()
{}

bool IfcGrid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGrid(this);
}

List_IfcGridAxis_1_n &IfcGrid::getVAxes()
{
    if (Step::BaseObject::inited())
    {
        return m_VAxes;
    }
    else
    {
        m_VAxes.setUnset(true);
        return m_VAxes;
    }
}

const List_IfcGridAxis_1_n &IfcGrid::getVAxes() const
{
    return const_cast< IfcGrid * > (this)->getVAxes();
}

void IfcGrid::unsetVAxes()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VAxes.clear();
    m_VAxes.setUnset(true);
}

bool IfcGrid::testVAxes() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_VAxes.isUnset() == false;
}

List_IfcGridAxis_1_n &IfcGrid::getUAxes()
{
    if (Step::BaseObject::inited())
    {
        return m_UAxes;
    }
    else
    {
        m_UAxes.setUnset(true);
        return m_UAxes;
    }
}

const List_IfcGridAxis_1_n &IfcGrid::getUAxes() const
{
    return const_cast< IfcGrid * > (this)->getUAxes();
}

void IfcGrid::unsetUAxes()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UAxes.clear();
    m_UAxes.setUnset(true);
}

bool IfcGrid::testUAxes() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_UAxes.isUnset() == false;
}

List_IfcGridAxis_1_n &IfcGrid::getWAxes()
{
    if (Step::BaseObject::inited())
    {
        return m_WAxes;
    }
    else
    {
        m_WAxes.setUnset(true);
        return m_WAxes;
    }
}

const List_IfcGridAxis_1_n &IfcGrid::getWAxes() const
{
    return const_cast< IfcGrid * > (this)->getWAxes();
}

void IfcGrid::unsetWAxes()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WAxes.clear();
    m_WAxes.setUnset(true);
}

bool IfcGrid::testWAxes() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_WAxes.isUnset() == false;
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcGrid::getContainedInStructure()
{
    if (Step::BaseObject::inited())
    {
        return m_ContainedInStructure;
    }
 
    m_ContainedInStructure.setUnset(true);
    return m_ContainedInStructure;
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcGrid::getContainedInStructure() const
{
    return  const_cast< IfcGrid * > (this)->getContainedInStructure();
}

bool IfcGrid::testContainedInStructure() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ContainedInStructure.isUnset() == false;
}

bool IfcGrid::init()
{
    if (IfcProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VAxes.setUnset(true);
    }
    else
    {
        m_VAxes.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_VAxes.push_back(static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_UAxes.setUnset(true);
    }
    else
    {
        m_UAxes.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_UAxes.push_back(static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_WAxes.setUnset(true);
    }
    else
    {
        m_WAxes.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_WAxes.push_back(static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_ContainedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ContainedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGrid::copy(const IfcGrid &obj, const CopyOp &copyop)
{
    IfcProduct::copy(obj, copyop);
    List_IfcGridAxis_1_n::const_iterator it_m_VAxes;
    for (it_m_VAxes = obj.m_VAxes.begin(); it_m_VAxes != obj.m_VAxes.end(); ++it_m_VAxes)
    {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_VAxes).get()));
        m_VAxes.push_back(copyTarget);
    }
    
    List_IfcGridAxis_1_n::const_iterator it_m_UAxes;
    for (it_m_UAxes = obj.m_UAxes.begin(); it_m_UAxes != obj.m_UAxes.end(); ++it_m_UAxes)
    {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_UAxes).get()));
        m_UAxes.push_back(copyTarget);
    }
    
    List_IfcGridAxis_1_n::const_iterator it_m_WAxes;
    for (it_m_WAxes = obj.m_WAxes.begin(); it_m_WAxes != obj.m_WAxes.end(); ++it_m_WAxes)
    {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_WAxes).get()));
        m_WAxes.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGrid, IfcProduct)
