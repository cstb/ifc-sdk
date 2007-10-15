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

#include "ifc2x3/IfcMaterialList.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMaterialList::IfcMaterialList(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_materials.setUnset(true);
}

IfcMaterialList::~IfcMaterialList() {
}

bool IfcMaterialList::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMaterialList(this);
}

const std::string &IfcMaterialList::type() {
    return IfcMaterialList::s_type.getName();
}

Step::ClassType IfcMaterialList::getClassType() {
    return IfcMaterialList::s_type;
}

Step::ClassType IfcMaterialList::getType() const {
    return IfcMaterialList::s_type;
}

bool IfcMaterialList::isOfType(Step::ClassType t) {
    return IfcMaterialList::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::List< Step::RefPtr< IfcMaterial > > &IfcMaterialList::getMaterials() {
    if (Step::BaseObject::inited()) {
        return m_materials;
    }
    else {
        m_materials.setUnset(true);
        return m_materials;
    }
}

void IfcMaterialList::setMaterials(const Step::List< Step::RefPtr< IfcMaterial > > &value) {
    m_materials = value;
}

void IfcMaterialList::release() {
    m_materials.clear();
}

bool IfcMaterialList::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_materials.setUnset(true);
    }
    else {
        m_materials.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcMaterial > attr2;
                attr2 = static_cast< IfcMaterial * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_materials.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcMaterialList::copy(const IfcMaterialList &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcMaterial > >::const_iterator it_m_materials;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_materials = obj.m_materials.begin(); it_m_materials != obj.m_materials.end(); ++it_m_materials) {
        Step::RefPtr< IfcMaterial > copyTarget = copyop((*it_m_materials).get());
        m_materials.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialList::s_type("IfcMaterialList");
