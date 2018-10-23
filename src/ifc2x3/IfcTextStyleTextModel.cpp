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


#include <ifc2x3/IfcTextStyleTextModel.h>

#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/IfcSizeSelect.h>
#include <ifc2x3/IfcSizeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTextStyleTextModel::IfcTextStyleTextModel(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_TextIndent = NULL;
    m_TextAlign = Step::getUnset(m_TextAlign);
    m_TextDecoration = Step::getUnset(m_TextDecoration);
    m_LetterSpacing = NULL;
    m_WordSpacing = NULL;
    m_TextTransform = Step::getUnset(m_TextTransform);
    m_LineHeight = NULL;
}

IfcTextStyleTextModel::~IfcTextStyleTextModel()
{}

bool IfcTextStyleTextModel::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextStyleTextModel(this);
}


IfcSizeSelect *IfcTextStyleTextModel::getTextIndent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextIndent.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSizeSelect *IfcTextStyleTextModel::getTextIndent() const
{
    return const_cast<IfcTextStyleTextModel *>(this)->getTextIndent();
}

void IfcTextStyleTextModel::setTextIndent(const Step::RefPtr< IfcSizeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextIndent = value;
}

void IfcTextStyleTextModel::unsetTextIndent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextIndent = Step::getUnset(getTextIndent());
}

bool IfcTextStyleTextModel::testTextIndent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTextIndent()) == false;
}


IfcTextAlignment IfcTextStyleTextModel::getTextAlign()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextAlign;
    }
    else 
    {
        return Step::getUnset(m_TextAlign);
    }    
}

const IfcTextAlignment IfcTextStyleTextModel::getTextAlign() const
{
    return const_cast<IfcTextStyleTextModel *>(this)->getTextAlign();
}

void IfcTextStyleTextModel::setTextAlign(const IfcTextAlignment &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextAlign = value;
}

void IfcTextStyleTextModel::unsetTextAlign()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextAlign = Step::getUnset(getTextAlign());
}

bool IfcTextStyleTextModel::testTextAlign() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTextAlign()) == false;
}


IfcTextDecoration IfcTextStyleTextModel::getTextDecoration()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextDecoration;
    }
    else 
    {
        return Step::getUnset(m_TextDecoration);
    }    
}

const IfcTextDecoration IfcTextStyleTextModel::getTextDecoration() const
{
    return const_cast<IfcTextStyleTextModel *>(this)->getTextDecoration();
}

void IfcTextStyleTextModel::setTextDecoration(const IfcTextDecoration &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextDecoration = value;
}

void IfcTextStyleTextModel::unsetTextDecoration()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextDecoration = Step::getUnset(getTextDecoration());
}

bool IfcTextStyleTextModel::testTextDecoration() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTextDecoration()) == false;
}


IfcSizeSelect *IfcTextStyleTextModel::getLetterSpacing()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LetterSpacing.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSizeSelect *IfcTextStyleTextModel::getLetterSpacing() const
{
    return const_cast<IfcTextStyleTextModel *>(this)->getLetterSpacing();
}

void IfcTextStyleTextModel::setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LetterSpacing = value;
}

void IfcTextStyleTextModel::unsetLetterSpacing()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LetterSpacing = Step::getUnset(getLetterSpacing());
}

bool IfcTextStyleTextModel::testLetterSpacing() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLetterSpacing()) == false;
}


IfcSizeSelect *IfcTextStyleTextModel::getWordSpacing()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WordSpacing.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSizeSelect *IfcTextStyleTextModel::getWordSpacing() const
{
    return const_cast<IfcTextStyleTextModel *>(this)->getWordSpacing();
}

void IfcTextStyleTextModel::setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WordSpacing = value;
}

void IfcTextStyleTextModel::unsetWordSpacing()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WordSpacing = Step::getUnset(getWordSpacing());
}

bool IfcTextStyleTextModel::testWordSpacing() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWordSpacing()) == false;
}


IfcTextTransformation IfcTextStyleTextModel::getTextTransform()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TextTransform;
    }
    else 
    {
        return Step::getUnset(m_TextTransform);
    }    
}

const IfcTextTransformation IfcTextStyleTextModel::getTextTransform() const
{
    return const_cast<IfcTextStyleTextModel *>(this)->getTextTransform();
}

void IfcTextStyleTextModel::setTextTransform(const IfcTextTransformation &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextTransform = value;
}

void IfcTextStyleTextModel::unsetTextTransform()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TextTransform = Step::getUnset(getTextTransform());
}

bool IfcTextStyleTextModel::testTextTransform() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTextTransform()) == false;
}


IfcSizeSelect *IfcTextStyleTextModel::getLineHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LineHeight.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSizeSelect *IfcTextStyleTextModel::getLineHeight() const
{
    return const_cast<IfcTextStyleTextModel *>(this)->getLineHeight();
}

void IfcTextStyleTextModel::setLineHeight(const Step::RefPtr< IfcSizeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LineHeight = value;
}

void IfcTextStyleTextModel::unsetLineHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LineHeight = Step::getUnset(getLineHeight());
}

bool IfcTextStyleTextModel::testLineHeight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLineHeight()) == false;
}

bool IfcTextStyleTextModel::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextIndent = NULL;
    }
    else
    {
        m_TextIndent = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_TextIndent->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_TextIndent->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_TextIndent->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_TextIndent->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_TextIndent->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_TextIndent->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_TextIndent->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextAlign = Step::getUnset(m_TextAlign);
    }
    else
    {
        m_TextAlign = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextDecoration = Step::getUnset(m_TextDecoration);
    }
    else
    {
        m_TextDecoration = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LetterSpacing = NULL;
    }
    else
    {
        m_LetterSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_LetterSpacing->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_LetterSpacing->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LetterSpacing->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_LetterSpacing->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LetterSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LetterSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LetterSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WordSpacing = NULL;
    }
    else
    {
        m_WordSpacing = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_WordSpacing->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_WordSpacing->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_WordSpacing->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_WordSpacing->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_WordSpacing->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_WordSpacing->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_WordSpacing->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TextTransform = Step::getUnset(m_TextTransform);
    }
    else
    {
        m_TextTransform = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LineHeight = NULL;
    }
    else
    {
        m_LineHeight = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_LineHeight->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_LineHeight->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LineHeight->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_LineHeight->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LineHeight->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LineHeight->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LineHeight->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcTextStyleTextModel::copy(const IfcTextStyleTextModel &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setTextIndent((IfcSizeSelect*)copyop(obj.m_TextIndent.get()));
    setTextAlign(obj.m_TextAlign);
    setTextDecoration(obj.m_TextDecoration);
    setLetterSpacing((IfcSizeSelect*)copyop(obj.m_LetterSpacing.get()));
    setWordSpacing((IfcSizeSelect*)copyop(obj.m_WordSpacing.get()));
    setTextTransform(obj.m_TextTransform);
    setLineHeight((IfcSizeSelect*)copyop(obj.m_LineHeight.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTextStyleTextModel, Step::BaseEntity)
