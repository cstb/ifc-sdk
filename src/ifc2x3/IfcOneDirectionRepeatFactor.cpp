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

#include "ifc2x3/IfcOneDirectionRepeatFactor.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
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

IfcOneDirectionRepeatFactor::IfcOneDirectionRepeatFactor(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_repeatFactor = NULL;
}

IfcOneDirectionRepeatFactor::~IfcOneDirectionRepeatFactor() {
}

bool IfcOneDirectionRepeatFactor::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOneDirectionRepeatFactor(this);
}

const std::string &IfcOneDirectionRepeatFactor::type() {
    return IfcOneDirectionRepeatFactor::s_type.getName();
}

Step::ClassType IfcOneDirectionRepeatFactor::getClassType() {
    return IfcOneDirectionRepeatFactor::s_type;
}

Step::ClassType IfcOneDirectionRepeatFactor::getType() const {
    return IfcOneDirectionRepeatFactor::s_type;
}

bool IfcOneDirectionRepeatFactor::isOfType(Step::ClassType t) {
    return IfcOneDirectionRepeatFactor::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcVector *IfcOneDirectionRepeatFactor::getRepeatFactor() {
    if (Step::BaseObject::inited()) {
        return m_repeatFactor.get();
    }
    else {
        return NULL;
    }
}

void IfcOneDirectionRepeatFactor::setRepeatFactor(const Step::RefPtr< IfcVector > &value) {
    m_repeatFactor = value;
}

void IfcOneDirectionRepeatFactor::release() {
    IfcGeometricRepresentationItem::release();
    m_repeatFactor.release();
}

bool IfcOneDirectionRepeatFactor::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_repeatFactor = NULL;
    }
    else {
        m_repeatFactor = static_cast< IfcVector * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcOneDirectionRepeatFactor::copy(const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setRepeatFactor(copyop(obj.m_repeatFactor.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOneDirectionRepeatFactor::s_type("IfcOneDirectionRepeatFactor");
