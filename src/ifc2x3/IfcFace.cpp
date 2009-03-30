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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcFace.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFaceBound.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFace::IfcFace(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcFace::~IfcFace() {
}

bool IfcFace::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFace(this);
}

const std::string &IfcFace::type() const {
    return IfcFace::s_type.getName();
}

const Step::ClassType &IfcFace::getClassType() {
    return IfcFace::s_type;
}

const Step::ClassType &IfcFace::getType() const {
    return IfcFace::s_type;
}

bool IfcFace::isOfType(const Step::ClassType &t) const {
    return IfcFace::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Set_IfcFaceBound_1_n &IfcFace::getBounds() {
    if (Step::BaseObject::inited()) {
        return m_bounds;
    }
    else {
        m_bounds.setUnset(true);
        return m_bounds;
    }
}

const Set_IfcFaceBound_1_n &IfcFace::getBounds() const {
    IfcFace * deConstObject = const_cast< IfcFace * > (this);
    return deConstObject->getBounds();
}

void IfcFace::setBounds(const Set_IfcFaceBound_1_n &value) {
    m_bounds = value;
}

void IfcFace::unsetBounds() {
    m_bounds.clear();
    m_bounds.setUnset(true);
}

bool IfcFace::testBounds() const {
    return !Step::isUnset(getBounds());
}

bool IfcFace::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_bounds.setUnset(true);
    }
    else {
        m_bounds.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcFaceBound > attr2;
                attr2 = static_cast< IfcFaceBound * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_bounds.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcFace::copy(const IfcFace &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcFaceBound >, 1 >::const_iterator it_m_bounds;
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    for (it_m_bounds = obj.m_bounds.begin(); it_m_bounds != obj.m_bounds.end(); ++it_m_bounds) {
        Step::RefPtr< IfcFaceBound > copyTarget = (IfcFaceBound *) (copyop((*it_m_bounds).get()));
        m_bounds.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFace::s_type("IfcFace");
