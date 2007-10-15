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

#include "ifc2x3/IfcRelServicesBuildings.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/IfcSystem.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelServicesBuildings::IfcRelServicesBuildings(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingSystem = NULL;
    m_relatedBuildings.setUnset(true);
    m_relatedBuildings.setOwner(this);
}

IfcRelServicesBuildings::~IfcRelServicesBuildings() {
}

bool IfcRelServicesBuildings::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelServicesBuildings(this);
}

const std::string &IfcRelServicesBuildings::type() {
    return IfcRelServicesBuildings::s_type.getName();
}

Step::ClassType IfcRelServicesBuildings::getClassType() {
    return IfcRelServicesBuildings::s_type;
}

Step::ClassType IfcRelServicesBuildings::getType() const {
    return IfcRelServicesBuildings::s_type;
}

bool IfcRelServicesBuildings::isOfType(Step::ClassType t) {
    return IfcRelServicesBuildings::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcSystem *IfcRelServicesBuildings::getRelatingSystem() {
    if (Step::BaseObject::inited()) {
        return m_relatingSystem.get();
    }
    else {
        return NULL;
    }
}

void IfcRelServicesBuildings::setRelatingSystem(const Step::RefPtr< IfcSystem > &value) {
    m_relatingSystem = value;
    m_relatingSystem->m_servicesBuildings.insert(this);
}

Step::Set< Step::RefPtr< IfcSpatialStructureElement > > &IfcRelServicesBuildings::getRelatedBuildings() {
    if (Step::BaseObject::inited()) {
        return m_relatedBuildings;
    }
    else {
        m_relatedBuildings.setUnset(true);
        return m_relatedBuildings;
    }
}

void IfcRelServicesBuildings::release() {
    IfcRelConnects::release();
    m_relatingSystem.release();
    m_relatedBuildings.clear();
}

bool IfcRelServicesBuildings::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingSystem = NULL;
    }
    else {
        m_relatingSystem = static_cast< IfcSystem * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedBuildings.setUnset(true);
    }
    else {
        m_relatedBuildings.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSpatialStructureElement > attr2;
                attr2 = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relatedBuildings.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelServicesBuildings::copy(const IfcRelServicesBuildings &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcSpatialStructureElement > >::const_iterator it_m_relatedBuildings;
    IfcRelConnects::copy(obj, copyop);
    setRelatingSystem(copyop(obj.m_relatingSystem.get()));
    for (it_m_relatedBuildings = obj.m_relatedBuildings.begin(); it_m_relatedBuildings != obj.m_relatedBuildings.end(); ++it_m_relatedBuildings) {
        Step::RefPtr< IfcSpatialStructureElement > copyTarget = copyop((*it_m_relatedBuildings).get());
        m_relatedBuildings.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelServicesBuildings::s_type("IfcRelServicesBuildings");
IfcRelServicesBuildings::Inverted_RelatedBuildings_type::Inverted_RelatedBuildings_type() {
}

void IfcRelServicesBuildings::Inverted_RelatedBuildings_type::setOwner(IfcRelServicesBuildings *owner) {
    mOwner = owner;
}

void IfcRelServicesBuildings::Inverted_RelatedBuildings_type::insert(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    IfcSpatialStructureElement *inverse = const_cast< IfcSpatialStructureElement * > (value.get());
    Step::Set< Step::RefPtr< IfcSpatialStructureElement > >::insert(value);
    inverse->m_servicedBySystems.insert(mOwner);
}

