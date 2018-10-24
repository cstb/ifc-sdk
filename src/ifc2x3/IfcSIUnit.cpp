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


#include <ifc2x3/IfcSIUnit.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSIUnit::IfcSIUnit(Step::Id id, Step::SPFData *args) : 
    IfcNamedUnit(id, args)
{
    m_Prefix = IfcSIPrefix_UNSET;
    m_Name = IfcSIUnitName_UNSET;
}

IfcSIUnit::~IfcSIUnit()
{}

bool IfcSIUnit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSIUnit(this);
}


IfcSIPrefix IfcSIUnit::getPrefix()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Prefix;
    }
    else 
    {
        return IfcSIPrefix_UNSET;
    }    
}

IfcSIPrefix IfcSIUnit::getPrefix() const
{
    return const_cast<IfcSIUnit *>(this)->getPrefix();
}

void IfcSIUnit::setPrefix(IfcSIPrefix value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Prefix = value;
}

void IfcSIUnit::unsetPrefix()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Prefix = IfcSIPrefix_UNSET;
}

bool IfcSIUnit::testPrefix() const
{
    return Step::isUnset(getPrefix()) == false;
}


IfcSIUnitName IfcSIUnit::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return IfcSIUnitName_UNSET;
    }    
}

IfcSIUnitName IfcSIUnit::getName() const
{
    return const_cast<IfcSIUnit *>(this)->getName();
}

void IfcSIUnit::setName(IfcSIUnitName value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcSIUnit::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = IfcSIUnitName_UNSET;
}

bool IfcSIUnit::testName() const
{
    return Step::isUnset(getName()) == false;
}

bool IfcSIUnit::init()
{
    if (IfcNamedUnit::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Prefix = IfcSIPrefix_UNSET;
    }
    else
    {
        if (arg == ".EXA.")
        {
            m_Prefix = IfcSIPrefix_EXA;
        }
        else if (arg == ".PETA.")
        {
            m_Prefix = IfcSIPrefix_PETA;
        }
        else if (arg == ".TERA.")
        {
            m_Prefix = IfcSIPrefix_TERA;
        }
        else if (arg == ".GIGA.")
        {
            m_Prefix = IfcSIPrefix_GIGA;
        }
        else if (arg == ".MEGA.")
        {
            m_Prefix = IfcSIPrefix_MEGA;
        }
        else if (arg == ".KILO.")
        {
            m_Prefix = IfcSIPrefix_KILO;
        }
        else if (arg == ".HECTO.")
        {
            m_Prefix = IfcSIPrefix_HECTO;
        }
        else if (arg == ".DECA.")
        {
            m_Prefix = IfcSIPrefix_DECA;
        }
        else if (arg == ".DECI.")
        {
            m_Prefix = IfcSIPrefix_DECI;
        }
        else if (arg == ".CENTI.")
        {
            m_Prefix = IfcSIPrefix_CENTI;
        }
        else if (arg == ".MILLI.")
        {
            m_Prefix = IfcSIPrefix_MILLI;
        }
        else if (arg == ".MICRO.")
        {
            m_Prefix = IfcSIPrefix_MICRO;
        }
        else if (arg == ".NANO.")
        {
            m_Prefix = IfcSIPrefix_NANO;
        }
        else if (arg == ".PICO.")
        {
            m_Prefix = IfcSIPrefix_PICO;
        }
        else if (arg == ".FEMTO.")
        {
            m_Prefix = IfcSIPrefix_FEMTO;
        }
        else if (arg == ".ATTO.")
        {
            m_Prefix = IfcSIPrefix_ATTO;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = IfcSIUnitName_UNSET;
    }
    else
    {
        if (arg == ".AMPERE.")
        {
            m_Name = IfcSIUnitName_AMPERE;
        }
        else if (arg == ".BECQUEREL.")
        {
            m_Name = IfcSIUnitName_BECQUEREL;
        }
        else if (arg == ".CANDELA.")
        {
            m_Name = IfcSIUnitName_CANDELA;
        }
        else if (arg == ".COULOMB.")
        {
            m_Name = IfcSIUnitName_COULOMB;
        }
        else if (arg == ".CUBIC_METRE.")
        {
            m_Name = IfcSIUnitName_CUBIC_METRE;
        }
        else if (arg == ".DEGREE_CELSIUS.")
        {
            m_Name = IfcSIUnitName_DEGREE_CELSIUS;
        }
        else if (arg == ".FARAD.")
        {
            m_Name = IfcSIUnitName_FARAD;
        }
        else if (arg == ".GRAM.")
        {
            m_Name = IfcSIUnitName_GRAM;
        }
        else if (arg == ".GRAY.")
        {
            m_Name = IfcSIUnitName_GRAY;
        }
        else if (arg == ".HENRY.")
        {
            m_Name = IfcSIUnitName_HENRY;
        }
        else if (arg == ".HERTZ.")
        {
            m_Name = IfcSIUnitName_HERTZ;
        }
        else if (arg == ".JOULE.")
        {
            m_Name = IfcSIUnitName_JOULE;
        }
        else if (arg == ".KELVIN.")
        {
            m_Name = IfcSIUnitName_KELVIN;
        }
        else if (arg == ".LUMEN.")
        {
            m_Name = IfcSIUnitName_LUMEN;
        }
        else if (arg == ".LUX.")
        {
            m_Name = IfcSIUnitName_LUX;
        }
        else if (arg == ".METRE.")
        {
            m_Name = IfcSIUnitName_METRE;
        }
        else if (arg == ".MOLE.")
        {
            m_Name = IfcSIUnitName_MOLE;
        }
        else if (arg == ".NEWTON.")
        {
            m_Name = IfcSIUnitName_NEWTON;
        }
        else if (arg == ".OHM.")
        {
            m_Name = IfcSIUnitName_OHM;
        }
        else if (arg == ".PASCAL.")
        {
            m_Name = IfcSIUnitName_PASCAL;
        }
        else if (arg == ".RADIAN.")
        {
            m_Name = IfcSIUnitName_RADIAN;
        }
        else if (arg == ".SECOND.")
        {
            m_Name = IfcSIUnitName_SECOND;
        }
        else if (arg == ".SIEMENS.")
        {
            m_Name = IfcSIUnitName_SIEMENS;
        }
        else if (arg == ".SIEVERT.")
        {
            m_Name = IfcSIUnitName_SIEVERT;
        }
        else if (arg == ".SQUARE_METRE.")
        {
            m_Name = IfcSIUnitName_SQUARE_METRE;
        }
        else if (arg == ".STERADIAN.")
        {
            m_Name = IfcSIUnitName_STERADIAN;
        }
        else if (arg == ".TESLA.")
        {
            m_Name = IfcSIUnitName_TESLA;
        }
        else if (arg == ".VOLT.")
        {
            m_Name = IfcSIUnitName_VOLT;
        }
        else if (arg == ".WATT.")
        {
            m_Name = IfcSIUnitName_WATT;
        }
        else if (arg == ".WEBER.")
        {
            m_Name = IfcSIUnitName_WEBER;
        }
    }
    return true;
}

void IfcSIUnit::copy(const IfcSIUnit &obj, const CopyOp &copyop)
{
    IfcNamedUnit::copy(obj, copyop);
    setPrefix(obj.m_Prefix);
    setName(obj.m_Name);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSIUnit, IfcNamedUnit)
