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


#include <ifc2x3/IfcRelAssignsToProduct.h>

#include <ifc2x3/IfcProduct.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssignsToProduct::IfcRelAssignsToProduct(Step::Id id, Step::SPFData *args) : 
    IfcRelAssigns(id, args)
{
    m_RelatingProduct = NULL;
}

IfcRelAssignsToProduct::~IfcRelAssignsToProduct()
{}

bool IfcRelAssignsToProduct::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssignsToProduct(this);
}

IfcProduct *IfcRelAssignsToProduct::getRelatingProduct()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingProduct.get();
    }
    else
    {
        return NULL;
    }
}

const IfcProduct *IfcRelAssignsToProduct::getRelatingProduct() const
{
    return const_cast< IfcRelAssignsToProduct * > (this)->getRelatingProduct();
}

void IfcRelAssignsToProduct::setRelatingProduct(const Step::RefPtr< IfcProduct > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingProduct.valid())
    {
        m_RelatingProduct->m_ReferencedBy.erase(this);
    }
    if (value.valid() )
    {
       value->m_ReferencedBy.insert(this);
    }
    m_RelatingProduct = value;
}

void IfcRelAssignsToProduct::unsetRelatingProduct()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingProduct = Step::getUnset(getRelatingProduct());
}

bool IfcRelAssignsToProduct::testRelatingProduct() const
{
    return Step::isUnset(getRelatingProduct()) == false;
}

bool IfcRelAssignsToProduct::init()
{
    if (IfcRelAssigns::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingProduct = NULL;
    }
    else
    {
        m_RelatingProduct = static_cast< IfcProduct * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelAssignsToProduct::copy(const IfcRelAssignsToProduct &obj, const CopyOp &copyop)
{
    IfcRelAssigns::copy(obj, copyop);
    setRelatingProduct((IfcProduct*)copyop(obj.m_RelatingProduct.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssignsToProduct, IfcRelAssigns)
