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

#include "ifc2x3/IfcMaterialClassificationRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassificationNotationSelect.h"
#include "ifc2x3/IfcMaterial.h"
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

IfcMaterialClassificationRelationship::IfcMaterialClassificationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_materialClassifications.setUnset(true);
    m_classifiedMaterial = NULL;
}

IfcMaterialClassificationRelationship::~IfcMaterialClassificationRelationship() {
}

bool IfcMaterialClassificationRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterialClassificationRelationship(this);
}

const std::string &IfcMaterialClassificationRelationship::type() {
    return IfcMaterialClassificationRelationship::s_type.getName();
}

Step::ClassType IfcMaterialClassificationRelationship::getClassType() {
    return IfcMaterialClassificationRelationship::s_type;
}

Step::ClassType IfcMaterialClassificationRelationship::getType() const {
    return IfcMaterialClassificationRelationship::s_type;
}

bool IfcMaterialClassificationRelationship::isOfType(Step::ClassType t) {
    return IfcMaterialClassificationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &IfcMaterialClassificationRelationship::getMaterialClassifications() {
    if (Step::BaseObject::inited()) {
        return m_materialClassifications;
    }
    else {
        m_materialClassifications.setUnset(true);
        return m_materialClassifications;
    }
}

void IfcMaterialClassificationRelationship::setMaterialClassifications(const Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &value) {
    m_materialClassifications = value;
}

IfcMaterial *IfcMaterialClassificationRelationship::getClassifiedMaterial() {
    if (Step::BaseObject::inited()) {
        return m_classifiedMaterial.get();
    }
    else {
        return NULL;
    }
}

void IfcMaterialClassificationRelationship::setClassifiedMaterial(const Step::RefPtr< IfcMaterial > &value) {
    m_classifiedMaterial = value;
    m_classifiedMaterial->m_classifiedAs.insert(this);
}

void IfcMaterialClassificationRelationship::release() {
    m_materialClassifications.clear();
    m_classifiedMaterial.release();
}

bool IfcMaterialClassificationRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_materialClassifications.setUnset(true);
    }
    else {
        m_materialClassifications.setUnset(false);
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
                m_materialClassifications.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_classifiedMaterial = NULL;
    }
    else {
        m_classifiedMaterial = static_cast< IfcMaterial * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcMaterialClassificationRelationship::copy(const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationNotationSelect > >::const_iterator it_m_materialClassifications;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_materialClassifications = obj.m_materialClassifications.begin(); it_m_materialClassifications != obj.m_materialClassifications.end(); ++it_m_materialClassifications) {
        Step::RefPtr< IfcClassificationNotationSelect > copyTarget = new IfcClassificationNotationSelect;
        copyTarget->copy(*((*it_m_materialClassifications).get()), copyop);
        m_materialClassifications.insert(copyTarget.get());
    }
    setClassifiedMaterial(copyop(obj.m_classifiedMaterial.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialClassificationRelationship::s_type("IfcMaterialClassificationRelationship");
