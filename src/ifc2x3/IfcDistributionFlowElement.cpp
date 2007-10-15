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

#include "ifc2x3/IfcDistributionFlowElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionElement.h"
#include "ifc2x3/IfcRelFlowControlElements.h"
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

IfcDistributionFlowElement::IfcDistributionFlowElement(Step::Id id, Step::SPFData *args) : IfcDistributionElement(id, args) {
    m_hasControlElements.setUnset(true);
}

IfcDistributionFlowElement::~IfcDistributionFlowElement() {
}

bool IfcDistributionFlowElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionFlowElement(this);
}

const std::string &IfcDistributionFlowElement::type() {
    return IfcDistributionFlowElement::s_type.getName();
}

Step::ClassType IfcDistributionFlowElement::getClassType() {
    return IfcDistributionFlowElement::s_type;
}

Step::ClassType IfcDistributionFlowElement::getType() const {
    return IfcDistributionFlowElement::s_type;
}

bool IfcDistributionFlowElement::isOfType(Step::ClassType t) {
    return IfcDistributionFlowElement::s_type == t ? true : IfcDistributionElement::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelFlowControlElements > > &IfcDistributionFlowElement::getHasControlElements() {
    if (Step::BaseObject::inited()) {
        return m_hasControlElements;
    }
    else {
        m_hasControlElements.setUnset(true);
        return m_hasControlElements;
    }
}

void IfcDistributionFlowElement::release() {
    IfcDistributionElement::release();
}

bool IfcDistributionFlowElement::init() {
    bool status = IfcDistributionElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelFlowControlElements::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_hasControlElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasControlElements.insert(static_cast< IfcRelFlowControlElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDistributionFlowElement::copy(const IfcDistributionFlowElement &obj, const CopyOp &copyop) {
    IfcDistributionElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionFlowElement::s_type("IfcDistributionFlowElement");
