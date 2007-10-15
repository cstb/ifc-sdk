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

#include "ifc2x3/IfcSoundProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcSoundValue.h"
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

IfcSoundProperties::IfcSoundProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_isAttenuating = Step::getUnset(m_isAttenuating);
    m_soundScale = IfcSoundScaleEnum_UNSET;
    m_soundValues.setUnset(true);
}

IfcSoundProperties::~IfcSoundProperties() {
}

bool IfcSoundProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSoundProperties(this);
}

const std::string &IfcSoundProperties::type() {
    return IfcSoundProperties::s_type.getName();
}

Step::ClassType IfcSoundProperties::getClassType() {
    return IfcSoundProperties::s_type;
}

Step::ClassType IfcSoundProperties::getType() const {
    return IfcSoundProperties::s_type;
}

bool IfcSoundProperties::isOfType(Step::ClassType t) {
    return IfcSoundProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcBoolean IfcSoundProperties::getIsAttenuating() {
    if (Step::BaseObject::inited()) {
        return m_isAttenuating;
    }
    else {
        return Step::getUnset(m_isAttenuating);
    }
}

void IfcSoundProperties::setIsAttenuating(IfcBoolean value) {
    m_isAttenuating = value;
}

IfcSoundScaleEnum IfcSoundProperties::getSoundScale() {
    if (Step::BaseObject::inited()) {
        return m_soundScale;
    }
    else {
        return IfcSoundScaleEnum_UNSET;
    }
}

void IfcSoundProperties::setSoundScale(IfcSoundScaleEnum value) {
    m_soundScale = value;
}

Step::List< Step::RefPtr< IfcSoundValue > > &IfcSoundProperties::getSoundValues() {
    if (Step::BaseObject::inited()) {
        return m_soundValues;
    }
    else {
        m_soundValues.setUnset(true);
        return m_soundValues;
    }
}

void IfcSoundProperties::setSoundValues(const Step::List< Step::RefPtr< IfcSoundValue > > &value) {
    m_soundValues = value;
}

void IfcSoundProperties::release() {
    IfcPropertySetDefinition::release();
    m_soundValues.clear();
}

bool IfcSoundProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isAttenuating = Step::getUnset(m_isAttenuating);
    }
    else {
        m_isAttenuating = Step::spfToBool(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_soundScale = IfcSoundScaleEnum_UNSET;
    }
    else {
        if (arg == ".DBA.") {
            m_soundScale = IfcSoundScaleEnum_DBA;
        }
        else if (arg == ".DBB.") {
            m_soundScale = IfcSoundScaleEnum_DBB;
        }
        else if (arg == ".DBC.") {
            m_soundScale = IfcSoundScaleEnum_DBC;
        }
        else if (arg == ".NC.") {
            m_soundScale = IfcSoundScaleEnum_NC;
        }
        else if (arg == ".NR.") {
            m_soundScale = IfcSoundScaleEnum_NR;
        }
        else if (arg == ".USERDEFINED.") {
            m_soundScale = IfcSoundScaleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_soundScale = IfcSoundScaleEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_soundValues.setUnset(true);
    }
    else {
        m_soundValues.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSoundValue > attr2;
                attr2 = static_cast< IfcSoundValue * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_soundValues.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSoundProperties::copy(const IfcSoundProperties &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcSoundValue > >::const_iterator it_m_soundValues;
    IfcPropertySetDefinition::copy(obj, copyop);
    setIsAttenuating(obj.m_isAttenuating);
    setSoundScale(obj.m_soundScale);
    for (it_m_soundValues = obj.m_soundValues.begin(); it_m_soundValues != obj.m_soundValues.end(); ++it_m_soundValues) {
        Step::RefPtr< IfcSoundValue > copyTarget = copyop((*it_m_soundValues).get());
        m_soundValues.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSoundProperties::s_type("IfcSoundProperties");
