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

#include "ifc2x3/IfcConstraintClassificationRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassificationNotationSelect.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/Visitor.h"
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

IfcConstraintClassificationRelationship::IfcConstraintClassificationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_classifiedConstraint = NULL;
    m_relatedClassifications.setUnset(true);
}

IfcConstraintClassificationRelationship::~IfcConstraintClassificationRelationship() {
}

bool IfcConstraintClassificationRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConstraintClassificationRelationship(this);
}

const std::string &IfcConstraintClassificationRelationship::type() {
    return IfcConstraintClassificationRelationship::s_type.getName();
}

Step::ClassType IfcConstraintClassificationRelationship::getClassType() {
    return IfcConstraintClassificationRelationship::s_type;
}

Step::ClassType IfcConstraintClassificationRelationship::getType() const {
    return IfcConstraintClassificationRelationship::s_type;
}

bool IfcConstraintClassificationRelationship::isOfType(Step::ClassType t) {
    return IfcConstraintClassificationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcConstraint *IfcConstraintClassificationRelationship::getClassifiedConstraint() {
    if (Step::BaseObject::inited()) {
        return m_classifiedConstraint.get();
    }
    else {
        return NULL;
    }
}

void IfcConstraintClassificationRelationship::setClassifiedConstraint(const Step::RefPtr< IfcConstraint > &value) {
    m_classifiedConstraint = value;
    m_classifiedConstraint->m_classifiedAs.insert(this);
}

Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &IfcConstraintClassificationRelationship::getRelatedClassifications() {
    if (Step::BaseObject::inited()) {
        return m_relatedClassifications;
    }
    else {
        m_relatedClassifications.setUnset(true);
        return m_relatedClassifications;
    }
}

void IfcConstraintClassificationRelationship::setRelatedClassifications(const Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &value) {
    m_relatedClassifications = value;
}

void IfcConstraintClassificationRelationship::release() {
    m_classifiedConstraint.release();
    m_relatedClassifications.clear();
}

bool IfcConstraintClassificationRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_classifiedConstraint = NULL;
    }
    else {
        m_classifiedConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedClassifications.setUnset(true);
    }
    else {
        m_relatedClassifications.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClassificationNotationSelect > attr2;
                attr2 = new IfcClassificationNotationSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_relatedClassifications.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcConstraintClassificationRelationship::copy(const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationNotationSelect > >::const_iterator it_m_relatedClassifications;
    Step::BaseEntity::copy(obj, copyop);
    setClassifiedConstraint(copyop(obj.m_classifiedConstraint.get()));
    for (it_m_relatedClassifications = obj.m_relatedClassifications.begin(); it_m_relatedClassifications != obj.m_relatedClassifications.end(); ++it_m_relatedClassifications) {
        Step::RefPtr< IfcClassificationNotationSelect > copyTarget = new IfcClassificationNotationSelect;
        copyTarget->copy(*((*it_m_relatedClassifications).get()), copyop);
        m_relatedClassifications.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraintClassificationRelationship::s_type("IfcConstraintClassificationRelationship");
