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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcDocumentReference.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDocumentInformation.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcDocumentReference::IfcDocumentReference(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcDocumentReference::~IfcDocumentReference() {
}

bool IfcDocumentReference::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDocumentReference(this);
}

const std::string &IfcDocumentReference::type() const {
    return IfcDocumentReference::s_type.getName();
}

const Step::ClassType &IfcDocumentReference::getClassType() {
    return IfcDocumentReference::s_type;
}

const Step::ClassType &IfcDocumentReference::getType() const {
    return IfcDocumentReference::s_type;
}

bool IfcDocumentReference::isOfType(const Step::ClassType &t) const {
    return IfcDocumentReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

Inverse_Set_IfcDocumentInformation_0_1 &IfcDocumentReference::getReferenceToDocument() {
    if (Step::BaseObject::inited()) {
        return m_referenceToDocument;
    }
    else {
        m_referenceToDocument.setUnset(true);
        return m_referenceToDocument;
    }
}

const Inverse_Set_IfcDocumentInformation_0_1 &IfcDocumentReference::getReferenceToDocument() const {
    IfcDocumentReference * deConstObject = const_cast< IfcDocumentReference * > (this);
    return deConstObject->getReferenceToDocument();
}

bool IfcDocumentReference::testReferenceToDocument() const {
    return !Step::isUnset(getReferenceToDocument());
}

bool IfcDocumentReference::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcDocumentInformation::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_referenceToDocument.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referenceToDocument.insert(static_cast< IfcDocumentInformation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDocumentReference::copy(const IfcDocumentReference &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentReference::s_type("IfcDocumentReference");
