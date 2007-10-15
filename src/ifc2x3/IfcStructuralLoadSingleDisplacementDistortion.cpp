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

#include "ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralLoadSingleDisplacement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLoadSingleDisplacementDistortion::IfcStructuralLoadSingleDisplacementDistortion(Step::Id id, Step::SPFData *args) : IfcStructuralLoadSingleDisplacement(id, args) {
    m_distortion = Step::getUnset(m_distortion);
}

IfcStructuralLoadSingleDisplacementDistortion::~IfcStructuralLoadSingleDisplacementDistortion() {
}

bool IfcStructuralLoadSingleDisplacementDistortion::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleDisplacementDistortion(this);
}

const std::string &IfcStructuralLoadSingleDisplacementDistortion::type() {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type.getName();
}

Step::ClassType IfcStructuralLoadSingleDisplacementDistortion::getClassType() {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type;
}

Step::ClassType IfcStructuralLoadSingleDisplacementDistortion::getType() const {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type;
}

bool IfcStructuralLoadSingleDisplacementDistortion::isOfType(Step::ClassType t) {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type == t ? true : IfcStructuralLoadSingleDisplacement::isOfType(t);
}

IfcCurvatureMeasure IfcStructuralLoadSingleDisplacementDistortion::getDistortion() {
    if (Step::BaseObject::inited()) {
        return m_distortion;
    }
    else {
        return Step::getUnset(m_distortion);
    }
}

void IfcStructuralLoadSingleDisplacementDistortion::setDistortion(IfcCurvatureMeasure value) {
    m_distortion = value;
}

void IfcStructuralLoadSingleDisplacementDistortion::release() {
    IfcStructuralLoadSingleDisplacement::release();
}

bool IfcStructuralLoadSingleDisplacementDistortion::init() {
    bool status = IfcStructuralLoadSingleDisplacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_distortion = Step::getUnset(m_distortion);
    }
    else {
        m_distortion = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadSingleDisplacementDistortion::copy(const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleDisplacement::copy(obj, copyop);
    setDistortion(obj.m_distortion);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleDisplacementDistortion::s_type("IfcStructuralLoadSingleDisplacementDistortion");
