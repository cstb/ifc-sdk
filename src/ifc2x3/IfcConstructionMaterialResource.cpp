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

#include "ifc2x3/IfcConstructionMaterialResource.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorSelect.h"
#include "ifc2x3/IfcConstructionResource.h"
#include "ifc2x3/Visitor.h"
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

IfcConstructionMaterialResource::IfcConstructionMaterialResource(Step::Id id, Step::SPFData *args) : IfcConstructionResource(id, args) {
    m_suppliers.setUnset(true);
    m_usageRatio = Step::getUnset(m_usageRatio);
}

IfcConstructionMaterialResource::~IfcConstructionMaterialResource() {
}

bool IfcConstructionMaterialResource::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConstructionMaterialResource(this);
}

const std::string &IfcConstructionMaterialResource::type() {
    return IfcConstructionMaterialResource::s_type.getName();
}

Step::ClassType IfcConstructionMaterialResource::getClassType() {
    return IfcConstructionMaterialResource::s_type;
}

Step::ClassType IfcConstructionMaterialResource::getType() const {
    return IfcConstructionMaterialResource::s_type;
}

bool IfcConstructionMaterialResource::isOfType(Step::ClassType t) {
    return IfcConstructionMaterialResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

Step::Set< Step::RefPtr< IfcActorSelect > > &IfcConstructionMaterialResource::getSuppliers() {
    if (Step::BaseObject::inited()) {
        return m_suppliers;
    }
    else {
        m_suppliers.setUnset(true);
        return m_suppliers;
    }
}

void IfcConstructionMaterialResource::setSuppliers(const Step::Set< Step::RefPtr< IfcActorSelect > > &value) {
    m_suppliers = value;
}

IfcRatioMeasure IfcConstructionMaterialResource::getUsageRatio() {
    if (Step::BaseObject::inited()) {
        return m_usageRatio;
    }
    else {
        return Step::getUnset(m_usageRatio);
    }
}

void IfcConstructionMaterialResource::setUsageRatio(IfcRatioMeasure value) {
    m_usageRatio = value;
}

void IfcConstructionMaterialResource::release() {
    IfcConstructionResource::release();
    m_suppliers.clear();
}

bool IfcConstructionMaterialResource::init() {
    bool status = IfcConstructionResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_suppliers.setUnset(true);
    }
    else {
        m_suppliers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorSelect > attr2;
                attr2 = new IfcActorSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_suppliers.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usageRatio = Step::getUnset(m_usageRatio);
    }
    else {
        m_usageRatio = Step::spfToReal(arg);
    }
    return true;
}

void IfcConstructionMaterialResource::copy(const IfcConstructionMaterialResource &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcActorSelect > >::const_iterator it_m_suppliers;
    IfcConstructionResource::copy(obj, copyop);
    for (it_m_suppliers = obj.m_suppliers.begin(); it_m_suppliers != obj.m_suppliers.end(); ++it_m_suppliers) {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_suppliers).get()), copyop);
        m_suppliers.insert(copyTarget.get());
    }
    setUsageRatio(obj.m_usageRatio);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstructionMaterialResource::s_type("IfcConstructionMaterialResource");
