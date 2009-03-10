/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcStructuralLinearActionVarying.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/IfcStructuralLinearAction.h"
#include "ifc2x3/IfcStructuralLoad.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLinearActionVarying::IfcStructuralLinearActionVarying(Step::Id id, Step::SPFData *args) : IfcStructuralLinearAction(id, args) {
    m_varyingAppliedLoadLocation = NULL;
}

IfcStructuralLinearActionVarying::~IfcStructuralLinearActionVarying() {
}

bool IfcStructuralLinearActionVarying::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLinearActionVarying(this);
}

const std::string &IfcStructuralLinearActionVarying::type() const {
    return IfcStructuralLinearActionVarying::s_type.getName();
}

const Step::ClassType &IfcStructuralLinearActionVarying::getClassType() {
    return IfcStructuralLinearActionVarying::s_type;
}

const Step::ClassType &IfcStructuralLinearActionVarying::getType() const {
    return IfcStructuralLinearActionVarying::s_type;
}

bool IfcStructuralLinearActionVarying::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLinearActionVarying::s_type == t ? true : IfcStructuralLinearAction::isOfType(t);
}

IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation() {
    if (Step::BaseObject::inited()) {
        return m_varyingAppliedLoadLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation() const {
    IfcStructuralLinearActionVarying * deConstObject = const_cast< IfcStructuralLinearActionVarying * > (this);
    return deConstObject->getVaryingAppliedLoadLocation();
}

void IfcStructuralLinearActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_varyingAppliedLoadLocation = value;
}

List_IfcStructuralLoad_1_n &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads() {
    if (Step::BaseObject::inited()) {
        return m_subsequentAppliedLoads;
    }
    else {
        m_subsequentAppliedLoads.setUnset(true);
        return m_subsequentAppliedLoads;
    }
}

const List_IfcStructuralLoad_1_n &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads() const {
    IfcStructuralLinearActionVarying * deConstObject = const_cast< IfcStructuralLinearActionVarying * > (this);
    return deConstObject->getSubsequentAppliedLoads();
}

void IfcStructuralLinearActionVarying::setSubsequentAppliedLoads(const List_IfcStructuralLoad_1_n &value) {
    m_subsequentAppliedLoads = value;
}

bool IfcStructuralLinearActionVarying::init() {
    bool status = IfcStructuralLinearAction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_varyingAppliedLoadLocation = NULL;
    }
    else {
        m_varyingAppliedLoadLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
                attr2 = static_cast< IfcStructuralLoad * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_subsequentAppliedLoads.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcStructuralLinearActionVarying::copy(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcStructuralLoad >, 1 >::const_iterator it_m_subsequentAppliedLoads;
    IfcStructuralLinearAction::copy(obj, copyop);
    setVaryingAppliedLoadLocation((IfcShapeAspect*)copyop(obj.m_varyingAppliedLoadLocation.get()));
    for (it_m_subsequentAppliedLoads = obj.m_subsequentAppliedLoads.begin(); it_m_subsequentAppliedLoads != obj.m_subsequentAppliedLoads.end(); ++it_m_subsequentAppliedLoads) {
        Step::RefPtr< IfcStructuralLoad > copyTarget = (IfcStructuralLoad *) (copyop((*it_m_subsequentAppliedLoads).get()));
        m_subsequentAppliedLoads.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLinearActionVarying::s_type("IfcStructuralLinearActionVarying");
