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


#include <ifc2x3/IfcShellBasedSurfaceModel.h>

#include <ifc2x3/IfcShell.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcShellBasedSurfaceModel::IfcShellBasedSurfaceModel(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_SbsmBoundary.setUnset(true);
}

IfcShellBasedSurfaceModel::~IfcShellBasedSurfaceModel()
{}

bool IfcShellBasedSurfaceModel::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcShellBasedSurfaceModel(this);
}


Set_IfcShell_1_n &IfcShellBasedSurfaceModel::getSbsmBoundary()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SbsmBoundary;
    }
    else 
    {
        m_SbsmBoundary.setUnset(true);
        return m_SbsmBoundary;
    }    
}

const Set_IfcShell_1_n &IfcShellBasedSurfaceModel::getSbsmBoundary() const
{
    return const_cast<IfcShellBasedSurfaceModel *>(this)->getSbsmBoundary();
}

void IfcShellBasedSurfaceModel::setSbsmBoundary(const Set_IfcShell_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SbsmBoundary = value;
}

void IfcShellBasedSurfaceModel::unsetSbsmBoundary()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SbsmBoundary.clear();
    m_SbsmBoundary.setUnset(true);
}

bool IfcShellBasedSurfaceModel::testSbsmBoundary() const
{
    return m_SbsmBoundary.isUnset() == false;
}

bool IfcShellBasedSurfaceModel::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SbsmBoundary.setUnset(true);
    }
    else
    {
        m_SbsmBoundary.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcShell > attr2 = new IfcShell();
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
                    m_SbsmBoundary.insert(attr2);
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

void IfcShellBasedSurfaceModel::copy(const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    Set_IfcShell_1_n::const_iterator it_m_SbsmBoundary;
    for (it_m_SbsmBoundary = obj.m_SbsmBoundary.begin(); it_m_SbsmBoundary != obj.m_SbsmBoundary.end(); ++it_m_SbsmBoundary)
    {
        Step::RefPtr< IfcShell > copyTarget = new IfcShell;
        copyTarget->copy(*((*it_m_SbsmBoundary).get()), copyop);
        m_SbsmBoundary.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcShellBasedSurfaceModel, IfcGeometricRepresentationItem)
