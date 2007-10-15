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

#include "ifc2x3/IfcSystem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcRelServicesBuildings.h"
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

IfcSystem::IfcSystem(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
    m_servicesBuildings.setUnset(true);
}

IfcSystem::~IfcSystem() {
}

bool IfcSystem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSystem(this);
}

const std::string &IfcSystem::type() {
    return IfcSystem::s_type.getName();
}

Step::ClassType IfcSystem::getClassType() {
    return IfcSystem::s_type;
}

Step::ClassType IfcSystem::getType() const {
    return IfcSystem::s_type;
}

bool IfcSystem::isOfType(Step::ClassType t) {
    return IfcSystem::s_type == t ? true : IfcGroup::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcRelServicesBuildings > > &IfcSystem::getServicesBuildings() {
    if (Step::BaseObject::inited()) {
        return m_servicesBuildings;
    }
    else {
        m_servicesBuildings.setUnset(true);
        return m_servicesBuildings;
    }
}

void IfcSystem::release() {
    IfcGroup::release();
}

bool IfcSystem::init() {
    bool status = IfcGroup::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelServicesBuildings::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_servicesBuildings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_servicesBuildings.insert(static_cast< IfcRelServicesBuildings * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSystem::copy(const IfcSystem &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSystem::s_type("IfcSystem");
