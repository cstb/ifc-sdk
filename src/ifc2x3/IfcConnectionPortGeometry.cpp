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


#include <ifc2x3/IfcConnectionPortGeometry.h>

#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConnectionPortGeometry::IfcConnectionPortGeometry(Step::Id id, Step::SPFData *args) : 
    IfcConnectionGeometry(id, args)
{
    m_LocationAtRelatingElement = NULL;
    m_LocationAtRelatedElement = NULL;
    m_ProfileOfPort = NULL;
}

IfcConnectionPortGeometry::~IfcConnectionPortGeometry()
{}

bool IfcConnectionPortGeometry::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConnectionPortGeometry(this);
}


IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatingElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LocationAtRelatingElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatingElement() const
{
    return const_cast<IfcConnectionPortGeometry *>(this)->getLocationAtRelatingElement();
}

void IfcConnectionPortGeometry::setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocationAtRelatingElement = value;
}

void IfcConnectionPortGeometry::unsetLocationAtRelatingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocationAtRelatingElement = Step::getUnset(getLocationAtRelatingElement());
}

bool IfcConnectionPortGeometry::testLocationAtRelatingElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLocationAtRelatingElement()) == false;
}


IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatedElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LocationAtRelatedElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatedElement() const
{
    return const_cast<IfcConnectionPortGeometry *>(this)->getLocationAtRelatedElement();
}

void IfcConnectionPortGeometry::setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocationAtRelatedElement = value;
}

void IfcConnectionPortGeometry::unsetLocationAtRelatedElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocationAtRelatedElement = Step::getUnset(getLocationAtRelatedElement());
}

bool IfcConnectionPortGeometry::testLocationAtRelatedElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLocationAtRelatedElement()) == false;
}


IfcProfileDef *IfcConnectionPortGeometry::getProfileOfPort()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProfileOfPort.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileDef *IfcConnectionPortGeometry::getProfileOfPort() const
{
    return const_cast<IfcConnectionPortGeometry *>(this)->getProfileOfPort();
}

void IfcConnectionPortGeometry::setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileOfPort = value;
}

void IfcConnectionPortGeometry::unsetProfileOfPort()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileOfPort = Step::getUnset(getProfileOfPort());
}

bool IfcConnectionPortGeometry::testProfileOfPort() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProfileOfPort()) == false;
}

bool IfcConnectionPortGeometry::init()
{
    if (IfcConnectionGeometry::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LocationAtRelatingElement = NULL;
    }
    else
    {
        m_LocationAtRelatingElement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_LocationAtRelatingElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_LocationAtRelatedElement = NULL;
    }
    else
    {
        m_LocationAtRelatedElement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_LocationAtRelatedElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_ProfileOfPort = NULL;
    }
    else
    {
        m_ProfileOfPort = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcConnectionPortGeometry::copy(const IfcConnectionPortGeometry &obj, const CopyOp &copyop)
{
    IfcConnectionGeometry::copy(obj, copyop);
    setLocationAtRelatingElement((IfcAxis2Placement*)copyop(obj.m_LocationAtRelatingElement.get()));
    setLocationAtRelatedElement((IfcAxis2Placement*)copyop(obj.m_LocationAtRelatedElement.get()));
    setProfileOfPort((IfcProfileDef*)copyop(obj.m_ProfileOfPort.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConnectionPortGeometry, IfcConnectionGeometry)
