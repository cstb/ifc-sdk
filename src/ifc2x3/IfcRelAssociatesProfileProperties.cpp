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


#include <ifc2x3/IfcRelAssociatesProfileProperties.h>

#include <ifc2x3/IfcProfileProperties.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcOrientationSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssociatesProfileProperties::IfcRelAssociatesProfileProperties(Step::Id id, Step::SPFData *args) : 
    IfcRelAssociates(id, args)
{
    m_RelatingProfileProperties = NULL;
    m_ProfileSectionLocation = NULL;
    m_ProfileOrientation = NULL;
}

IfcRelAssociatesProfileProperties::~IfcRelAssociatesProfileProperties()
{}

bool IfcRelAssociatesProfileProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssociatesProfileProperties(this);
}


IfcProfileProperties *IfcRelAssociatesProfileProperties::getRelatingProfileProperties()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingProfileProperties.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileProperties *IfcRelAssociatesProfileProperties::getRelatingProfileProperties() const
{
    return const_cast<IfcRelAssociatesProfileProperties *>(this)->getRelatingProfileProperties();
}

void IfcRelAssociatesProfileProperties::setRelatingProfileProperties(const Step::RefPtr< IfcProfileProperties > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingProfileProperties = value;
}

void IfcRelAssociatesProfileProperties::unsetRelatingProfileProperties()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingProfileProperties = Step::getUnset(getRelatingProfileProperties());
}

bool IfcRelAssociatesProfileProperties::testRelatingProfileProperties() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingProfileProperties()) == false;
}


IfcShapeAspect *IfcRelAssociatesProfileProperties::getProfileSectionLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProfileSectionLocation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcShapeAspect *IfcRelAssociatesProfileProperties::getProfileSectionLocation() const
{
    return const_cast<IfcRelAssociatesProfileProperties *>(this)->getProfileSectionLocation();
}

void IfcRelAssociatesProfileProperties::setProfileSectionLocation(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileSectionLocation = value;
}

void IfcRelAssociatesProfileProperties::unsetProfileSectionLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileSectionLocation = Step::getUnset(getProfileSectionLocation());
}

bool IfcRelAssociatesProfileProperties::testProfileSectionLocation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProfileSectionLocation()) == false;
}


IfcOrientationSelect *IfcRelAssociatesProfileProperties::getProfileOrientation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProfileOrientation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcOrientationSelect *IfcRelAssociatesProfileProperties::getProfileOrientation() const
{
    return const_cast<IfcRelAssociatesProfileProperties *>(this)->getProfileOrientation();
}

void IfcRelAssociatesProfileProperties::setProfileOrientation(const Step::RefPtr< IfcOrientationSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileOrientation = value;
}

void IfcRelAssociatesProfileProperties::unsetProfileOrientation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProfileOrientation = Step::getUnset(getProfileOrientation());
}

bool IfcRelAssociatesProfileProperties::testProfileOrientation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getProfileOrientation()) == false;
}

bool IfcRelAssociatesProfileProperties::init()
{
    if (IfcRelAssociates::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingProfileProperties = NULL;
    }
    else
    {
        m_RelatingProfileProperties = static_cast< IfcProfileProperties * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProfileSectionLocation = NULL;
    }
    else
    {
        m_ProfileSectionLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProfileOrientation = NULL;
    }
    else
    {
        m_ProfileOrientation = new IfcOrientationSelect;
        if (arg[0] == '#') {
            m_ProfileOrientation->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ProfileOrientation->setIfcPlaneAngleMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcRelAssociatesProfileProperties::copy(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop)
{
    IfcRelAssociates::copy(obj, copyop);
    setRelatingProfileProperties((IfcProfileProperties*)copyop(obj.m_RelatingProfileProperties.get()));
    setProfileSectionLocation((IfcShapeAspect*)copyop(obj.m_ProfileSectionLocation.get()));
    setProfileOrientation((IfcOrientationSelect*)copyop(obj.m_ProfileOrientation.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssociatesProfileProperties, IfcRelAssociates)
