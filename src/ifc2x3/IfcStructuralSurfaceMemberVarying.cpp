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

#include "ifc2x3/IfcStructuralSurfaceMemberVarying.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/IfcStructuralSurfaceMember.h"
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

IfcStructuralSurfaceMemberVarying::IfcStructuralSurfaceMemberVarying(Step::Id id, Step::SPFData *args) : IfcStructuralSurfaceMember(id, args) {
    m_varyingThicknessLocation = NULL;
}

IfcStructuralSurfaceMemberVarying::~IfcStructuralSurfaceMemberVarying() {
}

bool IfcStructuralSurfaceMemberVarying::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralSurfaceMemberVarying(this);
}

const std::string &IfcStructuralSurfaceMemberVarying::type() const {
    return IfcStructuralSurfaceMemberVarying::s_type.getName();
}

const Step::ClassType &IfcStructuralSurfaceMemberVarying::getClassType() {
    return IfcStructuralSurfaceMemberVarying::s_type;
}

const Step::ClassType &IfcStructuralSurfaceMemberVarying::getType() const {
    return IfcStructuralSurfaceMemberVarying::s_type;
}

bool IfcStructuralSurfaceMemberVarying::isOfType(const Step::ClassType &t) const {
    return IfcStructuralSurfaceMemberVarying::s_type == t ? true : IfcStructuralSurfaceMember::isOfType(t);
}

List_IfcPositiveLengthMeasure_2_n &IfcStructuralSurfaceMemberVarying::getSubsequentThickness() {
    if (Step::BaseObject::inited()) {
        return m_subsequentThickness;
    }
    else {
        m_subsequentThickness.setUnset(true);
        return m_subsequentThickness;
    }
}

const List_IfcPositiveLengthMeasure_2_n &IfcStructuralSurfaceMemberVarying::getSubsequentThickness() const {
    IfcStructuralSurfaceMemberVarying * deConstObject = const_cast< IfcStructuralSurfaceMemberVarying * > (this);
    return deConstObject->getSubsequentThickness();
}

void IfcStructuralSurfaceMemberVarying::setSubsequentThickness(const List_IfcPositiveLengthMeasure_2_n &value) {
    m_subsequentThickness = value;
}

IfcShapeAspect *IfcStructuralSurfaceMemberVarying::getVaryingThicknessLocation() {
    if (Step::BaseObject::inited()) {
        return m_varyingThicknessLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcStructuralSurfaceMemberVarying::getVaryingThicknessLocation() const {
    IfcStructuralSurfaceMemberVarying * deConstObject = const_cast< IfcStructuralSurfaceMemberVarying * > (this);
    return deConstObject->getVaryingThicknessLocation();
}

void IfcStructuralSurfaceMemberVarying::setVaryingThicknessLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_varyingThicknessLocation = value;
}

bool IfcStructuralSurfaceMemberVarying::init() {
    bool status = IfcStructuralSurfaceMember::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_subsequentThickness.setUnset(true);
    }
    else {
        m_subsequentThickness.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcPositiveLengthMeasure attr2;
                attr2 = Step::spfToReal(str1);
                m_subsequentThickness.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_varyingThicknessLocation = NULL;
    }
    else {
        m_varyingThicknessLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcStructuralSurfaceMemberVarying::copy(const IfcStructuralSurfaceMemberVarying &obj, const CopyOp &copyop) {
    Step::List< IfcPositiveLengthMeasure, 2 >::const_iterator it_m_subsequentThickness;
    IfcStructuralSurfaceMember::copy(obj, copyop);
    for (it_m_subsequentThickness = obj.m_subsequentThickness.begin(); it_m_subsequentThickness != obj.m_subsequentThickness.end(); ++it_m_subsequentThickness) {
        IfcPositiveLengthMeasure copyTarget = (*it_m_subsequentThickness);
        m_subsequentThickness.push_back(copyTarget);
    }
    setVaryingThicknessLocation((IfcShapeAspect*)copyop(obj.m_varyingThicknessLocation.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralSurfaceMemberVarying::s_type("IfcStructuralSurfaceMemberVarying");
