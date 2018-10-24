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


#include <ifc2x3/IfcGeometricSet.h>

#include <ifc2x3/IfcGeometricSetSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGeometricSet::IfcGeometricSet(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Elements.setUnset(true);
}

IfcGeometricSet::~IfcGeometricSet()
{}

bool IfcGeometricSet::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGeometricSet(this);
}


Set_IfcGeometricSetSelect_1_n &IfcGeometricSet::getElements()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Elements;
    }
    else 
    {
        m_Elements.setUnset(true);
        return m_Elements;
    }    
}

const Set_IfcGeometricSetSelect_1_n &IfcGeometricSet::getElements() const
{
    return const_cast<IfcGeometricSet *>(this)->getElements();
}

void IfcGeometricSet::setElements(const Set_IfcGeometricSetSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Elements = value;
}

void IfcGeometricSet::unsetElements()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Elements.clear();
    m_Elements.setUnset(true);
}

bool IfcGeometricSet::testElements() const
{
    return m_Elements.isUnset() == false;
}

bool IfcGeometricSet::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Elements.setUnset(true);
    }
    else
    {
        m_Elements.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcGeometricSetSelect > attr2 = new IfcGeometricSetSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_Elements.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcGeometricSet::copy(const IfcGeometricSet &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    Set_IfcGeometricSetSelect_1_n::const_iterator it_m_Elements;
    for (it_m_Elements = obj.m_Elements.begin(); it_m_Elements != obj.m_Elements.end(); ++it_m_Elements)
    {
        Step::RefPtr< IfcGeometricSetSelect > copyTarget = new IfcGeometricSetSelect;
        copyTarget->copy(*((*it_m_Elements).get()), copyop);
        m_Elements.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGeometricSet, IfcGeometricRepresentationItem)
