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


#include <ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h>

#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFillAreaStyleTileSymbolWithStyle::IfcFillAreaStyleTileSymbolWithStyle(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Symbol = NULL;
}

IfcFillAreaStyleTileSymbolWithStyle::~IfcFillAreaStyleTileSymbolWithStyle()
{}

bool IfcFillAreaStyleTileSymbolWithStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFillAreaStyleTileSymbolWithStyle(this);
}


IfcAnnotationSymbolOccurrence *IfcFillAreaStyleTileSymbolWithStyle::getSymbol()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Symbol.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAnnotationSymbolOccurrence *IfcFillAreaStyleTileSymbolWithStyle::getSymbol() const
{
    return const_cast<IfcFillAreaStyleTileSymbolWithStyle *>(this)->getSymbol();
}

void IfcFillAreaStyleTileSymbolWithStyle::setSymbol(const Step::RefPtr< IfcAnnotationSymbolOccurrence > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Symbol = value;
}

void IfcFillAreaStyleTileSymbolWithStyle::unsetSymbol()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Symbol = Step::getUnset(getSymbol());
}

bool IfcFillAreaStyleTileSymbolWithStyle::testSymbol() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSymbol()) == false;
}

bool IfcFillAreaStyleTileSymbolWithStyle::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Symbol = NULL;
    }
    else
    {
        m_Symbol = static_cast< IfcAnnotationSymbolOccurrence * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcFillAreaStyleTileSymbolWithStyle::copy(const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSymbol((IfcAnnotationSymbolOccurrence*)copyop(obj.m_Symbol.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFillAreaStyleTileSymbolWithStyle, IfcGeometricRepresentationItem)
