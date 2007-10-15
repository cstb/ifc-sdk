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

#include "ifc2x3/IfcStructuralPlanarActionVarying.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/IfcStructuralLoad.h"
#include "ifc2x3/IfcStructuralPlanarAction.h"
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

IfcStructuralPlanarActionVarying::IfcStructuralPlanarActionVarying(Step::Id id, Step::SPFData *args) : IfcStructuralPlanarAction(id, args) {
    m_varyingAppliedLoadLocation = NULL;
    m_subsequentAppliedLoads.setUnset(true);
}

IfcStructuralPlanarActionVarying::~IfcStructuralPlanarActionVarying() {
}

bool IfcStructuralPlanarActionVarying::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralPlanarActionVarying(this);
}

const std::string &IfcStructuralPlanarActionVarying::type() {
    return IfcStructuralPlanarActionVarying::s_type.getName();
}

Step::ClassType IfcStructuralPlanarActionVarying::getClassType() {
    return IfcStructuralPlanarActionVarying::s_type;
}

Step::ClassType IfcStructuralPlanarActionVarying::getType() const {
    return IfcStructuralPlanarActionVarying::s_type;
}

bool IfcStructuralPlanarActionVarying::isOfType(Step::ClassType t) {
    return IfcStructuralPlanarActionVarying::s_type == t ? true : IfcStructuralPlanarAction::isOfType(t);
}

IfcShapeAspect *IfcStructuralPlanarActionVarying::getVaryingAppliedLoadLocation() {
    if (Step::BaseObject::inited()) {
        return m_varyingAppliedLoadLocation.get();
    }
    else {
        return NULL;
    }
}

void IfcStructuralPlanarActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_varyingAppliedLoadLocation = value;
}

Step::List< Step::RefPtr< IfcStructuralLoad > > &IfcStructuralPlanarActionVarying::getSubsequentAppliedLoads() {
    if (Step::BaseObject::inited()) {
        return m_subsequentAppliedLoads;
    }
    else {
        m_subsequentAppliedLoads.setUnset(true);
        return m_subsequentAppliedLoads;
    }
}

void IfcStructuralPlanarActionVarying::setSubsequentAppliedLoads(const Step::List< Step::RefPtr< IfcStructuralLoad > > &value) {
    m_subsequentAppliedLoads = value;
}

void IfcStructuralPlanarActionVarying::release() {
    IfcStructuralPlanarAction::release();
    m_varyingAppliedLoadLocation.release();
    m_subsequentAppliedLoads.clear();
}

bool IfcStructuralPlanarActionVarying::init() {
    bool status = IfcStructuralPlanarAction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_varyingAppliedLoadLocation = NULL;
    }
    else {
        m_varyingAppliedLoadLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_subsequentAppliedLoads.setUnset(true);
    }
    else {
        m_subsequentAppliedLoads.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcStructuralLoad > attr2;
                attr2 = static_cast< IfcStructuralLoad * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_subsequentAppliedLoads.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcStructuralPlanarActionVarying::copy(const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcStructuralLoad > >::const_iterator it_m_subsequentAppliedLoads;
    IfcStructuralPlanarAction::copy(obj, copyop);
    setVaryingAppliedLoadLocation(copyop(obj.m_varyingAppliedLoadLocation.get()));
    for (it_m_subsequentAppliedLoads = obj.m_subsequentAppliedLoads.begin(); it_m_subsequentAppliedLoads != obj.m_subsequentAppliedLoads.end(); ++it_m_subsequentAppliedLoads) {
        Step::RefPtr< IfcStructuralLoad > copyTarget = copyop((*it_m_subsequentAppliedLoads).get());
        m_subsequentAppliedLoads.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPlanarActionVarying::s_type("IfcStructuralPlanarActionVarying");
