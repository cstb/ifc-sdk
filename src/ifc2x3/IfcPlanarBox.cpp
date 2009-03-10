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

#include "ifc2x3/IfcPlanarBox.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement.h"
#include "ifc2x3/IfcPlanarExtent.h"
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

IfcPlanarBox::IfcPlanarBox(Step::Id id, Step::SPFData *args) : IfcPlanarExtent(id, args) {
    m_placement = NULL;
}

IfcPlanarBox::~IfcPlanarBox() {
}

bool IfcPlanarBox::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlanarBox(this);
}

const std::string &IfcPlanarBox::type() const {
    return IfcPlanarBox::s_type.getName();
}

const Step::ClassType &IfcPlanarBox::getClassType() {
    return IfcPlanarBox::s_type;
}

const Step::ClassType &IfcPlanarBox::getType() const {
    return IfcPlanarBox::s_type;
}

bool IfcPlanarBox::isOfType(const Step::ClassType &t) const {
    return IfcPlanarBox::s_type == t ? true : IfcPlanarExtent::isOfType(t);
}

IfcAxis2Placement *IfcPlanarBox::getPlacement() {
    if (Step::BaseObject::inited()) {
        return m_placement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcPlanarBox::getPlacement() const {
    IfcPlanarBox * deConstObject = const_cast< IfcPlanarBox * > (this);
    return deConstObject->getPlacement();
}

void IfcPlanarBox::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_placement = value;
}

bool IfcPlanarBox::init() {
    bool status = IfcPlanarExtent::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placement = NULL;
    }
    else {
        m_placement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_placement->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcPlanarBox::copy(const IfcPlanarBox &obj, const CopyOp &copyop) {
    IfcPlanarExtent::copy(obj, copyop);
    m_placement = new IfcAxis2Placement;
    m_placement->copy(*(obj.m_placement.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlanarBox::s_type("IfcPlanarBox");
