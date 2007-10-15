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

#include "ifc2x3/IfcProductRepresentation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentation.h"
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

IfcProductRepresentation::IfcProductRepresentation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_representations.setUnset(true);
    m_representations.setOwner(this);
}

IfcProductRepresentation::~IfcProductRepresentation() {
}

bool IfcProductRepresentation::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProductRepresentation(this);
}

const std::string &IfcProductRepresentation::type() {
    return IfcProductRepresentation::s_type.getName();
}

Step::ClassType IfcProductRepresentation::getClassType() {
    return IfcProductRepresentation::s_type;
}

Step::ClassType IfcProductRepresentation::getType() const {
    return IfcProductRepresentation::s_type;
}

bool IfcProductRepresentation::isOfType(Step::ClassType t) {
    return IfcProductRepresentation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcProductRepresentation::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcProductRepresentation::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcProductRepresentation::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcProductRepresentation::setDescription(const IfcText &value) {
    m_description = value;
}

Step::List< Step::RefPtr< IfcRepresentation > > &IfcProductRepresentation::getRepresentations() {
    if (Step::BaseObject::inited()) {
        return m_representations;
    }
    else {
        m_representations.setUnset(true);
        return m_representations;
    }
}

void IfcProductRepresentation::release() {
    m_representations.clear();
}

bool IfcProductRepresentation::init() {
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
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representations.setUnset(true);
    }
    else {
        m_representations.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentation > attr2;
                attr2 = static_cast< IfcRepresentation * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_representations.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcProductRepresentation::copy(const IfcProductRepresentation &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcRepresentation > >::const_iterator it_m_representations;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    for (it_m_representations = obj.m_representations.begin(); it_m_representations != obj.m_representations.end(); ++it_m_representations) {
        Step::RefPtr< IfcRepresentation > copyTarget = copyop((*it_m_representations).get());
        m_representations.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProductRepresentation::s_type("IfcProductRepresentation");
IfcProductRepresentation::Inverted_Representations_type::Inverted_Representations_type() {
}

void IfcProductRepresentation::Inverted_Representations_type::setOwner(IfcProductRepresentation *owner) {
    mOwner = owner;
}

void IfcProductRepresentation::Inverted_Representations_type::push_back(const Step::RefPtr< IfcRepresentation > &value) {
    IfcRepresentation *inverse = const_cast< IfcRepresentation * > (value.get());
    Step::List< Step::RefPtr< IfcRepresentation > >::push_back(value);
    inverse->m_ofProductRepresentation.insert(mOwner);
}

