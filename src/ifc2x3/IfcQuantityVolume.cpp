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

#include "ifc2x3/IfcQuantityVolume.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPhysicalSimpleQuantity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcQuantityVolume::IfcQuantityVolume(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_volumeValue = Step::getUnset(m_volumeValue);
}

IfcQuantityVolume::~IfcQuantityVolume() {
}

bool IfcQuantityVolume::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcQuantityVolume(this);
}

const std::string &IfcQuantityVolume::type() {
    return IfcQuantityVolume::s_type.getName();
}

Step::ClassType IfcQuantityVolume::getClassType() {
    return IfcQuantityVolume::s_type;
}

Step::ClassType IfcQuantityVolume::getType() const {
    return IfcQuantityVolume::s_type;
}

bool IfcQuantityVolume::isOfType(Step::ClassType t) {
    return IfcQuantityVolume::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcVolumeMeasure IfcQuantityVolume::getVolumeValue() {
    if (Step::BaseObject::inited()) {
        return m_volumeValue;
    }
    else {
        return Step::getUnset(m_volumeValue);
    }
}

void IfcQuantityVolume::setVolumeValue(IfcVolumeMeasure value) {
    m_volumeValue = value;
}

void IfcQuantityVolume::release() {
    IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityVolume::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_volumeValue = Step::getUnset(m_volumeValue);
    }
    else {
        m_volumeValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcQuantityVolume::copy(const IfcQuantityVolume &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setVolumeValue(obj.m_volumeValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityVolume::s_type("IfcQuantityVolume");
