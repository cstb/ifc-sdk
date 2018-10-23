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


#include <ifc2x3/IfcTextStyleFontModel.h>

#include <ifc2x3/IfcSizeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextStyleFontModel::IfcTextStyleFontModel(Step::Id id, Step::SPFData *args) : 
    IfcPreDefinedTextFont(id, args)
{
    m_FontFamily.setUnset(true);
    m_FontStyle = Step::getUnset(m_FontStyle);
    m_FontVariant = Step::getUnset(m_FontVariant);
    m_FontWeight = Step::getUnset(m_FontWeight);
    m_FontSize = NULL;
}

IfcTextStyleFontModel::~IfcTextStyleFontModel()
{}

bool IfcTextStyleFontModel::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextStyleFontModel(this);
}


List_IfcTextFontName_1_n &IfcTextStyleFontModel::getFontFamily()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FontFamily;
    }
    else 
    {
        m_FontFamily.setUnset(true);
        return m_FontFamily;
    }    
}

const List_IfcTextFontName_1_n &IfcTextStyleFontModel::getFontFamily() const
{
    return const_cast<IfcTextStyleFontModel *>(this)->getFontFamily();
}

void IfcTextStyleFontModel::setFontFamily(const List_IfcTextFontName_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontFamily = value;
}

void IfcTextStyleFontModel::unsetFontFamily()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontFamily.clear();
    m_FontFamily.setUnset(true);
}

bool IfcTextStyleFontModel::testFontFamily() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_FontFamily.isUnset() == false;
}


IfcFontStyle IfcTextStyleFontModel::getFontStyle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FontStyle;
    }
    else 
    {
        return Step::getUnset(m_FontStyle);
    }    
}

const IfcFontStyle IfcTextStyleFontModel::getFontStyle() const
{
    return const_cast<IfcTextStyleFontModel *>(this)->getFontStyle();
}

void IfcTextStyleFontModel::setFontStyle(const IfcFontStyle &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontStyle = value;
}

void IfcTextStyleFontModel::unsetFontStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontStyle = Step::getUnset(getFontStyle());
}

bool IfcTextStyleFontModel::testFontStyle() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFontStyle()) == false;
}


IfcFontVariant IfcTextStyleFontModel::getFontVariant()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FontVariant;
    }
    else 
    {
        return Step::getUnset(m_FontVariant);
    }    
}

const IfcFontVariant IfcTextStyleFontModel::getFontVariant() const
{
    return const_cast<IfcTextStyleFontModel *>(this)->getFontVariant();
}

void IfcTextStyleFontModel::setFontVariant(const IfcFontVariant &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontVariant = value;
}

void IfcTextStyleFontModel::unsetFontVariant()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontVariant = Step::getUnset(getFontVariant());
}

bool IfcTextStyleFontModel::testFontVariant() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFontVariant()) == false;
}


IfcFontWeight IfcTextStyleFontModel::getFontWeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FontWeight;
    }
    else 
    {
        return Step::getUnset(m_FontWeight);
    }    
}

const IfcFontWeight IfcTextStyleFontModel::getFontWeight() const
{
    return const_cast<IfcTextStyleFontModel *>(this)->getFontWeight();
}

void IfcTextStyleFontModel::setFontWeight(const IfcFontWeight &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontWeight = value;
}

void IfcTextStyleFontModel::unsetFontWeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontWeight = Step::getUnset(getFontWeight());
}

bool IfcTextStyleFontModel::testFontWeight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFontWeight()) == false;
}


IfcSizeSelect *IfcTextStyleFontModel::getFontSize()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FontSize.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSizeSelect *IfcTextStyleFontModel::getFontSize() const
{
    return const_cast<IfcTextStyleFontModel *>(this)->getFontSize();
}

void IfcTextStyleFontModel::setFontSize(const Step::RefPtr< IfcSizeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontSize = value;
}

void IfcTextStyleFontModel::unsetFontSize()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FontSize = Step::getUnset(getFontSize());
}

bool IfcTextStyleFontModel::testFontSize() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFontSize()) == false;
}

bool IfcTextStyleFontModel::init()
{
    if (IfcPreDefinedTextFont::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FontFamily.setUnset(true);
    }
    else
    {
        m_FontFamily.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_FontFamily.push_back(Step::String::fromSPF(str1)
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
        m_FontStyle = Step::getUnset(m_FontStyle);
    }
    else
    {
        m_FontStyle = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FontVariant = Step::getUnset(m_FontVariant);
    }
    else
    {
        m_FontVariant = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FontWeight = Step::getUnset(m_FontWeight);
    }
    else
    {
        m_FontWeight = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FontSize = NULL;
    }
    else
    {
        m_FontSize = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_FontSize->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FontSize->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FontSize->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_FontSize->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FontSize->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FontSize->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FontSize->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcTextStyleFontModel::copy(const IfcTextStyleFontModel &obj, const CopyOp &copyop)
{
    IfcPreDefinedTextFont::copy(obj, copyop);
    List_IfcTextFontName_1_n::const_iterator it_m_FontFamily;
    for (it_m_FontFamily = obj.m_FontFamily.begin(); it_m_FontFamily != obj.m_FontFamily.end(); ++it_m_FontFamily)
    {
        IfcTextFontName copyTarget = (*it_m_FontFamily);
        m_FontFamily.push_back(copyTarget);
    }
    
    setFontStyle(obj.m_FontStyle);
    setFontVariant(obj.m_FontVariant);
    setFontWeight(obj.m_FontWeight);
    setFontSize((IfcSizeSelect*)copyop(obj.m_FontSize.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextStyleFontModel, IfcPreDefinedTextFont)
