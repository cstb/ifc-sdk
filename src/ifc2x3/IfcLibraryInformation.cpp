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

#include "ifc2x3/IfcLibraryInformation.h"


#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcLibraryReference.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

Inverted_IfcLibraryInformation_LibraryReference_type::Inverted_IfcLibraryInformation_LibraryReference_type() {
}

void Inverted_IfcLibraryInformation_LibraryReference_type::setOwner(IfcLibraryInformation *owner) {
    mOwner = owner;
}

void Inverted_IfcLibraryInformation_LibraryReference_type::insert(const Step::RefPtr< IfcLibraryReference > &value) throw(std::out_of_range) {
    IfcLibraryReference *inverse = const_cast< IfcLibraryReference * > (value.get());
    Set_IfcLibraryReference_1_n::insert(value);
    inverse->m_referenceIntoLibrary.insert(mOwner);
}

Inverted_IfcLibraryInformation_LibraryReference_type::size_type Inverted_IfcLibraryInformation_LibraryReference_type::erase(const Step::RefPtr< IfcLibraryReference > &value) {
    IfcLibraryReference *inverse = const_cast< IfcLibraryReference * > (value.get());
    inverse->m_referenceIntoLibrary.erase(mOwner);
    return Set_IfcLibraryReference_1_n::erase(value);
}

IfcLibraryInformation::IfcLibraryInformation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_version = Step::getUnset(m_version);
    m_publisher = NULL;
    m_versionDate = NULL;
    m_libraryReference.setUnset(true);
    m_libraryReference.setOwner(this);
}

IfcLibraryInformation::~IfcLibraryInformation() {
}

bool IfcLibraryInformation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLibraryInformation(this);
}

const std::string &IfcLibraryInformation::type() const {
    return IfcLibraryInformation::s_type.getName();
}

const Step::ClassType &IfcLibraryInformation::getClassType() {
    return IfcLibraryInformation::s_type;
}

const Step::ClassType &IfcLibraryInformation::getType() const {
    return IfcLibraryInformation::s_type;
}

bool IfcLibraryInformation::isOfType(const Step::ClassType &t) const {
    return IfcLibraryInformation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcLibraryInformation::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcLibraryInformation::getName() const {
    IfcLibraryInformation * deConstObject = const_cast< IfcLibraryInformation * > (this);
    return deConstObject->getName();
}

void IfcLibraryInformation::setName(const IfcLabel &value) {
    m_name = value;
}

IfcLabel IfcLibraryInformation::getVersion() {
    if (Step::BaseObject::inited()) {
        return m_version;
    }
    else {
        return Step::getUnset(m_version);
    }
}

const IfcLabel IfcLibraryInformation::getVersion() const {
    IfcLibraryInformation * deConstObject = const_cast< IfcLibraryInformation * > (this);
    return deConstObject->getVersion();
}

void IfcLibraryInformation::setVersion(const IfcLabel &value) {
    m_version = value;
}

IfcOrganization *IfcLibraryInformation::getPublisher() {
    if (Step::BaseObject::inited()) {
        return m_publisher.get();
    }
    else {
        return NULL;
    }
}

const IfcOrganization *IfcLibraryInformation::getPublisher() const {
    IfcLibraryInformation * deConstObject = const_cast< IfcLibraryInformation * > (this);
    return deConstObject->getPublisher();
}

void IfcLibraryInformation::setPublisher(const Step::RefPtr< IfcOrganization > &value) {
    m_publisher = value;
}

IfcCalendarDate *IfcLibraryInformation::getVersionDate() {
    if (Step::BaseObject::inited()) {
        return m_versionDate.get();
    }
    else {
        return NULL;
    }
}

const IfcCalendarDate *IfcLibraryInformation::getVersionDate() const {
    IfcLibraryInformation * deConstObject = const_cast< IfcLibraryInformation * > (this);
    return deConstObject->getVersionDate();
}

void IfcLibraryInformation::setVersionDate(const Step::RefPtr< IfcCalendarDate > &value) {
    m_versionDate = value;
}

Set_IfcLibraryReference_1_n &IfcLibraryInformation::getLibraryReference() {
    if (Step::BaseObject::inited()) {
        return m_libraryReference;
    }
    else {
        m_libraryReference.setUnset(true);
        return m_libraryReference;
    }
}

const Set_IfcLibraryReference_1_n &IfcLibraryInformation::getLibraryReference() const {
    IfcLibraryInformation * deConstObject = const_cast< IfcLibraryInformation * > (this);
    return deConstObject->getLibraryReference();
}

bool IfcLibraryInformation::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_version = Step::getUnset(m_version);
    }
    else {
        m_version = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_publisher = NULL;
    }
    else {
        m_publisher = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_versionDate = NULL;
    }
    else {
        m_versionDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_libraryReference.setUnset(true);
    }
    else {
        m_libraryReference.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcLibraryReference > attr2;
                attr2 = static_cast< IfcLibraryReference * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_libraryReference.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcLibraryInformation::copy(const IfcLibraryInformation &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcLibraryReference >, 1 >::const_iterator it_m_libraryReference;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setVersion(obj.m_version);
    setPublisher((IfcOrganization*)copyop(obj.m_publisher.get()));
    setVersionDate((IfcCalendarDate*)copyop(obj.m_versionDate.get()));
    for (it_m_libraryReference = obj.m_libraryReference.begin(); it_m_libraryReference != obj.m_libraryReference.end(); ++it_m_libraryReference) {
        Step::RefPtr< IfcLibraryReference > copyTarget = (IfcLibraryReference *) (copyop((*it_m_libraryReference).get()));
        m_libraryReference.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLibraryInformation::s_type("IfcLibraryInformation");
