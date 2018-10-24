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


#include <ifc2x3/IfcNamedUnit.h>

#include <ifc2x3/IfcDimensionalExponents.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcNamedUnit::IfcNamedUnit(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Dimensions = NULL;
    m_UnitType = IfcUnitEnum_UNSET;
}

IfcNamedUnit::~IfcNamedUnit()
{}

bool IfcNamedUnit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcNamedUnit(this);
}


IfcDimensionalExponents *IfcNamedUnit::getDimensions()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Dimensions.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDimensionalExponents *IfcNamedUnit::getDimensions() const
{
    return const_cast<IfcNamedUnit *>(this)->getDimensions();
}

void IfcNamedUnit::setDimensions(const Step::RefPtr< IfcDimensionalExponents > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Dimensions = value;
}

void IfcNamedUnit::unsetDimensions()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Dimensions = Step::getUnset(getDimensions());
}

bool IfcNamedUnit::testDimensions() const
{
    return Step::isUnset(getDimensions()) == false;
}


IfcUnitEnum IfcNamedUnit::getUnitType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UnitType;
    }
    else 
    {
        return IfcUnitEnum_UNSET;
    }    
}

IfcUnitEnum IfcNamedUnit::getUnitType() const
{
    return const_cast<IfcNamedUnit *>(this)->getUnitType();
}

void IfcNamedUnit::setUnitType(IfcUnitEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitType = value;
}

void IfcNamedUnit::unsetUnitType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitType = IfcUnitEnum_UNSET;
}

bool IfcNamedUnit::testUnitType() const
{
    return Step::isUnset(getUnitType()) == false;
}

bool IfcNamedUnit::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Dimensions = NULL;
    }
    else
    {
        m_Dimensions = static_cast< IfcDimensionalExponents * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UnitType = IfcUnitEnum_UNSET;
    }
    else
    {
        if (arg == ".ABSORBEDDOSEUNIT.")
        {
            m_UnitType = IfcUnitEnum_ABSORBEDDOSEUNIT;
        }
        else if (arg == ".AMOUNTOFSUBSTANCEUNIT.")
        {
            m_UnitType = IfcUnitEnum_AMOUNTOFSUBSTANCEUNIT;
        }
        else if (arg == ".AREAUNIT.")
        {
            m_UnitType = IfcUnitEnum_AREAUNIT;
        }
        else if (arg == ".DOSEEQUIVALENTUNIT.")
        {
            m_UnitType = IfcUnitEnum_DOSEEQUIVALENTUNIT;
        }
        else if (arg == ".ELECTRICCAPACITANCEUNIT.")
        {
            m_UnitType = IfcUnitEnum_ELECTRICCAPACITANCEUNIT;
        }
        else if (arg == ".ELECTRICCHARGEUNIT.")
        {
            m_UnitType = IfcUnitEnum_ELECTRICCHARGEUNIT;
        }
        else if (arg == ".ELECTRICCONDUCTANCEUNIT.")
        {
            m_UnitType = IfcUnitEnum_ELECTRICCONDUCTANCEUNIT;
        }
        else if (arg == ".ELECTRICCURRENTUNIT.")
        {
            m_UnitType = IfcUnitEnum_ELECTRICCURRENTUNIT;
        }
        else if (arg == ".ELECTRICRESISTANCEUNIT.")
        {
            m_UnitType = IfcUnitEnum_ELECTRICRESISTANCEUNIT;
        }
        else if (arg == ".ELECTRICVOLTAGEUNIT.")
        {
            m_UnitType = IfcUnitEnum_ELECTRICVOLTAGEUNIT;
        }
        else if (arg == ".ENERGYUNIT.")
        {
            m_UnitType = IfcUnitEnum_ENERGYUNIT;
        }
        else if (arg == ".FORCEUNIT.")
        {
            m_UnitType = IfcUnitEnum_FORCEUNIT;
        }
        else if (arg == ".FREQUENCYUNIT.")
        {
            m_UnitType = IfcUnitEnum_FREQUENCYUNIT;
        }
        else if (arg == ".ILLUMINANCEUNIT.")
        {
            m_UnitType = IfcUnitEnum_ILLUMINANCEUNIT;
        }
        else if (arg == ".INDUCTANCEUNIT.")
        {
            m_UnitType = IfcUnitEnum_INDUCTANCEUNIT;
        }
        else if (arg == ".LENGTHUNIT.")
        {
            m_UnitType = IfcUnitEnum_LENGTHUNIT;
        }
        else if (arg == ".LUMINOUSFLUXUNIT.")
        {
            m_UnitType = IfcUnitEnum_LUMINOUSFLUXUNIT;
        }
        else if (arg == ".LUMINOUSINTENSITYUNIT.")
        {
            m_UnitType = IfcUnitEnum_LUMINOUSINTENSITYUNIT;
        }
        else if (arg == ".MAGNETICFLUXDENSITYUNIT.")
        {
            m_UnitType = IfcUnitEnum_MAGNETICFLUXDENSITYUNIT;
        }
        else if (arg == ".MAGNETICFLUXUNIT.")
        {
            m_UnitType = IfcUnitEnum_MAGNETICFLUXUNIT;
        }
        else if (arg == ".MASSUNIT.")
        {
            m_UnitType = IfcUnitEnum_MASSUNIT;
        }
        else if (arg == ".PLANEANGLEUNIT.")
        {
            m_UnitType = IfcUnitEnum_PLANEANGLEUNIT;
        }
        else if (arg == ".POWERUNIT.")
        {
            m_UnitType = IfcUnitEnum_POWERUNIT;
        }
        else if (arg == ".PRESSUREUNIT.")
        {
            m_UnitType = IfcUnitEnum_PRESSUREUNIT;
        }
        else if (arg == ".RADIOACTIVITYUNIT.")
        {
            m_UnitType = IfcUnitEnum_RADIOACTIVITYUNIT;
        }
        else if (arg == ".SOLIDANGLEUNIT.")
        {
            m_UnitType = IfcUnitEnum_SOLIDANGLEUNIT;
        }
        else if (arg == ".THERMODYNAMICTEMPERATUREUNIT.")
        {
            m_UnitType = IfcUnitEnum_THERMODYNAMICTEMPERATUREUNIT;
        }
        else if (arg == ".TIMEUNIT.")
        {
            m_UnitType = IfcUnitEnum_TIMEUNIT;
        }
        else if (arg == ".VOLUMEUNIT.")
        {
            m_UnitType = IfcUnitEnum_VOLUMEUNIT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_UnitType = IfcUnitEnum_USERDEFINED;
        }
    }
    return true;
}

void IfcNamedUnit::copy(const IfcNamedUnit &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setDimensions((IfcDimensionalExponents*)copyop(obj.m_Dimensions.get()));
    setUnitType(obj.m_UnitType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcNamedUnit, Step::BaseEntity)
