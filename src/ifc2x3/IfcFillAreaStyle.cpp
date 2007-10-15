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

#include "ifc2x3/IfcFillAreaStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFillStyleSelect.h"
#include "ifc2x3/IfcPresentationStyle.h"
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

IfcFillAreaStyle::IfcFillAreaStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_fillStyles.setUnset(true);
}

IfcFillAreaStyle::~IfcFillAreaStyle() {
}

bool IfcFillAreaStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFillAreaStyle(this);
}

const std::string &IfcFillAreaStyle::type() {
    return IfcFillAreaStyle::s_type.getName();
}

Step::ClassType IfcFillAreaStyle::getClassType() {
    return IfcFillAreaStyle::s_type;
}

Step::ClassType IfcFillAreaStyle::getType() const {
    return IfcFillAreaStyle::s_type;
}

bool IfcFillAreaStyle::isOfType(Step::ClassType t) {
    return IfcFillAreaStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

Step::Set< Step::RefPtr< IfcFillStyleSelect > > &IfcFillAreaStyle::getFillStyles() {
    if (Step::BaseObject::inited()) {
        return m_fillStyles;
    }
    else {
        m_fillStyles.setUnset(true);
        return m_fillStyles;
    }
}

void IfcFillAreaStyle::setFillStyles(const Step::Set< Step::RefPtr< IfcFillStyleSelect > > &value) {
    m_fillStyles = value;
}

void IfcFillAreaStyle::release() {
    IfcPresentationStyle::release();
    m_fillStyles.clear();
}

bool IfcFillAreaStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fillStyles.setUnset(true);
    }
    else {
        m_fillStyles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcFillStyleSelect > attr2;
                attr2 = new IfcFillStyleSelect;
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
                m_fillStyles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcFillAreaStyle::copy(const IfcFillAreaStyle &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcFillStyleSelect > >::const_iterator it_m_fillStyles;
    IfcPresentationStyle::copy(obj, copyop);
    for (it_m_fillStyles = obj.m_fillStyles.begin(); it_m_fillStyles != obj.m_fillStyles.end(); ++it_m_fillStyles) {
        Step::RefPtr< IfcFillStyleSelect > copyTarget = new IfcFillStyleSelect;
        copyTarget->copy(*((*it_m_fillStyles).get()), copyop);
        m_fillStyles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyle::s_type("IfcFillAreaStyle");
