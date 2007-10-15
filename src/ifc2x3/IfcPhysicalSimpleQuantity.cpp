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

#include "ifc2x3/IfcPhysicalSimpleQuantity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/IfcPhysicalQuantity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPhysicalSimpleQuantity::IfcPhysicalSimpleQuantity(Step::Id id, Step::SPFData *args) : IfcPhysicalQuantity(id, args) {
    m_unit = NULL;
}

IfcPhysicalSimpleQuantity::~IfcPhysicalSimpleQuantity() {
}

bool IfcPhysicalSimpleQuantity::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPhysicalSimpleQuantity(this);
}

const std::string &IfcPhysicalSimpleQuantity::type() {
    return IfcPhysicalSimpleQuantity::s_type.getName();
}

Step::ClassType IfcPhysicalSimpleQuantity::getClassType() {
    return IfcPhysicalSimpleQuantity::s_type;
}

Step::ClassType IfcPhysicalSimpleQuantity::getType() const {
    return IfcPhysicalSimpleQuantity::s_type;
}

bool IfcPhysicalSimpleQuantity::isOfType(Step::ClassType t) {
    return IfcPhysicalSimpleQuantity::s_type == t ? true : IfcPhysicalQuantity::isOfType(t);
}

IfcNamedUnit *IfcPhysicalSimpleQuantity::getUnit() {
    if (Step::BaseObject::inited()) {
        return m_unit.get();
    }
    else {
        return NULL;
    }
}

void IfcPhysicalSimpleQuantity::setUnit(const Step::RefPtr< IfcNamedUnit > &value) {
    m_unit = value;
}

void IfcPhysicalSimpleQuantity::release() {
    IfcPhysicalQuantity::release();
    m_unit.release();
}

bool IfcPhysicalSimpleQuantity::init() {
    bool status = IfcPhysicalQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unit = NULL;
    }
    else {
        m_unit = static_cast< IfcNamedUnit * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcPhysicalSimpleQuantity::copy(const IfcPhysicalSimpleQuantity &obj, const CopyOp &copyop) {
    IfcPhysicalQuantity::copy(obj, copyop);
    setUnit(copyop(obj.m_unit.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPhysicalSimpleQuantity::s_type("IfcPhysicalSimpleQuantity");
