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


#include <ifc2x3/IfcRelAssociatesClassification.h>

#include <ifc2x3/IfcClassificationNotationSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssociatesClassification::IfcRelAssociatesClassification(Step::Id id, Step::SPFData *args) : 
    IfcRelAssociates(id, args)
{
    m_RelatingClassification = NULL;
}

IfcRelAssociatesClassification::~IfcRelAssociatesClassification()
{}

bool IfcRelAssociatesClassification::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssociatesClassification(this);
}


IfcClassificationNotationSelect *IfcRelAssociatesClassification::getRelatingClassification()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatingClassification.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcClassificationNotationSelect *IfcRelAssociatesClassification::getRelatingClassification() const
{
    return const_cast<IfcRelAssociatesClassification *>(this)->getRelatingClassification();
}

void IfcRelAssociatesClassification::setRelatingClassification(const Step::RefPtr< IfcClassificationNotationSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingClassification = value;
}

void IfcRelAssociatesClassification::unsetRelatingClassification()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingClassification = Step::getUnset(getRelatingClassification());
}

bool IfcRelAssociatesClassification::testRelatingClassification() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingClassification()) == false;
}

bool IfcRelAssociatesClassification::init()
{
    if (IfcRelAssociates::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingClassification = NULL;
    }
    else
    {
        m_RelatingClassification = new IfcClassificationNotationSelect;
        if (arg[0] == '#') {
            m_RelatingClassification->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcRelAssociatesClassification::copy(const IfcRelAssociatesClassification &obj, const CopyOp &copyop)
{
    IfcRelAssociates::copy(obj, copyop);
    setRelatingClassification((IfcClassificationNotationSelect*)copyop(obj.m_RelatingClassification.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssociatesClassification, IfcRelAssociates)
