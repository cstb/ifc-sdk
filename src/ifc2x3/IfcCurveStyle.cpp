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

#include "ifc2x3/IfcCurveStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColour.h"
#include "ifc2x3/IfcCurveFontOrScaledCurveFontSelect.h"
#include "ifc2x3/IfcPresentationStyle.h"
#include "ifc2x3/IfcSizeSelect.h"
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

IfcCurveStyle::IfcCurveStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_curveFont = NULL;
    m_curveWidth = NULL;
    m_curveColour = NULL;
}

IfcCurveStyle::~IfcCurveStyle() {
}

bool IfcCurveStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurveStyle(this);
}

const std::string &IfcCurveStyle::type() {
    return IfcCurveStyle::s_type.getName();
}

Step::ClassType IfcCurveStyle::getClassType() {
    return IfcCurveStyle::s_type;
}

Step::ClassType IfcCurveStyle::getType() const {
    return IfcCurveStyle::s_type;
}

bool IfcCurveStyle::isOfType(Step::ClassType t) {
    return IfcCurveStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcCurveFontOrScaledCurveFontSelect *IfcCurveStyle::getCurveFont() {
    if (Step::BaseObject::inited()) {
        return m_curveFont.get();
    }
    else {
        return NULL;
    }
}

void IfcCurveStyle::setCurveFont(const Step::RefPtr< IfcCurveFontOrScaledCurveFontSelect > &value) {
    m_curveFont = value;
}

IfcSizeSelect *IfcCurveStyle::getCurveWidth() {
    if (Step::BaseObject::inited()) {
        return m_curveWidth.get();
    }
    else {
        return NULL;
    }
}

void IfcCurveStyle::setCurveWidth(const Step::RefPtr< IfcSizeSelect > &value) {
    m_curveWidth = value;
}

IfcColour *IfcCurveStyle::getCurveColour() {
    if (Step::BaseObject::inited()) {
        return m_curveColour.get();
    }
    else {
        return NULL;
    }
}

void IfcCurveStyle::setCurveColour(const Step::RefPtr< IfcColour > &value) {
    m_curveColour = value;
}

void IfcCurveStyle::release() {
    IfcPresentationStyle::release();
}

bool IfcCurveStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveFont = NULL;
    }
    else {
        m_curveFont = new IfcCurveFontOrScaledCurveFontSelect;
        if (arg[0] == '#') {
            m_curveFont->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveWidth = NULL;
    }
    else {
        m_curveWidth = new IfcSizeSelect;
        if (arg[0] == '#') {
            m_curveWidth->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_curveWidth->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_curveWidth->setIfcPositiveRatioMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveColour = NULL;
    }
    else {
        m_curveColour = new IfcColour;
        if (arg[0] == '#') {
            m_curveColour->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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

void IfcCurveStyle::copy(const IfcCurveStyle &obj, const CopyOp &copyop) {
    IfcPresentationStyle::copy(obj, copyop);
    m_curveFont = new IfcCurveFontOrScaledCurveFontSelect;
    m_curveFont->copy(*(obj.m_curveFont.get()), copyop);
    m_curveWidth = new IfcSizeSelect;
    m_curveWidth->copy(*(obj.m_curveWidth.get()), copyop);
    m_curveColour = new IfcColour;
    m_curveColour->copy(*(obj.m_curveColour.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyle::s_type("IfcCurveStyle");
