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

#include "ifc2x3/IfcTextureVertex.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTextureVertex::IfcTextureVertex(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_coordinates.setUnset(true);
}

IfcTextureVertex::~IfcTextureVertex() {
}

bool IfcTextureVertex::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTextureVertex(this);
}

const std::string &IfcTextureVertex::type() {
    return IfcTextureVertex::s_type.getName();
}

Step::ClassType IfcTextureVertex::getClassType() {
    return IfcTextureVertex::s_type;
}

Step::ClassType IfcTextureVertex::getType() const {
    return IfcTextureVertex::s_type;
}

bool IfcTextureVertex::isOfType(Step::ClassType t) {
    return IfcTextureVertex::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::List< IfcParameterValue > &IfcTextureVertex::getCoordinates() {
    if (Step::BaseObject::inited()) {
        return m_coordinates;
    }
    else {
        m_coordinates.setUnset(true);
        return m_coordinates;
    }
}

void IfcTextureVertex::setCoordinates(const Step::List< IfcParameterValue > &value) {
    m_coordinates = value;
}

void IfcTextureVertex::release() {
    m_coordinates.clear();
}

bool IfcTextureVertex::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_coordinates.setUnset(true);
    }
    else {
        m_coordinates.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcParameterValue attr2;
                attr2 = Step::spfToReal(str1);
                m_coordinates.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTextureVertex::copy(const IfcTextureVertex &obj, const CopyOp &copyop) {
    Step::List< IfcParameterValue >::const_iterator it_m_coordinates;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_coordinates = obj.m_coordinates.begin(); it_m_coordinates != obj.m_coordinates.end(); ++it_m_coordinates) {
        IfcParameterValue copyTarget = (*it_m_coordinates);
        m_coordinates.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureVertex::s_type("IfcTextureVertex");
