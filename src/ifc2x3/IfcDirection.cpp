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

#include "ifc2x3/IfcDirection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDirection::IfcDirection(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcDirection::~IfcDirection() {
}

bool IfcDirection::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDirection(this);
}

const std::string &IfcDirection::type() const {
    return IfcDirection::s_type.getName();
}

const Step::ClassType &IfcDirection::getClassType() {
    return IfcDirection::s_type;
}

const Step::ClassType &IfcDirection::getType() const {
    return IfcDirection::s_type;
}

bool IfcDirection::isOfType(const Step::ClassType &t) const {
    return IfcDirection::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

List_Real_2_3 &IfcDirection::getDirectionRatios() {
    if (Step::BaseObject::inited()) {
        return m_directionRatios;
    }
    else {
        m_directionRatios.setUnset(true);
        return m_directionRatios;
    }
}

const List_Real_2_3 &IfcDirection::getDirectionRatios() const {
    IfcDirection * deConstObject = const_cast< IfcDirection * > (this);
    return deConstObject->getDirectionRatios();
}

void IfcDirection::setDirectionRatios(const List_Real_2_3 &value) {
    m_directionRatios = value;
}

bool IfcDirection::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_directionRatios.setUnset(true);
    }
    else {
        m_directionRatios.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Real attr2;
                attr2 = Step::spfToReal(str1);
                m_directionRatios.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcDirection::copy(const IfcDirection &obj, const CopyOp &copyop) {
    Step::List< Step::Real, 2, 3 >::const_iterator it_m_directionRatios;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_directionRatios = obj.m_directionRatios.begin(); it_m_directionRatios != obj.m_directionRatios.end(); ++it_m_directionRatios) {
        Step::Real copyTarget = (*it_m_directionRatios);
        m_directionRatios.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDirection::s_type("IfcDirection");
