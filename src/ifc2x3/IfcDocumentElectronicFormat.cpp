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


#include <ifc2x3/IfcDocumentElectronicFormat.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDocumentElectronicFormat::IfcDocumentElectronicFormat(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_FileExtension = Step::getUnset(m_FileExtension);
    m_MimeContentType = Step::getUnset(m_MimeContentType);
    m_MimeSubtype = Step::getUnset(m_MimeSubtype);
}

IfcDocumentElectronicFormat::~IfcDocumentElectronicFormat()
{}

bool IfcDocumentElectronicFormat::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDocumentElectronicFormat(this);
}


IfcLabel IfcDocumentElectronicFormat::getFileExtension()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FileExtension;
    }
    else 
    {
        return Step::getUnset(m_FileExtension);
    }    
}

const IfcLabel IfcDocumentElectronicFormat::getFileExtension() const
{
    return const_cast<IfcDocumentElectronicFormat *>(this)->getFileExtension();
}

void IfcDocumentElectronicFormat::setFileExtension(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FileExtension = value;
}

void IfcDocumentElectronicFormat::unsetFileExtension()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FileExtension = Step::getUnset(getFileExtension());
}

bool IfcDocumentElectronicFormat::testFileExtension() const
{
    return Step::isUnset(getFileExtension()) == false;
}


IfcLabel IfcDocumentElectronicFormat::getMimeContentType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MimeContentType;
    }
    else 
    {
        return Step::getUnset(m_MimeContentType);
    }    
}

const IfcLabel IfcDocumentElectronicFormat::getMimeContentType() const
{
    return const_cast<IfcDocumentElectronicFormat *>(this)->getMimeContentType();
}

void IfcDocumentElectronicFormat::setMimeContentType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MimeContentType = value;
}

void IfcDocumentElectronicFormat::unsetMimeContentType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MimeContentType = Step::getUnset(getMimeContentType());
}

bool IfcDocumentElectronicFormat::testMimeContentType() const
{
    return Step::isUnset(getMimeContentType()) == false;
}


IfcLabel IfcDocumentElectronicFormat::getMimeSubtype()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MimeSubtype;
    }
    else 
    {
        return Step::getUnset(m_MimeSubtype);
    }    
}

const IfcLabel IfcDocumentElectronicFormat::getMimeSubtype() const
{
    return const_cast<IfcDocumentElectronicFormat *>(this)->getMimeSubtype();
}

void IfcDocumentElectronicFormat::setMimeSubtype(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MimeSubtype = value;
}

void IfcDocumentElectronicFormat::unsetMimeSubtype()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MimeSubtype = Step::getUnset(getMimeSubtype());
}

bool IfcDocumentElectronicFormat::testMimeSubtype() const
{
    return Step::isUnset(getMimeSubtype()) == false;
}

bool IfcDocumentElectronicFormat::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FileExtension = Step::getUnset(m_FileExtension);
    }
    else
    {
        m_FileExtension = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MimeContentType = Step::getUnset(m_MimeContentType);
    }
    else
    {
        m_MimeContentType = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MimeSubtype = Step::getUnset(m_MimeSubtype);
    }
    else
    {
        m_MimeSubtype = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcDocumentElectronicFormat::copy(const IfcDocumentElectronicFormat &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setFileExtension(obj.m_FileExtension);
    setMimeContentType(obj.m_MimeContentType);
    setMimeSubtype(obj.m_MimeSubtype);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDocumentElectronicFormat, Step::BaseEntity)
