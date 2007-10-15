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

#include "ifc2x3/IfcRelConnectsPathElements.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelConnectsElements.h"
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

IfcRelConnectsPathElements::IfcRelConnectsPathElements(Step::Id id, Step::SPFData *args) : IfcRelConnectsElements(id, args) {
    m_relatingPriorities.setUnset(true);
    m_relatedPriorities.setUnset(true);
    m_relatedConnectionType = IfcConnectionTypeEnum_UNSET;
    m_relatingConnectionType = IfcConnectionTypeEnum_UNSET;
}

IfcRelConnectsPathElements::~IfcRelConnectsPathElements() {
}

bool IfcRelConnectsPathElements::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsPathElements(this);
}

const std::string &IfcRelConnectsPathElements::type() {
    return IfcRelConnectsPathElements::s_type.getName();
}

Step::ClassType IfcRelConnectsPathElements::getClassType() {
    return IfcRelConnectsPathElements::s_type;
}

Step::ClassType IfcRelConnectsPathElements::getType() const {
    return IfcRelConnectsPathElements::s_type;
}

bool IfcRelConnectsPathElements::isOfType(Step::ClassType t) {
    return IfcRelConnectsPathElements::s_type == t ? true : IfcRelConnectsElements::isOfType(t);
}

Step::List< Step::Integer > &IfcRelConnectsPathElements::getRelatingPriorities() {
    if (Step::BaseObject::inited()) {
        return m_relatingPriorities;
    }
    else {
        m_relatingPriorities.setUnset(true);
        return m_relatingPriorities;
    }
}

void IfcRelConnectsPathElements::setRelatingPriorities(const Step::List< Step::Integer > &value) {
    m_relatingPriorities = value;
}

Step::List< Step::Integer > &IfcRelConnectsPathElements::getRelatedPriorities() {
    if (Step::BaseObject::inited()) {
        return m_relatedPriorities;
    }
    else {
        m_relatedPriorities.setUnset(true);
        return m_relatedPriorities;
    }
}

void IfcRelConnectsPathElements::setRelatedPriorities(const Step::List< Step::Integer > &value) {
    m_relatedPriorities = value;
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatedConnectionType() {
    if (Step::BaseObject::inited()) {
        return m_relatedConnectionType;
    }
    else {
        return IfcConnectionTypeEnum_UNSET;
    }
}

void IfcRelConnectsPathElements::setRelatedConnectionType(IfcConnectionTypeEnum value) {
    m_relatedConnectionType = value;
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatingConnectionType() {
    if (Step::BaseObject::inited()) {
        return m_relatingConnectionType;
    }
    else {
        return IfcConnectionTypeEnum_UNSET;
    }
}

void IfcRelConnectsPathElements::setRelatingConnectionType(IfcConnectionTypeEnum value) {
    m_relatingConnectionType = value;
}

void IfcRelConnectsPathElements::release() {
    IfcRelConnectsElements::release();
    m_relatingPriorities.clear();
    m_relatedPriorities.clear();
}

bool IfcRelConnectsPathElements::init() {
    bool status = IfcRelConnectsElements::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingPriorities.setUnset(true);
    }
    else {
        m_relatingPriorities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Integer attr2;
                attr2 = Step::spfToInteger(str1);
                m_relatingPriorities.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedPriorities.setUnset(true);
    }
    else {
        m_relatedPriorities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Integer attr2;
                attr2 = Step::spfToInteger(str1);
                m_relatedPriorities.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedConnectionType = IfcConnectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".ATPATH.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_ATPATH;
        }
        else if (arg == ".ATSTART.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_ATSTART;
        }
        else if (arg == ".ATEND.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_ATEND;
        }
        else if (arg == ".NOTDEFINED.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConnectionType = IfcConnectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".ATPATH.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_ATPATH;
        }
        else if (arg == ".ATSTART.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_ATSTART;
        }
        else if (arg == ".ATEND.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_ATEND;
        }
        else if (arg == ".NOTDEFINED.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelConnectsPathElements::copy(const IfcRelConnectsPathElements &obj, const CopyOp &copyop) {
    Step::List< Step::Integer >::const_iterator it_m_relatingPriorities;
    Step::List< Step::Integer >::const_iterator it_m_relatedPriorities;
    IfcRelConnectsElements::copy(obj, copyop);
    for (it_m_relatingPriorities = obj.m_relatingPriorities.begin(); it_m_relatingPriorities != obj.m_relatingPriorities.end(); ++it_m_relatingPriorities) {
        Step::Integer copyTarget = (*it_m_relatingPriorities);
        m_relatingPriorities.push_back(copyTarget);
    }
    for (it_m_relatedPriorities = obj.m_relatedPriorities.begin(); it_m_relatedPriorities != obj.m_relatedPriorities.end(); ++it_m_relatedPriorities) {
        Step::Integer copyTarget = (*it_m_relatedPriorities);
        m_relatedPriorities.push_back(copyTarget);
    }
    setRelatedConnectionType(obj.m_relatedConnectionType);
    setRelatingConnectionType(obj.m_relatingConnectionType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsPathElements::s_type("IfcRelConnectsPathElements");
