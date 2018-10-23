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


#include <ifc2x3/IfcSectionedSpine.h>

#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcAxis2Placement3D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSectionedSpine::IfcSectionedSpine(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_SpineCurve = NULL;
    m_CrossSections.setUnset(true);
    m_CrossSectionPositions.setUnset(true);
}

IfcSectionedSpine::~IfcSectionedSpine()
{}

bool IfcSectionedSpine::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSectionedSpine(this);
}


IfcCompositeCurve *IfcSectionedSpine::getSpineCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SpineCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCompositeCurve *IfcSectionedSpine::getSpineCurve() const
{
    return const_cast<IfcSectionedSpine *>(this)->getSpineCurve();
}

void IfcSectionedSpine::setSpineCurve(const Step::RefPtr< IfcCompositeCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpineCurve = value;
}

void IfcSectionedSpine::unsetSpineCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpineCurve = Step::getUnset(getSpineCurve());
}

bool IfcSectionedSpine::testSpineCurve() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSpineCurve()) == false;
}


List_IfcProfileDef_2_n &IfcSectionedSpine::getCrossSections()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CrossSections;
    }
    else 
    {
        m_CrossSections.setUnset(true);
        return m_CrossSections;
    }    
}

const List_IfcProfileDef_2_n &IfcSectionedSpine::getCrossSections() const
{
    return const_cast<IfcSectionedSpine *>(this)->getCrossSections();
}

void IfcSectionedSpine::setCrossSections(const List_IfcProfileDef_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSections = value;
}

void IfcSectionedSpine::unsetCrossSections()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSections.clear();
    m_CrossSections.setUnset(true);
}

bool IfcSectionedSpine::testCrossSections() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_CrossSections.isUnset() == false;
}


List_IfcAxis2Placement3D_2_n &IfcSectionedSpine::getCrossSectionPositions()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CrossSectionPositions;
    }
    else 
    {
        m_CrossSectionPositions.setUnset(true);
        return m_CrossSectionPositions;
    }    
}

const List_IfcAxis2Placement3D_2_n &IfcSectionedSpine::getCrossSectionPositions() const
{
    return const_cast<IfcSectionedSpine *>(this)->getCrossSectionPositions();
}

void IfcSectionedSpine::setCrossSectionPositions(const List_IfcAxis2Placement3D_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionPositions = value;
}

void IfcSectionedSpine::unsetCrossSectionPositions()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionPositions.clear();
    m_CrossSectionPositions.setUnset(true);
}

bool IfcSectionedSpine::testCrossSectionPositions() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_CrossSectionPositions.isUnset() == false;
}

bool IfcSectionedSpine::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SpineCurve = NULL;
    }
    else
    {
        m_SpineCurve = static_cast< IfcCompositeCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CrossSections.setUnset(true);
    }
    else
    {
        m_CrossSections.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_CrossSections.push_back(static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_CrossSectionPositions.setUnset(true);
    }
    else
    {
        m_CrossSectionPositions.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_CrossSectionPositions.push_back(static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcSectionedSpine::copy(const IfcSectionedSpine &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSpineCurve((IfcCompositeCurve*)copyop(obj.m_SpineCurve.get()));
    List_IfcProfileDef_2_n::const_iterator it_m_CrossSections;
    for (it_m_CrossSections = obj.m_CrossSections.begin(); it_m_CrossSections != obj.m_CrossSections.end(); ++it_m_CrossSections)
    {
        Step::RefPtr< IfcProfileDef > copyTarget = (IfcProfileDef *) (copyop((*it_m_CrossSections).get()));
        m_CrossSections.push_back(copyTarget);
    }
    
    List_IfcAxis2Placement3D_2_n::const_iterator it_m_CrossSectionPositions;
    for (it_m_CrossSectionPositions = obj.m_CrossSectionPositions.begin(); it_m_CrossSectionPositions != obj.m_CrossSectionPositions.end(); ++it_m_CrossSectionPositions)
    {
        Step::RefPtr< IfcAxis2Placement3D > copyTarget = (IfcAxis2Placement3D *) (copyop((*it_m_CrossSectionPositions).get()));
        m_CrossSectionPositions.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSectionedSpine, IfcGeometricRepresentationItem)
