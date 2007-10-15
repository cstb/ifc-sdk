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

#include "ifc2x3/IfcCurveStyleFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurveStyleFontPattern.h"
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

IfcCurveStyleFont::IfcCurveStyleFont(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_patternList.setUnset(true);
}

IfcCurveStyleFont::~IfcCurveStyleFont() {
}

bool IfcCurveStyleFont::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurveStyleFont(this);
}

const std::string &IfcCurveStyleFont::type() {
    return IfcCurveStyleFont::s_type.getName();
}

Step::ClassType IfcCurveStyleFont::getClassType() {
    return IfcCurveStyleFont::s_type;
}

Step::ClassType IfcCurveStyleFont::getType() const {
    return IfcCurveStyleFont::s_type;
}

bool IfcCurveStyleFont::isOfType(Step::ClassType t) {
    return IfcCurveStyleFont::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcCurveStyleFont::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcCurveStyleFont::setName(const IfcLabel &value) {
    m_name = value;
}

Step::List< Step::RefPtr< IfcCurveStyleFontPattern > > &IfcCurveStyleFont::getPatternList() {
    if (Step::BaseObject::inited()) {
        return m_patternList;
    }
    else {
        m_patternList.setUnset(true);
        return m_patternList;
    }
}

void IfcCurveStyleFont::setPatternList(const Step::List< Step::RefPtr< IfcCurveStyleFontPattern > > &value) {
    m_patternList = value;
}

void IfcCurveStyleFont::release() {
    m_patternList.clear();
}

bool IfcCurveStyleFont::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_patternList.setUnset(true);
    }
    else {
        m_patternList.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCurveStyleFontPattern > attr2;
                attr2 = static_cast< IfcCurveStyleFontPattern * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_patternList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcCurveStyleFont::copy(const IfcCurveStyleFont &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCurveStyleFontPattern > >::const_iterator it_m_patternList;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    for (it_m_patternList = obj.m_patternList.begin(); it_m_patternList != obj.m_patternList.end(); ++it_m_patternList) {
        Step::RefPtr< IfcCurveStyleFontPattern > copyTarget = copyop((*it_m_patternList).get());
        m_patternList.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyleFont::s_type("IfcCurveStyleFont");
