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

#include "ifc2x3/IfcStyledItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPresentationStyleAssignment.h"
#include "ifc2x3/IfcRepresentationItem.h"
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

IfcStyledItem::IfcStyledItem(Step::Id id, Step::SPFData *args) : IfcRepresentationItem(id, args) {
    m_item = NULL;
    m_styles.setUnset(true);
    m_name = Step::getUnset(m_name);
}

IfcStyledItem::~IfcStyledItem() {
}

bool IfcStyledItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStyledItem(this);
}

const std::string &IfcStyledItem::type() {
    return IfcStyledItem::s_type.getName();
}

Step::ClassType IfcStyledItem::getClassType() {
    return IfcStyledItem::s_type;
}

Step::ClassType IfcStyledItem::getType() const {
    return IfcStyledItem::s_type;
}

bool IfcStyledItem::isOfType(Step::ClassType t) {
    return IfcStyledItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

IfcRepresentationItem *IfcStyledItem::getItem() {
    if (Step::BaseObject::inited()) {
        return m_item.get();
    }
    else {
        return NULL;
    }
}

void IfcStyledItem::setItem(const Step::RefPtr< IfcRepresentationItem > &value) {
    m_item = value;
    m_item->m_styledByItem.insert(this);
}

Step::Set< Step::RefPtr< IfcPresentationStyleAssignment > > &IfcStyledItem::getStyles() {
    if (Step::BaseObject::inited()) {
        return m_styles;
    }
    else {
        m_styles.setUnset(true);
        return m_styles;
    }
}

void IfcStyledItem::setStyles(const Step::Set< Step::RefPtr< IfcPresentationStyleAssignment > > &value) {
    m_styles = value;
}

IfcLabel IfcStyledItem::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcStyledItem::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcStyledItem::release() {
    IfcRepresentationItem::release();
    m_item.release();
    m_styles.clear();
}

bool IfcStyledItem::init() {
    bool status = IfcRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_item = NULL;
    }
    else {
        m_item = static_cast< IfcRepresentationItem * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                Step::RefPtr< IfcPresentationStyleAssignment > attr2;
                attr2 = static_cast< IfcPresentationStyleAssignment * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_styles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    return true;
}

void IfcStyledItem::copy(const IfcStyledItem &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPresentationStyleAssignment > >::const_iterator it_m_styles;
    IfcRepresentationItem::copy(obj, copyop);
    setItem(copyop(obj.m_item.get()));
    for (it_m_styles = obj.m_styles.begin(); it_m_styles != obj.m_styles.end(); ++it_m_styles) {
        Step::RefPtr< IfcPresentationStyleAssignment > copyTarget = copyop((*it_m_styles).get());
        m_styles.insert(copyTarget.get());
    }
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStyledItem::s_type("IfcStyledItem");
