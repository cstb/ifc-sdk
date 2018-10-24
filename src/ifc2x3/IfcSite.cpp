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


#include <ifc2x3/IfcSite.h>

#include <ifc2x3/IfcPostalAddress.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSite::IfcSite(Step::Id id, Step::SPFData *args) : 
    IfcSpatialStructureElement(id, args)
{
    m_RefLatitude.setUnset(true);
    m_RefLongitude.setUnset(true);
    m_RefElevation = Step::getUnset(m_RefElevation);
    m_LandTitleNumber = Step::getUnset(m_LandTitleNumber);
    m_SiteAddress = NULL;
}

IfcSite::~IfcSite()
{}

bool IfcSite::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSite(this);
}


IfcCompoundPlaneAngleMeasure &IfcSite::getRefLatitude()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RefLatitude;
    }
    else 
    {
        m_RefLatitude.setUnset(true);
        return m_RefLatitude;
    }    
}

const IfcCompoundPlaneAngleMeasure &IfcSite::getRefLatitude() const
{
    return const_cast<IfcSite *>(this)->getRefLatitude();
}

void IfcSite::setRefLatitude(const IfcCompoundPlaneAngleMeasure &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefLatitude = value;
}

void IfcSite::unsetRefLatitude()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefLatitude.clear();
    m_RefLatitude.setUnset(true);
}

bool IfcSite::testRefLatitude() const
{
    return m_RefLatitude.isUnset() == false;
}


IfcCompoundPlaneAngleMeasure &IfcSite::getRefLongitude()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RefLongitude;
    }
    else 
    {
        m_RefLongitude.setUnset(true);
        return m_RefLongitude;
    }    
}

const IfcCompoundPlaneAngleMeasure &IfcSite::getRefLongitude() const
{
    return const_cast<IfcSite *>(this)->getRefLongitude();
}

void IfcSite::setRefLongitude(const IfcCompoundPlaneAngleMeasure &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefLongitude = value;
}

void IfcSite::unsetRefLongitude()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefLongitude.clear();
    m_RefLongitude.setUnset(true);
}

bool IfcSite::testRefLongitude() const
{
    return m_RefLongitude.isUnset() == false;
}


IfcLengthMeasure IfcSite::getRefElevation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RefElevation;
    }
    else 
    {
        return Step::getUnset(m_RefElevation);
    }    
}

IfcLengthMeasure IfcSite::getRefElevation() const
{
    return const_cast<IfcSite *>(this)->getRefElevation();
}

void IfcSite::setRefElevation(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefElevation = value;
}

void IfcSite::unsetRefElevation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefElevation = Step::getUnset(getRefElevation());
}

bool IfcSite::testRefElevation() const
{
    return Step::isUnset(getRefElevation()) == false;
}


IfcLabel IfcSite::getLandTitleNumber()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LandTitleNumber;
    }
    else 
    {
        return Step::getUnset(m_LandTitleNumber);
    }    
}

const IfcLabel IfcSite::getLandTitleNumber() const
{
    return const_cast<IfcSite *>(this)->getLandTitleNumber();
}

void IfcSite::setLandTitleNumber(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LandTitleNumber = value;
}

void IfcSite::unsetLandTitleNumber()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LandTitleNumber = Step::getUnset(getLandTitleNumber());
}

bool IfcSite::testLandTitleNumber() const
{
    return Step::isUnset(getLandTitleNumber()) == false;
}


IfcPostalAddress *IfcSite::getSiteAddress()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SiteAddress.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPostalAddress *IfcSite::getSiteAddress() const
{
    return const_cast<IfcSite *>(this)->getSiteAddress();
}

void IfcSite::setSiteAddress(const Step::RefPtr< IfcPostalAddress > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SiteAddress = value;
}

void IfcSite::unsetSiteAddress()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SiteAddress = Step::getUnset(getSiteAddress());
}

bool IfcSite::testSiteAddress() const
{
    return Step::isUnset(getSiteAddress()) == false;
}

bool IfcSite::init()
{
    if (IfcSpatialStructureElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RefLatitude.setUnset(true);
    }
    else
    {
        m_RefLatitude.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RefLatitude.push_back(Step::spfToInteger(str1)
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
        m_RefLongitude.setUnset(true);
    }
    else
    {
        m_RefLongitude.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RefLongitude.push_back(Step::spfToInteger(str1)
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
        m_RefElevation = Step::getUnset(m_RefElevation);
    }
    else
    {
        m_RefElevation = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LandTitleNumber = Step::getUnset(m_LandTitleNumber);
    }
    else
    {
        m_LandTitleNumber = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SiteAddress = NULL;
    }
    else
    {
        m_SiteAddress = static_cast< IfcPostalAddress * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSite::copy(const IfcSite &obj, const CopyOp &copyop)
{
    IfcSpatialStructureElement::copy(obj, copyop);
    IfcCompoundPlaneAngleMeasure::const_iterator it_m_RefLatitude;
    for (it_m_RefLatitude = obj.m_RefLatitude.begin(); it_m_RefLatitude != obj.m_RefLatitude.end(); ++it_m_RefLatitude)
    {
        Step::Integer copyTarget = (*it_m_RefLatitude);
        m_RefLatitude.push_back(copyTarget);
    }
    
    IfcCompoundPlaneAngleMeasure::const_iterator it_m_RefLongitude;
    for (it_m_RefLongitude = obj.m_RefLongitude.begin(); it_m_RefLongitude != obj.m_RefLongitude.end(); ++it_m_RefLongitude)
    {
        Step::Integer copyTarget = (*it_m_RefLongitude);
        m_RefLongitude.push_back(copyTarget);
    }
    
    setRefElevation(obj.m_RefElevation);
    setLandTitleNumber(obj.m_LandTitleNumber);
    setSiteAddress((IfcPostalAddress*)copyop(obj.m_SiteAddress.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSite, IfcSpatialStructureElement)
