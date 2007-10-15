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

#include "ifc2x3/IfcOpeningElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFeatureElementSubtraction.h"
#include "ifc2x3/IfcRelFillsElement.h"
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

IfcOpeningElement::IfcOpeningElement(Step::Id id, Step::SPFData *args) : IfcFeatureElementSubtraction(id, args) {
    m_hasFillings.setUnset(true);
}

IfcOpeningElement::~IfcOpeningElement() {
}

bool IfcOpeningElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOpeningElement(this);
}

const std::string &IfcOpeningElement::type() {
    return IfcOpeningElement::s_type.getName();
}

Step::ClassType IfcOpeningElement::getClassType() {
    return IfcOpeningElement::s_type;
}

Step::ClassType IfcOpeningElement::getType() const {
    return IfcOpeningElement::s_type;
}

bool IfcOpeningElement::isOfType(Step::ClassType t) {
    return IfcOpeningElement::s_type == t ? true : IfcFeatureElementSubtraction::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelFillsElement > > &IfcOpeningElement::getHasFillings() {
    if (Step::BaseObject::inited()) {
        return m_hasFillings;
    }
    else {
        m_hasFillings.setUnset(true);
        return m_hasFillings;
    }
}

void IfcOpeningElement::release() {
    IfcFeatureElementSubtraction::release();
}

bool IfcOpeningElement::init() {
    bool status = IfcFeatureElementSubtraction::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasFillings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasFillings.insert(static_cast< IfcRelFillsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcOpeningElement::copy(const IfcOpeningElement &obj, const CopyOp &copyop) {
    IfcFeatureElementSubtraction::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOpeningElement::s_type("IfcOpeningElement");
