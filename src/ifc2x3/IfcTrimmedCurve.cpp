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


#include <ifc2x3/IfcTrimmedCurve.h>

#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcTrimmingSelect.h>
#include <ifc2x3/IfcTrimmingSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTrimmedCurve::IfcTrimmedCurve(Step::Id id, Step::SPFData *args) : 
    IfcBoundedCurve(id, args)
{
    m_BasisCurve = NULL;
    m_Trim1.setUnset(true);
    m_Trim2.setUnset(true);
    m_SenseAgreement = Step::getUnset(m_SenseAgreement);
    m_MasterRepresentation = IfcTrimmingPreference_UNSET;
}

IfcTrimmedCurve::~IfcTrimmedCurve()
{}

bool IfcTrimmedCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTrimmedCurve(this);
}


IfcCurve *IfcTrimmedCurve::getBasisCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BasisCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcTrimmedCurve::getBasisCurve() const
{
    return const_cast<IfcTrimmedCurve *>(this)->getBasisCurve();
}

void IfcTrimmedCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisCurve = value;
}

void IfcTrimmedCurve::unsetBasisCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisCurve = Step::getUnset(getBasisCurve());
}

bool IfcTrimmedCurve::testBasisCurve() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBasisCurve()) == false;
}


Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim1()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Trim1;
    }
    else 
    {
        m_Trim1.setUnset(true);
        return m_Trim1;
    }    
}

const Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim1() const
{
    return const_cast<IfcTrimmedCurve *>(this)->getTrim1();
}

void IfcTrimmedCurve::setTrim1(const Set_IfcTrimmingSelect_1_2 &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Trim1 = value;
}

void IfcTrimmedCurve::unsetTrim1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Trim1.clear();
    m_Trim1.setUnset(true);
}

bool IfcTrimmedCurve::testTrim1() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Trim1.isUnset() == false;
}


Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Trim2;
    }
    else 
    {
        m_Trim2.setUnset(true);
        return m_Trim2;
    }    
}

const Set_IfcTrimmingSelect_1_2 &IfcTrimmedCurve::getTrim2() const
{
    return const_cast<IfcTrimmedCurve *>(this)->getTrim2();
}

void IfcTrimmedCurve::setTrim2(const Set_IfcTrimmingSelect_1_2 &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Trim2 = value;
}

void IfcTrimmedCurve::unsetTrim2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Trim2.clear();
    m_Trim2.setUnset(true);
}

bool IfcTrimmedCurve::testTrim2() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Trim2.isUnset() == false;
}


Step::Boolean IfcTrimmedCurve::getSenseAgreement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SenseAgreement;
    }
    else 
    {
        return Step::getUnset(m_SenseAgreement);
    }    
}

Step::Boolean IfcTrimmedCurve::getSenseAgreement() const
{
    return const_cast<IfcTrimmedCurve *>(this)->getSenseAgreement();
}

void IfcTrimmedCurve::setSenseAgreement(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SenseAgreement = value;
}

void IfcTrimmedCurve::unsetSenseAgreement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SenseAgreement = Step::getUnset(getSenseAgreement());
}

bool IfcTrimmedCurve::testSenseAgreement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSenseAgreement()) == false;
}


IfcTrimmingPreference IfcTrimmedCurve::getMasterRepresentation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MasterRepresentation;
    }
    else 
    {
        return IfcTrimmingPreference_UNSET;
    }    
}

IfcTrimmingPreference IfcTrimmedCurve::getMasterRepresentation() const
{
    return const_cast<IfcTrimmedCurve *>(this)->getMasterRepresentation();
}

void IfcTrimmedCurve::setMasterRepresentation(IfcTrimmingPreference value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MasterRepresentation = value;
}

void IfcTrimmedCurve::unsetMasterRepresentation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MasterRepresentation = IfcTrimmingPreference_UNSET;
}

bool IfcTrimmedCurve::testMasterRepresentation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMasterRepresentation()) == false;
}

bool IfcTrimmedCurve::init()
{
    if (IfcBoundedCurve::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BasisCurve = NULL;
    }
    else
    {
        m_BasisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Trim1.setUnset(true);
    }
    else
    {
        m_Trim1.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcTrimmingSelect > attr2 = new IfcTrimmingSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCPARAMETERVALUE")
                        {
                            IfcParameterValue tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                    }
                }
                if (attr2.valid()) 
                {
                    m_Trim1.insert(attr2);
                }
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
        m_Trim2.setUnset(true);
    }
    else
    {
        m_Trim2.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcTrimmingSelect > attr2 = new IfcTrimmingSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCPARAMETERVALUE")
                        {
                            IfcParameterValue tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                    }
                }
                if (attr2.valid()) 
                {
                    m_Trim2.insert(attr2);
                }
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
        m_SenseAgreement = Step::getUnset(m_SenseAgreement);
    }
    else
    {
        m_SenseAgreement = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MasterRepresentation = IfcTrimmingPreference_UNSET;
    }
    else
    {
        if (arg == ".CARTESIAN.")
        {
            m_MasterRepresentation = IfcTrimmingPreference_CARTESIAN;
        }
        else if (arg == ".PARAMETER.")
        {
            m_MasterRepresentation = IfcTrimmingPreference_PARAMETER;
        }
        else if (arg == ".UNSPECIFIED.")
        {
            m_MasterRepresentation = IfcTrimmingPreference_UNSPECIFIED;
        }
    }
    return true;
}

void IfcTrimmedCurve::copy(const IfcTrimmedCurve &obj, const CopyOp &copyop)
{
    IfcBoundedCurve::copy(obj, copyop);
    setBasisCurve((IfcCurve*)copyop(obj.m_BasisCurve.get()));
    Set_IfcTrimmingSelect_1_2::const_iterator it_m_Trim1;
    for (it_m_Trim1 = obj.m_Trim1.begin(); it_m_Trim1 != obj.m_Trim1.end(); ++it_m_Trim1)
    {
        Step::RefPtr< IfcTrimmingSelect > copyTarget = new IfcTrimmingSelect;
        copyTarget->copy(*((*it_m_Trim1).get()), copyop);
        m_Trim1.insert(copyTarget.get());
    }
    
    Set_IfcTrimmingSelect_1_2::const_iterator it_m_Trim2;
    for (it_m_Trim2 = obj.m_Trim2.begin(); it_m_Trim2 != obj.m_Trim2.end(); ++it_m_Trim2)
    {
        Step::RefPtr< IfcTrimmingSelect > copyTarget = new IfcTrimmingSelect;
        copyTarget->copy(*((*it_m_Trim2).get()), copyop);
        m_Trim2.insert(copyTarget.get());
    }
    
    setSenseAgreement(obj.m_SenseAgreement);
    setMasterRepresentation(obj.m_MasterRepresentation);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTrimmedCurve, IfcBoundedCurve)
