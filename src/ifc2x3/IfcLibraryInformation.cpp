/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

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

bool IfcLibraryInformation::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLibraryInformation(this);
}

const std::string &IfcLibraryInformation::type() {
    return IfcLibraryInformation::s_type.getName();
}

Step::ClassType IfcLibraryInformation::getClassType() {
    return IfcLibraryInformation::s_type;
}

Step::ClassType IfcLibraryInformation::getType() const {
    return IfcLibraryInformation::s_type;
}

bool IfcLibraryInformation::isOfType(Step::ClassType t) {
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

void IfcLibraryInformation::setVersionDate(const Step::RefPtr< IfcCalendarDate > &value) {
    m_versionDate = value;
}

Step::Set< Step::RefPtr< IfcLibraryReference > > &IfcLibraryInformation::getLibraryReference() {
    if (Step::BaseObject::inited()) {
        return m_libraryReference;
    }
    else {
        m_libraryReference.setUnset(true);
        return m_libraryReference;
    }
}

void IfcLibraryInformation::release() {
    m_publisher.release();
    m_versionDate.release();
    m_libraryReference.clear();
}

bool IfcLibraryInformation::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_version = Step::getUnset(m_version);
    }
    else {
        m_version = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_publisher = NULL;
    }
    else {
        m_publisher = static_cast< IfcOrganization * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_versionDate = NULL;
    }
    else {
        m_versionDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                attr2 = static_cast< IfcLibraryReference * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
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
    Step::Set< Step::RefPtr< IfcLibraryReference > >::const_iterator it_m_libraryReference;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setVersion(obj.m_version);
    setPublisher(copyop(obj.m_publisher.get()));
    setVersionDate(copyop(obj.m_versionDate.get()));
    for (it_m_libraryReference = obj.m_libraryReference.begin(); it_m_libraryReference != obj.m_libraryReference.end(); ++it_m_libraryReference) {
        Step::RefPtr< IfcLibraryReference > copyTarget = copyop((*it_m_libraryReference).get());
        m_libraryReference.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLibraryInformation::s_type("IfcLibraryInformation");
IfcLibraryInformation::Inverted_LibraryReference_type::Inverted_LibraryReference_type() {
}

void IfcLibraryInformation::Inverted_LibraryReference_type::setOwner(IfcLibraryInformation *owner) {
    mOwner = owner;
}

void IfcLibraryInformation::Inverted_LibraryReference_type::insert(const Step::RefPtr< IfcLibraryReference > &value) {
    IfcLibraryReference *inverse = const_cast< IfcLibraryReference * > (value.get());
    Step::Set< Step::RefPtr< IfcLibraryReference > >::insert(value);
    inverse->m_referenceIntoLibrary.insert(mOwner);
}

