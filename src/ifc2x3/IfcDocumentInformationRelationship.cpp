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

#include "ifc2x3/IfcDocumentInformationRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDocumentInformation.h"
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

IfcDocumentInformationRelationship::IfcDocumentInformationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingDocument = NULL;
    m_relatedDocuments.setUnset(true);
    m_relatedDocuments.setOwner(this);
    m_relationshipType = Step::getUnset(m_relationshipType);
}

IfcDocumentInformationRelationship::~IfcDocumentInformationRelationship() {
}

bool IfcDocumentInformationRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDocumentInformationRelationship(this);
}

const std::string &IfcDocumentInformationRelationship::type() {
    return IfcDocumentInformationRelationship::s_type.getName();
}

Step::ClassType IfcDocumentInformationRelationship::getClassType() {
    return IfcDocumentInformationRelationship::s_type;
}

Step::ClassType IfcDocumentInformationRelationship::getType() const {
    return IfcDocumentInformationRelationship::s_type;
}

bool IfcDocumentInformationRelationship::isOfType(Step::ClassType t) {
    return IfcDocumentInformationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDocumentInformation *IfcDocumentInformationRelationship::getRelatingDocument() {
    if (Step::BaseObject::inited()) {
        return m_relatingDocument.get();
    }
    else {
        return NULL;
    }
}

void IfcDocumentInformationRelationship::setRelatingDocument(const Step::RefPtr< IfcDocumentInformation > &value) {
    m_relatingDocument = value;
    m_relatingDocument->m_isPointer.insert(this);
}

Step::Set< Step::RefPtr< IfcDocumentInformation > > &IfcDocumentInformationRelationship::getRelatedDocuments() {
    if (Step::BaseObject::inited()) {
        return m_relatedDocuments;
    }
    else {
        m_relatedDocuments.setUnset(true);
        return m_relatedDocuments;
    }
}

IfcLabel IfcDocumentInformationRelationship::getRelationshipType() {
    if (Step::BaseObject::inited()) {
        return m_relationshipType;
    }
    else {
        return Step::getUnset(m_relationshipType);
    }
}

void IfcDocumentInformationRelationship::setRelationshipType(const IfcLabel &value) {
    m_relationshipType = value;
}

void IfcDocumentInformationRelationship::release() {
    m_relatingDocument.release();
    m_relatedDocuments.clear();
}

bool IfcDocumentInformationRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingDocument = NULL;
    }
    else {
        m_relatingDocument = static_cast< IfcDocumentInformation * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedDocuments.setUnset(true);
    }
    else {
        m_relatedDocuments.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDocumentInformation > attr2;
                attr2 = static_cast< IfcDocumentInformation * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedDocuments.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relationshipType = Step::getUnset(m_relationshipType);
    }
    else {
        m_relationshipType = Step::spfToString(arg);
    }
    return true;
}

void IfcDocumentInformationRelationship::copy(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDocumentInformation > >::const_iterator it_m_relatedDocuments;
    Step::BaseEntity::copy(obj, copyop);
    setRelatingDocument(copyop(obj.m_relatingDocument.get()));
    for (it_m_relatedDocuments = obj.m_relatedDocuments.begin(); it_m_relatedDocuments != obj.m_relatedDocuments.end(); ++it_m_relatedDocuments) {
        Step::RefPtr< IfcDocumentInformation > copyTarget = copyop((*it_m_relatedDocuments).get());
        m_relatedDocuments.insert(copyTarget.get());
    }
    setRelationshipType(obj.m_relationshipType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentInformationRelationship::s_type("IfcDocumentInformationRelationship");
IfcDocumentInformationRelationship::Inverted_RelatedDocuments_type::Inverted_RelatedDocuments_type() {
}

void IfcDocumentInformationRelationship::Inverted_RelatedDocuments_type::setOwner(IfcDocumentInformationRelationship *owner) {
    mOwner = owner;
}

void IfcDocumentInformationRelationship::Inverted_RelatedDocuments_type::insert(const Step::RefPtr< IfcDocumentInformation > &value) {
    IfcDocumentInformation *inverse = const_cast< IfcDocumentInformation * > (value.get());
    Step::Set< Step::RefPtr< IfcDocumentInformation > >::insert(value);
    inverse->m_isPointedTo.insert(mOwner);
}

