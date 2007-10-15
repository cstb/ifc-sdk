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

#include "ifc2x3/IfcRelAssociatesMaterial.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialSelect.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelAssociatesMaterial::IfcRelAssociatesMaterial(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingMaterial = NULL;
}

IfcRelAssociatesMaterial::~IfcRelAssociatesMaterial() {
}

bool IfcRelAssociatesMaterial::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssociatesMaterial(this);
}

const std::string &IfcRelAssociatesMaterial::type() {
    return IfcRelAssociatesMaterial::s_type.getName();
}

Step::ClassType IfcRelAssociatesMaterial::getClassType() {
    return IfcRelAssociatesMaterial::s_type;
}

Step::ClassType IfcRelAssociatesMaterial::getType() const {
    return IfcRelAssociatesMaterial::s_type;
}

bool IfcRelAssociatesMaterial::isOfType(Step::ClassType t) {
    return IfcRelAssociatesMaterial::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcMaterialSelect *IfcRelAssociatesMaterial::getRelatingMaterial() {
    if (Step::BaseObject::inited()) {
        return m_relatingMaterial.get();
    }
    else {
        return NULL;
    }
}

void IfcRelAssociatesMaterial::setRelatingMaterial(const Step::RefPtr< IfcMaterialSelect > &value) {
    m_relatingMaterial = value;
}

void IfcRelAssociatesMaterial::release() {
    IfcRelAssociates::release();
}

bool IfcRelAssociatesMaterial::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingMaterial = NULL;
    }
    else {
        m_relatingMaterial = new IfcMaterialSelect;
        if (arg[0] == '#') {
            m_relatingMaterial->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcRelAssociatesMaterial::copy(const IfcRelAssociatesMaterial &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingMaterial = new IfcMaterialSelect;
    m_relatingMaterial->copy(*(obj.m_relatingMaterial.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesMaterial::s_type("IfcRelAssociatesMaterial");
