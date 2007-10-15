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

#include "ifc2x3/IfcDraughtingCallout.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDraughtingCalloutElement.h"
#include "ifc2x3/IfcDraughtingCalloutRelationship.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDraughtingCallout::IfcDraughtingCallout(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_contents.setUnset(true);
    m_isRelatedFromCallout.setUnset(true);
    m_isRelatedToCallout.setUnset(true);
}

IfcDraughtingCallout::~IfcDraughtingCallout() {
}

bool IfcDraughtingCallout::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDraughtingCallout(this);
}

const std::string &IfcDraughtingCallout::type() {
    return IfcDraughtingCallout::s_type.getName();
}

Step::ClassType IfcDraughtingCallout::getClassType() {
    return IfcDraughtingCallout::s_type;
}

Step::ClassType IfcDraughtingCallout::getType() const {
    return IfcDraughtingCallout::s_type;
}

bool IfcDraughtingCallout::isOfType(Step::ClassType t) {
    return IfcDraughtingCallout::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Step::Set< Step::RefPtr< IfcDraughtingCalloutElement > > &IfcDraughtingCallout::getContents() {
    if (Step::BaseObject::inited()) {
        return m_contents;
    }
    else {
        m_contents.setUnset(true);
        return m_contents;
    }
}

void IfcDraughtingCallout::setContents(const Step::Set< Step::RefPtr< IfcDraughtingCalloutElement > > &value) {
    m_contents = value;
}

Step::Set< Step::ObsPtr< IfcDraughtingCalloutRelationship > > &IfcDraughtingCallout::getIsRelatedFromCallout() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedFromCallout;
    }
    else {
        m_isRelatedFromCallout.setUnset(true);
        return m_isRelatedFromCallout;
    }
}

Step::Set< Step::ObsPtr< IfcDraughtingCalloutRelationship > > &IfcDraughtingCallout::getIsRelatedToCallout() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedToCallout;
    }
    else {
        m_isRelatedToCallout.setUnset(true);
        return m_isRelatedToCallout;
    }
}

void IfcDraughtingCallout::release() {
    IfcGeometricRepresentationItem::release();
    m_contents.clear();
}

bool IfcDraughtingCallout::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contents.setUnset(true);
    }
    else {
        m_contents.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDraughtingCalloutElement > attr2;
                attr2 = new IfcDraughtingCalloutElement;
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
                m_contents.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_isRelatedFromCallout.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedFromCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_isRelatedToCallout.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedToCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDraughtingCallout::copy(const IfcDraughtingCallout &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDraughtingCalloutElement > >::const_iterator it_m_contents;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_contents = obj.m_contents.begin(); it_m_contents != obj.m_contents.end(); ++it_m_contents) {
        Step::RefPtr< IfcDraughtingCalloutElement > copyTarget = new IfcDraughtingCalloutElement;
        copyTarget->copy(*((*it_m_contents).get()), copyop);
        m_contents.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingCallout::s_type("IfcDraughtingCallout");
