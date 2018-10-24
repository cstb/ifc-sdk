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


#include <ifc2x3/IfcTextureCoordinateGenerator.h>

#include <ifc2x3/IfcSimpleValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextureCoordinateGenerator::IfcTextureCoordinateGenerator(Step::Id id, Step::SPFData *args) : 
    IfcTextureCoordinate(id, args)
{
    m_Mode = Step::getUnset(m_Mode);
    m_Parameter.setUnset(true);
}

IfcTextureCoordinateGenerator::~IfcTextureCoordinateGenerator()
{}

bool IfcTextureCoordinateGenerator::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextureCoordinateGenerator(this);
}


IfcLabel IfcTextureCoordinateGenerator::getMode()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Mode;
    }
    else 
    {
        return Step::getUnset(m_Mode);
    }    
}

const IfcLabel IfcTextureCoordinateGenerator::getMode() const
{
    return const_cast<IfcTextureCoordinateGenerator *>(this)->getMode();
}

void IfcTextureCoordinateGenerator::setMode(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Mode = value;
}

void IfcTextureCoordinateGenerator::unsetMode()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Mode = Step::getUnset(getMode());
}

bool IfcTextureCoordinateGenerator::testMode() const
{
    return Step::isUnset(getMode()) == false;
}


List_IfcSimpleValue_1_n &IfcTextureCoordinateGenerator::getParameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Parameter;
    }
    else 
    {
        m_Parameter.setUnset(true);
        return m_Parameter;
    }    
}

const List_IfcSimpleValue_1_n &IfcTextureCoordinateGenerator::getParameter() const
{
    return const_cast<IfcTextureCoordinateGenerator *>(this)->getParameter();
}

void IfcTextureCoordinateGenerator::setParameter(const List_IfcSimpleValue_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Parameter = value;
}

void IfcTextureCoordinateGenerator::unsetParameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Parameter.clear();
    m_Parameter.setUnset(true);
}

bool IfcTextureCoordinateGenerator::testParameter() const
{
    return m_Parameter.isUnset() == false;
}

bool IfcTextureCoordinateGenerator::init()
{
    if (IfcTextureCoordinate::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Mode = Step::getUnset(m_Mode);
    }
    else
    {
        m_Mode = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Parameter.setUnset(true);
    }
    else
    {
        m_Parameter.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcSimpleValue > attr2 = new IfcSimpleValue();
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
                        if (type2 == "IFCREAL")
                        {
                            IfcReal tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcReal(tmp_attr2);
                        }
                        else if (type2 == "IFCBOOLEAN")
                        {
                            IfcBoolean tmp_attr2 = Step::spfToBoolean(arg)
;
                            attr2->setIfcBoolean(tmp_attr2);
                        }
                        else if (type2 == "IFCIDENTIFIER")
                        {
                            IfcIdentifier tmp_attr2 = Step::String::fromSPF(arg)
;
                            attr2->setIfcIdentifier(tmp_attr2);
                        }
                        else if (type2 == "IFCTEXT")
                        {
                            IfcText tmp_attr2 = Step::String::fromSPF(arg)
;
                            attr2->setIfcText(tmp_attr2);
                        }
                        else if (type2 == "IFCLABEL")
                        {
                            IfcLabel tmp_attr2 = Step::String::fromSPF(arg)
;
                            attr2->setIfcLabel(tmp_attr2);
                        }
                        else if (type2 == "IFCLOGICAL")
                        {
                            IfcLogical tmp_attr2 = Step::spfToLogical(arg)
;
                            attr2->setIfcLogical(tmp_attr2);
                        }
                    }
                }
                if (attr2.valid()) 
                {
                    m_Parameter.push_back(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcTextureCoordinateGenerator::copy(const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop)
{
    IfcTextureCoordinate::copy(obj, copyop);
    setMode(obj.m_Mode);
    List_IfcSimpleValue_1_n::const_iterator it_m_Parameter;
    for (it_m_Parameter = obj.m_Parameter.begin(); it_m_Parameter != obj.m_Parameter.end(); ++it_m_Parameter)
    {
        Step::RefPtr< IfcSimpleValue > copyTarget = new IfcSimpleValue;
        copyTarget->copy(*((*it_m_Parameter).get()), copyop);
        m_Parameter.push_back(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextureCoordinateGenerator, IfcTextureCoordinate)
