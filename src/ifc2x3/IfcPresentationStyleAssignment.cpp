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

#include "ifc2x3/IfcPresentationStyleAssignment.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPresentationStyleSelect.h"
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

IfcPresentationStyleAssignment::IfcPresentationStyleAssignment(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_styles.setUnset(true);
}

IfcPresentationStyleAssignment::~IfcPresentationStyleAssignment() {
}

bool IfcPresentationStyleAssignment::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPresentationStyleAssignment(this);
}

const std::string &IfcPresentationStyleAssignment::type() {
    return IfcPresentationStyleAssignment::s_type.getName();
}

Step::ClassType IfcPresentationStyleAssignment::getClassType() {
    return IfcPresentationStyleAssignment::s_type;
}

Step::ClassType IfcPresentationStyleAssignment::getType() const {
    return IfcPresentationStyleAssignment::s_type;
}

bool IfcPresentationStyleAssignment::isOfType(Step::ClassType t) {
    return IfcPresentationStyleAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > &IfcPresentationStyleAssignment::getStyles() {
    if (Step::BaseObject::inited()) {
        return m_styles;
    }
    else {
        m_styles.setUnset(true);
        return m_styles;
    }
}

void IfcPresentationStyleAssignment::setStyles(const Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > &value) {
    m_styles = value;
}

void IfcPresentationStyleAssignment::release() {
    m_styles.clear();
}

bool IfcPresentationStyleAssignment::init() {
    std::string arg;
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
                Step::RefPtr< IfcPresentationStyleSelect > attr2;
                attr2 = new IfcPresentationStyleSelect;
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
                        if (type2 == "IFCNULLSTYLE") {
                            IfcNullStyle tmp_attr2;
                            if (str1 == ".NULL.") {
                                tmp_attr2 = IfcNullStyle_NULL;
                            }
                            attr2->setIfcNullStyle(tmp_attr2);
                        }
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

void IfcPresentationStyleAssignment::copy(const IfcPresentationStyleAssignment &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPresentationStyleSelect > >::const_iterator it_m_styles;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_styles = obj.m_styles.begin(); it_m_styles != obj.m_styles.end(); ++it_m_styles) {
        Step::RefPtr< IfcPresentationStyleSelect > copyTarget = new IfcPresentationStyleSelect;
        copyTarget->copy(*((*it_m_styles).get()), copyop);
        m_styles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationStyleAssignment::s_type("IfcPresentationStyleAssignment");
