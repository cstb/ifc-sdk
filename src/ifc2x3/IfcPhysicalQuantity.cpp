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

#include "ifc2x3/IfcPhysicalQuantity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPhysicalComplexQuantity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPhysicalQuantity::IfcPhysicalQuantity(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_partOfComplex.setUnset(true);
}

IfcPhysicalQuantity::~IfcPhysicalQuantity() {
}

bool IfcPhysicalQuantity::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPhysicalQuantity(this);
}

const std::string &IfcPhysicalQuantity::type() {
    return IfcPhysicalQuantity::s_type.getName();
}

Step::ClassType IfcPhysicalQuantity::getClassType() {
    return IfcPhysicalQuantity::s_type;
}

Step::ClassType IfcPhysicalQuantity::getType() const {
    return IfcPhysicalQuantity::s_type;
}

bool IfcPhysicalQuantity::isOfType(Step::ClassType t) {
    return IfcPhysicalQuantity::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPhysicalQuantity::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcPhysicalQuantity::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcPhysicalQuantity::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcPhysicalQuantity::setDescription(const IfcText &value) {
    m_description = value;
}

Step::Set< Step::ObsPtr< IfcPhysicalComplexQuantity > > &IfcPhysicalQuantity::getPartOfComplex() {
    if (Step::BaseObject::inited()) {
        return m_partOfComplex;
    }
    else {
        m_partOfComplex.setUnset(true);
        return m_partOfComplex;
    }
}

void IfcPhysicalQuantity::release() {
}

bool IfcPhysicalQuantity::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
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
    inverses = m_args->getInverses(IfcPhysicalComplexQuantity::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_partOfComplex.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_partOfComplex.insert(static_cast< IfcPhysicalComplexQuantity * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPhysicalQuantity::copy(const IfcPhysicalQuantity &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPhysicalQuantity::s_type("IfcPhysicalQuantity");
