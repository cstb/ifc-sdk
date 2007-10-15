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

#include "ifc2x3/IfcSurfaceStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPresentationStyle.h"
#include "ifc2x3/IfcSurfaceStyleElementSelect.h"
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

IfcSurfaceStyle::IfcSurfaceStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_side = IfcSurfaceSide_UNSET;
    m_styles.setUnset(true);
}

IfcSurfaceStyle::~IfcSurfaceStyle() {
}

bool IfcSurfaceStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceStyle(this);
}

const std::string &IfcSurfaceStyle::type() {
    return IfcSurfaceStyle::s_type.getName();
}

Step::ClassType IfcSurfaceStyle::getClassType() {
    return IfcSurfaceStyle::s_type;
}

Step::ClassType IfcSurfaceStyle::getType() const {
    return IfcSurfaceStyle::s_type;
}

bool IfcSurfaceStyle::isOfType(Step::ClassType t) {
    return IfcSurfaceStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcSurfaceSide IfcSurfaceStyle::getSide() {
    if (Step::BaseObject::inited()) {
        return m_side;
    }
    else {
        return IfcSurfaceSide_UNSET;
    }
}

void IfcSurfaceStyle::setSide(IfcSurfaceSide value) {
    m_side = value;
}

Step::Set< Step::RefPtr< IfcSurfaceStyleElementSelect > > &IfcSurfaceStyle::getStyles() {
    if (Step::BaseObject::inited()) {
        return m_styles;
    }
    else {
        m_styles.setUnset(true);
        return m_styles;
    }
}

void IfcSurfaceStyle::setStyles(const Step::Set< Step::RefPtr< IfcSurfaceStyleElementSelect > > &value) {
    m_styles = value;
}

void IfcSurfaceStyle::release() {
    IfcPresentationStyle::release();
    m_styles.clear();
}

bool IfcSurfaceStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_side = IfcSurfaceSide_UNSET;
    }
    else {
        if (arg == ".POSITIVE.") {
            m_side = IfcSurfaceSide_POSITIVE;
        }
        else if (arg == ".NEGATIVE.") {
            m_side = IfcSurfaceSide_NEGATIVE;
        }
        else if (arg == ".BOTH.") {
            m_side = IfcSurfaceSide_BOTH;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_styles.setUnset(true);
    }
    else {
        m_styles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSurfaceStyleElementSelect > attr2;
                attr2 = new IfcSurfaceStyleElementSelect;
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
                m_styles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSurfaceStyle::copy(const IfcSurfaceStyle &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcSurfaceStyleElementSelect > >::const_iterator it_m_styles;
    IfcPresentationStyle::copy(obj, copyop);
    setSide(obj.m_side);
    for (it_m_styles = obj.m_styles.begin(); it_m_styles != obj.m_styles.end(); ++it_m_styles) {
        Step::RefPtr< IfcSurfaceStyleElementSelect > copyTarget = new IfcSurfaceStyleElementSelect;
        copyTarget->copy(*((*it_m_styles).get()), copyop);
        m_styles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyle::s_type("IfcSurfaceStyle");
