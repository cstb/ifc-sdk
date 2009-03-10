/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcDocumentElectronicFormat.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDocumentElectronicFormat::IfcDocumentElectronicFormat(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_fileExtension = Step::getUnset(m_fileExtension);
    m_mimeContentType = Step::getUnset(m_mimeContentType);
    m_mimeSubtype = Step::getUnset(m_mimeSubtype);
}

IfcDocumentElectronicFormat::~IfcDocumentElectronicFormat() {
}

bool IfcDocumentElectronicFormat::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDocumentElectronicFormat(this);
}

const std::string &IfcDocumentElectronicFormat::type() const {
    return IfcDocumentElectronicFormat::s_type.getName();
}

const Step::ClassType &IfcDocumentElectronicFormat::getClassType() {
    return IfcDocumentElectronicFormat::s_type;
}

const Step::ClassType &IfcDocumentElectronicFormat::getType() const {
    return IfcDocumentElectronicFormat::s_type;
}

bool IfcDocumentElectronicFormat::isOfType(const Step::ClassType &t) const {
    return IfcDocumentElectronicFormat::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcDocumentElectronicFormat::getFileExtension() {
    if (Step::BaseObject::inited()) {
        return m_fileExtension;
    }
    else {
        return Step::getUnset(m_fileExtension);
    }
}

const IfcLabel IfcDocumentElectronicFormat::getFileExtension() const {
    IfcDocumentElectronicFormat * deConstObject = const_cast< IfcDocumentElectronicFormat * > (this);
    return deConstObject->getFileExtension();
}

void IfcDocumentElectronicFormat::setFileExtension(const IfcLabel &value) {
    m_fileExtension = value;
}

IfcLabel IfcDocumentElectronicFormat::getMimeContentType() {
    if (Step::BaseObject::inited()) {
        return m_mimeContentType;
    }
    else {
        return Step::getUnset(m_mimeContentType);
    }
}

const IfcLabel IfcDocumentElectronicFormat::getMimeContentType() const {
    IfcDocumentElectronicFormat * deConstObject = const_cast< IfcDocumentElectronicFormat * > (this);
    return deConstObject->getMimeContentType();
}

void IfcDocumentElectronicFormat::setMimeContentType(const IfcLabel &value) {
    m_mimeContentType = value;
}

IfcLabel IfcDocumentElectronicFormat::getMimeSubtype() {
    if (Step::BaseObject::inited()) {
        return m_mimeSubtype;
    }
    else {
        return Step::getUnset(m_mimeSubtype);
    }
}

const IfcLabel IfcDocumentElectronicFormat::getMimeSubtype() const {
    IfcDocumentElectronicFormat * deConstObject = const_cast< IfcDocumentElectronicFormat * > (this);
    return deConstObject->getMimeSubtype();
}

void IfcDocumentElectronicFormat::setMimeSubtype(const IfcLabel &value) {
    m_mimeSubtype = value;
}

bool IfcDocumentElectronicFormat::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fileExtension = Step::getUnset(m_fileExtension);
    }
    else {
        m_fileExtension = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mimeContentType = Step::getUnset(m_mimeContentType);
    }
    else {
        m_mimeContentType = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mimeSubtype = Step::getUnset(m_mimeSubtype);
    }
    else {
        m_mimeSubtype = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcDocumentElectronicFormat::copy(const IfcDocumentElectronicFormat &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setFileExtension(obj.m_fileExtension);
    setMimeContentType(obj.m_mimeContentType);
    setMimeSubtype(obj.m_mimeSubtype);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentElectronicFormat::s_type("IfcDocumentElectronicFormat");
