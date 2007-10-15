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

#include "ifc2x3/IfcBoxedHalfSpace.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundingBox.h"
#include "ifc2x3/IfcHalfSpaceSolid.h"
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

IfcBoxedHalfSpace::IfcBoxedHalfSpace(Step::Id id, Step::SPFData *args) : IfcHalfSpaceSolid(id, args) {
    m_enclosure = NULL;
}

IfcBoxedHalfSpace::~IfcBoxedHalfSpace() {
}

bool IfcBoxedHalfSpace::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBoxedHalfSpace(this);
}

const std::string &IfcBoxedHalfSpace::type() {
    return IfcBoxedHalfSpace::s_type.getName();
}

Step::ClassType IfcBoxedHalfSpace::getClassType() {
    return IfcBoxedHalfSpace::s_type;
}

Step::ClassType IfcBoxedHalfSpace::getType() const {
    return IfcBoxedHalfSpace::s_type;
}

bool IfcBoxedHalfSpace::isOfType(Step::ClassType t) {
    return IfcBoxedHalfSpace::s_type == t ? true : IfcHalfSpaceSolid::isOfType(t);
}

IfcBoundingBox *IfcBoxedHalfSpace::getEnclosure() {
    if (Step::BaseObject::inited()) {
        return m_enclosure.get();
    }
    else {
        return NULL;
    }
}

void IfcBoxedHalfSpace::setEnclosure(const Step::RefPtr< IfcBoundingBox > &value) {
    m_enclosure = value;
}

void IfcBoxedHalfSpace::release() {
    IfcHalfSpaceSolid::release();
    m_enclosure.release();
}

bool IfcBoxedHalfSpace::init() {
    bool status = IfcHalfSpaceSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_enclosure = NULL;
    }
    else {
        m_enclosure = static_cast< IfcBoundingBox * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcBoxedHalfSpace::copy(const IfcBoxedHalfSpace &obj, const CopyOp &copyop) {
    IfcHalfSpaceSolid::copy(obj, copyop);
    setEnclosure(copyop(obj.m_enclosure.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoxedHalfSpace::s_type("IfcBoxedHalfSpace");
