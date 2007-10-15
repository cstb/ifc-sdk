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

#include "ifc2x3/IfcManifoldSolidBrep.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClosedShell.h"
#include "ifc2x3/IfcSolidModel.h"
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

IfcManifoldSolidBrep::IfcManifoldSolidBrep(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_outer = NULL;
}

IfcManifoldSolidBrep::~IfcManifoldSolidBrep() {
}

bool IfcManifoldSolidBrep::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcManifoldSolidBrep(this);
}

const std::string &IfcManifoldSolidBrep::type() {
    return IfcManifoldSolidBrep::s_type.getName();
}

Step::ClassType IfcManifoldSolidBrep::getClassType() {
    return IfcManifoldSolidBrep::s_type;
}

Step::ClassType IfcManifoldSolidBrep::getType() const {
    return IfcManifoldSolidBrep::s_type;
}

bool IfcManifoldSolidBrep::isOfType(Step::ClassType t) {
    return IfcManifoldSolidBrep::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcClosedShell *IfcManifoldSolidBrep::getOuter() {
    if (Step::BaseObject::inited()) {
        return m_outer.get();
    }
    else {
        return NULL;
    }
}

void IfcManifoldSolidBrep::setOuter(const Step::RefPtr< IfcClosedShell > &value) {
    m_outer = value;
}

void IfcManifoldSolidBrep::release() {
    IfcSolidModel::release();
    m_outer.release();
}

bool IfcManifoldSolidBrep::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outer = NULL;
    }
    else {
        m_outer = static_cast< IfcClosedShell * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcManifoldSolidBrep::copy(const IfcManifoldSolidBrep &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setOuter(copyop(obj.m_outer.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcManifoldSolidBrep::s_type("IfcManifoldSolidBrep");
