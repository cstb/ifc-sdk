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


#include <ifc2x3/IfcQuantityVolume.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcQuantityVolume::IfcQuantityVolume(Step::Id id, Step::SPFData *args) : 
    IfcPhysicalSimpleQuantity(id, args)
{
    m_VolumeValue = Step::getUnset(m_VolumeValue);
}

IfcQuantityVolume::~IfcQuantityVolume()
{}

bool IfcQuantityVolume::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcQuantityVolume(this);
}


IfcVolumeMeasure IfcQuantityVolume::getVolumeValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VolumeValue;
    }
    else 
    {
        return Step::getUnset(m_VolumeValue);
    }    
}

IfcVolumeMeasure IfcQuantityVolume::getVolumeValue() const
{
    return const_cast<IfcQuantityVolume *>(this)->getVolumeValue();
}

void IfcQuantityVolume::setVolumeValue(IfcVolumeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VolumeValue = value;
}

void IfcQuantityVolume::unsetVolumeValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VolumeValue = Step::getUnset(getVolumeValue());
}

bool IfcQuantityVolume::testVolumeValue() const
{
    return Step::isUnset(getVolumeValue()) == false;
}

bool IfcQuantityVolume::init()
{
    if (IfcPhysicalSimpleQuantity::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VolumeValue = Step::getUnset(m_VolumeValue);
    }
    else
    {
        m_VolumeValue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcQuantityVolume::copy(const IfcQuantityVolume &obj, const CopyOp &copyop)
{
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setVolumeValue(obj.m_VolumeValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcQuantityVolume, IfcPhysicalSimpleQuantity)
