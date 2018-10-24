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


#include <ifc2x3/IfcDerivedUnit.h>

#include <ifc2x3/IfcDerivedUnitElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDerivedUnit::IfcDerivedUnit(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Elements.setUnset(true);
    m_UnitType = IfcDerivedUnitEnum_UNSET;
    m_UserDefinedType = Step::getUnset(m_UserDefinedType);
}

IfcDerivedUnit::~IfcDerivedUnit()
{}

bool IfcDerivedUnit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDerivedUnit(this);
}


Set_IfcDerivedUnitElement_1_n &IfcDerivedUnit::getElements()
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

const Set_IfcDerivedUnitElement_1_n &IfcDerivedUnit::getElements() const
{
    return const_cast<IfcDerivedUnit *>(this)->getElements();
}

void IfcDerivedUnit::setElements(const Set_IfcDerivedUnitElement_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Elements = value;
}

void IfcDerivedUnit::unsetElements()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Elements.clear();
    m_Elements.setUnset(true);
}

bool IfcDerivedUnit::testElements() const
{
    return m_Elements.isUnset() == false;
}


IfcDerivedUnitEnum IfcDerivedUnit::getUnitType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UnitType;
    }
    else 
    {
        return IfcDerivedUnitEnum_UNSET;
    }    
}

IfcDerivedUnitEnum IfcDerivedUnit::getUnitType() const
{
    return const_cast<IfcDerivedUnit *>(this)->getUnitType();
}

void IfcDerivedUnit::setUnitType(IfcDerivedUnitEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitType = value;
}

void IfcDerivedUnit::unsetUnitType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitType = IfcDerivedUnitEnum_UNSET;
}

bool IfcDerivedUnit::testUnitType() const
{
    return Step::isUnset(getUnitType()) == false;
}


IfcLabel IfcDerivedUnit::getUserDefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedType;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedType);
    }    
}

const IfcLabel IfcDerivedUnit::getUserDefinedType() const
{
    return const_cast<IfcDerivedUnit *>(this)->getUserDefinedType();
}

void IfcDerivedUnit::setUserDefinedType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedType = value;
}

void IfcDerivedUnit::unsetUserDefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedType = Step::getUnset(getUserDefinedType());
}

bool IfcDerivedUnit::testUserDefinedType() const
{
    return Step::isUnset(getUserDefinedType()) == false;
}

bool IfcDerivedUnit::init()
{
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
                m_Elements.insert(static_cast< IfcDerivedUnitElement * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_UnitType = IfcDerivedUnitEnum_UNSET;
    }
    else
    {
        if (arg == ".ANGULARVELOCITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_ANGULARVELOCITYUNIT;
        }
        else if (arg == ".COMPOUNDPLANEANGLEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_COMPOUNDPLANEANGLEUNIT;
        }
        else if (arg == ".DYNAMICVISCOSITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_DYNAMICVISCOSITYUNIT;
        }
        else if (arg == ".HEATFLUXDENSITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_HEATFLUXDENSITYUNIT;
        }
        else if (arg == ".INTEGERCOUNTRATEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_INTEGERCOUNTRATEUNIT;
        }
        else if (arg == ".ISOTHERMALMOISTURECAPACITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_ISOTHERMALMOISTURECAPACITYUNIT;
        }
        else if (arg == ".KINEMATICVISCOSITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_KINEMATICVISCOSITYUNIT;
        }
        else if (arg == ".LINEARVELOCITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_LINEARVELOCITYUNIT;
        }
        else if (arg == ".MASSDENSITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MASSDENSITYUNIT;
        }
        else if (arg == ".MASSFLOWRATEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MASSFLOWRATEUNIT;
        }
        else if (arg == ".MOISTUREDIFFUSIVITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MOISTUREDIFFUSIVITYUNIT;
        }
        else if (arg == ".MOLECULARWEIGHTUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MOLECULARWEIGHTUNIT;
        }
        else if (arg == ".SPECIFICHEATCAPACITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_SPECIFICHEATCAPACITYUNIT;
        }
        else if (arg == ".THERMALADMITTANCEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_THERMALADMITTANCEUNIT;
        }
        else if (arg == ".THERMALCONDUCTANCEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_THERMALCONDUCTANCEUNIT;
        }
        else if (arg == ".THERMALRESISTANCEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_THERMALRESISTANCEUNIT;
        }
        else if (arg == ".THERMALTRANSMITTANCEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_THERMALTRANSMITTANCEUNIT;
        }
        else if (arg == ".VAPORPERMEABILITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_VAPORPERMEABILITYUNIT;
        }
        else if (arg == ".VOLUMETRICFLOWRATEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_VOLUMETRICFLOWRATEUNIT;
        }
        else if (arg == ".ROTATIONALFREQUENCYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_ROTATIONALFREQUENCYUNIT;
        }
        else if (arg == ".TORQUEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_TORQUEUNIT;
        }
        else if (arg == ".MOMENTOFINERTIAUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MOMENTOFINERTIAUNIT;
        }
        else if (arg == ".LINEARMOMENTUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_LINEARMOMENTUNIT;
        }
        else if (arg == ".LINEARFORCEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_LINEARFORCEUNIT;
        }
        else if (arg == ".PLANARFORCEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_PLANARFORCEUNIT;
        }
        else if (arg == ".MODULUSOFELASTICITYUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MODULUSOFELASTICITYUNIT;
        }
        else if (arg == ".SHEARMODULUSUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_SHEARMODULUSUNIT;
        }
        else if (arg == ".LINEARSTIFFNESSUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_LINEARSTIFFNESSUNIT;
        }
        else if (arg == ".ROTATIONALSTIFFNESSUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_ROTATIONALSTIFFNESSUNIT;
        }
        else if (arg == ".MODULUSOFSUBGRADEREACTIONUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MODULUSOFSUBGRADEREACTIONUNIT;
        }
        else if (arg == ".ACCELERATIONUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_ACCELERATIONUNIT;
        }
        else if (arg == ".CURVATUREUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_CURVATUREUNIT;
        }
        else if (arg == ".HEATINGVALUEUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_HEATINGVALUEUNIT;
        }
        else if (arg == ".IONCONCENTRATIONUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_IONCONCENTRATIONUNIT;
        }
        else if (arg == ".LUMINOUSINTENSITYDISTRIBUTIONUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_LUMINOUSINTENSITYDISTRIBUTIONUNIT;
        }
        else if (arg == ".MASSPERLENGTHUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MASSPERLENGTHUNIT;
        }
        else if (arg == ".MODULUSOFLINEARSUBGRADEREACTIONUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MODULUSOFLINEARSUBGRADEREACTIONUNIT;
        }
        else if (arg == ".MODULUSOFROTATIONALSUBGRADEREACTIONUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT;
        }
        else if (arg == ".PHUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_PHUNIT;
        }
        else if (arg == ".ROTATIONALMASSUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_ROTATIONALMASSUNIT;
        }
        else if (arg == ".SECTIONAREAINTEGRALUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_SECTIONAREAINTEGRALUNIT;
        }
        else if (arg == ".SECTIONMODULUSUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_SECTIONMODULUSUNIT;
        }
        else if (arg == ".SOUNDPOWERUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_SOUNDPOWERUNIT;
        }
        else if (arg == ".SOUNDPRESSUREUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_SOUNDPRESSUREUNIT;
        }
        else if (arg == ".TEMPERATUREGRADIENTUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_TEMPERATUREGRADIENTUNIT;
        }
        else if (arg == ".THERMALEXPANSIONCOEFFICIENTUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_THERMALEXPANSIONCOEFFICIENTUNIT;
        }
        else if (arg == ".WARPINGCONSTANTUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_WARPINGCONSTANTUNIT;
        }
        else if (arg == ".WARPINGMOMENTUNIT.")
        {
            m_UnitType = IfcDerivedUnitEnum_WARPINGMOMENTUNIT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_UnitType = IfcDerivedUnitEnum_USERDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedType = Step::getUnset(m_UserDefinedType);
    }
    else
    {
        m_UserDefinedType = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcDerivedUnit::copy(const IfcDerivedUnit &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcDerivedUnitElement_1_n::const_iterator it_m_Elements;
    for (it_m_Elements = obj.m_Elements.begin(); it_m_Elements != obj.m_Elements.end(); ++it_m_Elements)
    {
        Step::RefPtr< IfcDerivedUnitElement > copyTarget = (IfcDerivedUnitElement *) (copyop((*it_m_Elements).get()));
        m_Elements.insert(copyTarget);
    }
    
    setUnitType(obj.m_UnitType);
    setUserDefinedType(obj.m_UserDefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDerivedUnit, Step::BaseEntity)
