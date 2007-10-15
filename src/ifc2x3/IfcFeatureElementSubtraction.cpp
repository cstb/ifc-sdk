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

#include "ifc2x3/IfcFeatureElementSubtraction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFeatureElement.h"
#include "ifc2x3/IfcRelVoidsElement.h"
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

IfcFeatureElementSubtraction::IfcFeatureElementSubtraction(Step::Id id, Step::SPFData *args) : IfcFeatureElement(id, args) {
}

IfcFeatureElementSubtraction::~IfcFeatureElementSubtraction() {
}

bool IfcFeatureElementSubtraction::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFeatureElementSubtraction(this);
}

const std::string &IfcFeatureElementSubtraction::type() {
    return IfcFeatureElementSubtraction::s_type.getName();
}

Step::ClassType IfcFeatureElementSubtraction::getClassType() {
    return IfcFeatureElementSubtraction::s_type;
}

Step::ClassType IfcFeatureElementSubtraction::getType() const {
    return IfcFeatureElementSubtraction::s_type;
}

bool IfcFeatureElementSubtraction::isOfType(Step::ClassType t) {
    return IfcFeatureElementSubtraction::s_type == t ? true : IfcFeatureElement::isOfType(t);
}

IfcRelVoidsElement *IfcFeatureElementSubtraction::getVoidsElements() {
    if (Step::BaseObject::inited()) {
        return m_voidsElements.get();
    }
    else {
        return NULL;
    }
}

void IfcFeatureElementSubtraction::release() {
    IfcFeatureElement::release();
}

bool IfcFeatureElementSubtraction::init() {
    bool status = IfcFeatureElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 5);
    if (inverses) {
        m_voidsElements = static_cast< IfcRelVoidsElement * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcFeatureElementSubtraction::copy(const IfcFeatureElementSubtraction &obj, const CopyOp &copyop) {
    IfcFeatureElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFeatureElementSubtraction::s_type("IfcFeatureElementSubtraction");
