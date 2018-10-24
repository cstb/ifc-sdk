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


#include <ifc2x3/IfcConnectionSurfaceGeometry.h>

#include <ifc2x3/IfcSurfaceOrFaceSurface.h>
#include <ifc2x3/IfcSurfaceOrFaceSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry(Step::Id id, Step::SPFData *args) : 
    IfcConnectionGeometry(id, args)
{
    m_SurfaceOnRelatingElement = NULL;
    m_SurfaceOnRelatedElement = NULL;
}

IfcConnectionSurfaceGeometry::~IfcConnectionSurfaceGeometry()
{}

bool IfcConnectionSurfaceGeometry::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConnectionSurfaceGeometry(this);
}


IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatingElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SurfaceOnRelatingElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatingElement() const
{
    return const_cast<IfcConnectionSurfaceGeometry *>(this)->getSurfaceOnRelatingElement();
}

void IfcConnectionSurfaceGeometry::setSurfaceOnRelatingElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SurfaceOnRelatingElement = value;
}

void IfcConnectionSurfaceGeometry::unsetSurfaceOnRelatingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SurfaceOnRelatingElement = Step::getUnset(getSurfaceOnRelatingElement());
}

bool IfcConnectionSurfaceGeometry::testSurfaceOnRelatingElement() const
{
    return Step::isUnset(getSurfaceOnRelatingElement()) == false;
}


IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatedElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SurfaceOnRelatedElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSurfaceOrFaceSurface *IfcConnectionSurfaceGeometry::getSurfaceOnRelatedElement() const
{
    return const_cast<IfcConnectionSurfaceGeometry *>(this)->getSurfaceOnRelatedElement();
}

void IfcConnectionSurfaceGeometry::setSurfaceOnRelatedElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SurfaceOnRelatedElement = value;
}

void IfcConnectionSurfaceGeometry::unsetSurfaceOnRelatedElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SurfaceOnRelatedElement = Step::getUnset(getSurfaceOnRelatedElement());
}

bool IfcConnectionSurfaceGeometry::testSurfaceOnRelatedElement() const
{
    return Step::isUnset(getSurfaceOnRelatedElement()) == false;
}

bool IfcConnectionSurfaceGeometry::init()
{
    if (IfcConnectionGeometry::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SurfaceOnRelatingElement = NULL;
    }
    else
    {
        m_SurfaceOnRelatingElement = new IfcSurfaceOrFaceSurface;
        if (arg[0] == '#') {
            m_SurfaceOnRelatingElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SurfaceOnRelatedElement = NULL;
    }
    else
    {
        m_SurfaceOnRelatedElement = new IfcSurfaceOrFaceSurface;
        if (arg[0] == '#') {
            m_SurfaceOnRelatedElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcConnectionSurfaceGeometry::copy(const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop)
{
    IfcConnectionGeometry::copy(obj, copyop);
    setSurfaceOnRelatingElement((IfcSurfaceOrFaceSurface*)copyop(obj.m_SurfaceOnRelatingElement.get()));
    setSurfaceOnRelatedElement((IfcSurfaceOrFaceSurface*)copyop(obj.m_SurfaceOnRelatedElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConnectionSurfaceGeometry, IfcConnectionGeometry)
