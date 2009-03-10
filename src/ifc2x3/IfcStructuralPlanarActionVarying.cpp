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
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralPlanarActionVarying::IfcStructuralPlanarActionVarying(Step::Id id, Step::SPFData *args) : IfcStructuralPlanarAction(id, args) {
    m_varyingAppliedLoadLocation = NULL;
}

IfcStructuralPlanarActionVarying::~IfcStructuralPlanarActionVarying() {
}

bool IfcStructuralPlanarActionVarying::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralPlanarActionVarying(this);
}

const std::string &IfcStructuralPlanarActionVarying::type() const {
    return IfcStructuralPlanarActionVarying::s_type.getName();
}

const Step::ClassType &IfcStructuralPlanarActionVarying::getClassType() {
    return IfcStructuralPlanarActionVarying::s_type;
}

const Step::ClassType &IfcStructuralPlanarActionVarying::getType() const {
    return IfcStructuralPlanarActionVarying::s_type;
}

bool IfcStructuralPlanarActionVarying::isOfType(const Step::ClassType &t) const {
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

const IfcShapeAspect *IfcStructuralPlanarActionVarying::getVaryingAppliedLoadLocation() const {
    IfcStructuralPlanarActionVarying * deConstObject = const_cast< IfcStructuralPlanarActionVarying * > (this);
    return deConstObject->getVaryingAppliedLoadLocation();
}

void IfcStructuralPlanarActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_varyingAppliedLoadLocation = value;
}

List_IfcStructuralLoad_2_n &IfcStructuralPlanarActionVarying::getSubsequentAppliedLoads() {
    if (Step::BaseObject::inited()) {
        return m_subsequentAppliedLoads;
    }
    else {
        m_subsequentAppliedLoads.setUnset(true);
        return m_subsequentAppliedLoads;
    }
}

const List_IfcStructuralLoad_2_n &IfcStructuralPlanarActionVarying::getSubsequentAppliedLoads() const {
    IfcStructuralPlanarActionVarying * deConstObject = const_cast< IfcStructuralPlanarActionVarying * > (this);
    return deConstObject->getSubsequentAppliedLoads();
}

void IfcStructuralPlanarActionVarying::setSubsequentAppliedLoads(const List_IfcStructuralLoad_2_n &value) {
    m_subsequentAppliedLoads = value;
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

void IfcStructuralPlanarActionVarying::copy(const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcStructuralLoad >, 2 >::const_iterator it_m_subsequentAppliedLoads;
    IfcStructuralPlanarAction::copy(obj, copyop);
    setVaryingAppliedLoadLocation((IfcShapeAspect*)copyop(obj.m_varyingAppliedLoadLocation.get()));
    for (it_m_subsequentAppliedLoads = obj.m_subsequentAppliedLoads.begin(); it_m_subsequentAppliedLoads != obj.m_subsequentAppliedLoads.end(); ++it_m_subsequentAppliedLoads) {
        Step::RefPtr< IfcStructuralLoad > copyTarget = (IfcStructuralLoad *) (copyop((*it_m_subsequentAppliedLoads).get()));
        m_subsequentAppliedLoads.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPlanarActionVarying::s_type("IfcStructuralPlanarActionVarying");
