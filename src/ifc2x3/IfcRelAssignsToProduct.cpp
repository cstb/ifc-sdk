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

#include "ifc2x3/IfcRelAssignsToProduct.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelAssigns.h"
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

IfcRelAssignsToProduct::IfcRelAssignsToProduct(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingProduct = NULL;
}

IfcRelAssignsToProduct::~IfcRelAssignsToProduct() {
}

bool IfcRelAssignsToProduct::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsToProduct(this);
}

const std::string &IfcRelAssignsToProduct::type() {
    return IfcRelAssignsToProduct::s_type.getName();
}

Step::ClassType IfcRelAssignsToProduct::getClassType() {
    return IfcRelAssignsToProduct::s_type;
}

Step::ClassType IfcRelAssignsToProduct::getType() const {
    return IfcRelAssignsToProduct::s_type;
}

bool IfcRelAssignsToProduct::isOfType(Step::ClassType t) {
    return IfcRelAssignsToProduct::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcProduct *IfcRelAssignsToProduct::getRelatingProduct() {
    if (Step::BaseObject::inited()) {
        return m_relatingProduct.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssignsToProduct::setRelatingProduct(const Step::RefPtr< IfcProduct > &value) {
    m_relatingProduct = value;
    m_relatingProduct->m_referencedBy.insert(this);
}

void IfcRelAssignsToProduct::release() {
    IfcRelAssigns::release();
    m_relatingProduct.release();
}

bool IfcRelAssignsToProduct::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingProduct = NULL;
    }
    else {
        m_relatingProduct = static_cast< IfcProduct * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssignsToProduct::copy(const IfcRelAssignsToProduct &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingProduct(copyop(obj.m_relatingProduct.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProduct::s_type("IfcRelAssignsToProduct");
