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

#include "ifc2x3/IfcTypeProduct.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentationMap.h"
#include "ifc2x3/IfcTypeObject.h"
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

IfcTypeProduct::IfcTypeProduct(Step::Id id, Step::SPFData *args) : IfcTypeObject(id, args) {
    m_representationMaps.setUnset(true);
    m_tag = Step::getUnset(m_tag);
}

IfcTypeProduct::~IfcTypeProduct() {
}

bool IfcTypeProduct::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTypeProduct(this);
}

const std::string &IfcTypeProduct::type() {
    return IfcTypeProduct::s_type.getName();
}

Step::ClassType IfcTypeProduct::getClassType() {
    return IfcTypeProduct::s_type;
}

Step::ClassType IfcTypeProduct::getType() const {
    return IfcTypeProduct::s_type;
}

bool IfcTypeProduct::isOfType(Step::ClassType t) {
    return IfcTypeProduct::s_type == t ? true : IfcTypeObject::isOfType(t);
}

Step::List< Step::RefPtr< IfcRepresentationMap > > &IfcTypeProduct::getRepresentationMaps() {
    if (Step::BaseObject::inited()) {
        return m_representationMaps;
    }
    else {
        m_representationMaps.setUnset(true);
        return m_representationMaps;
    }
}

void IfcTypeProduct::setRepresentationMaps(const Step::List< Step::RefPtr< IfcRepresentationMap > > &value) {
    m_representationMaps = value;
}

IfcLabel IfcTypeProduct::getTag() {
    if (Step::BaseObject::inited()) {
        return m_tag;
    }
    else {
        return Step::getUnset(m_tag);
    }
}

void IfcTypeProduct::setTag(const IfcLabel &value) {
    m_tag = value;
}

void IfcTypeProduct::release() {
    IfcTypeObject::release();
    m_representationMaps.clear();
}

bool IfcTypeProduct::init() {
    bool status = IfcTypeObject::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationMaps.setUnset(true);
    }
    else {
        m_representationMaps.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentationMap > attr2;
                attr2 = static_cast< IfcRepresentationMap * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_representationMaps.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tag = Step::getUnset(m_tag);
    }
    else {
        m_tag = Step::spfToString(arg);
    }
    return true;
}

void IfcTypeProduct::copy(const IfcTypeProduct &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcRepresentationMap > >::const_iterator it_m_representationMaps;
    IfcTypeObject::copy(obj, copyop);
    for (it_m_representationMaps = obj.m_representationMaps.begin(); it_m_representationMaps != obj.m_representationMaps.end(); ++it_m_representationMaps) {
        Step::RefPtr< IfcRepresentationMap > copyTarget = copyop((*it_m_representationMaps).get());
        m_representationMaps.push_back(copyTarget.get());
    }
    setTag(obj.m_tag);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTypeProduct::s_type("IfcTypeProduct");
