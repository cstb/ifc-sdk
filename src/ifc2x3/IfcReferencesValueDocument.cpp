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

#include "ifc2x3/IfcReferencesValueDocument.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/IfcDocumentSelect.h"
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

IfcReferencesValueDocument::IfcReferencesValueDocument(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_referencedDocument = NULL;
    m_referencingValues.setUnset(true);
    m_referencingValues.setOwner(this);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcReferencesValueDocument::~IfcReferencesValueDocument() {
}

bool IfcReferencesValueDocument::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferencesValueDocument(this);
}

const std::string &IfcReferencesValueDocument::type() {
    return IfcReferencesValueDocument::s_type.getName();
}

Step::ClassType IfcReferencesValueDocument::getClassType() {
    return IfcReferencesValueDocument::s_type;
}

Step::ClassType IfcReferencesValueDocument::getType() const {
    return IfcReferencesValueDocument::s_type;
}

bool IfcReferencesValueDocument::isOfType(Step::ClassType t) {
    return IfcReferencesValueDocument::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDocumentSelect *IfcReferencesValueDocument::getReferencedDocument() {
    if (Step::BaseObject::inited()) {
        return m_referencedDocument.get();
    }
    else {
        return NULL;
    }
}

void IfcReferencesValueDocument::setReferencedDocument(const Step::RefPtr< IfcDocumentSelect > &value) {
    m_referencedDocument = value;
}

Step::Set< Step::RefPtr< IfcAppliedValue > > &IfcReferencesValueDocument::getReferencingValues() {
    if (Step::BaseObject::inited()) {
        return m_referencingValues;
    }
    else {
        m_referencingValues.setUnset(true);
        return m_referencingValues;
    }
}

IfcLabel IfcReferencesValueDocument::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcReferencesValueDocument::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcReferencesValueDocument::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcReferencesValueDocument::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcReferencesValueDocument::release() {
    m_referencingValues.clear();
}

bool IfcReferencesValueDocument::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencedDocument = NULL;
    }
    else {
        m_referencedDocument = new IfcDocumentSelect;
        if (arg[0] == '#') {
            m_referencedDocument->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencingValues.setUnset(true);
    }
    else {
        m_referencingValues.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcAppliedValue > attr2;
                attr2 = static_cast< IfcAppliedValue * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_referencingValues.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    return true;
}

void IfcReferencesValueDocument::copy(const IfcReferencesValueDocument &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcAppliedValue > >::const_iterator it_m_referencingValues;
    Step::BaseEntity::copy(obj, copyop);
    m_referencedDocument = new IfcDocumentSelect;
    m_referencedDocument->copy(*(obj.m_referencedDocument.get()), copyop);
    for (it_m_referencingValues = obj.m_referencingValues.begin(); it_m_referencingValues != obj.m_referencingValues.end(); ++it_m_referencingValues) {
        Step::RefPtr< IfcAppliedValue > copyTarget = copyop((*it_m_referencingValues).get());
        m_referencingValues.insert(copyTarget.get());
    }
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferencesValueDocument::s_type("IfcReferencesValueDocument");
IfcReferencesValueDocument::Inverted_ReferencingValues_type::Inverted_ReferencingValues_type() {
}

void IfcReferencesValueDocument::Inverted_ReferencingValues_type::setOwner(IfcReferencesValueDocument *owner) {
    mOwner = owner;
}

void IfcReferencesValueDocument::Inverted_ReferencingValues_type::insert(const Step::RefPtr< IfcAppliedValue > &value) {
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    Step::Set< Step::RefPtr< IfcAppliedValue > >::insert(value);
    inverse->m_valuesReferenced.insert(mOwner);
}

