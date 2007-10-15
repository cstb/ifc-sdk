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

#include "ifc2x3/IfcTwoDirectionRepeatFactor.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOneDirectionRepeatFactor.h"
#include "ifc2x3/IfcVector.h"
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

IfcTwoDirectionRepeatFactor::IfcTwoDirectionRepeatFactor(Step::Id id, Step::SPFData *args) : IfcOneDirectionRepeatFactor(id, args) {
    m_secondRepeatFactor = NULL;
}

IfcTwoDirectionRepeatFactor::~IfcTwoDirectionRepeatFactor() {
}

bool IfcTwoDirectionRepeatFactor::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTwoDirectionRepeatFactor(this);
}

const std::string &IfcTwoDirectionRepeatFactor::type() {
    return IfcTwoDirectionRepeatFactor::s_type.getName();
}

Step::ClassType IfcTwoDirectionRepeatFactor::getClassType() {
    return IfcTwoDirectionRepeatFactor::s_type;
}

Step::ClassType IfcTwoDirectionRepeatFactor::getType() const {
    return IfcTwoDirectionRepeatFactor::s_type;
}

bool IfcTwoDirectionRepeatFactor::isOfType(Step::ClassType t) {
    return IfcTwoDirectionRepeatFactor::s_type == t ? true : IfcOneDirectionRepeatFactor::isOfType(t);
}

IfcVector *IfcTwoDirectionRepeatFactor::getSecondRepeatFactor() {
    if (Step::BaseObject::inited()) {
        return m_secondRepeatFactor.get();
    }
    else {
        return NULL;
    }
}

void IfcTwoDirectionRepeatFactor::setSecondRepeatFactor(const Step::RefPtr< IfcVector > &value) {
    m_secondRepeatFactor = value;
}

void IfcTwoDirectionRepeatFactor::release() {
    IfcOneDirectionRepeatFactor::release();
    m_secondRepeatFactor.release();
}

bool IfcTwoDirectionRepeatFactor::init() {
    bool status = IfcOneDirectionRepeatFactor::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondRepeatFactor = NULL;
    }
    else {
        m_secondRepeatFactor = static_cast< IfcVector * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcTwoDirectionRepeatFactor::copy(const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop) {
    IfcOneDirectionRepeatFactor::copy(obj, copyop);
    setSecondRepeatFactor(copyop(obj.m_secondRepeatFactor.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTwoDirectionRepeatFactor::s_type("IfcTwoDirectionRepeatFactor");
