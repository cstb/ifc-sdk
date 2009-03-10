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

#include "ifc2x3/IfcGeometricSet.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcGeometricSetSelect.h"
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

IfcGeometricSet::IfcGeometricSet(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcGeometricSet::~IfcGeometricSet() {
}

bool IfcGeometricSet::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricSet(this);
}

const std::string &IfcGeometricSet::type() const {
    return IfcGeometricSet::s_type.getName();
}

const Step::ClassType &IfcGeometricSet::getClassType() {
    return IfcGeometricSet::s_type;
}

const Step::ClassType &IfcGeometricSet::getType() const {
    return IfcGeometricSet::s_type;
}

bool IfcGeometricSet::isOfType(const Step::ClassType &t) const {
    return IfcGeometricSet::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Set_IfcGeometricSetSelect_1_n &IfcGeometricSet::getElements() {
    if (Step::BaseObject::inited()) {
        return m_elements;
    }
    else {
        m_elements.setUnset(true);
        return m_elements;
    }
}

const Set_IfcGeometricSetSelect_1_n &IfcGeometricSet::getElements() const {
    IfcGeometricSet * deConstObject = const_cast< IfcGeometricSet * > (this);
    return deConstObject->getElements();
}

void IfcGeometricSet::setElements(const Set_IfcGeometricSetSelect_1_n &value) {
    m_elements = value;
}

bool IfcGeometricSet::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elements.setUnset(true);
    }
    else {
        m_elements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGeometricSetSelect > attr2;
                attr2 = new IfcGeometricSetSelect;
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
                m_elements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcGeometricSet::copy(const IfcGeometricSet &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcGeometricSetSelect >, 1 >::const_iterator it_m_elements;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_elements = obj.m_elements.begin(); it_m_elements != obj.m_elements.end(); ++it_m_elements) {
        Step::RefPtr< IfcGeometricSetSelect > copyTarget = new IfcGeometricSetSelect;
        copyTarget->copy(*((*it_m_elements).get()), copyop);
        m_elements.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricSet::s_type("IfcGeometricSet");
