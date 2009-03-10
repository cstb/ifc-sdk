/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcResource.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcRelAssignsToResource.h"
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

IfcResource::IfcResource(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
}

IfcResource::~IfcResource() {
}

bool IfcResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcResource(this);
}

const std::string &IfcResource::type() const {
    return IfcResource::s_type.getName();
}

const Step::ClassType &IfcResource::getClassType() {
    return IfcResource::s_type;
}

const Step::ClassType &IfcResource::getType() const {
    return IfcResource::s_type;
}

bool IfcResource::isOfType(const Step::ClassType &t) const {
    return IfcResource::s_type == t ? true : IfcObject::isOfType(t);
}

Inverse_Set_IfcRelAssignsToResource_0_n &IfcResource::getResourceOf() {
    if (Step::BaseObject::inited()) {
        return m_resourceOf;
    }
    else {
        m_resourceOf.setUnset(true);
        return m_resourceOf;
    }
}

const Inverse_Set_IfcRelAssignsToResource_0_n &IfcResource::getResourceOf() const {
    IfcResource * deConstObject = const_cast< IfcResource * > (this);
    return deConstObject->getResourceOf();
}

bool IfcResource::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssignsToResource::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_resourceOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_resourceOf.insert(static_cast< IfcRelAssignsToResource * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcResource::copy(const IfcResource &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcResource::s_type("IfcResource");
