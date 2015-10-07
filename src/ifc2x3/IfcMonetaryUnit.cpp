// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMonetaryUnit::IfcMonetaryUnit(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_currency = IfcCurrencyEnum_UNSET;
}

IfcMonetaryUnit::~IfcMonetaryUnit() {
}

bool IfcMonetaryUnit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMonetaryUnit(this);
}

const std::string &IfcMonetaryUnit::type() const {
    return IfcMonetaryUnit::s_type.getName();
}

const Step::ClassType &IfcMonetaryUnit::getClassType() {
    return IfcMonetaryUnit::s_type;
}

const Step::ClassType &IfcMonetaryUnit::getType() const {
    return IfcMonetaryUnit::s_type;
}

bool IfcMonetaryUnit::isOfType(const Step::ClassType &t) const {
    return IfcMonetaryUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcCurrencyEnum IfcMonetaryUnit::getCurrency() {
    if (Step::BaseObject::inited()) {
        return m_currency;
    }
    else {
        return IfcCurrencyEnum_UNSET;
    }
}

const IfcCurrencyEnum IfcMonetaryUnit::getCurrency() const {
    IfcMonetaryUnit * deConstObject = const_cast< IfcMonetaryUnit * > (this);
    return deConstObject->getCurrency();
}

void IfcMonetaryUnit::setCurrency(IfcCurrencyEnum value) {
    m_currency = value;
}

void IfcMonetaryUnit::unsetCurrency() {
    m_currency = IfcCurrencyEnum_UNSET;
}

bool IfcMonetaryUnit::testCurrency() const {
    return getCurrency() != IfcCurrencyEnum_UNSET;
}

bool IfcMonetaryUnit::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_currency = IfcCurrencyEnum_UNSET;
    }
    else {
        if (arg == ".AED.") {
            m_currency = IfcCurrencyEnum_AED;
        }
        else if (arg == ".AES.") {
            m_currency = IfcCurrencyEnum_AES;
        }
        else if (arg == ".ATS.") {
            m_currency = IfcCurrencyEnum_ATS;
        }
        else if (arg == ".AUD.") {
            m_currency = IfcCurrencyEnum_AUD;
        }
        else if (arg == ".BBD.") {
            m_currency = IfcCurrencyEnum_BBD;
        }
        else if (arg == ".BEG.") {
            m_currency = IfcCurrencyEnum_BEG;
        }
        else if (arg == ".BGL.") {
            m_currency = IfcCurrencyEnum_BGL;
        }
        else if (arg == ".BHD.") {
            m_currency = IfcCurrencyEnum_BHD;
        }
        else if (arg == ".BMD.") {
            m_currency = IfcCurrencyEnum_BMD;
        }
        else if (arg == ".BND.") {
            m_currency = IfcCurrencyEnum_BND;
        }
        else if (arg == ".BRL.") {
            m_currency = IfcCurrencyEnum_BRL;
        }
        else if (arg == ".BSD.") {
            m_currency = IfcCurrencyEnum_BSD;
        }
        else if (arg == ".BWP.") {
            m_currency = IfcCurrencyEnum_BWP;
        }
        else if (arg == ".BZD.") {
            m_currency = IfcCurrencyEnum_BZD;
        }
        else if (arg == ".CAD.") {
            m_currency = IfcCurrencyEnum_CAD;
        }
        else if (arg == ".CBD.") {
            m_currency = IfcCurrencyEnum_CBD;
        }
        else if (arg == ".CHF.") {
            m_currency = IfcCurrencyEnum_CHF;
        }
        else if (arg == ".CLP.") {
            m_currency = IfcCurrencyEnum_CLP;
        }
        else if (arg == ".CNY.") {
            m_currency = IfcCurrencyEnum_CNY;
        }
        else if (arg == ".CYS.") {
            m_currency = IfcCurrencyEnum_CYS;
        }
        else if (arg == ".CZK.") {
            m_currency = IfcCurrencyEnum_CZK;
        }
        else if (arg == ".DDP.") {
            m_currency = IfcCurrencyEnum_DDP;
        }
        else if (arg == ".DEM.") {
            m_currency = IfcCurrencyEnum_DEM;
        }
        else if (arg == ".DKK.") {
            m_currency = IfcCurrencyEnum_DKK;
        }
        else if (arg == ".EGL.") {
            m_currency = IfcCurrencyEnum_EGL;
        }
        else if (arg == ".EST.") {
            m_currency = IfcCurrencyEnum_EST;
        }
        else if (arg == ".EUR.") {
            m_currency = IfcCurrencyEnum_EUR;
        }
        else if (arg == ".FAK.") {
            m_currency = IfcCurrencyEnum_FAK;
        }
        else if (arg == ".FIM.") {
            m_currency = IfcCurrencyEnum_FIM;
        }
        else if (arg == ".FJD.") {
            m_currency = IfcCurrencyEnum_FJD;
        }
        else if (arg == ".FKP.") {
            m_currency = IfcCurrencyEnum_FKP;
        }
        else if (arg == ".FRF.") {
            m_currency = IfcCurrencyEnum_FRF;
        }
        else if (arg == ".GBP.") {
            m_currency = IfcCurrencyEnum_GBP;
        }
        else if (arg == ".GIP.") {
            m_currency = IfcCurrencyEnum_GIP;
        }
        else if (arg == ".GMD.") {
            m_currency = IfcCurrencyEnum_GMD;
        }
        else if (arg == ".GRX.") {
            m_currency = IfcCurrencyEnum_GRX;
        }
        else if (arg == ".HKD.") {
            m_currency = IfcCurrencyEnum_HKD;
        }
        else if (arg == ".HUF.") {
            m_currency = IfcCurrencyEnum_HUF;
        }
        else if (arg == ".ICK.") {
            m_currency = IfcCurrencyEnum_ICK;
        }
        else if (arg == ".IDR.") {
            m_currency = IfcCurrencyEnum_IDR;
        }
        else if (arg == ".ILS.") {
            m_currency = IfcCurrencyEnum_ILS;
        }
        else if (arg == ".INR.") {
            m_currency = IfcCurrencyEnum_INR;
        }
        else if (arg == ".IRP.") {
            m_currency = IfcCurrencyEnum_IRP;
        }
        else if (arg == ".ITL.") {
            m_currency = IfcCurrencyEnum_ITL;
        }
        else if (arg == ".JMD.") {
            m_currency = IfcCurrencyEnum_JMD;
        }
        else if (arg == ".JOD.") {
            m_currency = IfcCurrencyEnum_JOD;
        }
        else if (arg == ".JPY.") {
            m_currency = IfcCurrencyEnum_JPY;
        }
        else if (arg == ".KES.") {
            m_currency = IfcCurrencyEnum_KES;
        }
        else if (arg == ".KRW.") {
            m_currency = IfcCurrencyEnum_KRW;
        }
        else if (arg == ".KWD.") {
            m_currency = IfcCurrencyEnum_KWD;
        }
        else if (arg == ".KYD.") {
            m_currency = IfcCurrencyEnum_KYD;
        }
        else if (arg == ".LKR.") {
            m_currency = IfcCurrencyEnum_LKR;
        }
        else if (arg == ".LUF.") {
            m_currency = IfcCurrencyEnum_LUF;
        }
        else if (arg == ".MTL.") {
            m_currency = IfcCurrencyEnum_MTL;
        }
        else if (arg == ".MUR.") {
            m_currency = IfcCurrencyEnum_MUR;
        }
        else if (arg == ".MXN.") {
            m_currency = IfcCurrencyEnum_MXN;
        }
        else if (arg == ".MYR.") {
            m_currency = IfcCurrencyEnum_MYR;
        }
        else if (arg == ".NLG.") {
            m_currency = IfcCurrencyEnum_NLG;
        }
        else if (arg == ".NZD.") {
            m_currency = IfcCurrencyEnum_NZD;
        }
        else if (arg == ".OMR.") {
            m_currency = IfcCurrencyEnum_OMR;
        }
        else if (arg == ".PGK.") {
            m_currency = IfcCurrencyEnum_PGK;
        }
        else if (arg == ".PHP.") {
            m_currency = IfcCurrencyEnum_PHP;
        }
        else if (arg == ".PKR.") {
            m_currency = IfcCurrencyEnum_PKR;
        }
        else if (arg == ".PLN.") {
            m_currency = IfcCurrencyEnum_PLN;
        }
        else if (arg == ".PTN.") {
            m_currency = IfcCurrencyEnum_PTN;
        }
        else if (arg == ".QAR.") {
            m_currency = IfcCurrencyEnum_QAR;
        }
        else if (arg == ".RUR.") {
            m_currency = IfcCurrencyEnum_RUR;
        }
        else if (arg == ".SAR.") {
            m_currency = IfcCurrencyEnum_SAR;
        }
        else if (arg == ".SCR.") {
            m_currency = IfcCurrencyEnum_SCR;
        }
        else if (arg == ".SEK.") {
            m_currency = IfcCurrencyEnum_SEK;
        }
        else if (arg == ".SGD.") {
            m_currency = IfcCurrencyEnum_SGD;
        }
        else if (arg == ".SKP.") {
            m_currency = IfcCurrencyEnum_SKP;
        }
        else if (arg == ".THB.") {
            m_currency = IfcCurrencyEnum_THB;
        }
        else if (arg == ".TRL.") {
            m_currency = IfcCurrencyEnum_TRL;
        }
        else if (arg == ".TTD.") {
            m_currency = IfcCurrencyEnum_TTD;
        }
        else if (arg == ".TWD.") {
            m_currency = IfcCurrencyEnum_TWD;
        }
        else if (arg == ".USD.") {
            m_currency = IfcCurrencyEnum_USD;
        }
        else if (arg == ".VEB.") {
            m_currency = IfcCurrencyEnum_VEB;
        }
        else if (arg == ".VND.") {
            m_currency = IfcCurrencyEnum_VND;
        }
        else if (arg == ".XEU.") {
            m_currency = IfcCurrencyEnum_XEU;
        }
        else if (arg == ".ZAR.") {
            m_currency = IfcCurrencyEnum_ZAR;
        }
        else if (arg == ".ZWD.") {
            m_currency = IfcCurrencyEnum_ZWD;
        }
        else if (arg == ".NOK.") {
            m_currency = IfcCurrencyEnum_NOK;
        }
    }
    return true;
}

void IfcMonetaryUnit::copy(const IfcMonetaryUnit &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setCurrency(obj.m_currency);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMonetaryUnit::s_type("IfcMonetaryUnit");
