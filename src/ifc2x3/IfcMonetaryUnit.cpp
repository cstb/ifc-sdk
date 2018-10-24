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


#include <ifc2x3/IfcMonetaryUnit.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMonetaryUnit::IfcMonetaryUnit(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Currency = IfcCurrencyEnum_UNSET;
}

IfcMonetaryUnit::~IfcMonetaryUnit()
{}

bool IfcMonetaryUnit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMonetaryUnit(this);
}


IfcCurrencyEnum IfcMonetaryUnit::getCurrency()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Currency;
    }
    else 
    {
        return IfcCurrencyEnum_UNSET;
    }    
}

IfcCurrencyEnum IfcMonetaryUnit::getCurrency() const
{
    return const_cast<IfcMonetaryUnit *>(this)->getCurrency();
}

void IfcMonetaryUnit::setCurrency(IfcCurrencyEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Currency = value;
}

void IfcMonetaryUnit::unsetCurrency()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Currency = IfcCurrencyEnum_UNSET;
}

bool IfcMonetaryUnit::testCurrency() const
{
    return Step::isUnset(getCurrency()) == false;
}

bool IfcMonetaryUnit::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Currency = IfcCurrencyEnum_UNSET;
    }
    else
    {
        if (arg == ".AED.")
        {
            m_Currency = IfcCurrencyEnum_AED;
        }
        else if (arg == ".AES.")
        {
            m_Currency = IfcCurrencyEnum_AES;
        }
        else if (arg == ".ATS.")
        {
            m_Currency = IfcCurrencyEnum_ATS;
        }
        else if (arg == ".AUD.")
        {
            m_Currency = IfcCurrencyEnum_AUD;
        }
        else if (arg == ".BBD.")
        {
            m_Currency = IfcCurrencyEnum_BBD;
        }
        else if (arg == ".BEG.")
        {
            m_Currency = IfcCurrencyEnum_BEG;
        }
        else if (arg == ".BGL.")
        {
            m_Currency = IfcCurrencyEnum_BGL;
        }
        else if (arg == ".BHD.")
        {
            m_Currency = IfcCurrencyEnum_BHD;
        }
        else if (arg == ".BMD.")
        {
            m_Currency = IfcCurrencyEnum_BMD;
        }
        else if (arg == ".BND.")
        {
            m_Currency = IfcCurrencyEnum_BND;
        }
        else if (arg == ".BRL.")
        {
            m_Currency = IfcCurrencyEnum_BRL;
        }
        else if (arg == ".BSD.")
        {
            m_Currency = IfcCurrencyEnum_BSD;
        }
        else if (arg == ".BWP.")
        {
            m_Currency = IfcCurrencyEnum_BWP;
        }
        else if (arg == ".BZD.")
        {
            m_Currency = IfcCurrencyEnum_BZD;
        }
        else if (arg == ".CAD.")
        {
            m_Currency = IfcCurrencyEnum_CAD;
        }
        else if (arg == ".CBD.")
        {
            m_Currency = IfcCurrencyEnum_CBD;
        }
        else if (arg == ".CHF.")
        {
            m_Currency = IfcCurrencyEnum_CHF;
        }
        else if (arg == ".CLP.")
        {
            m_Currency = IfcCurrencyEnum_CLP;
        }
        else if (arg == ".CNY.")
        {
            m_Currency = IfcCurrencyEnum_CNY;
        }
        else if (arg == ".CYS.")
        {
            m_Currency = IfcCurrencyEnum_CYS;
        }
        else if (arg == ".CZK.")
        {
            m_Currency = IfcCurrencyEnum_CZK;
        }
        else if (arg == ".DDP.")
        {
            m_Currency = IfcCurrencyEnum_DDP;
        }
        else if (arg == ".DEM.")
        {
            m_Currency = IfcCurrencyEnum_DEM;
        }
        else if (arg == ".DKK.")
        {
            m_Currency = IfcCurrencyEnum_DKK;
        }
        else if (arg == ".EGL.")
        {
            m_Currency = IfcCurrencyEnum_EGL;
        }
        else if (arg == ".EST.")
        {
            m_Currency = IfcCurrencyEnum_EST;
        }
        else if (arg == ".EUR.")
        {
            m_Currency = IfcCurrencyEnum_EUR;
        }
        else if (arg == ".FAK.")
        {
            m_Currency = IfcCurrencyEnum_FAK;
        }
        else if (arg == ".FIM.")
        {
            m_Currency = IfcCurrencyEnum_FIM;
        }
        else if (arg == ".FJD.")
        {
            m_Currency = IfcCurrencyEnum_FJD;
        }
        else if (arg == ".FKP.")
        {
            m_Currency = IfcCurrencyEnum_FKP;
        }
        else if (arg == ".FRF.")
        {
            m_Currency = IfcCurrencyEnum_FRF;
        }
        else if (arg == ".GBP.")
        {
            m_Currency = IfcCurrencyEnum_GBP;
        }
        else if (arg == ".GIP.")
        {
            m_Currency = IfcCurrencyEnum_GIP;
        }
        else if (arg == ".GMD.")
        {
            m_Currency = IfcCurrencyEnum_GMD;
        }
        else if (arg == ".GRX.")
        {
            m_Currency = IfcCurrencyEnum_GRX;
        }
        else if (arg == ".HKD.")
        {
            m_Currency = IfcCurrencyEnum_HKD;
        }
        else if (arg == ".HUF.")
        {
            m_Currency = IfcCurrencyEnum_HUF;
        }
        else if (arg == ".ICK.")
        {
            m_Currency = IfcCurrencyEnum_ICK;
        }
        else if (arg == ".IDR.")
        {
            m_Currency = IfcCurrencyEnum_IDR;
        }
        else if (arg == ".ILS.")
        {
            m_Currency = IfcCurrencyEnum_ILS;
        }
        else if (arg == ".INR.")
        {
            m_Currency = IfcCurrencyEnum_INR;
        }
        else if (arg == ".IRP.")
        {
            m_Currency = IfcCurrencyEnum_IRP;
        }
        else if (arg == ".ITL.")
        {
            m_Currency = IfcCurrencyEnum_ITL;
        }
        else if (arg == ".JMD.")
        {
            m_Currency = IfcCurrencyEnum_JMD;
        }
        else if (arg == ".JOD.")
        {
            m_Currency = IfcCurrencyEnum_JOD;
        }
        else if (arg == ".JPY.")
        {
            m_Currency = IfcCurrencyEnum_JPY;
        }
        else if (arg == ".KES.")
        {
            m_Currency = IfcCurrencyEnum_KES;
        }
        else if (arg == ".KRW.")
        {
            m_Currency = IfcCurrencyEnum_KRW;
        }
        else if (arg == ".KWD.")
        {
            m_Currency = IfcCurrencyEnum_KWD;
        }
        else if (arg == ".KYD.")
        {
            m_Currency = IfcCurrencyEnum_KYD;
        }
        else if (arg == ".LKR.")
        {
            m_Currency = IfcCurrencyEnum_LKR;
        }
        else if (arg == ".LUF.")
        {
            m_Currency = IfcCurrencyEnum_LUF;
        }
        else if (arg == ".MTL.")
        {
            m_Currency = IfcCurrencyEnum_MTL;
        }
        else if (arg == ".MUR.")
        {
            m_Currency = IfcCurrencyEnum_MUR;
        }
        else if (arg == ".MXN.")
        {
            m_Currency = IfcCurrencyEnum_MXN;
        }
        else if (arg == ".MYR.")
        {
            m_Currency = IfcCurrencyEnum_MYR;
        }
        else if (arg == ".NLG.")
        {
            m_Currency = IfcCurrencyEnum_NLG;
        }
        else if (arg == ".NZD.")
        {
            m_Currency = IfcCurrencyEnum_NZD;
        }
        else if (arg == ".OMR.")
        {
            m_Currency = IfcCurrencyEnum_OMR;
        }
        else if (arg == ".PGK.")
        {
            m_Currency = IfcCurrencyEnum_PGK;
        }
        else if (arg == ".PHP.")
        {
            m_Currency = IfcCurrencyEnum_PHP;
        }
        else if (arg == ".PKR.")
        {
            m_Currency = IfcCurrencyEnum_PKR;
        }
        else if (arg == ".PLN.")
        {
            m_Currency = IfcCurrencyEnum_PLN;
        }
        else if (arg == ".PTN.")
        {
            m_Currency = IfcCurrencyEnum_PTN;
        }
        else if (arg == ".QAR.")
        {
            m_Currency = IfcCurrencyEnum_QAR;
        }
        else if (arg == ".RUR.")
        {
            m_Currency = IfcCurrencyEnum_RUR;
        }
        else if (arg == ".SAR.")
        {
            m_Currency = IfcCurrencyEnum_SAR;
        }
        else if (arg == ".SCR.")
        {
            m_Currency = IfcCurrencyEnum_SCR;
        }
        else if (arg == ".SEK.")
        {
            m_Currency = IfcCurrencyEnum_SEK;
        }
        else if (arg == ".SGD.")
        {
            m_Currency = IfcCurrencyEnum_SGD;
        }
        else if (arg == ".SKP.")
        {
            m_Currency = IfcCurrencyEnum_SKP;
        }
        else if (arg == ".THB.")
        {
            m_Currency = IfcCurrencyEnum_THB;
        }
        else if (arg == ".TRL.")
        {
            m_Currency = IfcCurrencyEnum_TRL;
        }
        else if (arg == ".TTD.")
        {
            m_Currency = IfcCurrencyEnum_TTD;
        }
        else if (arg == ".TWD.")
        {
            m_Currency = IfcCurrencyEnum_TWD;
        }
        else if (arg == ".USD.")
        {
            m_Currency = IfcCurrencyEnum_USD;
        }
        else if (arg == ".VEB.")
        {
            m_Currency = IfcCurrencyEnum_VEB;
        }
        else if (arg == ".VND.")
        {
            m_Currency = IfcCurrencyEnum_VND;
        }
        else if (arg == ".XEU.")
        {
            m_Currency = IfcCurrencyEnum_XEU;
        }
        else if (arg == ".ZAR.")
        {
            m_Currency = IfcCurrencyEnum_ZAR;
        }
        else if (arg == ".ZWD.")
        {
            m_Currency = IfcCurrencyEnum_ZWD;
        }
        else if (arg == ".NOK.")
        {
            m_Currency = IfcCurrencyEnum_NOK;
        }
    }
    return true;
}

void IfcMonetaryUnit::copy(const IfcMonetaryUnit &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setCurrency(obj.m_Currency);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMonetaryUnit, Step::BaseEntity)
