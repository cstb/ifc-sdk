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

#include "ifc2x3/IfcCivilElementPart.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBridgeSegment.h"
#include "ifc2x3/IfcElementPart.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCivilElementPart::IfcCivilElementPart(Step::Id id, Step::SPFData *args) : IfcElementPart(id, args) {
}

IfcCivilElementPart::~IfcCivilElementPart() {
}

bool IfcCivilElementPart::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCivilElementPart(this);
}

const std::string &IfcCivilElementPart::type() {
    return IfcCivilElementPart::s_type.getName();
}

Step::ClassType IfcCivilElementPart::getClassType() {
    return IfcCivilElementPart::s_type;
}

Step::ClassType IfcCivilElementPart::getType() const {
    return IfcCivilElementPart::s_type;
}

bool IfcCivilElementPart::isOfType(Step::ClassType t) {
    return IfcCivilElementPart::s_type == t ? true : IfcElementPart::isOfType(t);
}

IfcBridgeSegment *IfcCivilElementPart::getContainedInSegment() {
    if (Step::BaseObject::inited()) {
        return m_containedInSegment.get();
    }
    else {
        return NULL;
    }
}

void IfcCivilElementPart::release() {
    IfcElementPart::release();
}

bool IfcCivilElementPart::init() {
    bool status = IfcElementPart::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcBridgeSegment::getClassType(), 9);
    if (inverses) {
        m_containedInSegment = static_cast< IfcBridgeSegment * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcCivilElementPart::copy(const IfcCivilElementPart &obj, const CopyOp &copyop) {
    IfcElementPart::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCivilElementPart::s_type("IfcCivilElementPart");
