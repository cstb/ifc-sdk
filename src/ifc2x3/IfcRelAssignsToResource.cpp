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

#include "ifc2x3/IfcRelAssignsToResource.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/IfcResource.h"
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

IfcRelAssignsToResource::IfcRelAssignsToResource(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingResource = NULL;
}

IfcRelAssignsToResource::~IfcRelAssignsToResource() {
}

bool IfcRelAssignsToResource::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsToResource(this);
}

const std::string &IfcRelAssignsToResource::type() {
    return IfcRelAssignsToResource::s_type.getName();
}

Step::ClassType IfcRelAssignsToResource::getClassType() {
    return IfcRelAssignsToResource::s_type;
}

Step::ClassType IfcRelAssignsToResource::getType() const {
    return IfcRelAssignsToResource::s_type;
}

bool IfcRelAssignsToResource::isOfType(Step::ClassType t) {
    return IfcRelAssignsToResource::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcResource *IfcRelAssignsToResource::getRelatingResource() {
    if (Step::BaseObject::inited()) {
        return m_relatingResource.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssignsToResource::setRelatingResource(const Step::RefPtr< IfcResource > &value) {
    m_relatingResource = value;
    m_relatingResource->m_resourceOf.insert(this);
}

void IfcRelAssignsToResource::release() {
    IfcRelAssigns::release();
    m_relatingResource.release();
}

bool IfcRelAssignsToResource::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingResource = NULL;
    }
    else {
        m_relatingResource = static_cast< IfcResource * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssignsToResource::copy(const IfcRelAssignsToResource &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingResource(copyop(obj.m_relatingResource.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToResource::s_type("IfcRelAssignsToResource");
